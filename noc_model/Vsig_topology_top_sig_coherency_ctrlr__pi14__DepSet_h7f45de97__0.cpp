// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_coherency_ctrlr__pi14.h"

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__0(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__reqcmd_fifo_0.__PVT__rstb 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__respcmd_fifo_0.__PVT__rstb 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__drespcmd_fifo_0.__PVT__rstb 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__memrespcmd_fifo_0.__PVT__rstb 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_0.__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_rsp.__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_req.__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_cc_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__1(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__reqcmd_fifo_0.__PVT__fifo_clk 
        = vlSelfRef.__PVT__cc_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__respcmd_fifo_0.__PVT__fifo_clk 
        = vlSelfRef.__PVT__cc_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__drespcmd_fifo_0.__PVT__fifo_clk 
        = vlSelfRef.__PVT__cc_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__memrespcmd_fifo_0.__PVT__fifo_clk 
        = vlSelfRef.__PVT__cc_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_0.__PVT__cc_clk 
        = vlSelfRef.__PVT__cc_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_rsp.__PVT__cc_clk 
        = vlSelfRef.__PVT__cc_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_req.__PVT__cc_clk 
        = vlSelfRef.__PVT__cc_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__2(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    CData/*31:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    // Body
    VL_CONST_W_4X(128,__Vtemp_1,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_2, vlSelfRef.__PVT__status_field_req, 
                (0xfffU & VL_SEL_IIII(32, ((IData)(0x6cU) 
                                           * VL_EXTEND_II(32,5, 
                                                          (0x1fU 
                                                           & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_outq_rcvdata), 0U, 5)))), 0U, 12)), 108);
    VL_CONST_W_1X(108,__Vtemp_3,0x00000000);
    __Vtemp_4 = (0xd7fU >= (0xfffU & VL_SEL_IIII(32, 
                                                 ((IData)(0x6cU) 
                                                  * 
                                                  VL_EXTEND_II(32,5, 
                                                               (0x1fU 
                                                                & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_outq_rcvdata), 0U, 5)))), 0U, 12)));
    VL_COND_WIWW(108, __Vtemp_5, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    VL_AND_W(4, vlSelfRef.__PVT__rddata_statreg_req_rcvdatproc, __Vtemp_1, __Vtemp_5);
    vlSelfRef.__PVT__compq_buff_to_rcvdatproc_1st = 
        (0x1fU & ((0x9fU >= (0xffU & VL_SEL_IIII(32, 
                                                 ((IData)(5U) 
                                                  * 
                                                  VL_EXTEND_II(32,5, 
                                                               (0x1fU 
                                                                & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_outq_rcvdata), 0U, 5)))), 0U, 8)))
                   ? VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st, 
                                 (0xffU & VL_SEL_IIII(32, 
                                                      ((IData)(5U) 
                                                       * 
                                                       VL_EXTEND_II(32,5, 
                                                                    (0x1fU 
                                                                     & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_outq_rcvdata), 0U, 5)))), 0U, 8)), 5)
                   : 0U));
    vlSelfRef.__PVT__compq_buff_to_rcvdatproc_2nd = 
        (0x1fU & ((0x9fU >= (0xffU & VL_SEL_IIII(32, 
                                                 ((IData)(5U) 
                                                  * 
                                                  VL_EXTEND_II(32,5, 
                                                               (0x1fU 
                                                                & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_outq_rcvdata), 0U, 5)))), 0U, 8)))
                   ? VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd, 
                                 (0xffU & VL_SEL_IIII(32, 
                                                      ((IData)(5U) 
                                                       * 
                                                       VL_EXTEND_II(32,5, 
                                                                    (0x1fU 
                                                                     & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_outq_rcvdata), 0U, 5)))), 0U, 8)), 5)
                   : 0U));
    vlSelfRef.__PVT__vld_compq_buff_to_rcvdatproc_2nd 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2, 
                               (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_outq_rcvdata), 0U, 5))));
    vlSelfRef.__PVT__vld_compbuf_2nd_for_snpdata = 
        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata, 
                             (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_outq_rcvdata), 0U, 5))));
    VL_ASSIGN_W(109,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__drespcmd_fifo_0.__PVT__fifo_wrdata, vlSelfRef.__PVT__wrdata_drespcmdq);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__drespcmd_fifo_0.__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_drespcmdq;
    vlSelfRef.__PVT__invalid_req_rcvdatproc = (1U & 
                                               VL_BITSEL_IWII(108, vlSelfRef.__PVT__rddata_statreg_req_rcvdatproc, 0x4dU));
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__0(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__0\n"); );
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
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__colln_detected_reqcmdq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 0U)) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__rddata_reqcmdq_addr, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 6U, 46)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__colln_detected_reqcmdq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 1U)) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__rddata_reqcmdq_addr, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x3aU, 46)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__colln_detected_reqcmdq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 2U)) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__rddata_reqcmdq_addr, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x6eU, 46)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__colln_detected_reqcmdq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 3U)) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__rddata_reqcmdq_addr, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0xa2U, 46)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__colln_detected_reqcmdq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 4U)) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__rddata_reqcmdq_addr, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0xd6U, 46)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__colln_detected_reqcmdq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 5U)) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__rddata_reqcmdq_addr, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x10aU, 46)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__colln_detected_reqcmdq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 6U)) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__rddata_reqcmdq_addr, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x13eU, 46)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__colln_detected_reqcmdq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 7U)) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__rddata_reqcmdq_addr, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x172U, 46)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__highest_seq_reqcmdq_is3_or_more, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_reqcmdq), 0U) 
                     & (2U <= (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0U, 3)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__highest_seq_reqcmdq_is3_or_more, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_reqcmdq), 1U) 
                     & (2U <= (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 3U, 3)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__highest_seq_reqcmdq_is3_or_more, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_reqcmdq), 2U) 
                     & (2U <= (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 6U, 3)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__highest_seq_reqcmdq_is3_or_more, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_reqcmdq), 3U) 
                     & (2U <= (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 9U, 3)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__highest_seq_reqcmdq_is3_or_more, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_reqcmdq), 4U) 
                     & (2U <= (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0xcU, 3)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__highest_seq_reqcmdq_is3_or_more, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_reqcmdq), 5U) 
                     & (2U <= (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0xfU, 3)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__highest_seq_reqcmdq_is3_or_more, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_reqcmdq), 6U) 
                     & (2U <= (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0x12U, 3)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__highest_seq_reqcmdq_is3_or_more, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_reqcmdq), 7U) 
                     & (2U <= (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0x15U, 3)))));
    vlSelfRef.__PVT__blockreqq_dueto_highestseqnum_incollnq 
        = (0U != (IData)(vlSelfRef.__PVT__highest_seq_reqcmdq_is3_or_more));
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__2(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(74,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__respcmd_fifo_0.__PVT__fifo_wrdata, vlSelfRef.__PVT__wrdata_respcmdq);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__respcmd_fifo_0.__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_respcmdq;
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__6(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__6\n"); );
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
        if (VL_LIKELY((VL_ONEHOT0_I(VL_CONCAT_III(8,4,4, 
                                                  VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 7U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))), 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 6U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))), 
                                                                VL_CONCAT_III(2,1,1, 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 5U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))), 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 4U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))), 
                                                  VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 3U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))), 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 2U) 
                                                                                & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x4fU)) 
                                                                                & ((0xfffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x38U, 12)) 
                                                                                == 
                                                                                (0xfffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                                               & ((0x7ffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x44U, 11)) 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))), 
                                                                VL_CONCAT_III(2,1,1, 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 1U) 
                                                                                & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x33U)) 
                                                                                & ((0xfffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x1cU, 12)) 
                                                                                == 
                                                                                (0xfffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                                               & ((0x7ffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x28U, 11)) 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))), 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 0U) 
                                                                                & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x17U)) 
                                                                                & ((0xfffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0U, 12)) 
                                                                                == 
                                                                                (0xfffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                                               & ((0x7ffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xcU, 11)) 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))))))))) {
            VL_ASSIGNSEL_WI(224,4,0x18U, vlSelfRef.__PVT__colln_cmd_nxt, 
                            ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 0U) 
                                & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x17U)) 
                               & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0U, 12)) 
                                  == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                              & ((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xcU, 11)) 
                                 == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                              ? 8U : ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 1U) 
                                         & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x33U)) 
                                        & ((0xfffU 
                                            & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x1cU, 12)) 
                                           == (0xfffU 
                                               & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                       & ((0x7ffU & 
                                           VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x28U, 11)) 
                                          == (0x7ffU 
                                              & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                       ? 9U : ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 2U) 
                                                  & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x4fU)) 
                                                 & ((0xfffU 
                                                     & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x38U, 12)) 
                                                    == 
                                                    (0xfffU 
                                                     & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                & ((0x7ffU 
                                                    & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x44U, 11)) 
                                                   == 
                                                   (0x7ffU 
                                                    & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                ? 0xaU
                                                : (
                                                   (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 3U) 
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
                                                    : 
                                                   ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 4U) 
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
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
            VL_WRITEF_NX("[%0t] %%Error: sig_coherency_ctrlr.sv:7603: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_coherency_ctrlr_0.genblk27[0].atomic_cmd_in_collnq_link: 'unique if' statement violated\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_coherency_ctrlr.sv", 7603, "");
        }
    } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_colln_rdy), 0U))) {
        VL_ASSIGNBIT_WI(0x1bU, vlSelfRef.__PVT__colln_cmd_nxt, 0U);
    }
    VL_ASSIGNSEL_WI(224,4,0x34U, vlSelfRef.__PVT__colln_cmd_nxt, 
                    VL_CONCAT_III(4,1,3, (1U & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x37U)), 
                                  (7U & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x34U, 3))));
    if ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 1U) 
         & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3))) {
        if (VL_LIKELY((VL_ONEHOT0_I(VL_CONCAT_III(8,4,4, 
                                                  VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 7U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))), 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 6U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))), 
                                                                VL_CONCAT_III(2,1,1, 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 5U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))), 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 4U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))), 
                                                  VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 3U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))), 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 2U) 
                                                                                & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x4fU)) 
                                                                                & ((0xfffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x38U, 12)) 
                                                                                == 
                                                                                (0xfffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                                               & ((0x7ffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x44U, 11)) 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))), 
                                                                VL_CONCAT_III(2,1,1, 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 1U) 
                                                                                & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x33U)) 
                                                                                & ((0xfffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x1cU, 12)) 
                                                                                == 
                                                                                (0xfffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                                               & ((0x7ffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x28U, 11)) 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))), 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 0U) 
                                                                                & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x17U)) 
                                                                                & ((0xfffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0U, 12)) 
                                                                                == 
                                                                                (0xfffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                                               & ((0x7ffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xcU, 11)) 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))))))))) {
            VL_ASSIGNSEL_WI(224,4,0x34U, vlSelfRef.__PVT__colln_cmd_nxt, 
                            ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 0U) 
                                & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x17U)) 
                               & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0U, 12)) 
                                  == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                              & ((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xcU, 11)) 
                                 == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                              ? 8U : ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 1U) 
                                         & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x33U)) 
                                        & ((0xfffU 
                                            & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x1cU, 12)) 
                                           == (0xfffU 
                                               & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                       & ((0x7ffU & 
                                           VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x28U, 11)) 
                                          == (0x7ffU 
                                              & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                       ? 9U : ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 2U) 
                                                  & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x4fU)) 
                                                 & ((0xfffU 
                                                     & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x38U, 12)) 
                                                    == 
                                                    (0xfffU 
                                                     & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                & ((0x7ffU 
                                                    & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x44U, 11)) 
                                                   == 
                                                   (0x7ffU 
                                                    & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                ? 0xaU
                                                : (
                                                   (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 3U) 
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
                                                    : 
                                                   ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 4U) 
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
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
            VL_WRITEF_NX("[%0t] %%Error: sig_coherency_ctrlr.sv:7603: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_coherency_ctrlr_0.genblk27[1].atomic_cmd_in_collnq_link: 'unique if' statement violated\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_coherency_ctrlr.sv", 7603, "");
        }
    } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_colln_rdy), 1U))) {
        VL_ASSIGNBIT_WI(0x37U, vlSelfRef.__PVT__colln_cmd_nxt, 0U);
    }
    VL_ASSIGNSEL_WI(224,4,0x50U, vlSelfRef.__PVT__colln_cmd_nxt, 
                    VL_CONCAT_III(4,1,3, (1U & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x53U)), 
                                  (7U & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x50U, 3))));
    if ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 2U) 
         & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3))) {
        if (VL_LIKELY((VL_ONEHOT0_I(VL_CONCAT_III(8,4,4, 
                                                  VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 7U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))), 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 6U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))), 
                                                                VL_CONCAT_III(2,1,1, 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 5U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))), 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 4U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))), 
                                                  VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 3U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))), 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 2U) 
                                                                                & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x4fU)) 
                                                                                & ((0xfffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x38U, 12)) 
                                                                                == 
                                                                                (0xfffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                                               & ((0x7ffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x44U, 11)) 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))), 
                                                                VL_CONCAT_III(2,1,1, 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 1U) 
                                                                                & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x33U)) 
                                                                                & ((0xfffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x1cU, 12)) 
                                                                                == 
                                                                                (0xfffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                                               & ((0x7ffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x28U, 11)) 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))), 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 0U) 
                                                                                & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x17U)) 
                                                                                & ((0xfffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0U, 12)) 
                                                                                == 
                                                                                (0xfffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                                               & ((0x7ffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xcU, 11)) 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))))))))) {
            VL_ASSIGNSEL_WI(224,4,0x50U, vlSelfRef.__PVT__colln_cmd_nxt, 
                            ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 0U) 
                                & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x17U)) 
                               & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0U, 12)) 
                                  == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                              & ((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xcU, 11)) 
                                 == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                              ? 8U : ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 1U) 
                                         & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x33U)) 
                                        & ((0xfffU 
                                            & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x1cU, 12)) 
                                           == (0xfffU 
                                               & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                       & ((0x7ffU & 
                                           VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x28U, 11)) 
                                          == (0x7ffU 
                                              & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                       ? 9U : ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 2U) 
                                                  & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x4fU)) 
                                                 & ((0xfffU 
                                                     & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x38U, 12)) 
                                                    == 
                                                    (0xfffU 
                                                     & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                & ((0x7ffU 
                                                    & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x44U, 11)) 
                                                   == 
                                                   (0x7ffU 
                                                    & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                ? 0xaU
                                                : (
                                                   (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 3U) 
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
                                                    : 
                                                   ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 4U) 
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
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
            VL_WRITEF_NX("[%0t] %%Error: sig_coherency_ctrlr.sv:7603: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_coherency_ctrlr_0.genblk27[2].atomic_cmd_in_collnq_link: 'unique if' statement violated\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_coherency_ctrlr.sv", 7603, "");
        }
    } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_colln_rdy), 2U))) {
        VL_ASSIGNBIT_WI(0x53U, vlSelfRef.__PVT__colln_cmd_nxt, 0U);
    }
    VL_ASSIGNSEL_WI(224,4,0x6cU, vlSelfRef.__PVT__colln_cmd_nxt, 
                    VL_CONCAT_III(4,1,3, (1U & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x6fU)), 
                                  (7U & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x6cU, 3))));
    if ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 3U) 
         & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3))) {
        if (VL_LIKELY((VL_ONEHOT0_I(VL_CONCAT_III(8,4,4, 
                                                  VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 7U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))), 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 6U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))), 
                                                                VL_CONCAT_III(2,1,1, 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 5U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))), 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 4U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))), 
                                                  VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 3U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))), 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 2U) 
                                                                                & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x4fU)) 
                                                                                & ((0xfffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x38U, 12)) 
                                                                                == 
                                                                                (0xfffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                                               & ((0x7ffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x44U, 11)) 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))), 
                                                                VL_CONCAT_III(2,1,1, 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 1U) 
                                                                                & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x33U)) 
                                                                                & ((0xfffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x1cU, 12)) 
                                                                                == 
                                                                                (0xfffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                                               & ((0x7ffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x28U, 11)) 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))), 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 0U) 
                                                                                & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x17U)) 
                                                                                & ((0xfffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0U, 12)) 
                                                                                == 
                                                                                (0xfffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                                               & ((0x7ffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xcU, 11)) 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))))))))) {
            VL_ASSIGNSEL_WI(224,4,0x6cU, vlSelfRef.__PVT__colln_cmd_nxt, 
                            ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 0U) 
                                & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x17U)) 
                               & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0U, 12)) 
                                  == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                              & ((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xcU, 11)) 
                                 == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                              ? 8U : ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 1U) 
                                         & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x33U)) 
                                        & ((0xfffU 
                                            & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x1cU, 12)) 
                                           == (0xfffU 
                                               & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                       & ((0x7ffU & 
                                           VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x28U, 11)) 
                                          == (0x7ffU 
                                              & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                       ? 9U : ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 2U) 
                                                  & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x4fU)) 
                                                 & ((0xfffU 
                                                     & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x38U, 12)) 
                                                    == 
                                                    (0xfffU 
                                                     & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                & ((0x7ffU 
                                                    & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x44U, 11)) 
                                                   == 
                                                   (0x7ffU 
                                                    & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                ? 0xaU
                                                : (
                                                   (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 3U) 
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
                                                    : 
                                                   ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 4U) 
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
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
            VL_WRITEF_NX("[%0t] %%Error: sig_coherency_ctrlr.sv:7603: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_coherency_ctrlr_0.genblk27[3].atomic_cmd_in_collnq_link: 'unique if' statement violated\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_coherency_ctrlr.sv", 7603, "");
        }
    } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_colln_rdy), 3U))) {
        VL_ASSIGNBIT_WI(0x6fU, vlSelfRef.__PVT__colln_cmd_nxt, 0U);
    }
    VL_ASSIGNSEL_WI(224,4,0x88U, vlSelfRef.__PVT__colln_cmd_nxt, 
                    VL_CONCAT_III(4,1,3, (1U & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x8bU)), 
                                  (7U & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x88U, 3))));
    if ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 4U) 
         & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3))) {
        if (VL_LIKELY((VL_ONEHOT0_I(VL_CONCAT_III(8,4,4, 
                                                  VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 7U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))), 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 6U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))), 
                                                                VL_CONCAT_III(2,1,1, 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 5U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))), 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 4U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))), 
                                                  VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 3U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))), 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 2U) 
                                                                                & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x4fU)) 
                                                                                & ((0xfffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x38U, 12)) 
                                                                                == 
                                                                                (0xfffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                                               & ((0x7ffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x44U, 11)) 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))), 
                                                                VL_CONCAT_III(2,1,1, 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 1U) 
                                                                                & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x33U)) 
                                                                                & ((0xfffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x1cU, 12)) 
                                                                                == 
                                                                                (0xfffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                                               & ((0x7ffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x28U, 11)) 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))), 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 0U) 
                                                                                & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x17U)) 
                                                                                & ((0xfffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0U, 12)) 
                                                                                == 
                                                                                (0xfffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                                               & ((0x7ffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xcU, 11)) 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))))))))) {
            VL_ASSIGNSEL_WI(224,4,0x88U, vlSelfRef.__PVT__colln_cmd_nxt, 
                            ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 0U) 
                                & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x17U)) 
                               & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0U, 12)) 
                                  == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                              & ((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xcU, 11)) 
                                 == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                              ? 8U : ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 1U) 
                                         & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x33U)) 
                                        & ((0xfffU 
                                            & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x1cU, 12)) 
                                           == (0xfffU 
                                               & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                       & ((0x7ffU & 
                                           VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x28U, 11)) 
                                          == (0x7ffU 
                                              & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                       ? 9U : ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 2U) 
                                                  & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x4fU)) 
                                                 & ((0xfffU 
                                                     & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x38U, 12)) 
                                                    == 
                                                    (0xfffU 
                                                     & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                & ((0x7ffU 
                                                    & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x44U, 11)) 
                                                   == 
                                                   (0x7ffU 
                                                    & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                ? 0xaU
                                                : (
                                                   (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 3U) 
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
                                                    : 
                                                   ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 4U) 
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
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
            VL_WRITEF_NX("[%0t] %%Error: sig_coherency_ctrlr.sv:7603: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_coherency_ctrlr_0.genblk27[4].atomic_cmd_in_collnq_link: 'unique if' statement violated\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_coherency_ctrlr.sv", 7603, "");
        }
    } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_colln_rdy), 4U))) {
        VL_ASSIGNBIT_WI(0x8bU, vlSelfRef.__PVT__colln_cmd_nxt, 0U);
    }
    VL_ASSIGNSEL_WI(224,4,0xa4U, vlSelfRef.__PVT__colln_cmd_nxt, 
                    VL_CONCAT_III(4,1,3, (1U & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xa7U)), 
                                  (7U & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xa4U, 3))));
    if ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 5U) 
         & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3))) {
        if (VL_LIKELY((VL_ONEHOT0_I(VL_CONCAT_III(8,4,4, 
                                                  VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 7U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))), 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 6U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))), 
                                                                VL_CONCAT_III(2,1,1, 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 5U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))), 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 4U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))), 
                                                  VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 3U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))), 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 2U) 
                                                                                & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x4fU)) 
                                                                                & ((0xfffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x38U, 12)) 
                                                                                == 
                                                                                (0xfffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                                               & ((0x7ffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x44U, 11)) 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))), 
                                                                VL_CONCAT_III(2,1,1, 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 1U) 
                                                                                & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x33U)) 
                                                                                & ((0xfffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x1cU, 12)) 
                                                                                == 
                                                                                (0xfffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                                               & ((0x7ffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x28U, 11)) 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))), 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 0U) 
                                                                                & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x17U)) 
                                                                                & ((0xfffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0U, 12)) 
                                                                                == 
                                                                                (0xfffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                                               & ((0x7ffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xcU, 11)) 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))))))))) {
            VL_ASSIGNSEL_WI(224,4,0xa4U, vlSelfRef.__PVT__colln_cmd_nxt, 
                            ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 0U) 
                                & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x17U)) 
                               & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0U, 12)) 
                                  == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                              & ((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xcU, 11)) 
                                 == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                              ? 8U : ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 1U) 
                                         & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x33U)) 
                                        & ((0xfffU 
                                            & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x1cU, 12)) 
                                           == (0xfffU 
                                               & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                       & ((0x7ffU & 
                                           VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x28U, 11)) 
                                          == (0x7ffU 
                                              & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                       ? 9U : ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 2U) 
                                                  & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x4fU)) 
                                                 & ((0xfffU 
                                                     & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x38U, 12)) 
                                                    == 
                                                    (0xfffU 
                                                     & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                & ((0x7ffU 
                                                    & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x44U, 11)) 
                                                   == 
                                                   (0x7ffU 
                                                    & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                ? 0xaU
                                                : (
                                                   (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 3U) 
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
                                                    : 
                                                   ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 4U) 
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
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
            VL_WRITEF_NX("[%0t] %%Error: sig_coherency_ctrlr.sv:7603: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_coherency_ctrlr_0.genblk27[5].atomic_cmd_in_collnq_link: 'unique if' statement violated\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_coherency_ctrlr.sv", 7603, "");
        }
    } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_colln_rdy), 5U))) {
        VL_ASSIGNBIT_WI(0xa7U, vlSelfRef.__PVT__colln_cmd_nxt, 0U);
    }
    VL_ASSIGNSEL_WI(224,4,0xc0U, vlSelfRef.__PVT__colln_cmd_nxt, 
                    VL_CONCAT_III(4,1,3, (1U & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xc3U)), 
                                  (7U & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xc0U, 3))));
    if ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 6U) 
         & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3))) {
        if (VL_LIKELY((VL_ONEHOT0_I(VL_CONCAT_III(8,4,4, 
                                                  VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 7U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))), 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 6U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))), 
                                                                VL_CONCAT_III(2,1,1, 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 5U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))), 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 4U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))), 
                                                  VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 3U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))), 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 2U) 
                                                                                & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x4fU)) 
                                                                                & ((0xfffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x38U, 12)) 
                                                                                == 
                                                                                (0xfffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                                               & ((0x7ffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x44U, 11)) 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))), 
                                                                VL_CONCAT_III(2,1,1, 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 1U) 
                                                                                & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x33U)) 
                                                                                & ((0xfffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x1cU, 12)) 
                                                                                == 
                                                                                (0xfffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                                               & ((0x7ffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x28U, 11)) 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))), 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 0U) 
                                                                                & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x17U)) 
                                                                                & ((0xfffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0U, 12)) 
                                                                                == 
                                                                                (0xfffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                                               & ((0x7ffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xcU, 11)) 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))))))))) {
            VL_ASSIGNSEL_WI(224,4,0xc0U, vlSelfRef.__PVT__colln_cmd_nxt, 
                            ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 0U) 
                                & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x17U)) 
                               & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0U, 12)) 
                                  == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                              & ((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xcU, 11)) 
                                 == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                              ? 8U : ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 1U) 
                                         & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x33U)) 
                                        & ((0xfffU 
                                            & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x1cU, 12)) 
                                           == (0xfffU 
                                               & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                       & ((0x7ffU & 
                                           VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x28U, 11)) 
                                          == (0x7ffU 
                                              & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                       ? 9U : ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 2U) 
                                                  & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x4fU)) 
                                                 & ((0xfffU 
                                                     & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x38U, 12)) 
                                                    == 
                                                    (0xfffU 
                                                     & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                & ((0x7ffU 
                                                    & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x44U, 11)) 
                                                   == 
                                                   (0x7ffU 
                                                    & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                ? 0xaU
                                                : (
                                                   (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 3U) 
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
                                                    : 
                                                   ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 4U) 
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
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
            VL_WRITEF_NX("[%0t] %%Error: sig_coherency_ctrlr.sv:7603: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_coherency_ctrlr_0.genblk27[6].atomic_cmd_in_collnq_link: 'unique if' statement violated\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_coherency_ctrlr.sv", 7603, "");
        }
    } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_colln_rdy), 6U))) {
        VL_ASSIGNBIT_WI(0xc3U, vlSelfRef.__PVT__colln_cmd_nxt, 0U);
    }
    VL_ASSIGNSEL_WI(224,4,0xdcU, vlSelfRef.__PVT__colln_cmd_nxt, 
                    VL_CONCAT_III(4,1,3, (1U & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xdfU)), 
                                  (7U & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xdcU, 3))));
    if ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 7U) 
         & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3))) {
        if (VL_LIKELY((VL_ONEHOT0_I(VL_CONCAT_III(8,4,4, 
                                                  VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 7U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))), 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 6U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))), 
                                                                VL_CONCAT_III(2,1,1, 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 5U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))), 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 4U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))), 
                                                  VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 3U) 
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
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))), 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 2U) 
                                                                                & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x4fU)) 
                                                                                & ((0xfffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x38U, 12)) 
                                                                                == 
                                                                                (0xfffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                                               & ((0x7ffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x44U, 11)) 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))), 
                                                                VL_CONCAT_III(2,1,1, 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 1U) 
                                                                                & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x33U)) 
                                                                                & ((0xfffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x1cU, 12)) 
                                                                                == 
                                                                                (0xfffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                                               & ((0x7ffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x28U, 11)) 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))), 
                                                                              (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 0U) 
                                                                                & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x17U)) 
                                                                                & ((0xfffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0U, 12)) 
                                                                                == 
                                                                                (0xfffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                                               & ((0x7ffU 
                                                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xcU, 11)) 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))))))))) {
            VL_ASSIGNSEL_WI(224,4,0xdcU, vlSelfRef.__PVT__colln_cmd_nxt, 
                            ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 0U) 
                                & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x17U)) 
                               & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0U, 12)) 
                                  == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                              & ((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xcU, 11)) 
                                 == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                              ? 8U : ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 1U) 
                                         & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x33U)) 
                                        & ((0xfffU 
                                            & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x1cU, 12)) 
                                           == (0xfffU 
                                               & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                       & ((0x7ffU & 
                                           VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x28U, 11)) 
                                          == (0x7ffU 
                                              & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                       ? 9U : ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 2U) 
                                                  & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x4fU)) 
                                                 & ((0xfffU 
                                                     & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x38U, 12)) 
                                                    == 
                                                    (0xfffU 
                                                     & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                & ((0x7ffU 
                                                    & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x44U, 11)) 
                                                   == 
                                                   (0x7ffU 
                                                    & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                ? 0xaU
                                                : (
                                                   (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 3U) 
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
                                                    : 
                                                   ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 4U) 
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
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
            VL_WRITEF_NX("[%0t] %%Error: sig_coherency_ctrlr.sv:7603: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_coherency_ctrlr_0.genblk27[7].atomic_cmd_in_collnq_link: 'unique if' statement violated\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_coherency_ctrlr.sv", 7603, "");
        }
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
    vlSelfRef.__PVT__cm_addr_match_pm_ph1 = (((IData)(vlSelfRef.__PVT__cm_activated_pm) 
                                              & (vlSelfRef.__PVT__cm_flit_addr_sliced_pm_ph1 
                                                 >= vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm)) 
                                             & (VL_EXTEND_II(29,28, vlSelfRef.__PVT__cm_flit_addr_sliced_pm_ph1) 
                                                < vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm));
    vlSelfRef.__PVT__noncm_addr_match_pm_ph1 = (((IData)(vlSelfRef.__PVT__noncm_activated_pm) 
                                                 & (vlSelfRef.__PVT__noncm_flit_addr_sliced_pm_ph1 
                                                    >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm)) 
                                                & (VL_EXTEND_II(29,28, vlSelfRef.__PVT__noncm_flit_addr_sliced_pm_ph1) 
                                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm));
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

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__0(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__full_drespcmdq = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__drespcmd_fifo_0.__PVT__fifo_full;
    vlSelfRef.__PVT__empty_drespcmdq = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__drespcmd_fifo_0.__PVT__fifo_empty;
    VL_ASSIGN_W(109,vlSelfRef.__PVT__rddata_drespcmdq, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__drespcmd_fifo_0.__PVT__fifo_rddata);
    vlSelfRef.__PVT__req_drespcmdq = (1U & (~ (IData)(vlSelfRef.__PVT__empty_drespcmdq)));
    VL_ASSIGN_W(109,vlSelfRef.__PVT__rddata_drespcmdq_s, vlSelfRef.__PVT__rddata_drespcmdq);
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__1(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__full_memrespcmdq = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__memrespcmd_fifo_0.__PVT__fifo_full;
    vlSelfRef.__PVT__empty_memrespcmdq = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__memrespcmd_fifo_0.__PVT__fifo_empty;
    VL_ASSIGN_W(109,vlSelfRef.__PVT__rddata_memrespcmdq, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__memrespcmd_fifo_0.__PVT__fifo_rddata);
    vlSelfRef.__PVT__req_memrespcmdq = (1U & (~ (IData)(vlSelfRef.__PVT__empty_memrespcmdq)));
    VL_ASSIGN_W(109,vlSelfRef.__PVT__rddata_memrespcmdq_prepped, vlSelfRef.__PVT__rddata_memrespcmdq);
    VL_ASSIGN_W(109,vlSelfRef.__PVT__rddata_memrespcmdq_s, vlSelfRef.__PVT__rddata_memrespcmdq_prepped);
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__2(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__PVT__full_respcmdq = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__respcmd_fifo_0.__PVT__fifo_full;
    vlSelfRef.__PVT__empty_respcmdq = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__respcmd_fifo_0.__PVT__fifo_empty;
    VL_ASSIGN_W(74,vlSelfRef.__PVT__rddata_respcmdq, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__respcmd_fifo_0.__PVT__fifo_rddata);
    vlSelfRef.__PVT__req_respcmdq = (1U & (~ (IData)(vlSelfRef.__PVT__empty_respcmdq)));
    VL_CONST_W_3X(96,__Vtemp_1,0x000001ff,0xffffffff,0xffffffff);
    VL_SEL_WWII(73, 74, __Vtemp_2, vlSelfRef.__PVT__rddata_respcmdq, 0U, 73);
    VL_AND_W(3, vlSelfRef.__PVT__rddata_respcmdq_s, __Vtemp_1, __Vtemp_2);
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__3(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    VlWide<5>/*159:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<5>/*159:0*/ __Vtemp_7;
    VlWide<4>/*127:0*/ __Vtemp_8;
    VlWide<5>/*159:0*/ __Vtemp_9;
    VlWide<5>/*159:0*/ __Vtemp_10;
    VlWide<5>/*159:0*/ __Vtemp_11;
    VlWide<4>/*127:0*/ __Vtemp_12;
    VlWide<4>/*127:0*/ __Vtemp_13;
    VlWide<4>/*127:0*/ __Vtemp_14;
    VlWide<5>/*159:0*/ __Vtemp_15;
    VlWide<4>/*127:0*/ __Vtemp_16;
    VlWide<5>/*159:0*/ __Vtemp_17;
    VlWide<5>/*159:0*/ __Vtemp_18;
    VlWide<5>/*159:0*/ __Vtemp_19;
    VlWide<4>/*127:0*/ __Vtemp_20;
    VlWide<4>/*127:0*/ __Vtemp_21;
    VlWide<4>/*127:0*/ __Vtemp_22;
    VlWide<5>/*159:0*/ __Vtemp_23;
    VlWide<4>/*127:0*/ __Vtemp_24;
    VlWide<5>/*159:0*/ __Vtemp_25;
    VlWide<5>/*159:0*/ __Vtemp_26;
    VlWide<5>/*159:0*/ __Vtemp_27;
    VlWide<4>/*127:0*/ __Vtemp_28;
    VlWide<4>/*127:0*/ __Vtemp_29;
    VlWide<4>/*127:0*/ __Vtemp_30;
    VlWide<5>/*159:0*/ __Vtemp_31;
    VlWide<4>/*127:0*/ __Vtemp_32;
    VlWide<5>/*159:0*/ __Vtemp_33;
    VlWide<5>/*159:0*/ __Vtemp_34;
    VlWide<5>/*159:0*/ __Vtemp_35;
    VlWide<4>/*127:0*/ __Vtemp_36;
    VlWide<4>/*127:0*/ __Vtemp_37;
    VlWide<4>/*127:0*/ __Vtemp_38;
    VlWide<5>/*159:0*/ __Vtemp_39;
    VlWide<4>/*127:0*/ __Vtemp_40;
    VlWide<5>/*159:0*/ __Vtemp_41;
    VlWide<5>/*159:0*/ __Vtemp_42;
    VlWide<5>/*159:0*/ __Vtemp_43;
    VlWide<4>/*127:0*/ __Vtemp_44;
    VlWide<4>/*127:0*/ __Vtemp_45;
    VlWide<4>/*127:0*/ __Vtemp_46;
    VlWide<5>/*159:0*/ __Vtemp_47;
    VlWide<4>/*127:0*/ __Vtemp_48;
    VlWide<5>/*159:0*/ __Vtemp_49;
    VlWide<5>/*159:0*/ __Vtemp_50;
    VlWide<5>/*159:0*/ __Vtemp_51;
    VlWide<4>/*127:0*/ __Vtemp_52;
    VlWide<4>/*127:0*/ __Vtemp_53;
    VlWide<4>/*127:0*/ __Vtemp_54;
    VlWide<5>/*159:0*/ __Vtemp_55;
    VlWide<4>/*127:0*/ __Vtemp_56;
    VlWide<5>/*159:0*/ __Vtemp_57;
    VlWide<5>/*159:0*/ __Vtemp_58;
    VlWide<5>/*159:0*/ __Vtemp_59;
    VlWide<4>/*127:0*/ __Vtemp_60;
    VlWide<4>/*127:0*/ __Vtemp_61;
    VlWide<4>/*127:0*/ __Vtemp_62;
    VlWide<5>/*159:0*/ __Vtemp_63;
    VlWide<4>/*127:0*/ __Vtemp_64;
    VlWide<5>/*159:0*/ __Vtemp_65;
    VlWide<5>/*159:0*/ __Vtemp_66;
    VlWide<5>/*159:0*/ __Vtemp_67;
    VlWide<4>/*127:0*/ __Vtemp_68;
    VlWide<4>/*127:0*/ __Vtemp_69;
    VlWide<4>/*127:0*/ __Vtemp_70;
    VlWide<5>/*159:0*/ __Vtemp_71;
    VlWide<4>/*127:0*/ __Vtemp_72;
    VlWide<5>/*159:0*/ __Vtemp_73;
    VlWide<5>/*159:0*/ __Vtemp_74;
    VlWide<5>/*159:0*/ __Vtemp_75;
    VlWide<4>/*127:0*/ __Vtemp_76;
    VlWide<4>/*127:0*/ __Vtemp_77;
    VlWide<4>/*127:0*/ __Vtemp_78;
    VlWide<5>/*159:0*/ __Vtemp_79;
    VlWide<4>/*127:0*/ __Vtemp_80;
    VlWide<5>/*159:0*/ __Vtemp_81;
    VlWide<5>/*159:0*/ __Vtemp_82;
    VlWide<5>/*159:0*/ __Vtemp_83;
    VlWide<4>/*127:0*/ __Vtemp_84;
    VlWide<4>/*127:0*/ __Vtemp_85;
    VlWide<4>/*127:0*/ __Vtemp_86;
    VlWide<5>/*159:0*/ __Vtemp_87;
    VlWide<4>/*127:0*/ __Vtemp_88;
    VlWide<5>/*159:0*/ __Vtemp_89;
    VlWide<5>/*159:0*/ __Vtemp_90;
    VlWide<5>/*159:0*/ __Vtemp_91;
    VlWide<4>/*127:0*/ __Vtemp_92;
    VlWide<4>/*127:0*/ __Vtemp_93;
    VlWide<4>/*127:0*/ __Vtemp_94;
    VlWide<5>/*159:0*/ __Vtemp_95;
    VlWide<4>/*127:0*/ __Vtemp_96;
    VlWide<5>/*159:0*/ __Vtemp_97;
    VlWide<5>/*159:0*/ __Vtemp_98;
    VlWide<5>/*159:0*/ __Vtemp_99;
    VlWide<4>/*127:0*/ __Vtemp_100;
    VlWide<4>/*127:0*/ __Vtemp_101;
    VlWide<4>/*127:0*/ __Vtemp_102;
    VlWide<5>/*159:0*/ __Vtemp_103;
    VlWide<4>/*127:0*/ __Vtemp_104;
    VlWide<5>/*159:0*/ __Vtemp_105;
    VlWide<5>/*159:0*/ __Vtemp_106;
    VlWide<5>/*159:0*/ __Vtemp_107;
    VlWide<4>/*127:0*/ __Vtemp_108;
    VlWide<4>/*127:0*/ __Vtemp_109;
    VlWide<4>/*127:0*/ __Vtemp_110;
    VlWide<5>/*159:0*/ __Vtemp_111;
    VlWide<4>/*127:0*/ __Vtemp_112;
    VlWide<5>/*159:0*/ __Vtemp_113;
    VlWide<5>/*159:0*/ __Vtemp_114;
    VlWide<5>/*159:0*/ __Vtemp_115;
    VlWide<4>/*127:0*/ __Vtemp_116;
    VlWide<4>/*127:0*/ __Vtemp_117;
    VlWide<4>/*127:0*/ __Vtemp_118;
    VlWide<5>/*159:0*/ __Vtemp_119;
    VlWide<4>/*127:0*/ __Vtemp_120;
    VlWide<5>/*159:0*/ __Vtemp_121;
    VlWide<5>/*159:0*/ __Vtemp_122;
    VlWide<5>/*159:0*/ __Vtemp_123;
    VlWide<4>/*127:0*/ __Vtemp_124;
    VlWide<4>/*127:0*/ __Vtemp_125;
    VlWide<4>/*127:0*/ __Vtemp_126;
    VlWide<5>/*159:0*/ __Vtemp_127;
    VlWide<4>/*127:0*/ __Vtemp_128;
    VlWide<5>/*159:0*/ __Vtemp_129;
    VlWide<5>/*159:0*/ __Vtemp_130;
    VlWide<5>/*159:0*/ __Vtemp_131;
    VlWide<4>/*127:0*/ __Vtemp_132;
    VlWide<4>/*127:0*/ __Vtemp_133;
    VlWide<4>/*127:0*/ __Vtemp_134;
    VlWide<5>/*159:0*/ __Vtemp_135;
    VlWide<4>/*127:0*/ __Vtemp_136;
    VlWide<5>/*159:0*/ __Vtemp_137;
    VlWide<5>/*159:0*/ __Vtemp_138;
    VlWide<5>/*159:0*/ __Vtemp_139;
    VlWide<4>/*127:0*/ __Vtemp_140;
    VlWide<4>/*127:0*/ __Vtemp_141;
    VlWide<4>/*127:0*/ __Vtemp_142;
    VlWide<5>/*159:0*/ __Vtemp_143;
    VlWide<4>/*127:0*/ __Vtemp_144;
    VlWide<5>/*159:0*/ __Vtemp_145;
    VlWide<5>/*159:0*/ __Vtemp_146;
    VlWide<5>/*159:0*/ __Vtemp_147;
    VlWide<4>/*127:0*/ __Vtemp_148;
    VlWide<4>/*127:0*/ __Vtemp_149;
    VlWide<4>/*127:0*/ __Vtemp_150;
    VlWide<5>/*159:0*/ __Vtemp_151;
    VlWide<4>/*127:0*/ __Vtemp_152;
    VlWide<5>/*159:0*/ __Vtemp_153;
    VlWide<5>/*159:0*/ __Vtemp_154;
    VlWide<5>/*159:0*/ __Vtemp_155;
    VlWide<4>/*127:0*/ __Vtemp_156;
    VlWide<4>/*127:0*/ __Vtemp_157;
    VlWide<4>/*127:0*/ __Vtemp_158;
    VlWide<5>/*159:0*/ __Vtemp_159;
    VlWide<4>/*127:0*/ __Vtemp_160;
    VlWide<5>/*159:0*/ __Vtemp_161;
    VlWide<5>/*159:0*/ __Vtemp_162;
    VlWide<5>/*159:0*/ __Vtemp_163;
    VlWide<4>/*127:0*/ __Vtemp_164;
    VlWide<4>/*127:0*/ __Vtemp_165;
    VlWide<4>/*127:0*/ __Vtemp_166;
    VlWide<5>/*159:0*/ __Vtemp_167;
    VlWide<4>/*127:0*/ __Vtemp_168;
    VlWide<5>/*159:0*/ __Vtemp_169;
    VlWide<5>/*159:0*/ __Vtemp_170;
    VlWide<5>/*159:0*/ __Vtemp_171;
    VlWide<4>/*127:0*/ __Vtemp_172;
    VlWide<4>/*127:0*/ __Vtemp_173;
    VlWide<4>/*127:0*/ __Vtemp_174;
    VlWide<5>/*159:0*/ __Vtemp_175;
    VlWide<4>/*127:0*/ __Vtemp_176;
    VlWide<5>/*159:0*/ __Vtemp_177;
    VlWide<5>/*159:0*/ __Vtemp_178;
    VlWide<5>/*159:0*/ __Vtemp_179;
    VlWide<4>/*127:0*/ __Vtemp_180;
    VlWide<4>/*127:0*/ __Vtemp_181;
    VlWide<4>/*127:0*/ __Vtemp_182;
    VlWide<5>/*159:0*/ __Vtemp_183;
    VlWide<4>/*127:0*/ __Vtemp_184;
    VlWide<5>/*159:0*/ __Vtemp_185;
    VlWide<5>/*159:0*/ __Vtemp_186;
    VlWide<5>/*159:0*/ __Vtemp_187;
    VlWide<4>/*127:0*/ __Vtemp_188;
    VlWide<4>/*127:0*/ __Vtemp_189;
    VlWide<4>/*127:0*/ __Vtemp_190;
    VlWide<5>/*159:0*/ __Vtemp_191;
    VlWide<4>/*127:0*/ __Vtemp_192;
    VlWide<5>/*159:0*/ __Vtemp_193;
    VlWide<5>/*159:0*/ __Vtemp_194;
    VlWide<5>/*159:0*/ __Vtemp_195;
    VlWide<4>/*127:0*/ __Vtemp_196;
    VlWide<4>/*127:0*/ __Vtemp_197;
    VlWide<4>/*127:0*/ __Vtemp_198;
    VlWide<5>/*159:0*/ __Vtemp_199;
    VlWide<4>/*127:0*/ __Vtemp_200;
    VlWide<5>/*159:0*/ __Vtemp_201;
    VlWide<5>/*159:0*/ __Vtemp_202;
    VlWide<5>/*159:0*/ __Vtemp_203;
    VlWide<4>/*127:0*/ __Vtemp_204;
    VlWide<4>/*127:0*/ __Vtemp_205;
    VlWide<4>/*127:0*/ __Vtemp_206;
    VlWide<5>/*159:0*/ __Vtemp_207;
    VlWide<4>/*127:0*/ __Vtemp_208;
    VlWide<5>/*159:0*/ __Vtemp_209;
    VlWide<5>/*159:0*/ __Vtemp_210;
    VlWide<5>/*159:0*/ __Vtemp_211;
    VlWide<4>/*127:0*/ __Vtemp_212;
    VlWide<4>/*127:0*/ __Vtemp_213;
    VlWide<4>/*127:0*/ __Vtemp_214;
    VlWide<5>/*159:0*/ __Vtemp_215;
    VlWide<4>/*127:0*/ __Vtemp_216;
    VlWide<5>/*159:0*/ __Vtemp_217;
    VlWide<5>/*159:0*/ __Vtemp_218;
    VlWide<5>/*159:0*/ __Vtemp_219;
    VlWide<4>/*127:0*/ __Vtemp_220;
    VlWide<4>/*127:0*/ __Vtemp_221;
    VlWide<4>/*127:0*/ __Vtemp_222;
    VlWide<5>/*159:0*/ __Vtemp_223;
    VlWide<4>/*127:0*/ __Vtemp_224;
    VlWide<5>/*159:0*/ __Vtemp_225;
    VlWide<5>/*159:0*/ __Vtemp_226;
    VlWide<5>/*159:0*/ __Vtemp_227;
    VlWide<4>/*127:0*/ __Vtemp_228;
    VlWide<4>/*127:0*/ __Vtemp_229;
    VlWide<4>/*127:0*/ __Vtemp_230;
    VlWide<5>/*159:0*/ __Vtemp_231;
    VlWide<4>/*127:0*/ __Vtemp_232;
    VlWide<5>/*159:0*/ __Vtemp_233;
    VlWide<5>/*159:0*/ __Vtemp_234;
    VlWide<5>/*159:0*/ __Vtemp_235;
    VlWide<4>/*127:0*/ __Vtemp_236;
    VlWide<4>/*127:0*/ __Vtemp_237;
    VlWide<4>/*127:0*/ __Vtemp_238;
    VlWide<5>/*159:0*/ __Vtemp_239;
    VlWide<4>/*127:0*/ __Vtemp_240;
    VlWide<5>/*159:0*/ __Vtemp_241;
    VlWide<5>/*159:0*/ __Vtemp_242;
    VlWide<5>/*159:0*/ __Vtemp_243;
    VlWide<4>/*127:0*/ __Vtemp_244;
    VlWide<4>/*127:0*/ __Vtemp_245;
    VlWide<4>/*127:0*/ __Vtemp_246;
    VlWide<5>/*159:0*/ __Vtemp_247;
    VlWide<4>/*127:0*/ __Vtemp_248;
    VlWide<5>/*159:0*/ __Vtemp_249;
    VlWide<5>/*159:0*/ __Vtemp_250;
    VlWide<5>/*159:0*/ __Vtemp_251;
    VlWide<4>/*127:0*/ __Vtemp_252;
    VlWide<4>/*127:0*/ __Vtemp_253;
    VlWide<4>/*127:0*/ __Vtemp_254;
    VlWide<5>/*159:0*/ __Vtemp_255;
    VlWide<4>/*127:0*/ __Vtemp_256;
    VlWide<5>/*159:0*/ __Vtemp_257;
    VlWide<5>/*159:0*/ __Vtemp_258;
    VlWide<5>/*159:0*/ __Vtemp_259;
    VlWide<5>/*159:0*/ __Vtemp_260;
    VlWide<5>/*159:0*/ __Vtemp_261;
    VlWide<5>/*159:0*/ __Vtemp_262;
    VlWide<5>/*159:0*/ __Vtemp_263;
    VlWide<5>/*159:0*/ __Vtemp_264;
    VlWide<5>/*159:0*/ __Vtemp_265;
    VlWide<5>/*159:0*/ __Vtemp_266;
    VlWide<5>/*159:0*/ __Vtemp_267;
    VlWide<5>/*159:0*/ __Vtemp_268;
    VlWide<5>/*159:0*/ __Vtemp_269;
    VlWide<5>/*159:0*/ __Vtemp_270;
    VlWide<5>/*159:0*/ __Vtemp_271;
    VlWide<5>/*159:0*/ __Vtemp_272;
    VlWide<5>/*159:0*/ __Vtemp_273;
    VlWide<5>/*159:0*/ __Vtemp_274;
    VlWide<5>/*159:0*/ __Vtemp_275;
    VlWide<5>/*159:0*/ __Vtemp_276;
    VlWide<5>/*159:0*/ __Vtemp_277;
    VlWide<5>/*159:0*/ __Vtemp_278;
    VlWide<5>/*159:0*/ __Vtemp_279;
    VlWide<5>/*159:0*/ __Vtemp_280;
    VlWide<5>/*159:0*/ __Vtemp_281;
    VlWide<5>/*159:0*/ __Vtemp_282;
    VlWide<5>/*159:0*/ __Vtemp_283;
    VlWide<5>/*159:0*/ __Vtemp_284;
    VlWide<5>/*159:0*/ __Vtemp_285;
    VlWide<5>/*159:0*/ __Vtemp_286;
    VlWide<5>/*159:0*/ __Vtemp_287;
    VlWide<5>/*159:0*/ __Vtemp_288;
    VlWide<4>/*127:0*/ __Vtemp_289;
    VlWide<5>/*159:0*/ __Vtemp_290;
    VlWide<4>/*127:0*/ __Vtemp_291;
    VlWide<5>/*159:0*/ __Vtemp_292;
    VlWide<4>/*127:0*/ __Vtemp_293;
    VlWide<3>/*95:0*/ __Vtemp_294;
    VlWide<3>/*95:0*/ __Vtemp_295;
    VlWide<5>/*159:0*/ __Vtemp_296;
    VlWide<5>/*159:0*/ __Vtemp_297;
    VlWide<4>/*127:0*/ __Vtemp_298;
    VlWide<4>/*127:0*/ __Vtemp_299;
    VlWide<3>/*95:0*/ __Vtemp_300;
    VlWide<3>/*95:0*/ __Vtemp_301;
    VlWide<5>/*159:0*/ __Vtemp_302;
    VlWide<5>/*159:0*/ __Vtemp_303;
    VlWide<5>/*159:0*/ __Vtemp_304;
    VlWide<5>/*159:0*/ __Vtemp_305;
    // Body
    vlSelfRef.__Vdly__tgt_id_ph3 = vlSelfRef.__PVT__tgt_id_ph3;
    vlSelfRef.__Vdly__req_is_invalid_resperr_ph2 = vlSelfRef.__PVT__req_is_invalid_resperr_ph2;
    vlSelfRef.__Vdly__cmdis_invalidate_ph2 = vlSelfRef.__PVT__cmdis_invalidate_ph2;
    vlSelfRef.__Vdly__req_is_invalid_resperr_ph3 = vlSelfRef.__PVT__req_is_invalid_resperr_ph3;
    vlSelfRef.__Vdly__cmdq_src_ph2_req = vlSelfRef.__PVT__cmdq_src_ph2_req;
    vlSelfRef.__Vdly__cmdis_invalidate_ph3 = vlSelfRef.__PVT__cmdis_invalidate_ph3;
    vlSelfRef.__Vdly__wren_cache_vector_ph4_rsp = vlSelfRef.__PVT__wren_cache_vector_ph4_rsp;
    vlSelfRef.__Vdly__wren_cache_vector_ph4_req = vlSelfRef.__PVT__wren_cache_vector_ph4_req;
    vlSelfRef.__Vdly__wren_cache_vector_ph5_req = vlSelfRef.__PVT__wren_cache_vector_ph5_req;
    vlSelfRef.__Vdly__wren_cache_vector_ph6_req = vlSelfRef.__PVT__wren_cache_vector_ph6_req;
    vlSelfRef.__Vdly__cmd_ph4_23_18_rsp = vlSelfRef.__PVT__cmd_ph4_23_18_rsp;
    vlSelfRef.__Vdly__cmd_ph4_23_18_req = vlSelfRef.__PVT__cmd_ph4_23_18_req;
    vlSelfRef.__Vdly__cmd_ph5_23_18_req = vlSelfRef.__PVT__cmd_ph5_23_18_req;
    vlSelfRef.__Vdly__cmd_ph5_req_addr = vlSelfRef.__PVT__cmd_ph5_req_addr;
    vlSelfRef.__Vdly__wrdata_cache_ph5_rsp = vlSelfRef.__PVT__wrdata_cache_ph5_rsp;
    vlSelfRef.__Vdly__wrdata_cache_ph5_req = vlSelfRef.__PVT__wrdata_cache_ph5_req;
    vlSelfRef.__Vdly__cm_addr_match_pm_ph2 = vlSelfRef.__PVT__cm_addr_match_pm_ph2;
    vlSelfRef.__Vdly__noncm_addr_match_pm_ph2 = vlSelfRef.__PVT__noncm_addr_match_pm_ph2;
    vlSelfRef.__Vdly__noncm_tgt_sn_supports_dmt_ph3 
        = vlSelfRef.__PVT__noncm_tgt_sn_supports_dmt_ph3;
    vlSelfRef.__Vdly__cm_tgt_sn_supports_dmt_ph3 = vlSelfRef.__PVT__cm_tgt_sn_supports_dmt_ph3;
    vlSelfRef.__Vdly__resp_block_cnt_0 = vlSelfRef.__PVT__resp_block_cnt_0;
    vlSelfRef.__Vdly__resp_block_cnt_1 = vlSelfRef.__PVT__resp_block_cnt_1;
    vlSelfRef.__Vdly__resp_block_cnt_2 = vlSelfRef.__PVT__resp_block_cnt_2;
    vlSelfRef.__Vdly__resp_block_cnt_3 = vlSelfRef.__PVT__resp_block_cnt_3;
    vlSelfRef.__Vdly__resp_block_cnt_4 = vlSelfRef.__PVT__resp_block_cnt_4;
    vlSelfRef.__Vdly__last_resp_index_0 = vlSelfRef.__PVT__last_resp_index_0;
    vlSelfRef.__Vdly__last_resp_index_1 = vlSelfRef.__PVT__last_resp_index_1;
    vlSelfRef.__Vdly__last_resp_index_2 = vlSelfRef.__PVT__last_resp_index_2;
    vlSelfRef.__Vdly__last_resp_index_3 = vlSelfRef.__PVT__last_resp_index_3;
    vlSelfRef.__Vdly__last_resp_index_4 = vlSelfRef.__PVT__last_resp_index_4;
    vlSelfRef.__Vdly__occupied_last_resp_index_4 = vlSelfRef.__PVT__occupied_last_resp_index_4;
    vlSelfRef.__Vdly__occupied_last_resp_index_3 = vlSelfRef.__PVT__occupied_last_resp_index_3;
    vlSelfRef.__Vdly__occupied_last_resp_index_2 = vlSelfRef.__PVT__occupied_last_resp_index_2;
    vlSelfRef.__Vdly__occupied_last_resp_index_1 = vlSelfRef.__PVT__occupied_last_resp_index_1;
    vlSelfRef.__Vdly__occupied_last_resp_index_0 = vlSelfRef.__PVT__occupied_last_resp_index_0;
    vlSelfRef.__Vdly__dataless_xfrdata_tomem_ph4 = vlSelfRef.__PVT__dataless_xfrdata_tomem_ph4;
    vlSelfRef.__Vdly__reqid_matches_ownerpid_ph4 = vlSelfRef.__PVT__reqid_matches_ownerpid_ph4;
    vlSelfRef.__Vdly__addr_clln_clearing = vlSelfRef.__PVT__addr_clln_clearing;
    VL_ASSIGN_W(576,vlSelfRef.__Vdly__cmd_timeoutctr, vlSelfRef.__PVT__cmd_timeoutctr);
    vlSelfRef.__Vdly__cmd_timeout_flag = vlSelfRef.__PVT__cmd_timeout_flag;
    vlSelfRef.__Vdly__tgt_id_ph4 = vlSelfRef.__PVT__tgt_id_ph4;
    vlSelfRef.__Vdly__en_clr_collnreg = vlSelfRef.__PVT__en_clr_collnreg;
    vlSelfRef.__Vdly__en_clr_atom_rd_collnreg = vlSelfRef.__PVT__en_clr_atom_rd_collnreg;
    vlSelfRef.__Vdly__num_emptyloc_collnq = vlSelfRef.__PVT__num_emptyloc_collnq;
    vlSelfRef.__Vdly__seq_num_all_atom = vlSelfRef.__PVT__seq_num_all_atom;
    vlSelfRef.__Vdly__seq_num_all = vlSelfRef.__PVT__seq_num_all;
    vlSelfRef.__Vdly__respbuff_avail = vlSelfRef.__PVT__respbuff_avail;
    VL_ASSIGN_W(512,vlSelfRef.__Vdly__status_field_retry_ph3, vlSelfRef.__PVT__status_field_retry_ph3);
    VL_ASSIGN_W(4352,vlSelfRef.__Vdly__status_field_common, vlSelfRef.__PVT__status_field_common);
    VL_ASSIGN_W(3456,vlSelfRef.__Vdly__status_field_req, vlSelfRef.__PVT__status_field_req);
    vlSelfRef.__Vdly__req_is_invalid_resperr_ph4 = vlSelfRef.__PVT__req_is_invalid_resperr_ph4;
    vlSelfRef.__Vdly__collnreq_st = vlSelfRef.__PVT__collnreq_st;
    vlSelfRef.__Vdly__serv_history_rsp = vlSelfRef.__PVT__serv_history_rsp;
    vlSelfRef.__Vdly__cmdis_invalidate_ph4 = vlSelfRef.__PVT__cmdis_invalidate_ph4;
    vlSelfRef.__Vdly__serv_history_req = vlSelfRef.__PVT__serv_history_req;
    vlSelfRef.__Vdly__req_collnq = vlSelfRef.__PVT__req_collnq;
    vlSelfRef.__Vdly__cmdq_src_ph3_req = vlSelfRef.__PVT__cmdq_src_ph3_req;
    vlSelfRef.__Vdly__cmdvalid_ph2_req = vlSelfRef.__PVT__cmdvalid_ph2_req;
    vlSelfRef.__Vdly__colln_detected_ph3 = vlSelfRef.__PVT__colln_detected_ph3;
    vlSelfRef.__Vdly__colln_atom_detected_ph3 = vlSelfRef.__PVT__colln_atom_detected_ph3;
    vlSelfRef.__Vdly__colln_rdy_for_proc = vlSelfRef.__PVT__colln_rdy_for_proc;
    vlSelfRef.__Vdly__colln_rdy_atom_block_rd = vlSelfRef.__PVT__colln_rdy_atom_block_rd;
    vlSelfRef.__Vdly__colln_cmd_invalidate = vlSelfRef.__PVT__colln_cmd_invalidate;
    vlSelfRef.__Vdly__colln_rdy_for_proc_lock = vlSelfRef.__PVT__colln_rdy_for_proc_lock;
    vlSelfRef.__Vdly__colln_empty = vlSelfRef.__PVT__colln_empty;
    vlSelfRef.__Vdly__outstand_prep_valid = vlSelfRef.__PVT__outstand_prep_valid;
    vlSelfRef.__Vdly__outstand_atmo_rd_alloc_then_wr_clr 
        = vlSelfRef.__PVT__outstand_atmo_rd_alloc_then_wr_clr;
    vlSelfRef.__Vdly__num_emptyloc_outstandq = vlSelfRef.__PVT__num_emptyloc_outstandq;
    vlSelfRef.__Vdly__req_atmo_ph4 = vlSelfRef.__PVT__req_atmo_ph4;
    vlSelfRef.__Vdly__excl_pass_ph4 = vlSelfRef.__PVT__excl_pass_ph4;
    vlSelfRef.__Vdly__cmd_ph4_apply_dmt_req = vlSelfRef.__PVT__cmd_ph4_apply_dmt_req;
    vlSelfRef.__Vdly__cmd_ph4_nonexcl_read_dct_req 
        = vlSelfRef.__PVT__cmd_ph4_nonexcl_read_dct_req;
    vlSelfRef.__Vdly__reqid_matches_sharevec_ph4 = vlSelfRef.__PVT__reqid_matches_sharevec_ph4;
    vlSelfRef.__Vdly__rddata_cache_ph4 = vlSelfRef.__PVT__rddata_cache_ph4;
    vlSelfRef.__Vdly__cmd_ph6_23_18_req = vlSelfRef.__PVT__cmd_ph6_23_18_req;
    vlSelfRef.__Vdly__index_statusreg_ph4 = vlSelfRef.__PVT__index_statusreg_ph4;
    vlSelfRef.__Vdly__wren_cache_vector_ph5_rsp = vlSelfRef.__PVT__wren_cache_vector_ph5_rsp;
    vlSelfRef.__Vdly__cmd_ph6_req_addr = vlSelfRef.__PVT__cmd_ph6_req_addr;
    vlSelfRef.__Vdly__cmd_ph5_23_18_rsp = vlSelfRef.__PVT__cmd_ph5_23_18_rsp;
    vlSelfRef.__Vdly__ownerp_id_ph6_req = vlSelfRef.__PVT__ownerp_id_ph6_req;
    VL_ASSIGN_W(136,vlSelfRef.__Vdly__rddata_statcommon_rsp_ph4, vlSelfRef.__PVT__rddata_statcommon_rsp_ph4);
    vlSelfRef.__Vdly__wrdata_cache_ph6_req = vlSelfRef.__PVT__wrdata_cache_ph6_req;
    vlSelfRef.__Vdly__pshare_cnt_ph6_req = vlSelfRef.__PVT__pshare_cnt_ph6_req;
    VL_ASSIGN_W(108,vlSelfRef.__Vdly__rddata_statreg_req_ph4, vlSelfRef.__PVT__rddata_statreg_req_ph4);
    vlSelfRef.__Vdly__new_share_vect_ph4_rsp = vlSelfRef.__PVT__new_share_vect_ph4_rsp;
    vlSelfRef.__Vdly__new_ownerp_id_ph4_rsp = vlSelfRef.__PVT__new_ownerp_id_ph4_rsp;
    vlSelfRef.__Vdly__new_cache_st_ph4_rsp = vlSelfRef.__PVT__new_cache_st_ph4_rsp;
    vlSelfRef.__Vdly__new_share_vect_ph4_req = vlSelfRef.__PVT__new_share_vect_ph4_req;
    vlSelfRef.__Vdly__new_ownerp_id_ph4_req = vlSelfRef.__PVT__new_ownerp_id_ph4_req;
    vlSelfRef.__Vdly__new_cache_st_ph4_req = vlSelfRef.__PVT__new_cache_st_ph4_req;
    vlSelfRef.__Vdly__wrdata_cache_ph7final_req = vlSelfRef.__PVT__wrdata_cache_ph7final_req;
    vlSelfRef.__Vdly__ownerp_id_ph6_rsp = vlSelfRef.__PVT__ownerp_id_ph6_rsp;
    vlSelfRef.__Vdly__wrdata_cache_ph6_rsp = vlSelfRef.__PVT__wrdata_cache_ph6_rsp;
    vlSelfRef.__Vdly__pshare_cnt_ph6_rsp = vlSelfRef.__PVT__pshare_cnt_ph6_rsp;
    vlSelfRef.__Vdly__wren_cache_vector_ph7_req = vlSelfRef.__PVT__wren_cache_vector_ph7_req;
    vlSelfRef.__Vdly__cache_tag_wr_rsp = vlSelfRef.__PVT__cache_tag_wr_rsp;
    vlSelfRef.__Vdly__cache_tag_wr_req = vlSelfRef.__PVT__cache_tag_wr_req;
    vlSelfRef.__Vdly__cache_index_wr_rsp = vlSelfRef.__PVT__cache_index_wr_rsp;
    vlSelfRef.__Vdly__cache_index_wr_req = vlSelfRef.__PVT__cache_index_wr_req;
    vlSelfRef.__Vdly__wren_cache_vector_ph6rsp = vlSelfRef.__PVT__wren_cache_vector_ph6rsp;
    vlSelfRef.__Vdly__dn_sm_req_ph4 = vlSelfRef.__PVT__dn_sm_req_ph4;
    vlSelfRef.__Vdly__cmdq_src_ph4_rsp = vlSelfRef.__PVT__cmdq_src_ph4_rsp;
    vlSelfRef.__Vdly__cmdq_srcis_colln_ph3 = vlSelfRef.__PVT__cmdq_srcis_colln_ph3;
    vlSelfRef.__Vdly__cmdq_srcis_cachemiss_ph3 = vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3;
    vlSelfRef.__Vdly__cmdvalid_ph3_req = vlSelfRef.__PVT__cmdvalid_ph3_req;
    vlSelfRef.__Vdly__cmdq_srcis_newreq_ph3 = vlSelfRef.__PVT__cmdq_srcis_newreq_ph3;
    vlSelfRef.__Vdly__snpattr_req_ph3 = vlSelfRef.__PVT__snpattr_req_ph3;
    vlSelfRef.__Vdly__cmd_isatmo_ph3 = vlSelfRef.__PVT__cmd_isatmo_ph3;
    vlSelfRef.__Vdly__cmd_isatmo_rd_ph3 = vlSelfRef.__PVT__cmd_isatmo_rd_ph3;
    vlSelfRef.__Vdly__colln_cmd_isatmo_rd = vlSelfRef.__PVT__colln_cmd_isatmo_rd;
    vlSelfRef.__Vdly__colln_cmd_addr_invalid = vlSelfRef.__PVT__colln_cmd_addr_invalid;
    VL_ASSIGN_W(1240,vlSelfRef.__Vdly__colln_cmd_field, vlSelfRef.__PVT__colln_cmd_field);
    VL_ASSIGN_W(224,vlSelfRef.__Vdly__colln_cmd, vlSelfRef.__PVT__colln_cmd);
    vlSelfRef.__Vdly__colln_cmd_isatmo_wr = vlSelfRef.__PVT__colln_cmd_isatmo_wr;
    vlSelfRef.__Vdly__cmd_isatmo_wr_ph3 = vlSelfRef.__PVT__cmd_isatmo_wr_ph3;
    vlSelfRef.__Vdly__outstand_cmd_invalid = vlSelfRef.__PVT__outstand_cmd_invalid;
    vlSelfRef.__Vdly__cmdvalid_ph4_rsp = vlSelfRef.__PVT__cmdvalid_ph4_rsp;
    vlSelfRef.__Vdly__cmdis_resp_ph4 = vlSelfRef.__PVT__cmdis_resp_ph4;
    VL_ASSIGN_W(155,vlSelfRef.__Vdly__cmd_ph4_rsp, vlSelfRef.__PVT__cmd_ph4_rsp);
    vlSelfRef.__Vdly__cmdvalid_ph4_req = vlSelfRef.__PVT__cmdvalid_ph4_req;
    vlSelfRef.__Vdly__cmdis_req_ph4 = vlSelfRef.__PVT__cmdis_req_ph4;
    vlSelfRef.__Vdly__cachehit_vector_ph4 = vlSelfRef.__PVT__cachehit_vector_ph4;
    vlSelfRef.__Vdly__wrindex_req_ph4 = vlSelfRef.__PVT__wrindex_req_ph4;
    VL_ASSIGN_W(155,vlSelfRef.__Vdly__cmd_ph4_req, vlSelfRef.__PVT__cmd_ph4_req);
    vlSelfRef.__Vdly__wren_cmq_ph4 = vlSelfRef.__PVT__wren_cmq_ph4;
    vlSelfRef.__Vdly__outstand_req_atmo_wr = vlSelfRef.__PVT__outstand_req_atmo_wr;
    vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata 
        = vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata;
    vlSelfRef.__Vdly__vld_store_to_bn2 = vlSelfRef.__PVT__vld_store_to_bn2;
    VL_ASSIGN_W(160,vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd);
    VL_ASSIGN_W(160,vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, vlSelfRef.__PVT__outstand_cmd_buffnum_1st);
    VL_ASSIGN_W(1664,vlSelfRef.__Vdly__outstand_cmd_addr, vlSelfRef.__PVT__outstand_cmd_addr);
    vlSelfRef.__Vdly__outstand_req_atmo_rd = vlSelfRef.__PVT__outstand_req_atmo_rd;
    VL_ASSIGN_W(768,vlSelfRef.__Vdly__outstand_cmd, vlSelfRef.__PVT__outstand_cmd);
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        vlSelfRef.__Vdly__cm_addr_match_pm_ph2 = vlSelfRef.__PVT__cm_addr_match_pm_ph1;
        vlSelfRef.__Vdly__noncm_addr_match_pm_ph2 = vlSelfRef.__PVT__noncm_addr_match_pm_ph1;
        vlSelfRef.__Vdly__noncm_tgt_sn_supports_dmt_ph3 
            = vlSelfRef.__PVT__noncm_tgt_sn_supports_dmt_ph2;
        vlSelfRef.__Vdly__cm_tgt_sn_supports_dmt_ph3 
            = vlSelfRef.__PVT__cm_tgt_sn_supports_dmt_ph2;
    } else {
        vlSelfRef.__Vdly__cm_addr_match_pm_ph2 = 0U;
        vlSelfRef.__Vdly__noncm_addr_match_pm_ph2 = 0U;
        vlSelfRef.__Vdly__noncm_tgt_sn_supports_dmt_ph3 = 0U;
        vlSelfRef.__Vdly__cm_tgt_sn_supports_dmt_ph3 = 0U;
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        vlSelfRef.__Vdly__resp_block_cnt_0 = vlSelfRef.__PVT__resp_block_cnt_0_nxt;
        vlSelfRef.__Vdly__resp_block_cnt_1 = vlSelfRef.__PVT__resp_block_cnt_1_nxt;
        vlSelfRef.__Vdly__resp_block_cnt_2 = vlSelfRef.__PVT__resp_block_cnt_2_nxt;
        vlSelfRef.__Vdly__resp_block_cnt_3 = vlSelfRef.__PVT__resp_block_cnt_3_nxt;
        vlSelfRef.__Vdly__resp_block_cnt_4 = vlSelfRef.__PVT__resp_block_cnt_4_nxt;
        vlSelfRef.__Vdly__last_resp_index_0 = vlSelfRef.__PVT__last_resp_index_0_nxt;
        vlSelfRef.__Vdly__last_resp_index_1 = vlSelfRef.__PVT__last_resp_index_1_nxt;
        vlSelfRef.__Vdly__last_resp_index_2 = vlSelfRef.__PVT__last_resp_index_2_nxt;
        vlSelfRef.__Vdly__last_resp_index_3 = vlSelfRef.__PVT__last_resp_index_3_nxt;
        vlSelfRef.__Vdly__last_resp_index_4 = vlSelfRef.__PVT__last_resp_index_4_nxt;
        vlSelfRef.__Vdly__occupied_last_resp_index_0 
            = vlSelfRef.__PVT__occupied_last_resp_index_0_nxt;
        vlSelfRef.__Vdly__occupied_last_resp_index_1 
            = vlSelfRef.__PVT__occupied_last_resp_index_1_nxt;
        vlSelfRef.__Vdly__occupied_last_resp_index_2 
            = vlSelfRef.__PVT__occupied_last_resp_index_2_nxt;
        vlSelfRef.__Vdly__occupied_last_resp_index_3 
            = vlSelfRef.__PVT__occupied_last_resp_index_3_nxt;
        vlSelfRef.__Vdly__occupied_last_resp_index_4 
            = vlSelfRef.__PVT__occupied_last_resp_index_4_nxt;
    } else {
        vlSelfRef.__Vdly__resp_block_cnt_0 = 0U;
        vlSelfRef.__Vdly__resp_block_cnt_1 = 0U;
        vlSelfRef.__Vdly__resp_block_cnt_2 = 0U;
        vlSelfRef.__Vdly__resp_block_cnt_3 = 0U;
        vlSelfRef.__Vdly__resp_block_cnt_4 = 0U;
        vlSelfRef.__Vdly__last_resp_index_0 = 0x3fU;
        vlSelfRef.__Vdly__last_resp_index_1 = 0x3fU;
        vlSelfRef.__Vdly__last_resp_index_2 = 0x3fU;
        vlSelfRef.__Vdly__last_resp_index_3 = 0x3fU;
        vlSelfRef.__Vdly__last_resp_index_4 = 0x3fU;
        vlSelfRef.__Vdly__occupied_last_resp_index_0 = 0U;
        vlSelfRef.__Vdly__occupied_last_resp_index_1 = 0U;
        vlSelfRef.__Vdly__occupied_last_resp_index_2 = 0U;
        vlSelfRef.__Vdly__occupied_last_resp_index_3 = 0U;
        vlSelfRef.__Vdly__occupied_last_resp_index_4 = 0U;
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        vlSelfRef.__Vdly__addr_clln_clearing = vlSelfRef.__PVT__addr_clln_clearing_nxt;
        vlSelfRef.__Vdly__reqid_matches_ownerpid_ph4 
            = vlSelfRef.__PVT__reqid_matches_ownerpid_ph3;
        vlSelfRef.__Vdly__dataless_xfrdata_tomem_ph4 
            = vlSelfRef.__PVT__dataless_xfrdata_tomem_ph3;
    } else {
        vlSelfRef.__Vdly__addr_clln_clearing = 0ULL;
        vlSelfRef.__Vdly__reqid_matches_ownerpid_ph4 = 0U;
        vlSelfRef.__Vdly__dataless_xfrdata_tomem_ph4 = 0U;
    }
    VL_ASSIGNSEL_WQ(576,36,0U, vlSelfRef.__Vdly__cmd_timeoutctr, 
                    VL_CONCAT_QII(36,18,18, (0x3ffffU 
                                             & ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                                 ? 
                                                VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0x12U, 18)
                                                 : 0U)), 
                                  (0x3ffffU & ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                                ? VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U, 18)
                                                : 0U))));
    VL_ASSIGNSEL_WQ(576,36,0x24U, vlSelfRef.__Vdly__cmd_timeoutctr, 
                    VL_CONCAT_QII(36,18,18, (0x3ffffU 
                                             & ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                                 ? 
                                                VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0x36U, 18)
                                                 : 0U)), 
                                  (0x3ffffU & ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                                ? VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0x24U, 18)
                                                : 0U))));
    VL_ASSIGNSEL_WQ(576,36,0x48U, vlSelfRef.__Vdly__cmd_timeoutctr, 
                    VL_CONCAT_QII(36,18,18, (0x3ffffU 
                                             & ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                                 ? 
                                                VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0x5aU, 18)
                                                 : 0U)), 
                                  (0x3ffffU & ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                                ? VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0x48U, 18)
                                                : 0U))));
    VL_ASSIGNSEL_WQ(576,36,0x6cU, vlSelfRef.__Vdly__cmd_timeoutctr, 
                    VL_CONCAT_QII(36,18,18, (0x3ffffU 
                                             & ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                                 ? 
                                                VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0x7eU, 18)
                                                 : 0U)), 
                                  (0x3ffffU & ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                                ? VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0x6cU, 18)
                                                : 0U))));
    VL_ASSIGNSEL_WQ(576,36,0x90U, vlSelfRef.__Vdly__cmd_timeoutctr, 
                    VL_CONCAT_QII(36,18,18, (0x3ffffU 
                                             & ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                                 ? 
                                                VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0xa2U, 18)
                                                 : 0U)), 
                                  (0x3ffffU & ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                                ? VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0x90U, 18)
                                                : 0U))));
    VL_ASSIGNSEL_WQ(576,36,0xb4U, vlSelfRef.__Vdly__cmd_timeoutctr, 
                    VL_CONCAT_QII(36,18,18, (0x3ffffU 
                                             & ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                                 ? 
                                                VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0xc6U, 18)
                                                 : 0U)), 
                                  (0x3ffffU & ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                                ? VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0xb4U, 18)
                                                : 0U))));
    VL_ASSIGNSEL_WQ(576,36,0xd8U, vlSelfRef.__Vdly__cmd_timeoutctr, 
                    VL_CONCAT_QII(36,18,18, (0x3ffffU 
                                             & ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                                 ? 
                                                VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0xeaU, 18)
                                                 : 0U)), 
                                  (0x3ffffU & ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                                ? VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0xd8U, 18)
                                                : 0U))));
    VL_ASSIGNSEL_WQ(576,36,0xfcU, vlSelfRef.__Vdly__cmd_timeoutctr, 
                    VL_CONCAT_QII(36,18,18, (0x3ffffU 
                                             & ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                                 ? 
                                                VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0x10eU, 18)
                                                 : 0U)), 
                                  (0x3ffffU & ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                                ? VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0xfcU, 18)
                                                : 0U))));
    VL_ASSIGNSEL_WQ(576,36,0x120U, vlSelfRef.__Vdly__cmd_timeoutctr, 
                    VL_CONCAT_QII(36,18,18, (0x3ffffU 
                                             & ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                                 ? 
                                                VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0x132U, 18)
                                                 : 0U)), 
                                  (0x3ffffU & ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                                ? VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0x120U, 18)
                                                : 0U))));
    VL_ASSIGNSEL_WQ(576,36,0x144U, vlSelfRef.__Vdly__cmd_timeoutctr, 
                    VL_CONCAT_QII(36,18,18, (0x3ffffU 
                                             & ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                                 ? 
                                                VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0x156U, 18)
                                                 : 0U)), 
                                  (0x3ffffU & ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                                ? VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0x144U, 18)
                                                : 0U))));
    VL_ASSIGNSEL_WQ(576,36,0x168U, vlSelfRef.__Vdly__cmd_timeoutctr, 
                    VL_CONCAT_QII(36,18,18, (0x3ffffU 
                                             & ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                                 ? 
                                                VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0x17aU, 18)
                                                 : 0U)), 
                                  (0x3ffffU & ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                                ? VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0x168U, 18)
                                                : 0U))));
    VL_ASSIGNSEL_WQ(576,36,0x18cU, vlSelfRef.__Vdly__cmd_timeoutctr, 
                    VL_CONCAT_QII(36,18,18, (0x3ffffU 
                                             & ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                                 ? 
                                                VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0x19eU, 18)
                                                 : 0U)), 
                                  (0x3ffffU & ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                                ? VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0x18cU, 18)
                                                : 0U))));
    VL_ASSIGNSEL_WQ(576,36,0x1b0U, vlSelfRef.__Vdly__cmd_timeoutctr, 
                    VL_CONCAT_QII(36,18,18, (0x3ffffU 
                                             & ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                                 ? 
                                                VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0x1c2U, 18)
                                                 : 0U)), 
                                  (0x3ffffU & ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                                ? VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0x1b0U, 18)
                                                : 0U))));
    VL_ASSIGNSEL_WQ(576,36,0x1d4U, vlSelfRef.__Vdly__cmd_timeoutctr, 
                    VL_CONCAT_QII(36,18,18, (0x3ffffU 
                                             & ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                                 ? 
                                                VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0x1e6U, 18)
                                                 : 0U)), 
                                  (0x3ffffU & ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                                ? VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0x1d4U, 18)
                                                : 0U))));
    VL_ASSIGNSEL_WQ(576,36,0x1f8U, vlSelfRef.__Vdly__cmd_timeoutctr, 
                    VL_CONCAT_QII(36,18,18, (0x3ffffU 
                                             & ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                                 ? 
                                                VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0x20aU, 18)
                                                 : 0U)), 
                                  (0x3ffffU & ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                                ? VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0x1f8U, 18)
                                                : 0U))));
    VL_ASSIGNSEL_WQ(576,36,0x21cU, vlSelfRef.__Vdly__cmd_timeoutctr, 
                    VL_CONCAT_QII(36,18,18, (0x3ffffU 
                                             & ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                                 ? 
                                                VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0x22eU, 18)
                                                 : 0U)), 
                                  (0x3ffffU & ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                                ? VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0x21cU, 18)
                                                : 0U))));
    vlSelfRef.__Vdly__cmd_timeout_flag = ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                           ? vlSelfRef.__PVT__cmd_timeout_flag_nxt
                                           : 0U);
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        vlSelfRef.__Vdly__seq_num_all = vlSelfRef.__PVT__seq_num_all_nxt;
        vlSelfRef.__Vdly__seq_num_all_atom = vlSelfRef.__PVT__seq_num_all_atom_nxt;
        vlSelfRef.__Vdly__en_clr_collnreg = vlSelfRef.__PVT__en_clr_collnreg_nxt;
        vlSelfRef.__Vdly__en_clr_atom_rd_collnreg = vlSelfRef.__PVT__en_clr_atom_rd_collnreg_nxt;
        vlSelfRef.__Vdly__num_emptyloc_collnq = vlSelfRef.__PVT__num_emptyloc_collnq_nxt;
        vlSelfRef.__Vdly__tgt_id_ph3 = vlSelfRef.__PVT__tgt_id_ph2;
        vlSelfRef.__Vdly__tgt_id_ph4 = vlSelfRef.__PVT__tgt_id_ph3;
    } else {
        vlSelfRef.__Vdly__seq_num_all = 0U;
        vlSelfRef.__Vdly__seq_num_all_atom = 0U;
        vlSelfRef.__Vdly__en_clr_collnreg = 0U;
        vlSelfRef.__Vdly__en_clr_atom_rd_collnreg = 0U;
        vlSelfRef.__Vdly__num_emptyloc_collnq = 8U;
        vlSelfRef.__Vdly__tgt_id_ph3 = 0U;
        vlSelfRef.__Vdly__tgt_id_ph4 = 0U;
    }
    vlSelfRef.__Vdly__respbuff_avail = ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                         ? (IData)(vlSelfRef.__PVT__respbuff_avail_nxt)
                                         : 0x20U);
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_1,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(136, 4352, __Vtemp_2, vlSelfRef.__PVT__status_field_common_nxt, 0U, 136);
        VL_AND_W(5, __Vtemp_3, __Vtemp_1, __Vtemp_2);
        VL_ASSIGNSEL_WW(4352,136,0U, vlSelfRef.__Vdly__status_field_common, __Vtemp_3);
        VL_CONST_W_4X(128,__Vtemp_4,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(108, 3456, __Vtemp_5, vlSelfRef.__PVT__status_field_req_nxt, 0U, 108);
        VL_AND_W(4, __Vtemp_6, __Vtemp_4, __Vtemp_5);
        VL_ASSIGNSEL_WW(3456,108,0U, vlSelfRef.__Vdly__status_field_req, __Vtemp_6);
        VL_ASSIGNSEL_WI(512,16,0U, vlSelfRef.__Vdly__status_field_retry_ph3, 
                        (0xffffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 0U, 16)));
    } else {
        VL_CONST_W_1X(136,__Vtemp_7,0x00000000);
        VL_ASSIGNSEL_WW(4352,136,0U, vlSelfRef.__Vdly__status_field_common, __Vtemp_7);
        VL_CONST_W_1X(108,__Vtemp_8,0x00000000);
        VL_ASSIGNSEL_WW(3456,108,0U, vlSelfRef.__Vdly__status_field_req, __Vtemp_8);
        VL_ASSIGNSEL_WI(512,16,0U, vlSelfRef.__Vdly__status_field_retry_ph3, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_9,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(136, 4352, __Vtemp_10, vlSelfRef.__PVT__status_field_common_nxt, 0x88U, 136);
        VL_AND_W(5, __Vtemp_11, __Vtemp_9, __Vtemp_10);
        VL_ASSIGNSEL_WW(4352,136,0x88U, vlSelfRef.__Vdly__status_field_common, __Vtemp_11);
        VL_CONST_W_4X(128,__Vtemp_12,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(108, 3456, __Vtemp_13, vlSelfRef.__PVT__status_field_req_nxt, 0x6cU, 108);
        VL_AND_W(4, __Vtemp_14, __Vtemp_12, __Vtemp_13);
        VL_ASSIGNSEL_WW(3456,108,0x6cU, vlSelfRef.__Vdly__status_field_req, __Vtemp_14);
        VL_ASSIGNSEL_WI(512,16,0x10U, vlSelfRef.__Vdly__status_field_retry_ph3, 
                        (0xffffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 0x10U, 16)));
    } else {
        VL_CONST_W_1X(136,__Vtemp_15,0x00000000);
        VL_ASSIGNSEL_WW(4352,136,0x88U, vlSelfRef.__Vdly__status_field_common, __Vtemp_15);
        VL_CONST_W_1X(108,__Vtemp_16,0x00000000);
        VL_ASSIGNSEL_WW(3456,108,0x6cU, vlSelfRef.__Vdly__status_field_req, __Vtemp_16);
        VL_ASSIGNSEL_WI(512,16,0x10U, vlSelfRef.__Vdly__status_field_retry_ph3, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_17,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(136, 4352, __Vtemp_18, vlSelfRef.__PVT__status_field_common_nxt, 0x110U, 136);
        VL_AND_W(5, __Vtemp_19, __Vtemp_17, __Vtemp_18);
        VL_ASSIGNSEL_WW(4352,136,0x110U, vlSelfRef.__Vdly__status_field_common, __Vtemp_19);
        VL_CONST_W_4X(128,__Vtemp_20,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(108, 3456, __Vtemp_21, vlSelfRef.__PVT__status_field_req_nxt, 0xd8U, 108);
        VL_AND_W(4, __Vtemp_22, __Vtemp_20, __Vtemp_21);
        VL_ASSIGNSEL_WW(3456,108,0xd8U, vlSelfRef.__Vdly__status_field_req, __Vtemp_22);
        VL_ASSIGNSEL_WI(512,16,0x20U, vlSelfRef.__Vdly__status_field_retry_ph3, 
                        (0xffffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 0x20U, 16)));
    } else {
        VL_CONST_W_1X(136,__Vtemp_23,0x00000000);
        VL_ASSIGNSEL_WW(4352,136,0x110U, vlSelfRef.__Vdly__status_field_common, __Vtemp_23);
        VL_CONST_W_1X(108,__Vtemp_24,0x00000000);
        VL_ASSIGNSEL_WW(3456,108,0xd8U, vlSelfRef.__Vdly__status_field_req, __Vtemp_24);
        VL_ASSIGNSEL_WI(512,16,0x20U, vlSelfRef.__Vdly__status_field_retry_ph3, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_25,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(136, 4352, __Vtemp_26, vlSelfRef.__PVT__status_field_common_nxt, 0x198U, 136);
        VL_AND_W(5, __Vtemp_27, __Vtemp_25, __Vtemp_26);
        VL_ASSIGNSEL_WW(4352,136,0x198U, vlSelfRef.__Vdly__status_field_common, __Vtemp_27);
        VL_CONST_W_4X(128,__Vtemp_28,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(108, 3456, __Vtemp_29, vlSelfRef.__PVT__status_field_req_nxt, 0x144U, 108);
        VL_AND_W(4, __Vtemp_30, __Vtemp_28, __Vtemp_29);
        VL_ASSIGNSEL_WW(3456,108,0x144U, vlSelfRef.__Vdly__status_field_req, __Vtemp_30);
        VL_ASSIGNSEL_WI(512,16,0x30U, vlSelfRef.__Vdly__status_field_retry_ph3, 
                        (0xffffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 0x30U, 16)));
    } else {
        VL_CONST_W_1X(136,__Vtemp_31,0x00000000);
        VL_ASSIGNSEL_WW(4352,136,0x198U, vlSelfRef.__Vdly__status_field_common, __Vtemp_31);
        VL_CONST_W_1X(108,__Vtemp_32,0x00000000);
        VL_ASSIGNSEL_WW(3456,108,0x144U, vlSelfRef.__Vdly__status_field_req, __Vtemp_32);
        VL_ASSIGNSEL_WI(512,16,0x30U, vlSelfRef.__Vdly__status_field_retry_ph3, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_33,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(136, 4352, __Vtemp_34, vlSelfRef.__PVT__status_field_common_nxt, 0x220U, 136);
        VL_AND_W(5, __Vtemp_35, __Vtemp_33, __Vtemp_34);
        VL_ASSIGNSEL_WW(4352,136,0x220U, vlSelfRef.__Vdly__status_field_common, __Vtemp_35);
        VL_CONST_W_4X(128,__Vtemp_36,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(108, 3456, __Vtemp_37, vlSelfRef.__PVT__status_field_req_nxt, 0x1b0U, 108);
        VL_AND_W(4, __Vtemp_38, __Vtemp_36, __Vtemp_37);
        VL_ASSIGNSEL_WW(3456,108,0x1b0U, vlSelfRef.__Vdly__status_field_req, __Vtemp_38);
        VL_ASSIGNSEL_WI(512,16,0x40U, vlSelfRef.__Vdly__status_field_retry_ph3, 
                        (0xffffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 0x40U, 16)));
    } else {
        VL_CONST_W_1X(136,__Vtemp_39,0x00000000);
        VL_ASSIGNSEL_WW(4352,136,0x220U, vlSelfRef.__Vdly__status_field_common, __Vtemp_39);
        VL_CONST_W_1X(108,__Vtemp_40,0x00000000);
        VL_ASSIGNSEL_WW(3456,108,0x1b0U, vlSelfRef.__Vdly__status_field_req, __Vtemp_40);
        VL_ASSIGNSEL_WI(512,16,0x40U, vlSelfRef.__Vdly__status_field_retry_ph3, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_41,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(136, 4352, __Vtemp_42, vlSelfRef.__PVT__status_field_common_nxt, 0x2a8U, 136);
        VL_AND_W(5, __Vtemp_43, __Vtemp_41, __Vtemp_42);
        VL_ASSIGNSEL_WW(4352,136,0x2a8U, vlSelfRef.__Vdly__status_field_common, __Vtemp_43);
        VL_CONST_W_4X(128,__Vtemp_44,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(108, 3456, __Vtemp_45, vlSelfRef.__PVT__status_field_req_nxt, 0x21cU, 108);
        VL_AND_W(4, __Vtemp_46, __Vtemp_44, __Vtemp_45);
        VL_ASSIGNSEL_WW(3456,108,0x21cU, vlSelfRef.__Vdly__status_field_req, __Vtemp_46);
        VL_ASSIGNSEL_WI(512,16,0x50U, vlSelfRef.__Vdly__status_field_retry_ph3, 
                        (0xffffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 0x50U, 16)));
    } else {
        VL_CONST_W_1X(136,__Vtemp_47,0x00000000);
        VL_ASSIGNSEL_WW(4352,136,0x2a8U, vlSelfRef.__Vdly__status_field_common, __Vtemp_47);
        VL_CONST_W_1X(108,__Vtemp_48,0x00000000);
        VL_ASSIGNSEL_WW(3456,108,0x21cU, vlSelfRef.__Vdly__status_field_req, __Vtemp_48);
        VL_ASSIGNSEL_WI(512,16,0x50U, vlSelfRef.__Vdly__status_field_retry_ph3, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_49,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(136, 4352, __Vtemp_50, vlSelfRef.__PVT__status_field_common_nxt, 0x330U, 136);
        VL_AND_W(5, __Vtemp_51, __Vtemp_49, __Vtemp_50);
        VL_ASSIGNSEL_WW(4352,136,0x330U, vlSelfRef.__Vdly__status_field_common, __Vtemp_51);
        VL_CONST_W_4X(128,__Vtemp_52,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(108, 3456, __Vtemp_53, vlSelfRef.__PVT__status_field_req_nxt, 0x288U, 108);
        VL_AND_W(4, __Vtemp_54, __Vtemp_52, __Vtemp_53);
        VL_ASSIGNSEL_WW(3456,108,0x288U, vlSelfRef.__Vdly__status_field_req, __Vtemp_54);
        VL_ASSIGNSEL_WI(512,16,0x60U, vlSelfRef.__Vdly__status_field_retry_ph3, 
                        (0xffffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 0x60U, 16)));
    } else {
        VL_CONST_W_1X(136,__Vtemp_55,0x00000000);
        VL_ASSIGNSEL_WW(4352,136,0x330U, vlSelfRef.__Vdly__status_field_common, __Vtemp_55);
        VL_CONST_W_1X(108,__Vtemp_56,0x00000000);
        VL_ASSIGNSEL_WW(3456,108,0x288U, vlSelfRef.__Vdly__status_field_req, __Vtemp_56);
        VL_ASSIGNSEL_WI(512,16,0x60U, vlSelfRef.__Vdly__status_field_retry_ph3, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_57,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(136, 4352, __Vtemp_58, vlSelfRef.__PVT__status_field_common_nxt, 0x3b8U, 136);
        VL_AND_W(5, __Vtemp_59, __Vtemp_57, __Vtemp_58);
        VL_ASSIGNSEL_WW(4352,136,0x3b8U, vlSelfRef.__Vdly__status_field_common, __Vtemp_59);
        VL_CONST_W_4X(128,__Vtemp_60,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(108, 3456, __Vtemp_61, vlSelfRef.__PVT__status_field_req_nxt, 0x2f4U, 108);
        VL_AND_W(4, __Vtemp_62, __Vtemp_60, __Vtemp_61);
        VL_ASSIGNSEL_WW(3456,108,0x2f4U, vlSelfRef.__Vdly__status_field_req, __Vtemp_62);
        VL_ASSIGNSEL_WI(512,16,0x70U, vlSelfRef.__Vdly__status_field_retry_ph3, 
                        (0xffffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 0x70U, 16)));
    } else {
        VL_CONST_W_1X(136,__Vtemp_63,0x00000000);
        VL_ASSIGNSEL_WW(4352,136,0x3b8U, vlSelfRef.__Vdly__status_field_common, __Vtemp_63);
        VL_CONST_W_1X(108,__Vtemp_64,0x00000000);
        VL_ASSIGNSEL_WW(3456,108,0x2f4U, vlSelfRef.__Vdly__status_field_req, __Vtemp_64);
        VL_ASSIGNSEL_WI(512,16,0x70U, vlSelfRef.__Vdly__status_field_retry_ph3, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_65,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(136, 4352, __Vtemp_66, vlSelfRef.__PVT__status_field_common_nxt, 0x440U, 136);
        VL_AND_W(5, __Vtemp_67, __Vtemp_65, __Vtemp_66);
        VL_ASSIGNSEL_WW(4352,136,0x440U, vlSelfRef.__Vdly__status_field_common, __Vtemp_67);
        VL_CONST_W_4X(128,__Vtemp_68,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(108, 3456, __Vtemp_69, vlSelfRef.__PVT__status_field_req_nxt, 0x360U, 108);
        VL_AND_W(4, __Vtemp_70, __Vtemp_68, __Vtemp_69);
        VL_ASSIGNSEL_WW(3456,108,0x360U, vlSelfRef.__Vdly__status_field_req, __Vtemp_70);
        VL_ASSIGNSEL_WI(512,16,0x80U, vlSelfRef.__Vdly__status_field_retry_ph3, 
                        (0xffffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 0x80U, 16)));
    } else {
        VL_CONST_W_1X(136,__Vtemp_71,0x00000000);
        VL_ASSIGNSEL_WW(4352,136,0x440U, vlSelfRef.__Vdly__status_field_common, __Vtemp_71);
        VL_CONST_W_1X(108,__Vtemp_72,0x00000000);
        VL_ASSIGNSEL_WW(3456,108,0x360U, vlSelfRef.__Vdly__status_field_req, __Vtemp_72);
        VL_ASSIGNSEL_WI(512,16,0x80U, vlSelfRef.__Vdly__status_field_retry_ph3, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_73,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(136, 4352, __Vtemp_74, vlSelfRef.__PVT__status_field_common_nxt, 0x4c8U, 136);
        VL_AND_W(5, __Vtemp_75, __Vtemp_73, __Vtemp_74);
        VL_ASSIGNSEL_WW(4352,136,0x4c8U, vlSelfRef.__Vdly__status_field_common, __Vtemp_75);
        VL_CONST_W_4X(128,__Vtemp_76,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(108, 3456, __Vtemp_77, vlSelfRef.__PVT__status_field_req_nxt, 0x3ccU, 108);
        VL_AND_W(4, __Vtemp_78, __Vtemp_76, __Vtemp_77);
        VL_ASSIGNSEL_WW(3456,108,0x3ccU, vlSelfRef.__Vdly__status_field_req, __Vtemp_78);
        VL_ASSIGNSEL_WI(512,16,0x90U, vlSelfRef.__Vdly__status_field_retry_ph3, 
                        (0xffffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 0x90U, 16)));
    } else {
        VL_CONST_W_1X(136,__Vtemp_79,0x00000000);
        VL_ASSIGNSEL_WW(4352,136,0x4c8U, vlSelfRef.__Vdly__status_field_common, __Vtemp_79);
        VL_CONST_W_1X(108,__Vtemp_80,0x00000000);
        VL_ASSIGNSEL_WW(3456,108,0x3ccU, vlSelfRef.__Vdly__status_field_req, __Vtemp_80);
        VL_ASSIGNSEL_WI(512,16,0x90U, vlSelfRef.__Vdly__status_field_retry_ph3, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_81,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(136, 4352, __Vtemp_82, vlSelfRef.__PVT__status_field_common_nxt, 0x550U, 136);
        VL_AND_W(5, __Vtemp_83, __Vtemp_81, __Vtemp_82);
        VL_ASSIGNSEL_WW(4352,136,0x550U, vlSelfRef.__Vdly__status_field_common, __Vtemp_83);
        VL_CONST_W_4X(128,__Vtemp_84,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(108, 3456, __Vtemp_85, vlSelfRef.__PVT__status_field_req_nxt, 0x438U, 108);
        VL_AND_W(4, __Vtemp_86, __Vtemp_84, __Vtemp_85);
        VL_ASSIGNSEL_WW(3456,108,0x438U, vlSelfRef.__Vdly__status_field_req, __Vtemp_86);
        VL_ASSIGNSEL_WI(512,16,0xa0U, vlSelfRef.__Vdly__status_field_retry_ph3, 
                        (0xffffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 0xa0U, 16)));
    } else {
        VL_CONST_W_1X(136,__Vtemp_87,0x00000000);
        VL_ASSIGNSEL_WW(4352,136,0x550U, vlSelfRef.__Vdly__status_field_common, __Vtemp_87);
        VL_CONST_W_1X(108,__Vtemp_88,0x00000000);
        VL_ASSIGNSEL_WW(3456,108,0x438U, vlSelfRef.__Vdly__status_field_req, __Vtemp_88);
        VL_ASSIGNSEL_WI(512,16,0xa0U, vlSelfRef.__Vdly__status_field_retry_ph3, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_89,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(136, 4352, __Vtemp_90, vlSelfRef.__PVT__status_field_common_nxt, 0x5d8U, 136);
        VL_AND_W(5, __Vtemp_91, __Vtemp_89, __Vtemp_90);
        VL_ASSIGNSEL_WW(4352,136,0x5d8U, vlSelfRef.__Vdly__status_field_common, __Vtemp_91);
        VL_CONST_W_4X(128,__Vtemp_92,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(108, 3456, __Vtemp_93, vlSelfRef.__PVT__status_field_req_nxt, 0x4a4U, 108);
        VL_AND_W(4, __Vtemp_94, __Vtemp_92, __Vtemp_93);
        VL_ASSIGNSEL_WW(3456,108,0x4a4U, vlSelfRef.__Vdly__status_field_req, __Vtemp_94);
        VL_ASSIGNSEL_WI(512,16,0xb0U, vlSelfRef.__Vdly__status_field_retry_ph3, 
                        (0xffffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 0xb0U, 16)));
    } else {
        VL_CONST_W_1X(136,__Vtemp_95,0x00000000);
        VL_ASSIGNSEL_WW(4352,136,0x5d8U, vlSelfRef.__Vdly__status_field_common, __Vtemp_95);
        VL_CONST_W_1X(108,__Vtemp_96,0x00000000);
        VL_ASSIGNSEL_WW(3456,108,0x4a4U, vlSelfRef.__Vdly__status_field_req, __Vtemp_96);
        VL_ASSIGNSEL_WI(512,16,0xb0U, vlSelfRef.__Vdly__status_field_retry_ph3, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_97,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(136, 4352, __Vtemp_98, vlSelfRef.__PVT__status_field_common_nxt, 0x660U, 136);
        VL_AND_W(5, __Vtemp_99, __Vtemp_97, __Vtemp_98);
        VL_ASSIGNSEL_WW(4352,136,0x660U, vlSelfRef.__Vdly__status_field_common, __Vtemp_99);
        VL_CONST_W_4X(128,__Vtemp_100,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(108, 3456, __Vtemp_101, vlSelfRef.__PVT__status_field_req_nxt, 0x510U, 108);
        VL_AND_W(4, __Vtemp_102, __Vtemp_100, __Vtemp_101);
        VL_ASSIGNSEL_WW(3456,108,0x510U, vlSelfRef.__Vdly__status_field_req, __Vtemp_102);
        VL_ASSIGNSEL_WI(512,16,0xc0U, vlSelfRef.__Vdly__status_field_retry_ph3, 
                        (0xffffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 0xc0U, 16)));
    } else {
        VL_CONST_W_1X(136,__Vtemp_103,0x00000000);
        VL_ASSIGNSEL_WW(4352,136,0x660U, vlSelfRef.__Vdly__status_field_common, __Vtemp_103);
        VL_CONST_W_1X(108,__Vtemp_104,0x00000000);
        VL_ASSIGNSEL_WW(3456,108,0x510U, vlSelfRef.__Vdly__status_field_req, __Vtemp_104);
        VL_ASSIGNSEL_WI(512,16,0xc0U, vlSelfRef.__Vdly__status_field_retry_ph3, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_105,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(136, 4352, __Vtemp_106, vlSelfRef.__PVT__status_field_common_nxt, 0x6e8U, 136);
        VL_AND_W(5, __Vtemp_107, __Vtemp_105, __Vtemp_106);
        VL_ASSIGNSEL_WW(4352,136,0x6e8U, vlSelfRef.__Vdly__status_field_common, __Vtemp_107);
        VL_CONST_W_4X(128,__Vtemp_108,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(108, 3456, __Vtemp_109, vlSelfRef.__PVT__status_field_req_nxt, 0x57cU, 108);
        VL_AND_W(4, __Vtemp_110, __Vtemp_108, __Vtemp_109);
        VL_ASSIGNSEL_WW(3456,108,0x57cU, vlSelfRef.__Vdly__status_field_req, __Vtemp_110);
        VL_ASSIGNSEL_WI(512,16,0xd0U, vlSelfRef.__Vdly__status_field_retry_ph3, 
                        (0xffffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 0xd0U, 16)));
    } else {
        VL_CONST_W_1X(136,__Vtemp_111,0x00000000);
        VL_ASSIGNSEL_WW(4352,136,0x6e8U, vlSelfRef.__Vdly__status_field_common, __Vtemp_111);
        VL_CONST_W_1X(108,__Vtemp_112,0x00000000);
        VL_ASSIGNSEL_WW(3456,108,0x57cU, vlSelfRef.__Vdly__status_field_req, __Vtemp_112);
        VL_ASSIGNSEL_WI(512,16,0xd0U, vlSelfRef.__Vdly__status_field_retry_ph3, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_113,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(136, 4352, __Vtemp_114, vlSelfRef.__PVT__status_field_common_nxt, 0x770U, 136);
        VL_AND_W(5, __Vtemp_115, __Vtemp_113, __Vtemp_114);
        VL_ASSIGNSEL_WW(4352,136,0x770U, vlSelfRef.__Vdly__status_field_common, __Vtemp_115);
        VL_CONST_W_4X(128,__Vtemp_116,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(108, 3456, __Vtemp_117, vlSelfRef.__PVT__status_field_req_nxt, 0x5e8U, 108);
        VL_AND_W(4, __Vtemp_118, __Vtemp_116, __Vtemp_117);
        VL_ASSIGNSEL_WW(3456,108,0x5e8U, vlSelfRef.__Vdly__status_field_req, __Vtemp_118);
        VL_ASSIGNSEL_WI(512,16,0xe0U, vlSelfRef.__Vdly__status_field_retry_ph3, 
                        (0xffffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 0xe0U, 16)));
    } else {
        VL_CONST_W_1X(136,__Vtemp_119,0x00000000);
        VL_ASSIGNSEL_WW(4352,136,0x770U, vlSelfRef.__Vdly__status_field_common, __Vtemp_119);
        VL_CONST_W_1X(108,__Vtemp_120,0x00000000);
        VL_ASSIGNSEL_WW(3456,108,0x5e8U, vlSelfRef.__Vdly__status_field_req, __Vtemp_120);
        VL_ASSIGNSEL_WI(512,16,0xe0U, vlSelfRef.__Vdly__status_field_retry_ph3, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_121,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(136, 4352, __Vtemp_122, vlSelfRef.__PVT__status_field_common_nxt, 0x7f8U, 136);
        VL_AND_W(5, __Vtemp_123, __Vtemp_121, __Vtemp_122);
        VL_ASSIGNSEL_WW(4352,136,0x7f8U, vlSelfRef.__Vdly__status_field_common, __Vtemp_123);
        VL_CONST_W_4X(128,__Vtemp_124,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(108, 3456, __Vtemp_125, vlSelfRef.__PVT__status_field_req_nxt, 0x654U, 108);
        VL_AND_W(4, __Vtemp_126, __Vtemp_124, __Vtemp_125);
        VL_ASSIGNSEL_WW(3456,108,0x654U, vlSelfRef.__Vdly__status_field_req, __Vtemp_126);
        VL_ASSIGNSEL_WI(512,16,0xf0U, vlSelfRef.__Vdly__status_field_retry_ph3, 
                        (0xffffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 0xf0U, 16)));
    } else {
        VL_CONST_W_1X(136,__Vtemp_127,0x00000000);
        VL_ASSIGNSEL_WW(4352,136,0x7f8U, vlSelfRef.__Vdly__status_field_common, __Vtemp_127);
        VL_CONST_W_1X(108,__Vtemp_128,0x00000000);
        VL_ASSIGNSEL_WW(3456,108,0x654U, vlSelfRef.__Vdly__status_field_req, __Vtemp_128);
        VL_ASSIGNSEL_WI(512,16,0xf0U, vlSelfRef.__Vdly__status_field_retry_ph3, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_129,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(136, 4352, __Vtemp_130, vlSelfRef.__PVT__status_field_common_nxt, 0x880U, 136);
        VL_AND_W(5, __Vtemp_131, __Vtemp_129, __Vtemp_130);
        VL_ASSIGNSEL_WW(4352,136,0x880U, vlSelfRef.__Vdly__status_field_common, __Vtemp_131);
        VL_CONST_W_4X(128,__Vtemp_132,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(108, 3456, __Vtemp_133, vlSelfRef.__PVT__status_field_req_nxt, 0x6c0U, 108);
        VL_AND_W(4, __Vtemp_134, __Vtemp_132, __Vtemp_133);
        VL_ASSIGNSEL_WW(3456,108,0x6c0U, vlSelfRef.__Vdly__status_field_req, __Vtemp_134);
        VL_ASSIGNSEL_WI(512,16,0x100U, vlSelfRef.__Vdly__status_field_retry_ph3, 
                        (0xffffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 0x100U, 16)));
    } else {
        VL_CONST_W_1X(136,__Vtemp_135,0x00000000);
        VL_ASSIGNSEL_WW(4352,136,0x880U, vlSelfRef.__Vdly__status_field_common, __Vtemp_135);
        VL_CONST_W_1X(108,__Vtemp_136,0x00000000);
        VL_ASSIGNSEL_WW(3456,108,0x6c0U, vlSelfRef.__Vdly__status_field_req, __Vtemp_136);
        VL_ASSIGNSEL_WI(512,16,0x100U, vlSelfRef.__Vdly__status_field_retry_ph3, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_137,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(136, 4352, __Vtemp_138, vlSelfRef.__PVT__status_field_common_nxt, 0x908U, 136);
        VL_AND_W(5, __Vtemp_139, __Vtemp_137, __Vtemp_138);
        VL_ASSIGNSEL_WW(4352,136,0x908U, vlSelfRef.__Vdly__status_field_common, __Vtemp_139);
        VL_CONST_W_4X(128,__Vtemp_140,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(108, 3456, __Vtemp_141, vlSelfRef.__PVT__status_field_req_nxt, 0x72cU, 108);
        VL_AND_W(4, __Vtemp_142, __Vtemp_140, __Vtemp_141);
        VL_ASSIGNSEL_WW(3456,108,0x72cU, vlSelfRef.__Vdly__status_field_req, __Vtemp_142);
        VL_ASSIGNSEL_WI(512,16,0x110U, vlSelfRef.__Vdly__status_field_retry_ph3, 
                        (0xffffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 0x110U, 16)));
    } else {
        VL_CONST_W_1X(136,__Vtemp_143,0x00000000);
        VL_ASSIGNSEL_WW(4352,136,0x908U, vlSelfRef.__Vdly__status_field_common, __Vtemp_143);
        VL_CONST_W_1X(108,__Vtemp_144,0x00000000);
        VL_ASSIGNSEL_WW(3456,108,0x72cU, vlSelfRef.__Vdly__status_field_req, __Vtemp_144);
        VL_ASSIGNSEL_WI(512,16,0x110U, vlSelfRef.__Vdly__status_field_retry_ph3, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_145,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(136, 4352, __Vtemp_146, vlSelfRef.__PVT__status_field_common_nxt, 0x990U, 136);
        VL_AND_W(5, __Vtemp_147, __Vtemp_145, __Vtemp_146);
        VL_ASSIGNSEL_WW(4352,136,0x990U, vlSelfRef.__Vdly__status_field_common, __Vtemp_147);
        VL_CONST_W_4X(128,__Vtemp_148,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(108, 3456, __Vtemp_149, vlSelfRef.__PVT__status_field_req_nxt, 0x798U, 108);
        VL_AND_W(4, __Vtemp_150, __Vtemp_148, __Vtemp_149);
        VL_ASSIGNSEL_WW(3456,108,0x798U, vlSelfRef.__Vdly__status_field_req, __Vtemp_150);
        VL_ASSIGNSEL_WI(512,16,0x120U, vlSelfRef.__Vdly__status_field_retry_ph3, 
                        (0xffffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 0x120U, 16)));
    } else {
        VL_CONST_W_1X(136,__Vtemp_151,0x00000000);
        VL_ASSIGNSEL_WW(4352,136,0x990U, vlSelfRef.__Vdly__status_field_common, __Vtemp_151);
        VL_CONST_W_1X(108,__Vtemp_152,0x00000000);
        VL_ASSIGNSEL_WW(3456,108,0x798U, vlSelfRef.__Vdly__status_field_req, __Vtemp_152);
        VL_ASSIGNSEL_WI(512,16,0x120U, vlSelfRef.__Vdly__status_field_retry_ph3, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_153,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(136, 4352, __Vtemp_154, vlSelfRef.__PVT__status_field_common_nxt, 0xa18U, 136);
        VL_AND_W(5, __Vtemp_155, __Vtemp_153, __Vtemp_154);
        VL_ASSIGNSEL_WW(4352,136,0xa18U, vlSelfRef.__Vdly__status_field_common, __Vtemp_155);
        VL_CONST_W_4X(128,__Vtemp_156,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(108, 3456, __Vtemp_157, vlSelfRef.__PVT__status_field_req_nxt, 0x804U, 108);
        VL_AND_W(4, __Vtemp_158, __Vtemp_156, __Vtemp_157);
        VL_ASSIGNSEL_WW(3456,108,0x804U, vlSelfRef.__Vdly__status_field_req, __Vtemp_158);
        VL_ASSIGNSEL_WI(512,16,0x130U, vlSelfRef.__Vdly__status_field_retry_ph3, 
                        (0xffffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 0x130U, 16)));
    } else {
        VL_CONST_W_1X(136,__Vtemp_159,0x00000000);
        VL_ASSIGNSEL_WW(4352,136,0xa18U, vlSelfRef.__Vdly__status_field_common, __Vtemp_159);
        VL_CONST_W_1X(108,__Vtemp_160,0x00000000);
        VL_ASSIGNSEL_WW(3456,108,0x804U, vlSelfRef.__Vdly__status_field_req, __Vtemp_160);
        VL_ASSIGNSEL_WI(512,16,0x130U, vlSelfRef.__Vdly__status_field_retry_ph3, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_161,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(136, 4352, __Vtemp_162, vlSelfRef.__PVT__status_field_common_nxt, 0xaa0U, 136);
        VL_AND_W(5, __Vtemp_163, __Vtemp_161, __Vtemp_162);
        VL_ASSIGNSEL_WW(4352,136,0xaa0U, vlSelfRef.__Vdly__status_field_common, __Vtemp_163);
        VL_CONST_W_4X(128,__Vtemp_164,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(108, 3456, __Vtemp_165, vlSelfRef.__PVT__status_field_req_nxt, 0x870U, 108);
        VL_AND_W(4, __Vtemp_166, __Vtemp_164, __Vtemp_165);
        VL_ASSIGNSEL_WW(3456,108,0x870U, vlSelfRef.__Vdly__status_field_req, __Vtemp_166);
        VL_ASSIGNSEL_WI(512,16,0x140U, vlSelfRef.__Vdly__status_field_retry_ph3, 
                        (0xffffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 0x140U, 16)));
    } else {
        VL_CONST_W_1X(136,__Vtemp_167,0x00000000);
        VL_ASSIGNSEL_WW(4352,136,0xaa0U, vlSelfRef.__Vdly__status_field_common, __Vtemp_167);
        VL_CONST_W_1X(108,__Vtemp_168,0x00000000);
        VL_ASSIGNSEL_WW(3456,108,0x870U, vlSelfRef.__Vdly__status_field_req, __Vtemp_168);
        VL_ASSIGNSEL_WI(512,16,0x140U, vlSelfRef.__Vdly__status_field_retry_ph3, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_169,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(136, 4352, __Vtemp_170, vlSelfRef.__PVT__status_field_common_nxt, 0xb28U, 136);
        VL_AND_W(5, __Vtemp_171, __Vtemp_169, __Vtemp_170);
        VL_ASSIGNSEL_WW(4352,136,0xb28U, vlSelfRef.__Vdly__status_field_common, __Vtemp_171);
        VL_CONST_W_4X(128,__Vtemp_172,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(108, 3456, __Vtemp_173, vlSelfRef.__PVT__status_field_req_nxt, 0x8dcU, 108);
        VL_AND_W(4, __Vtemp_174, __Vtemp_172, __Vtemp_173);
        VL_ASSIGNSEL_WW(3456,108,0x8dcU, vlSelfRef.__Vdly__status_field_req, __Vtemp_174);
        VL_ASSIGNSEL_WI(512,16,0x150U, vlSelfRef.__Vdly__status_field_retry_ph3, 
                        (0xffffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 0x150U, 16)));
    } else {
        VL_CONST_W_1X(136,__Vtemp_175,0x00000000);
        VL_ASSIGNSEL_WW(4352,136,0xb28U, vlSelfRef.__Vdly__status_field_common, __Vtemp_175);
        VL_CONST_W_1X(108,__Vtemp_176,0x00000000);
        VL_ASSIGNSEL_WW(3456,108,0x8dcU, vlSelfRef.__Vdly__status_field_req, __Vtemp_176);
        VL_ASSIGNSEL_WI(512,16,0x150U, vlSelfRef.__Vdly__status_field_retry_ph3, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_177,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(136, 4352, __Vtemp_178, vlSelfRef.__PVT__status_field_common_nxt, 0xbb0U, 136);
        VL_AND_W(5, __Vtemp_179, __Vtemp_177, __Vtemp_178);
        VL_ASSIGNSEL_WW(4352,136,0xbb0U, vlSelfRef.__Vdly__status_field_common, __Vtemp_179);
        VL_CONST_W_4X(128,__Vtemp_180,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(108, 3456, __Vtemp_181, vlSelfRef.__PVT__status_field_req_nxt, 0x948U, 108);
        VL_AND_W(4, __Vtemp_182, __Vtemp_180, __Vtemp_181);
        VL_ASSIGNSEL_WW(3456,108,0x948U, vlSelfRef.__Vdly__status_field_req, __Vtemp_182);
        VL_ASSIGNSEL_WI(512,16,0x160U, vlSelfRef.__Vdly__status_field_retry_ph3, 
                        (0xffffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 0x160U, 16)));
    } else {
        VL_CONST_W_1X(136,__Vtemp_183,0x00000000);
        VL_ASSIGNSEL_WW(4352,136,0xbb0U, vlSelfRef.__Vdly__status_field_common, __Vtemp_183);
        VL_CONST_W_1X(108,__Vtemp_184,0x00000000);
        VL_ASSIGNSEL_WW(3456,108,0x948U, vlSelfRef.__Vdly__status_field_req, __Vtemp_184);
        VL_ASSIGNSEL_WI(512,16,0x160U, vlSelfRef.__Vdly__status_field_retry_ph3, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_185,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(136, 4352, __Vtemp_186, vlSelfRef.__PVT__status_field_common_nxt, 0xc38U, 136);
        VL_AND_W(5, __Vtemp_187, __Vtemp_185, __Vtemp_186);
        VL_ASSIGNSEL_WW(4352,136,0xc38U, vlSelfRef.__Vdly__status_field_common, __Vtemp_187);
        VL_CONST_W_4X(128,__Vtemp_188,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(108, 3456, __Vtemp_189, vlSelfRef.__PVT__status_field_req_nxt, 0x9b4U, 108);
        VL_AND_W(4, __Vtemp_190, __Vtemp_188, __Vtemp_189);
        VL_ASSIGNSEL_WW(3456,108,0x9b4U, vlSelfRef.__Vdly__status_field_req, __Vtemp_190);
        VL_ASSIGNSEL_WI(512,16,0x170U, vlSelfRef.__Vdly__status_field_retry_ph3, 
                        (0xffffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 0x170U, 16)));
    } else {
        VL_CONST_W_1X(136,__Vtemp_191,0x00000000);
        VL_ASSIGNSEL_WW(4352,136,0xc38U, vlSelfRef.__Vdly__status_field_common, __Vtemp_191);
        VL_CONST_W_1X(108,__Vtemp_192,0x00000000);
        VL_ASSIGNSEL_WW(3456,108,0x9b4U, vlSelfRef.__Vdly__status_field_req, __Vtemp_192);
        VL_ASSIGNSEL_WI(512,16,0x170U, vlSelfRef.__Vdly__status_field_retry_ph3, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_193,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(136, 4352, __Vtemp_194, vlSelfRef.__PVT__status_field_common_nxt, 0xcc0U, 136);
        VL_AND_W(5, __Vtemp_195, __Vtemp_193, __Vtemp_194);
        VL_ASSIGNSEL_WW(4352,136,0xcc0U, vlSelfRef.__Vdly__status_field_common, __Vtemp_195);
        VL_CONST_W_4X(128,__Vtemp_196,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(108, 3456, __Vtemp_197, vlSelfRef.__PVT__status_field_req_nxt, 0xa20U, 108);
        VL_AND_W(4, __Vtemp_198, __Vtemp_196, __Vtemp_197);
        VL_ASSIGNSEL_WW(3456,108,0xa20U, vlSelfRef.__Vdly__status_field_req, __Vtemp_198);
        VL_ASSIGNSEL_WI(512,16,0x180U, vlSelfRef.__Vdly__status_field_retry_ph3, 
                        (0xffffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 0x180U, 16)));
    } else {
        VL_CONST_W_1X(136,__Vtemp_199,0x00000000);
        VL_ASSIGNSEL_WW(4352,136,0xcc0U, vlSelfRef.__Vdly__status_field_common, __Vtemp_199);
        VL_CONST_W_1X(108,__Vtemp_200,0x00000000);
        VL_ASSIGNSEL_WW(3456,108,0xa20U, vlSelfRef.__Vdly__status_field_req, __Vtemp_200);
        VL_ASSIGNSEL_WI(512,16,0x180U, vlSelfRef.__Vdly__status_field_retry_ph3, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_201,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(136, 4352, __Vtemp_202, vlSelfRef.__PVT__status_field_common_nxt, 0xd48U, 136);
        VL_AND_W(5, __Vtemp_203, __Vtemp_201, __Vtemp_202);
        VL_ASSIGNSEL_WW(4352,136,0xd48U, vlSelfRef.__Vdly__status_field_common, __Vtemp_203);
        VL_CONST_W_4X(128,__Vtemp_204,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(108, 3456, __Vtemp_205, vlSelfRef.__PVT__status_field_req_nxt, 0xa8cU, 108);
        VL_AND_W(4, __Vtemp_206, __Vtemp_204, __Vtemp_205);
        VL_ASSIGNSEL_WW(3456,108,0xa8cU, vlSelfRef.__Vdly__status_field_req, __Vtemp_206);
        VL_ASSIGNSEL_WI(512,16,0x190U, vlSelfRef.__Vdly__status_field_retry_ph3, 
                        (0xffffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 0x190U, 16)));
    } else {
        VL_CONST_W_1X(136,__Vtemp_207,0x00000000);
        VL_ASSIGNSEL_WW(4352,136,0xd48U, vlSelfRef.__Vdly__status_field_common, __Vtemp_207);
        VL_CONST_W_1X(108,__Vtemp_208,0x00000000);
        VL_ASSIGNSEL_WW(3456,108,0xa8cU, vlSelfRef.__Vdly__status_field_req, __Vtemp_208);
        VL_ASSIGNSEL_WI(512,16,0x190U, vlSelfRef.__Vdly__status_field_retry_ph3, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_209,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(136, 4352, __Vtemp_210, vlSelfRef.__PVT__status_field_common_nxt, 0xdd0U, 136);
        VL_AND_W(5, __Vtemp_211, __Vtemp_209, __Vtemp_210);
        VL_ASSIGNSEL_WW(4352,136,0xdd0U, vlSelfRef.__Vdly__status_field_common, __Vtemp_211);
        VL_CONST_W_4X(128,__Vtemp_212,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(108, 3456, __Vtemp_213, vlSelfRef.__PVT__status_field_req_nxt, 0xaf8U, 108);
        VL_AND_W(4, __Vtemp_214, __Vtemp_212, __Vtemp_213);
        VL_ASSIGNSEL_WW(3456,108,0xaf8U, vlSelfRef.__Vdly__status_field_req, __Vtemp_214);
        VL_ASSIGNSEL_WI(512,16,0x1a0U, vlSelfRef.__Vdly__status_field_retry_ph3, 
                        (0xffffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 0x1a0U, 16)));
    } else {
        VL_CONST_W_1X(136,__Vtemp_215,0x00000000);
        VL_ASSIGNSEL_WW(4352,136,0xdd0U, vlSelfRef.__Vdly__status_field_common, __Vtemp_215);
        VL_CONST_W_1X(108,__Vtemp_216,0x00000000);
        VL_ASSIGNSEL_WW(3456,108,0xaf8U, vlSelfRef.__Vdly__status_field_req, __Vtemp_216);
        VL_ASSIGNSEL_WI(512,16,0x1a0U, vlSelfRef.__Vdly__status_field_retry_ph3, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_217,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(136, 4352, __Vtemp_218, vlSelfRef.__PVT__status_field_common_nxt, 0xe58U, 136);
        VL_AND_W(5, __Vtemp_219, __Vtemp_217, __Vtemp_218);
        VL_ASSIGNSEL_WW(4352,136,0xe58U, vlSelfRef.__Vdly__status_field_common, __Vtemp_219);
        VL_CONST_W_4X(128,__Vtemp_220,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(108, 3456, __Vtemp_221, vlSelfRef.__PVT__status_field_req_nxt, 0xb64U, 108);
        VL_AND_W(4, __Vtemp_222, __Vtemp_220, __Vtemp_221);
        VL_ASSIGNSEL_WW(3456,108,0xb64U, vlSelfRef.__Vdly__status_field_req, __Vtemp_222);
        VL_ASSIGNSEL_WI(512,16,0x1b0U, vlSelfRef.__Vdly__status_field_retry_ph3, 
                        (0xffffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 0x1b0U, 16)));
    } else {
        VL_CONST_W_1X(136,__Vtemp_223,0x00000000);
        VL_ASSIGNSEL_WW(4352,136,0xe58U, vlSelfRef.__Vdly__status_field_common, __Vtemp_223);
        VL_CONST_W_1X(108,__Vtemp_224,0x00000000);
        VL_ASSIGNSEL_WW(3456,108,0xb64U, vlSelfRef.__Vdly__status_field_req, __Vtemp_224);
        VL_ASSIGNSEL_WI(512,16,0x1b0U, vlSelfRef.__Vdly__status_field_retry_ph3, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_225,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(136, 4352, __Vtemp_226, vlSelfRef.__PVT__status_field_common_nxt, 0xee0U, 136);
        VL_AND_W(5, __Vtemp_227, __Vtemp_225, __Vtemp_226);
        VL_ASSIGNSEL_WW(4352,136,0xee0U, vlSelfRef.__Vdly__status_field_common, __Vtemp_227);
        VL_CONST_W_4X(128,__Vtemp_228,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(108, 3456, __Vtemp_229, vlSelfRef.__PVT__status_field_req_nxt, 0xbd0U, 108);
        VL_AND_W(4, __Vtemp_230, __Vtemp_228, __Vtemp_229);
        VL_ASSIGNSEL_WW(3456,108,0xbd0U, vlSelfRef.__Vdly__status_field_req, __Vtemp_230);
        VL_ASSIGNSEL_WI(512,16,0x1c0U, vlSelfRef.__Vdly__status_field_retry_ph3, 
                        (0xffffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 0x1c0U, 16)));
    } else {
        VL_CONST_W_1X(136,__Vtemp_231,0x00000000);
        VL_ASSIGNSEL_WW(4352,136,0xee0U, vlSelfRef.__Vdly__status_field_common, __Vtemp_231);
        VL_CONST_W_1X(108,__Vtemp_232,0x00000000);
        VL_ASSIGNSEL_WW(3456,108,0xbd0U, vlSelfRef.__Vdly__status_field_req, __Vtemp_232);
        VL_ASSIGNSEL_WI(512,16,0x1c0U, vlSelfRef.__Vdly__status_field_retry_ph3, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_233,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(136, 4352, __Vtemp_234, vlSelfRef.__PVT__status_field_common_nxt, 0xf68U, 136);
        VL_AND_W(5, __Vtemp_235, __Vtemp_233, __Vtemp_234);
        VL_ASSIGNSEL_WW(4352,136,0xf68U, vlSelfRef.__Vdly__status_field_common, __Vtemp_235);
        VL_CONST_W_4X(128,__Vtemp_236,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(108, 3456, __Vtemp_237, vlSelfRef.__PVT__status_field_req_nxt, 0xc3cU, 108);
        VL_AND_W(4, __Vtemp_238, __Vtemp_236, __Vtemp_237);
        VL_ASSIGNSEL_WW(3456,108,0xc3cU, vlSelfRef.__Vdly__status_field_req, __Vtemp_238);
        VL_ASSIGNSEL_WI(512,16,0x1d0U, vlSelfRef.__Vdly__status_field_retry_ph3, 
                        (0xffffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 0x1d0U, 16)));
    } else {
        VL_CONST_W_1X(136,__Vtemp_239,0x00000000);
        VL_ASSIGNSEL_WW(4352,136,0xf68U, vlSelfRef.__Vdly__status_field_common, __Vtemp_239);
        VL_CONST_W_1X(108,__Vtemp_240,0x00000000);
        VL_ASSIGNSEL_WW(3456,108,0xc3cU, vlSelfRef.__Vdly__status_field_req, __Vtemp_240);
        VL_ASSIGNSEL_WI(512,16,0x1d0U, vlSelfRef.__Vdly__status_field_retry_ph3, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_241,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(136, 4352, __Vtemp_242, vlSelfRef.__PVT__status_field_common_nxt, 0xff0U, 136);
        VL_AND_W(5, __Vtemp_243, __Vtemp_241, __Vtemp_242);
        VL_ASSIGNSEL_WW(4352,136,0xff0U, vlSelfRef.__Vdly__status_field_common, __Vtemp_243);
        VL_CONST_W_4X(128,__Vtemp_244,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(108, 3456, __Vtemp_245, vlSelfRef.__PVT__status_field_req_nxt, 0xca8U, 108);
        VL_AND_W(4, __Vtemp_246, __Vtemp_244, __Vtemp_245);
        VL_ASSIGNSEL_WW(3456,108,0xca8U, vlSelfRef.__Vdly__status_field_req, __Vtemp_246);
        VL_ASSIGNSEL_WI(512,16,0x1e0U, vlSelfRef.__Vdly__status_field_retry_ph3, 
                        (0xffffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 0x1e0U, 16)));
    } else {
        VL_CONST_W_1X(136,__Vtemp_247,0x00000000);
        VL_ASSIGNSEL_WW(4352,136,0xff0U, vlSelfRef.__Vdly__status_field_common, __Vtemp_247);
        VL_CONST_W_1X(108,__Vtemp_248,0x00000000);
        VL_ASSIGNSEL_WW(3456,108,0xca8U, vlSelfRef.__Vdly__status_field_req, __Vtemp_248);
        VL_ASSIGNSEL_WI(512,16,0x1e0U, vlSelfRef.__Vdly__status_field_retry_ph3, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_249,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(136, 4352, __Vtemp_250, vlSelfRef.__PVT__status_field_common_nxt, 0x1078U, 136);
        VL_AND_W(5, __Vtemp_251, __Vtemp_249, __Vtemp_250);
        VL_ASSIGNSEL_WW(4352,136,0x1078U, vlSelfRef.__Vdly__status_field_common, __Vtemp_251);
        VL_CONST_W_4X(128,__Vtemp_252,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(108, 3456, __Vtemp_253, vlSelfRef.__PVT__status_field_req_nxt, 0xd14U, 108);
        VL_AND_W(4, __Vtemp_254, __Vtemp_252, __Vtemp_253);
        VL_ASSIGNSEL_WW(3456,108,0xd14U, vlSelfRef.__Vdly__status_field_req, __Vtemp_254);
        VL_ASSIGNSEL_WI(512,16,0x1f0U, vlSelfRef.__Vdly__status_field_retry_ph3, 
                        (0xffffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 0x1f0U, 16)));
    } else {
        VL_CONST_W_1X(136,__Vtemp_255,0x00000000);
        VL_ASSIGNSEL_WW(4352,136,0x1078U, vlSelfRef.__Vdly__status_field_common, __Vtemp_255);
        VL_CONST_W_1X(108,__Vtemp_256,0x00000000);
        VL_ASSIGNSEL_WW(3456,108,0xd14U, vlSelfRef.__Vdly__status_field_req, __Vtemp_256);
        VL_ASSIGNSEL_WI(512,16,0x1f0U, vlSelfRef.__Vdly__status_field_retry_ph3, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        vlSelfRef.__Vdly__req_is_invalid_resperr_ph2 
            = vlSelfRef.__PVT__req_is_invalid_resperr_ph1;
        vlSelfRef.__Vdly__req_is_invalid_resperr_ph3 
            = vlSelfRef.__PVT__req_is_invalid_resperr_ph2;
        vlSelfRef.__Vdly__req_is_invalid_resperr_ph4 
            = vlSelfRef.__PVT__req_is_invalid_resperr_ph3;
    } else {
        vlSelfRef.__Vdly__req_is_invalid_resperr_ph2 = 0U;
        vlSelfRef.__Vdly__req_is_invalid_resperr_ph3 = 0U;
        vlSelfRef.__Vdly__req_is_invalid_resperr_ph4 = 0U;
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        vlSelfRef.__Vdly__colln_detected_ph3 = vlSelfRef.__PVT__colln_detected_ph2;
        vlSelfRef.__Vdly__colln_atom_detected_ph3 = vlSelfRef.__PVT__colln_atom_detected_ph2;
    } else {
        vlSelfRef.__Vdly__colln_detected_ph3 = 0U;
        vlSelfRef.__Vdly__colln_atom_detected_ph3 = 0U;
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNBIT_II(0U, vlSelfRef.__Vdly__colln_empty, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty_nxt), 0U)));
        VL_ASSIGNBIT_II(0U, vlSelfRef.__Vdly__colln_cmd_invalidate, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_invalidate_nxt), 0U)));
        VL_ASSIGNBIT_II(0U, vlSelfRef.__Vdly__colln_rdy_for_proc, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc_nxt), 0U)));
        VL_ASSIGNBIT_II(0U, vlSelfRef.__Vdly__colln_rdy_atom_block_rd, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_atom_block_rd_nxt), 0U)));
        VL_ASSIGNBIT_II(0U, vlSelfRef.__Vdly__colln_rdy_for_proc_lock, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc_lock_nxt), 0U)));
    } else {
        VL_ASSIGNBIT_IO(0U, vlSelfRef.__Vdly__colln_empty);
        VL_ASSIGNBIT_II(0U, vlSelfRef.__Vdly__colln_cmd_invalidate, 0U);
        VL_ASSIGNBIT_II(0U, vlSelfRef.__Vdly__colln_rdy_for_proc, 0U);
        VL_ASSIGNBIT_II(0U, vlSelfRef.__Vdly__colln_rdy_atom_block_rd, 0U);
        VL_ASSIGNBIT_II(0U, vlSelfRef.__Vdly__colln_rdy_for_proc_lock, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNBIT_II(1U, vlSelfRef.__Vdly__colln_empty, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty_nxt), 1U)));
        VL_ASSIGNBIT_II(1U, vlSelfRef.__Vdly__colln_cmd_invalidate, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_invalidate_nxt), 1U)));
        VL_ASSIGNBIT_II(1U, vlSelfRef.__Vdly__colln_rdy_for_proc, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc_nxt), 1U)));
        VL_ASSIGNBIT_II(1U, vlSelfRef.__Vdly__colln_rdy_atom_block_rd, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_atom_block_rd_nxt), 1U)));
        VL_ASSIGNBIT_II(1U, vlSelfRef.__Vdly__colln_rdy_for_proc_lock, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc_lock_nxt), 1U)));
    } else {
        VL_ASSIGNBIT_IO(1U, vlSelfRef.__Vdly__colln_empty);
        VL_ASSIGNBIT_II(1U, vlSelfRef.__Vdly__colln_cmd_invalidate, 0U);
        VL_ASSIGNBIT_II(1U, vlSelfRef.__Vdly__colln_rdy_for_proc, 0U);
        VL_ASSIGNBIT_II(1U, vlSelfRef.__Vdly__colln_rdy_atom_block_rd, 0U);
        VL_ASSIGNBIT_II(1U, vlSelfRef.__Vdly__colln_rdy_for_proc_lock, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNBIT_II(2U, vlSelfRef.__Vdly__colln_empty, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty_nxt), 2U)));
        VL_ASSIGNBIT_II(2U, vlSelfRef.__Vdly__colln_cmd_invalidate, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_invalidate_nxt), 2U)));
        VL_ASSIGNBIT_II(2U, vlSelfRef.__Vdly__colln_rdy_for_proc, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc_nxt), 2U)));
        VL_ASSIGNBIT_II(2U, vlSelfRef.__Vdly__colln_rdy_atom_block_rd, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_atom_block_rd_nxt), 2U)));
        VL_ASSIGNBIT_II(2U, vlSelfRef.__Vdly__colln_rdy_for_proc_lock, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc_lock_nxt), 2U)));
    } else {
        VL_ASSIGNBIT_IO(2U, vlSelfRef.__Vdly__colln_empty);
        VL_ASSIGNBIT_II(2U, vlSelfRef.__Vdly__colln_cmd_invalidate, 0U);
        VL_ASSIGNBIT_II(2U, vlSelfRef.__Vdly__colln_rdy_for_proc, 0U);
        VL_ASSIGNBIT_II(2U, vlSelfRef.__Vdly__colln_rdy_atom_block_rd, 0U);
        VL_ASSIGNBIT_II(2U, vlSelfRef.__Vdly__colln_rdy_for_proc_lock, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNBIT_II(3U, vlSelfRef.__Vdly__colln_empty, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty_nxt), 3U)));
        VL_ASSIGNBIT_II(3U, vlSelfRef.__Vdly__colln_cmd_invalidate, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_invalidate_nxt), 3U)));
        VL_ASSIGNBIT_II(3U, vlSelfRef.__Vdly__colln_rdy_for_proc, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc_nxt), 3U)));
        VL_ASSIGNBIT_II(3U, vlSelfRef.__Vdly__colln_rdy_atom_block_rd, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_atom_block_rd_nxt), 3U)));
        VL_ASSIGNBIT_II(3U, vlSelfRef.__Vdly__colln_rdy_for_proc_lock, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc_lock_nxt), 3U)));
    } else {
        VL_ASSIGNBIT_IO(3U, vlSelfRef.__Vdly__colln_empty);
        VL_ASSIGNBIT_II(3U, vlSelfRef.__Vdly__colln_cmd_invalidate, 0U);
        VL_ASSIGNBIT_II(3U, vlSelfRef.__Vdly__colln_rdy_for_proc, 0U);
        VL_ASSIGNBIT_II(3U, vlSelfRef.__Vdly__colln_rdy_atom_block_rd, 0U);
        VL_ASSIGNBIT_II(3U, vlSelfRef.__Vdly__colln_rdy_for_proc_lock, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNBIT_II(4U, vlSelfRef.__Vdly__colln_empty, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty_nxt), 4U)));
        VL_ASSIGNBIT_II(4U, vlSelfRef.__Vdly__colln_cmd_invalidate, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_invalidate_nxt), 4U)));
        VL_ASSIGNBIT_II(4U, vlSelfRef.__Vdly__colln_rdy_for_proc, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc_nxt), 4U)));
        VL_ASSIGNBIT_II(4U, vlSelfRef.__Vdly__colln_rdy_atom_block_rd, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_atom_block_rd_nxt), 4U)));
        VL_ASSIGNBIT_II(4U, vlSelfRef.__Vdly__colln_rdy_for_proc_lock, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc_lock_nxt), 4U)));
    } else {
        VL_ASSIGNBIT_IO(4U, vlSelfRef.__Vdly__colln_empty);
        VL_ASSIGNBIT_II(4U, vlSelfRef.__Vdly__colln_cmd_invalidate, 0U);
        VL_ASSIGNBIT_II(4U, vlSelfRef.__Vdly__colln_rdy_for_proc, 0U);
        VL_ASSIGNBIT_II(4U, vlSelfRef.__Vdly__colln_rdy_atom_block_rd, 0U);
        VL_ASSIGNBIT_II(4U, vlSelfRef.__Vdly__colln_rdy_for_proc_lock, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNBIT_II(5U, vlSelfRef.__Vdly__colln_empty, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty_nxt), 5U)));
        VL_ASSIGNBIT_II(5U, vlSelfRef.__Vdly__colln_cmd_invalidate, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_invalidate_nxt), 5U)));
        VL_ASSIGNBIT_II(5U, vlSelfRef.__Vdly__colln_rdy_for_proc, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc_nxt), 5U)));
        VL_ASSIGNBIT_II(5U, vlSelfRef.__Vdly__colln_rdy_atom_block_rd, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_atom_block_rd_nxt), 5U)));
        VL_ASSIGNBIT_II(5U, vlSelfRef.__Vdly__colln_rdy_for_proc_lock, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc_lock_nxt), 5U)));
    } else {
        VL_ASSIGNBIT_IO(5U, vlSelfRef.__Vdly__colln_empty);
        VL_ASSIGNBIT_II(5U, vlSelfRef.__Vdly__colln_cmd_invalidate, 0U);
        VL_ASSIGNBIT_II(5U, vlSelfRef.__Vdly__colln_rdy_for_proc, 0U);
        VL_ASSIGNBIT_II(5U, vlSelfRef.__Vdly__colln_rdy_atom_block_rd, 0U);
        VL_ASSIGNBIT_II(5U, vlSelfRef.__Vdly__colln_rdy_for_proc_lock, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__Vdly__colln_empty, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty_nxt), 6U)));
        VL_ASSIGNBIT_II(6U, vlSelfRef.__Vdly__colln_cmd_invalidate, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_invalidate_nxt), 6U)));
        VL_ASSIGNBIT_II(6U, vlSelfRef.__Vdly__colln_rdy_for_proc, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc_nxt), 6U)));
        VL_ASSIGNBIT_II(6U, vlSelfRef.__Vdly__colln_rdy_atom_block_rd, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_atom_block_rd_nxt), 6U)));
        VL_ASSIGNBIT_II(6U, vlSelfRef.__Vdly__colln_rdy_for_proc_lock, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc_lock_nxt), 6U)));
    } else {
        VL_ASSIGNBIT_IO(6U, vlSelfRef.__Vdly__colln_empty);
        VL_ASSIGNBIT_II(6U, vlSelfRef.__Vdly__colln_cmd_invalidate, 0U);
        VL_ASSIGNBIT_II(6U, vlSelfRef.__Vdly__colln_rdy_for_proc, 0U);
        VL_ASSIGNBIT_II(6U, vlSelfRef.__Vdly__colln_rdy_atom_block_rd, 0U);
        VL_ASSIGNBIT_II(6U, vlSelfRef.__Vdly__colln_rdy_for_proc_lock, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNBIT_II(7U, vlSelfRef.__Vdly__colln_empty, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty_nxt), 7U)));
        VL_ASSIGNBIT_II(7U, vlSelfRef.__Vdly__colln_cmd_invalidate, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_invalidate_nxt), 7U)));
        VL_ASSIGNBIT_II(7U, vlSelfRef.__Vdly__colln_rdy_for_proc, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc_nxt), 7U)));
        VL_ASSIGNBIT_II(7U, vlSelfRef.__Vdly__colln_rdy_atom_block_rd, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_atom_block_rd_nxt), 7U)));
        VL_ASSIGNBIT_II(7U, vlSelfRef.__Vdly__colln_rdy_for_proc_lock, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc_lock_nxt), 7U)));
    } else {
        VL_ASSIGNBIT_IO(7U, vlSelfRef.__Vdly__colln_empty);
        VL_ASSIGNBIT_II(7U, vlSelfRef.__Vdly__colln_cmd_invalidate, 0U);
        VL_ASSIGNBIT_II(7U, vlSelfRef.__Vdly__colln_rdy_for_proc, 0U);
        VL_ASSIGNBIT_II(7U, vlSelfRef.__Vdly__colln_rdy_atom_block_rd, 0U);
        VL_ASSIGNBIT_II(7U, vlSelfRef.__Vdly__colln_rdy_for_proc_lock, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGN_W(108,vlSelfRef.__Vdly__rddata_statreg_req_ph4, vlSelfRef.__PVT__rddata_statreg_req_ph3);
        VL_ASSIGN_W(136,vlSelfRef.__Vdly__rddata_statcommon_rsp_ph4, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3);
        vlSelfRef.__Vdly__cache_index_wr_rsp = vlSelfRef.__PVT__cache_index_wr_rsp_nxt;
        vlSelfRef.__Vdly__cache_tag_wr_rsp = vlSelfRef.__PVT__cache_tag_wr_rsp_nxt;
        vlSelfRef.__Vdly__cache_index_wr_req = vlSelfRef.__PVT__cache_index_wr_req_nxt;
        vlSelfRef.__Vdly__cache_tag_wr_req = vlSelfRef.__PVT__cache_tag_wr_req_nxt;
        vlSelfRef.__Vdly__wrdata_cache_ph5_rsp = vlSelfRef.__PVT__wrdata_cache_ph4_rsp;
        vlSelfRef.__Vdly__wrdata_cache_ph6_rsp = vlSelfRef.__PVT__wrdata_cache_ph5_rsp;
        vlSelfRef.__Vdly__wrdata_cache_ph5_req = vlSelfRef.__PVT__wrdata_cache_ph4_req;
        vlSelfRef.__Vdly__wrdata_cache_ph6_req = vlSelfRef.__PVT__wrdata_cache_ph5_req;
        vlSelfRef.__Vdly__wrdata_cache_ph7final_req 
            = vlSelfRef.__PVT__wrdata_cache_ph6final_req;
        vlSelfRef.__Vdly__wren_cache_vector_ph4_rsp 
            = vlSelfRef.__PVT__wren_cache_vector_ph4_rsp_nxt;
        vlSelfRef.__Vdly__wren_cache_vector_ph5_rsp 
            = vlSelfRef.__PVT__wren_cache_vector_ph4_rsp;
        vlSelfRef.__Vdly__wren_cache_vector_ph6rsp 
            = vlSelfRef.__PVT__wren_cache_vector_ph6rsp_nxt;
        vlSelfRef.__Vdly__wren_cache_vector_ph4_req 
            = vlSelfRef.__PVT__wren_cache_vector_ph4_req_nxt;
        vlSelfRef.__Vdly__wren_cache_vector_ph5_req 
            = vlSelfRef.__PVT__wren_cache_vector_ph4_req;
        vlSelfRef.__Vdly__wren_cache_vector_ph6_req 
            = vlSelfRef.__PVT__wren_cache_vector_ph5_req;
        vlSelfRef.__Vdly__wren_cache_vector_ph7_req 
            = vlSelfRef.__PVT__wren_cache_vector_ph6_req;
        vlSelfRef.__Vdly__cmd_ph4_23_18_rsp = vlSelfRef.__PVT__cmd_ph4_23_18_rsp_nxt;
        vlSelfRef.__Vdly__cmd_ph5_23_18_rsp = vlSelfRef.__PVT__cmd_ph4_23_18_rsp;
        vlSelfRef.__Vdly__cmd_ph4_23_18_req = vlSelfRef.__PVT__cmd_ph4_23_18_req_nxt;
        vlSelfRef.__Vdly__cmd_ph5_23_18_req = vlSelfRef.__PVT__cmd_ph4_23_18_req;
        vlSelfRef.__Vdly__cmd_ph6_23_18_req = vlSelfRef.__PVT__cmd_ph5_23_18_req;
        vlSelfRef.__Vdly__ownerp_id_ph6_req = vlSelfRef.__PVT__ownerp_id_ph6_req_nxt;
        vlSelfRef.__Vdly__ownerp_id_ph6_rsp = vlSelfRef.__PVT__ownerp_id_ph6_rsp_nxt;
        vlSelfRef.__Vdly__index_statusreg_ph4 = vlSelfRef.__PVT__index_statusreg_ph3;
        vlSelfRef.__Vdly__new_share_vect_ph4_rsp = vlSelfRef.__PVT__new_share_vect_ph3_rsp;
        vlSelfRef.__Vdly__new_ownerp_id_ph4_rsp = vlSelfRef.__PVT__new_ownerp_id_ph3_rsp;
        vlSelfRef.__Vdly__new_cache_st_ph4_rsp = vlSelfRef.__PVT__new_cache_st_ph3_rsp;
        vlSelfRef.__Vdly__new_share_vect_ph4_req = vlSelfRef.__PVT__new_share_vect_ph3_req;
        vlSelfRef.__Vdly__new_ownerp_id_ph4_req = vlSelfRef.__PVT__new_ownerp_id_ph3_req;
        vlSelfRef.__Vdly__new_cache_st_ph4_req = vlSelfRef.__PVT__new_cache_st_ph3_req;
        vlSelfRef.__Vdly__cmd_ph5_req_addr = vlSelfRef.__PVT__cmd_ph5_req_addr_nxt;
        vlSelfRef.__Vdly__cmd_ph6_req_addr = vlSelfRef.__PVT__cmd_ph5_req_addr;
        vlSelfRef.__Vdly__pshare_cnt_ph6_req = vlSelfRef.__PVT__pshare_cnt_ph5_req;
        vlSelfRef.__Vdly__pshare_cnt_ph6_rsp = vlSelfRef.__PVT__pshare_cnt_ph5_rsp;
    } else {
        VL_CONST_W_1X(108,vlSelfRef.__Vdly__rddata_statreg_req_ph4,0x00000000);
        VL_CONST_W_1X(136,vlSelfRef.__Vdly__rddata_statcommon_rsp_ph4,0x00000000);
        vlSelfRef.__Vdly__cache_index_wr_rsp = 0U;
        vlSelfRef.__Vdly__cache_tag_wr_rsp = 0ULL;
        vlSelfRef.__Vdly__cache_index_wr_req = 0U;
        vlSelfRef.__Vdly__cache_tag_wr_req = 0ULL;
        vlSelfRef.__Vdly__wrdata_cache_ph5_rsp = 0U;
        vlSelfRef.__Vdly__wrdata_cache_ph6_rsp = 0U;
        vlSelfRef.__Vdly__wrdata_cache_ph5_req = 0U;
        vlSelfRef.__Vdly__wrdata_cache_ph6_req = 0U;
        vlSelfRef.__Vdly__wrdata_cache_ph7final_req = 0U;
        vlSelfRef.__Vdly__wren_cache_vector_ph4_rsp = 0U;
        vlSelfRef.__Vdly__wren_cache_vector_ph5_rsp = 0U;
        vlSelfRef.__Vdly__wren_cache_vector_ph6rsp = 0U;
        vlSelfRef.__Vdly__wren_cache_vector_ph4_req = 0U;
        vlSelfRef.__Vdly__wren_cache_vector_ph5_req = 0U;
        vlSelfRef.__Vdly__wren_cache_vector_ph6_req = 0U;
        vlSelfRef.__Vdly__wren_cache_vector_ph7_req = 0U;
        vlSelfRef.__Vdly__cmd_ph4_23_18_rsp = 0U;
        vlSelfRef.__Vdly__cmd_ph5_23_18_rsp = 0U;
        vlSelfRef.__Vdly__cmd_ph4_23_18_req = 0U;
        vlSelfRef.__Vdly__cmd_ph5_23_18_req = 0U;
        vlSelfRef.__Vdly__cmd_ph6_23_18_req = 0U;
        vlSelfRef.__Vdly__ownerp_id_ph6_req = 0U;
        vlSelfRef.__Vdly__ownerp_id_ph6_rsp = 0U;
        vlSelfRef.__Vdly__index_statusreg_ph4 = 0U;
        vlSelfRef.__Vdly__new_share_vect_ph4_rsp = 0U;
        vlSelfRef.__Vdly__new_ownerp_id_ph4_rsp = 0U;
        vlSelfRef.__Vdly__new_cache_st_ph4_rsp = 0U;
        vlSelfRef.__Vdly__new_share_vect_ph4_req = 0U;
        vlSelfRef.__Vdly__new_ownerp_id_ph4_req = 0U;
        vlSelfRef.__Vdly__new_cache_st_ph4_req = 0U;
        vlSelfRef.__Vdly__cmd_ph5_req_addr = 0ULL;
        vlSelfRef.__Vdly__cmd_ph6_req_addr = 0ULL;
        vlSelfRef.__Vdly__pshare_cnt_ph6_req = 0U;
        vlSelfRef.__Vdly__pshare_cnt_ph6_rsp = 0U;
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        vlSelfRef.__Vdly__cmdq_src_ph4_rsp = vlSelfRef.__PVT__cmdq_src_ph3_rsp;
        vlSelfRef.__Vdly__dn_sm_req_ph4 = vlSelfRef.__PVT__dn_sm_req_ph3;
    } else {
        vlSelfRef.__Vdly__cmdq_src_ph4_rsp = 0U;
        vlSelfRef.__Vdly__dn_sm_req_ph4 = 0U;
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_257,0x07ffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(155, 1240, __Vtemp_258, vlSelfRef.__PVT__colln_cmd_field_nxt, 0U, 155);
        VL_AND_W(5, __Vtemp_259, __Vtemp_257, __Vtemp_258);
        VL_ASSIGNSEL_WW(1240,155,0U, vlSelfRef.__Vdly__colln_cmd_field, __Vtemp_259);
        VL_ASSIGNSEL_WI(224,28,0U, vlSelfRef.__Vdly__colln_cmd, 
                        (0xfffffffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd_nxt, 0U, 28)));
        VL_ASSIGNBIT_II(0U, vlSelfRef.__Vdly__colln_cmd_addr_invalid, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_addr_invalid_nxt), 0U)));
        VL_ASSIGNBIT_II(0U, vlSelfRef.__Vdly__colln_cmd_isatmo_rd, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd_nxt), 0U)));
        VL_ASSIGNBIT_II(0U, vlSelfRef.__Vdly__colln_cmd_isatmo_wr, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr_nxt), 0U)));
    } else {
        VL_CONST_W_1X(155,__Vtemp_260,0x00000000);
        VL_ASSIGNSEL_WW(1240,155,0U, vlSelfRef.__Vdly__colln_cmd_field, __Vtemp_260);
        VL_ASSIGNSEL_WI(224,28,0U, vlSelfRef.__Vdly__colln_cmd, 0U);
        VL_ASSIGNBIT_II(0U, vlSelfRef.__Vdly__colln_cmd_addr_invalid, 0U);
        VL_ASSIGNBIT_II(0U, vlSelfRef.__Vdly__colln_cmd_isatmo_rd, 0U);
        VL_ASSIGNBIT_II(0U, vlSelfRef.__Vdly__colln_cmd_isatmo_wr, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_261,0x07ffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(155, 1240, __Vtemp_262, vlSelfRef.__PVT__colln_cmd_field_nxt, 0x9bU, 155);
        VL_AND_W(5, __Vtemp_263, __Vtemp_261, __Vtemp_262);
        VL_ASSIGNSEL_WW(1240,155,0x9bU, vlSelfRef.__Vdly__colln_cmd_field, __Vtemp_263);
        VL_ASSIGNSEL_WI(224,28,0x1cU, vlSelfRef.__Vdly__colln_cmd, 
                        (0xfffffffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd_nxt, 0x1cU, 28)));
        VL_ASSIGNBIT_II(1U, vlSelfRef.__Vdly__colln_cmd_addr_invalid, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_addr_invalid_nxt), 1U)));
        VL_ASSIGNBIT_II(1U, vlSelfRef.__Vdly__colln_cmd_isatmo_rd, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd_nxt), 1U)));
        VL_ASSIGNBIT_II(1U, vlSelfRef.__Vdly__colln_cmd_isatmo_wr, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr_nxt), 1U)));
    } else {
        VL_CONST_W_1X(155,__Vtemp_264,0x00000000);
        VL_ASSIGNSEL_WW(1240,155,0x9bU, vlSelfRef.__Vdly__colln_cmd_field, __Vtemp_264);
        VL_ASSIGNSEL_WI(224,28,0x1cU, vlSelfRef.__Vdly__colln_cmd, 0U);
        VL_ASSIGNBIT_II(1U, vlSelfRef.__Vdly__colln_cmd_addr_invalid, 0U);
        VL_ASSIGNBIT_II(1U, vlSelfRef.__Vdly__colln_cmd_isatmo_rd, 0U);
        VL_ASSIGNBIT_II(1U, vlSelfRef.__Vdly__colln_cmd_isatmo_wr, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_265,0x07ffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(155, 1240, __Vtemp_266, vlSelfRef.__PVT__colln_cmd_field_nxt, 0x136U, 155);
        VL_AND_W(5, __Vtemp_267, __Vtemp_265, __Vtemp_266);
        VL_ASSIGNSEL_WW(1240,155,0x136U, vlSelfRef.__Vdly__colln_cmd_field, __Vtemp_267);
        VL_ASSIGNSEL_WI(224,28,0x38U, vlSelfRef.__Vdly__colln_cmd, 
                        (0xfffffffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd_nxt, 0x38U, 28)));
        VL_ASSIGNBIT_II(2U, vlSelfRef.__Vdly__colln_cmd_addr_invalid, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_addr_invalid_nxt), 2U)));
        VL_ASSIGNBIT_II(2U, vlSelfRef.__Vdly__colln_cmd_isatmo_rd, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd_nxt), 2U)));
        VL_ASSIGNBIT_II(2U, vlSelfRef.__Vdly__colln_cmd_isatmo_wr, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr_nxt), 2U)));
    } else {
        VL_CONST_W_1X(155,__Vtemp_268,0x00000000);
        VL_ASSIGNSEL_WW(1240,155,0x136U, vlSelfRef.__Vdly__colln_cmd_field, __Vtemp_268);
        VL_ASSIGNSEL_WI(224,28,0x38U, vlSelfRef.__Vdly__colln_cmd, 0U);
        VL_ASSIGNBIT_II(2U, vlSelfRef.__Vdly__colln_cmd_addr_invalid, 0U);
        VL_ASSIGNBIT_II(2U, vlSelfRef.__Vdly__colln_cmd_isatmo_rd, 0U);
        VL_ASSIGNBIT_II(2U, vlSelfRef.__Vdly__colln_cmd_isatmo_wr, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_269,0x07ffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(155, 1240, __Vtemp_270, vlSelfRef.__PVT__colln_cmd_field_nxt, 0x1d1U, 155);
        VL_AND_W(5, __Vtemp_271, __Vtemp_269, __Vtemp_270);
        VL_ASSIGNSEL_WW(1240,155,0x1d1U, vlSelfRef.__Vdly__colln_cmd_field, __Vtemp_271);
        VL_ASSIGNSEL_WI(224,28,0x54U, vlSelfRef.__Vdly__colln_cmd, 
                        (0xfffffffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd_nxt, 0x54U, 28)));
        VL_ASSIGNBIT_II(3U, vlSelfRef.__Vdly__colln_cmd_addr_invalid, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_addr_invalid_nxt), 3U)));
        VL_ASSIGNBIT_II(3U, vlSelfRef.__Vdly__colln_cmd_isatmo_rd, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd_nxt), 3U)));
        VL_ASSIGNBIT_II(3U, vlSelfRef.__Vdly__colln_cmd_isatmo_wr, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr_nxt), 3U)));
    } else {
        VL_CONST_W_1X(155,__Vtemp_272,0x00000000);
        VL_ASSIGNSEL_WW(1240,155,0x1d1U, vlSelfRef.__Vdly__colln_cmd_field, __Vtemp_272);
        VL_ASSIGNSEL_WI(224,28,0x54U, vlSelfRef.__Vdly__colln_cmd, 0U);
        VL_ASSIGNBIT_II(3U, vlSelfRef.__Vdly__colln_cmd_addr_invalid, 0U);
        VL_ASSIGNBIT_II(3U, vlSelfRef.__Vdly__colln_cmd_isatmo_rd, 0U);
        VL_ASSIGNBIT_II(3U, vlSelfRef.__Vdly__colln_cmd_isatmo_wr, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_273,0x07ffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(155, 1240, __Vtemp_274, vlSelfRef.__PVT__colln_cmd_field_nxt, 0x26cU, 155);
        VL_AND_W(5, __Vtemp_275, __Vtemp_273, __Vtemp_274);
        VL_ASSIGNSEL_WW(1240,155,0x26cU, vlSelfRef.__Vdly__colln_cmd_field, __Vtemp_275);
        VL_ASSIGNSEL_WI(224,28,0x70U, vlSelfRef.__Vdly__colln_cmd, 
                        (0xfffffffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd_nxt, 0x70U, 28)));
        VL_ASSIGNBIT_II(4U, vlSelfRef.__Vdly__colln_cmd_addr_invalid, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_addr_invalid_nxt), 4U)));
        VL_ASSIGNBIT_II(4U, vlSelfRef.__Vdly__colln_cmd_isatmo_rd, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd_nxt), 4U)));
        VL_ASSIGNBIT_II(4U, vlSelfRef.__Vdly__colln_cmd_isatmo_wr, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr_nxt), 4U)));
    } else {
        VL_CONST_W_1X(155,__Vtemp_276,0x00000000);
        VL_ASSIGNSEL_WW(1240,155,0x26cU, vlSelfRef.__Vdly__colln_cmd_field, __Vtemp_276);
        VL_ASSIGNSEL_WI(224,28,0x70U, vlSelfRef.__Vdly__colln_cmd, 0U);
        VL_ASSIGNBIT_II(4U, vlSelfRef.__Vdly__colln_cmd_addr_invalid, 0U);
        VL_ASSIGNBIT_II(4U, vlSelfRef.__Vdly__colln_cmd_isatmo_rd, 0U);
        VL_ASSIGNBIT_II(4U, vlSelfRef.__Vdly__colln_cmd_isatmo_wr, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_277,0x07ffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(155, 1240, __Vtemp_278, vlSelfRef.__PVT__colln_cmd_field_nxt, 0x307U, 155);
        VL_AND_W(5, __Vtemp_279, __Vtemp_277, __Vtemp_278);
        VL_ASSIGNSEL_WW(1240,155,0x307U, vlSelfRef.__Vdly__colln_cmd_field, __Vtemp_279);
        VL_ASSIGNSEL_WI(224,28,0x8cU, vlSelfRef.__Vdly__colln_cmd, 
                        (0xfffffffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd_nxt, 0x8cU, 28)));
        VL_ASSIGNBIT_II(5U, vlSelfRef.__Vdly__colln_cmd_addr_invalid, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_addr_invalid_nxt), 5U)));
        VL_ASSIGNBIT_II(5U, vlSelfRef.__Vdly__colln_cmd_isatmo_rd, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd_nxt), 5U)));
        VL_ASSIGNBIT_II(5U, vlSelfRef.__Vdly__colln_cmd_isatmo_wr, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr_nxt), 5U)));
    } else {
        VL_CONST_W_1X(155,__Vtemp_280,0x00000000);
        VL_ASSIGNSEL_WW(1240,155,0x307U, vlSelfRef.__Vdly__colln_cmd_field, __Vtemp_280);
        VL_ASSIGNSEL_WI(224,28,0x8cU, vlSelfRef.__Vdly__colln_cmd, 0U);
        VL_ASSIGNBIT_II(5U, vlSelfRef.__Vdly__colln_cmd_addr_invalid, 0U);
        VL_ASSIGNBIT_II(5U, vlSelfRef.__Vdly__colln_cmd_isatmo_rd, 0U);
        VL_ASSIGNBIT_II(5U, vlSelfRef.__Vdly__colln_cmd_isatmo_wr, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_281,0x07ffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(155, 1240, __Vtemp_282, vlSelfRef.__PVT__colln_cmd_field_nxt, 0x3a2U, 155);
        VL_AND_W(5, __Vtemp_283, __Vtemp_281, __Vtemp_282);
        VL_ASSIGNSEL_WW(1240,155,0x3a2U, vlSelfRef.__Vdly__colln_cmd_field, __Vtemp_283);
        VL_ASSIGNSEL_WI(224,28,0xa8U, vlSelfRef.__Vdly__colln_cmd, 
                        (0xfffffffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd_nxt, 0xa8U, 28)));
        VL_ASSIGNBIT_II(6U, vlSelfRef.__Vdly__colln_cmd_addr_invalid, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_addr_invalid_nxt), 6U)));
        VL_ASSIGNBIT_II(6U, vlSelfRef.__Vdly__colln_cmd_isatmo_rd, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd_nxt), 6U)));
        VL_ASSIGNBIT_II(6U, vlSelfRef.__Vdly__colln_cmd_isatmo_wr, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr_nxt), 6U)));
    } else {
        VL_CONST_W_1X(155,__Vtemp_284,0x00000000);
        VL_ASSIGNSEL_WW(1240,155,0x3a2U, vlSelfRef.__Vdly__colln_cmd_field, __Vtemp_284);
        VL_ASSIGNSEL_WI(224,28,0xa8U, vlSelfRef.__Vdly__colln_cmd, 0U);
        VL_ASSIGNBIT_II(6U, vlSelfRef.__Vdly__colln_cmd_addr_invalid, 0U);
        VL_ASSIGNBIT_II(6U, vlSelfRef.__Vdly__colln_cmd_isatmo_rd, 0U);
        VL_ASSIGNBIT_II(6U, vlSelfRef.__Vdly__colln_cmd_isatmo_wr, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_CONST_W_5X(160,__Vtemp_285,0x07ffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(155, 1240, __Vtemp_286, vlSelfRef.__PVT__colln_cmd_field_nxt, 0x43dU, 155);
        VL_AND_W(5, __Vtemp_287, __Vtemp_285, __Vtemp_286);
        VL_ASSIGNSEL_WW(1240,155,0x43dU, vlSelfRef.__Vdly__colln_cmd_field, __Vtemp_287);
        VL_ASSIGNSEL_WI(224,28,0xc4U, vlSelfRef.__Vdly__colln_cmd, 
                        (0xfffffffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd_nxt, 0xc4U, 28)));
        VL_ASSIGNBIT_II(7U, vlSelfRef.__Vdly__colln_cmd_addr_invalid, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_addr_invalid_nxt), 7U)));
        VL_ASSIGNBIT_II(7U, vlSelfRef.__Vdly__colln_cmd_isatmo_rd, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd_nxt), 7U)));
        VL_ASSIGNBIT_II(7U, vlSelfRef.__Vdly__colln_cmd_isatmo_wr, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr_nxt), 7U)));
    } else {
        VL_CONST_W_1X(155,__Vtemp_288,0x00000000);
        VL_ASSIGNSEL_WW(1240,155,0x43dU, vlSelfRef.__Vdly__colln_cmd_field, __Vtemp_288);
        VL_ASSIGNSEL_WI(224,28,0xc4U, vlSelfRef.__Vdly__colln_cmd, 0U);
        VL_ASSIGNBIT_II(7U, vlSelfRef.__Vdly__colln_cmd_addr_invalid, 0U);
        VL_ASSIGNBIT_II(7U, vlSelfRef.__Vdly__colln_cmd_isatmo_rd, 0U);
        VL_ASSIGNBIT_II(7U, vlSelfRef.__Vdly__colln_cmd_isatmo_wr, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        vlSelfRef.__Vdly__req_atmo_ph4 = vlSelfRef.__PVT__req_atmo_ph3;
        vlSelfRef.__Vdly__cmd_isatmo_wr_ph3 = vlSelfRef.__PVT__cmd_isatmo_wr_ph2;
        vlSelfRef.__Vdly__cmd_isatmo_rd_ph3 = vlSelfRef.__PVT__cmd_isatmo_rd_ph2;
        vlSelfRef.__Vdly__cmd_isatmo_ph3 = vlSelfRef.__PVT__cmd_isatmo_ph2;
    } else {
        vlSelfRef.__Vdly__req_atmo_ph4 = 0U;
        vlSelfRef.__Vdly__cmd_isatmo_wr_ph3 = 0U;
        vlSelfRef.__Vdly__cmd_isatmo_rd_ph3 = 0U;
        vlSelfRef.__Vdly__cmd_isatmo_ph3 = 0U;
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        vlSelfRef.__Vdly__outstand_cmd_invalid = vlSelfRef.__PVT__outstand_cmd_invalid_nxt;
        vlSelfRef.__Vdly__num_emptyloc_outstandq = vlSelfRef.__PVT__num_emptyloc_outstandq_nxt;
        vlSelfRef.__Vdly__outstand_prep_valid = vlSelfRef.__PVT__outstand_prep_valid_nxt;
        vlSelfRef.__Vdly__outstand_atmo_rd_alloc_then_wr_clr 
            = vlSelfRef.__PVT__outstand_atmo_rd_alloc_then_wr_clr_nxt;
    } else {
        vlSelfRef.__Vdly__outstand_cmd_invalid = 0xffffffffU;
        vlSelfRef.__Vdly__num_emptyloc_outstandq = 0x20U;
        vlSelfRef.__Vdly__outstand_prep_valid = 0U;
        vlSelfRef.__Vdly__outstand_atmo_rd_alloc_then_wr_clr = 0U;
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        vlSelfRef.__Vdly__cmdvalid_ph4_req = vlSelfRef.__PVT__cmdvalid_ph4_req_nxt;
        vlSelfRef.__Vdly__cmdvalid_ph4_rsp = vlSelfRef.__PVT__cmdvalid_ph3_rsp;
        vlSelfRef.__Vdly__cmdis_req_ph4 = vlSelfRef.__PVT__cmdis_req_ph3;
        vlSelfRef.__Vdly__cmdis_resp_ph4 = vlSelfRef.__PVT__cmdis_resp_ph3;
        vlSelfRef.__Vdly__wrindex_req_ph4 = vlSelfRef.__PVT__wrindex_req_ph3;
        vlSelfRef.__Vdly__cachehit_vector_ph4 = vlSelfRef.__PVT__cachehit_vector_ph3;
        VL_ASSIGN_W(155,vlSelfRef.__Vdly__cmd_ph4_req, vlSelfRef.__PVT__cmd_ph3_req);
        VL_ASSIGN_W(155,vlSelfRef.__Vdly__cmd_ph4_rsp, vlSelfRef.__PVT__cmd_ph3_rsp);
        vlSelfRef.__Vdly__wren_cmq_ph4 = vlSelfRef.__PVT__wren_cmq_ph4_nxt;
    } else {
        vlSelfRef.__Vdly__cmdvalid_ph4_req = 0U;
        vlSelfRef.__Vdly__cmdvalid_ph4_rsp = 0U;
        vlSelfRef.__Vdly__cmdis_req_ph4 = 0U;
        vlSelfRef.__Vdly__cmdis_resp_ph4 = 0U;
        vlSelfRef.__Vdly__wrindex_req_ph4 = 0U;
        vlSelfRef.__Vdly__cachehit_vector_ph4 = 0U;
        VL_CONST_W_1X(155,vlSelfRef.__Vdly__cmd_ph4_req,0x00000000);
        VL_CONST_W_1X(155,vlSelfRef.__Vdly__cmd_ph4_rsp,0x00000000);
        vlSelfRef.__Vdly__wren_cmq_ph4 = 0U;
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNSEL_WQ(1664,52,0U, vlSelfRef.__Vdly__outstand_cmd_addr, 
                        (0xfffffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 0U, 52)));
        VL_ASSIGNBIT_II(0U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 0U)));
        VL_ASSIGNBIT_II(0U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 0U)));
        VL_ASSIGNSEL_WI(768,24,0U, vlSelfRef.__Vdly__outstand_cmd, 
                        (0xffffffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd_nxt, 0U, 24)));
        VL_ASSIGNSEL_WI(160,5,0U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 0U, 5)));
        VL_ASSIGNSEL_WI(160,5,0U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 0U, 5)));
        VL_ASSIGNBIT_II(0U, vlSelfRef.__Vdly__vld_store_to_bn2, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 0U)));
        VL_ASSIGNBIT_II(0U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 0U)));
    } else {
        VL_ASSIGNSEL_WQ(1664,52,0U, vlSelfRef.__Vdly__outstand_cmd_addr, 0ULL);
        VL_ASSIGNBIT_II(0U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 0U);
        VL_ASSIGNBIT_II(0U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 0U);
        VL_ASSIGNSEL_WI(768,24,0U, vlSelfRef.__Vdly__outstand_cmd, 0U);
        VL_ASSIGNSEL_WI(160,5,0U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 0U);
        VL_ASSIGNSEL_WI(160,5,0U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 0U);
        VL_ASSIGNBIT_II(0U, vlSelfRef.__Vdly__vld_store_to_bn2, 0U);
        VL_ASSIGNBIT_II(0U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNSEL_WQ(1664,52,0x34U, vlSelfRef.__Vdly__outstand_cmd_addr, 
                        (0xfffffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 0x34U, 52)));
        VL_ASSIGNBIT_II(1U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 1U)));
        VL_ASSIGNBIT_II(1U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 1U)));
        VL_ASSIGNSEL_WI(768,24,0x18U, vlSelfRef.__Vdly__outstand_cmd, 
                        (0xffffffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd_nxt, 0x18U, 24)));
        VL_ASSIGNSEL_WI(160,5,5U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 5U, 5)));
        VL_ASSIGNSEL_WI(160,5,5U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 5U, 5)));
        VL_ASSIGNBIT_II(1U, vlSelfRef.__Vdly__vld_store_to_bn2, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 1U)));
        VL_ASSIGNBIT_II(1U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 1U)));
    } else {
        VL_ASSIGNSEL_WQ(1664,52,0x34U, vlSelfRef.__Vdly__outstand_cmd_addr, 0ULL);
        VL_ASSIGNBIT_II(1U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 0U);
        VL_ASSIGNBIT_II(1U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 0U);
        VL_ASSIGNSEL_WI(768,24,0x18U, vlSelfRef.__Vdly__outstand_cmd, 0U);
        VL_ASSIGNSEL_WI(160,5,5U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 0U);
        VL_ASSIGNSEL_WI(160,5,5U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 0U);
        VL_ASSIGNBIT_II(1U, vlSelfRef.__Vdly__vld_store_to_bn2, 0U);
        VL_ASSIGNBIT_II(1U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNSEL_WQ(1664,52,0x68U, vlSelfRef.__Vdly__outstand_cmd_addr, 
                        (0xfffffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 0x68U, 52)));
        VL_ASSIGNBIT_II(2U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 2U)));
        VL_ASSIGNBIT_II(2U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 2U)));
        VL_ASSIGNSEL_WI(768,24,0x30U, vlSelfRef.__Vdly__outstand_cmd, 
                        (0xffffffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd_nxt, 0x30U, 24)));
        VL_ASSIGNSEL_WI(160,5,0xaU, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 0xaU, 5)));
        VL_ASSIGNSEL_WI(160,5,0xaU, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 0xaU, 5)));
        VL_ASSIGNBIT_II(2U, vlSelfRef.__Vdly__vld_store_to_bn2, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 2U)));
        VL_ASSIGNBIT_II(2U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 2U)));
    } else {
        VL_ASSIGNSEL_WQ(1664,52,0x68U, vlSelfRef.__Vdly__outstand_cmd_addr, 0ULL);
        VL_ASSIGNBIT_II(2U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 0U);
        VL_ASSIGNBIT_II(2U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 0U);
        VL_ASSIGNSEL_WI(768,24,0x30U, vlSelfRef.__Vdly__outstand_cmd, 0U);
        VL_ASSIGNSEL_WI(160,5,0xaU, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 0U);
        VL_ASSIGNSEL_WI(160,5,0xaU, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 0U);
        VL_ASSIGNBIT_II(2U, vlSelfRef.__Vdly__vld_store_to_bn2, 0U);
        VL_ASSIGNBIT_II(2U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNSEL_WQ(1664,52,0x9cU, vlSelfRef.__Vdly__outstand_cmd_addr, 
                        (0xfffffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 0x9cU, 52)));
        VL_ASSIGNBIT_II(3U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 3U)));
        VL_ASSIGNBIT_II(3U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 3U)));
        VL_ASSIGNSEL_WI(768,24,0x48U, vlSelfRef.__Vdly__outstand_cmd, 
                        (0xffffffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd_nxt, 0x48U, 24)));
        VL_ASSIGNSEL_WI(160,5,0xfU, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 0xfU, 5)));
        VL_ASSIGNSEL_WI(160,5,0xfU, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 0xfU, 5)));
        VL_ASSIGNBIT_II(3U, vlSelfRef.__Vdly__vld_store_to_bn2, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 3U)));
        VL_ASSIGNBIT_II(3U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 3U)));
    } else {
        VL_ASSIGNSEL_WQ(1664,52,0x9cU, vlSelfRef.__Vdly__outstand_cmd_addr, 0ULL);
        VL_ASSIGNBIT_II(3U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 0U);
        VL_ASSIGNBIT_II(3U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 0U);
        VL_ASSIGNSEL_WI(768,24,0x48U, vlSelfRef.__Vdly__outstand_cmd, 0U);
        VL_ASSIGNSEL_WI(160,5,0xfU, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 0U);
        VL_ASSIGNSEL_WI(160,5,0xfU, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 0U);
        VL_ASSIGNBIT_II(3U, vlSelfRef.__Vdly__vld_store_to_bn2, 0U);
        VL_ASSIGNBIT_II(3U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNSEL_WQ(1664,52,0xd0U, vlSelfRef.__Vdly__outstand_cmd_addr, 
                        (0xfffffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 0xd0U, 52)));
        VL_ASSIGNBIT_II(4U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 4U)));
        VL_ASSIGNBIT_II(4U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 4U)));
        VL_ASSIGNSEL_WI(768,24,0x60U, vlSelfRef.__Vdly__outstand_cmd, 
                        (0xffffffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd_nxt, 0x60U, 24)));
        VL_ASSIGNSEL_WI(160,5,0x14U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 0x14U, 5)));
        VL_ASSIGNSEL_WI(160,5,0x14U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 0x14U, 5)));
        VL_ASSIGNBIT_II(4U, vlSelfRef.__Vdly__vld_store_to_bn2, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 4U)));
        VL_ASSIGNBIT_II(4U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 4U)));
    } else {
        VL_ASSIGNSEL_WQ(1664,52,0xd0U, vlSelfRef.__Vdly__outstand_cmd_addr, 0ULL);
        VL_ASSIGNBIT_II(4U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 0U);
        VL_ASSIGNBIT_II(4U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 0U);
        VL_ASSIGNSEL_WI(768,24,0x60U, vlSelfRef.__Vdly__outstand_cmd, 0U);
        VL_ASSIGNSEL_WI(160,5,0x14U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 0U);
        VL_ASSIGNSEL_WI(160,5,0x14U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 0U);
        VL_ASSIGNBIT_II(4U, vlSelfRef.__Vdly__vld_store_to_bn2, 0U);
        VL_ASSIGNBIT_II(4U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNSEL_WQ(1664,52,0x104U, vlSelfRef.__Vdly__outstand_cmd_addr, 
                        (0xfffffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 0x104U, 52)));
        VL_ASSIGNBIT_II(5U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 5U)));
        VL_ASSIGNBIT_II(5U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 5U)));
        VL_ASSIGNSEL_WI(768,24,0x78U, vlSelfRef.__Vdly__outstand_cmd, 
                        (0xffffffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd_nxt, 0x78U, 24)));
        VL_ASSIGNSEL_WI(160,5,0x19U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 0x19U, 5)));
        VL_ASSIGNSEL_WI(160,5,0x19U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 0x19U, 5)));
        VL_ASSIGNBIT_II(5U, vlSelfRef.__Vdly__vld_store_to_bn2, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 5U)));
        VL_ASSIGNBIT_II(5U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 5U)));
    } else {
        VL_ASSIGNSEL_WQ(1664,52,0x104U, vlSelfRef.__Vdly__outstand_cmd_addr, 0ULL);
        VL_ASSIGNBIT_II(5U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 0U);
        VL_ASSIGNBIT_II(5U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 0U);
        VL_ASSIGNSEL_WI(768,24,0x78U, vlSelfRef.__Vdly__outstand_cmd, 0U);
        VL_ASSIGNSEL_WI(160,5,0x19U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 0U);
        VL_ASSIGNSEL_WI(160,5,0x19U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 0U);
        VL_ASSIGNBIT_II(5U, vlSelfRef.__Vdly__vld_store_to_bn2, 0U);
        VL_ASSIGNBIT_II(5U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNSEL_WQ(1664,52,0x138U, vlSelfRef.__Vdly__outstand_cmd_addr, 
                        (0xfffffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 0x138U, 52)));
        VL_ASSIGNBIT_II(6U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 6U)));
        VL_ASSIGNBIT_II(6U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 6U)));
        VL_ASSIGNSEL_WI(768,24,0x90U, vlSelfRef.__Vdly__outstand_cmd, 
                        (0xffffffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd_nxt, 0x90U, 24)));
        VL_ASSIGNSEL_WI(160,5,0x1eU, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 0x1eU, 5)));
        VL_ASSIGNSEL_WI(160,5,0x1eU, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 0x1eU, 5)));
        VL_ASSIGNBIT_II(6U, vlSelfRef.__Vdly__vld_store_to_bn2, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 6U)));
        VL_ASSIGNBIT_II(6U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 6U)));
    } else {
        VL_ASSIGNSEL_WQ(1664,52,0x138U, vlSelfRef.__Vdly__outstand_cmd_addr, 0ULL);
        VL_ASSIGNBIT_II(6U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 0U);
        VL_ASSIGNBIT_II(6U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 0U);
        VL_ASSIGNSEL_WI(768,24,0x90U, vlSelfRef.__Vdly__outstand_cmd, 0U);
        VL_ASSIGNSEL_WI(160,5,0x1eU, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 0U);
        VL_ASSIGNSEL_WI(160,5,0x1eU, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 0U);
        VL_ASSIGNBIT_II(6U, vlSelfRef.__Vdly__vld_store_to_bn2, 0U);
        VL_ASSIGNBIT_II(6U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNSEL_WQ(1664,52,0x16cU, vlSelfRef.__Vdly__outstand_cmd_addr, 
                        (0xfffffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 0x16cU, 52)));
        VL_ASSIGNBIT_II(7U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 7U)));
        VL_ASSIGNBIT_II(7U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 7U)));
        VL_ASSIGNSEL_WI(768,24,0xa8U, vlSelfRef.__Vdly__outstand_cmd, 
                        (0xffffffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd_nxt, 0xa8U, 24)));
        VL_ASSIGNSEL_WI(160,5,0x23U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 0x23U, 5)));
        VL_ASSIGNSEL_WI(160,5,0x23U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 0x23U, 5)));
        VL_ASSIGNBIT_II(7U, vlSelfRef.__Vdly__vld_store_to_bn2, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 7U)));
        VL_ASSIGNBIT_II(7U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 7U)));
    } else {
        VL_ASSIGNSEL_WQ(1664,52,0x16cU, vlSelfRef.__Vdly__outstand_cmd_addr, 0ULL);
        VL_ASSIGNBIT_II(7U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 0U);
        VL_ASSIGNBIT_II(7U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 0U);
        VL_ASSIGNSEL_WI(768,24,0xa8U, vlSelfRef.__Vdly__outstand_cmd, 0U);
        VL_ASSIGNSEL_WI(160,5,0x23U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 0U);
        VL_ASSIGNSEL_WI(160,5,0x23U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 0U);
        VL_ASSIGNBIT_II(7U, vlSelfRef.__Vdly__vld_store_to_bn2, 0U);
        VL_ASSIGNBIT_II(7U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNSEL_WQ(1664,52,0x1a0U, vlSelfRef.__Vdly__outstand_cmd_addr, 
                        (0xfffffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 0x1a0U, 52)));
        VL_ASSIGNBIT_II(8U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 8U)));
        VL_ASSIGNBIT_II(8U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 8U)));
        VL_ASSIGNSEL_WI(768,24,0xc0U, vlSelfRef.__Vdly__outstand_cmd, 
                        (0xffffffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd_nxt, 0xc0U, 24)));
        VL_ASSIGNSEL_WI(160,5,0x28U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 0x28U, 5)));
        VL_ASSIGNSEL_WI(160,5,0x28U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 0x28U, 5)));
        VL_ASSIGNBIT_II(8U, vlSelfRef.__Vdly__vld_store_to_bn2, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 8U)));
        VL_ASSIGNBIT_II(8U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 8U)));
    } else {
        VL_ASSIGNSEL_WQ(1664,52,0x1a0U, vlSelfRef.__Vdly__outstand_cmd_addr, 0ULL);
        VL_ASSIGNBIT_II(8U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 0U);
        VL_ASSIGNBIT_II(8U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 0U);
        VL_ASSIGNSEL_WI(768,24,0xc0U, vlSelfRef.__Vdly__outstand_cmd, 0U);
        VL_ASSIGNSEL_WI(160,5,0x28U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 0U);
        VL_ASSIGNSEL_WI(160,5,0x28U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 0U);
        VL_ASSIGNBIT_II(8U, vlSelfRef.__Vdly__vld_store_to_bn2, 0U);
        VL_ASSIGNBIT_II(8U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNSEL_WQ(1664,52,0x1d4U, vlSelfRef.__Vdly__outstand_cmd_addr, 
                        (0xfffffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 0x1d4U, 52)));
        VL_ASSIGNBIT_II(9U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 9U)));
        VL_ASSIGNBIT_II(9U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 9U)));
        VL_ASSIGNSEL_WI(768,24,0xd8U, vlSelfRef.__Vdly__outstand_cmd, 
                        (0xffffffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd_nxt, 0xd8U, 24)));
        VL_ASSIGNSEL_WI(160,5,0x2dU, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 0x2dU, 5)));
        VL_ASSIGNSEL_WI(160,5,0x2dU, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 0x2dU, 5)));
        VL_ASSIGNBIT_II(9U, vlSelfRef.__Vdly__vld_store_to_bn2, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 9U)));
        VL_ASSIGNBIT_II(9U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 9U)));
    } else {
        VL_ASSIGNSEL_WQ(1664,52,0x1d4U, vlSelfRef.__Vdly__outstand_cmd_addr, 0ULL);
        VL_ASSIGNBIT_II(9U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 0U);
        VL_ASSIGNBIT_II(9U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 0U);
        VL_ASSIGNSEL_WI(768,24,0xd8U, vlSelfRef.__Vdly__outstand_cmd, 0U);
        VL_ASSIGNSEL_WI(160,5,0x2dU, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 0U);
        VL_ASSIGNSEL_WI(160,5,0x2dU, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 0U);
        VL_ASSIGNBIT_II(9U, vlSelfRef.__Vdly__vld_store_to_bn2, 0U);
        VL_ASSIGNBIT_II(9U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNSEL_WQ(1664,52,0x208U, vlSelfRef.__Vdly__outstand_cmd_addr, 
                        (0xfffffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 0x208U, 52)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__Vdly__outstand_req_atmo_wr, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 0xaU)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__Vdly__outstand_req_atmo_rd, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 0xaU)));
        VL_ASSIGNSEL_WI(768,24,0xf0U, vlSelfRef.__Vdly__outstand_cmd, 
                        (0xffffffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd_nxt, 0xf0U, 24)));
        VL_ASSIGNSEL_WI(160,5,0x32U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 0x32U, 5)));
        VL_ASSIGNSEL_WI(160,5,0x32U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 0x32U, 5)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__Vdly__vld_store_to_bn2, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 0xaU)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 0xaU)));
    } else {
        VL_ASSIGNSEL_WQ(1664,52,0x208U, vlSelfRef.__Vdly__outstand_cmd_addr, 0ULL);
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__Vdly__outstand_req_atmo_wr, 0U);
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__Vdly__outstand_req_atmo_rd, 0U);
        VL_ASSIGNSEL_WI(768,24,0xf0U, vlSelfRef.__Vdly__outstand_cmd, 0U);
        VL_ASSIGNSEL_WI(160,5,0x32U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 0U);
        VL_ASSIGNSEL_WI(160,5,0x32U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 0U);
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__Vdly__vld_store_to_bn2, 0U);
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNSEL_WQ(1664,52,0x23cU, vlSelfRef.__Vdly__outstand_cmd_addr, 
                        (0xfffffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 0x23cU, 52)));
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__Vdly__outstand_req_atmo_wr, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 0xbU)));
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__Vdly__outstand_req_atmo_rd, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 0xbU)));
        VL_ASSIGNSEL_WI(768,24,0x108U, vlSelfRef.__Vdly__outstand_cmd, 
                        (0xffffffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd_nxt, 0x108U, 24)));
        VL_ASSIGNSEL_WI(160,5,0x37U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 0x37U, 5)));
        VL_ASSIGNSEL_WI(160,5,0x37U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 0x37U, 5)));
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__Vdly__vld_store_to_bn2, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 0xbU)));
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 0xbU)));
    } else {
        VL_ASSIGNSEL_WQ(1664,52,0x23cU, vlSelfRef.__Vdly__outstand_cmd_addr, 0ULL);
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__Vdly__outstand_req_atmo_wr, 0U);
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__Vdly__outstand_req_atmo_rd, 0U);
        VL_ASSIGNSEL_WI(768,24,0x108U, vlSelfRef.__Vdly__outstand_cmd, 0U);
        VL_ASSIGNSEL_WI(160,5,0x37U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 0U);
        VL_ASSIGNSEL_WI(160,5,0x37U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 0U);
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__Vdly__vld_store_to_bn2, 0U);
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNSEL_WQ(1664,52,0x270U, vlSelfRef.__Vdly__outstand_cmd_addr, 
                        (0xfffffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 0x270U, 52)));
        VL_ASSIGNBIT_II(0xcU, vlSelfRef.__Vdly__outstand_req_atmo_wr, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 0xcU)));
        VL_ASSIGNBIT_II(0xcU, vlSelfRef.__Vdly__outstand_req_atmo_rd, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 0xcU)));
        VL_ASSIGNSEL_WI(768,24,0x120U, vlSelfRef.__Vdly__outstand_cmd, 
                        (0xffffffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd_nxt, 0x120U, 24)));
        VL_ASSIGNSEL_WI(160,5,0x3cU, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 0x3cU, 5)));
        VL_ASSIGNSEL_WI(160,5,0x3cU, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 0x3cU, 5)));
        VL_ASSIGNBIT_II(0xcU, vlSelfRef.__Vdly__vld_store_to_bn2, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 0xcU)));
        VL_ASSIGNBIT_II(0xcU, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 0xcU)));
    } else {
        VL_ASSIGNSEL_WQ(1664,52,0x270U, vlSelfRef.__Vdly__outstand_cmd_addr, 0ULL);
        VL_ASSIGNBIT_II(0xcU, vlSelfRef.__Vdly__outstand_req_atmo_wr, 0U);
        VL_ASSIGNBIT_II(0xcU, vlSelfRef.__Vdly__outstand_req_atmo_rd, 0U);
        VL_ASSIGNSEL_WI(768,24,0x120U, vlSelfRef.__Vdly__outstand_cmd, 0U);
        VL_ASSIGNSEL_WI(160,5,0x3cU, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 0U);
        VL_ASSIGNSEL_WI(160,5,0x3cU, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 0U);
        VL_ASSIGNBIT_II(0xcU, vlSelfRef.__Vdly__vld_store_to_bn2, 0U);
        VL_ASSIGNBIT_II(0xcU, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNSEL_WQ(1664,52,0x2a4U, vlSelfRef.__Vdly__outstand_cmd_addr, 
                        (0xfffffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 0x2a4U, 52)));
        VL_ASSIGNBIT_II(0xdU, vlSelfRef.__Vdly__outstand_req_atmo_wr, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 0xdU)));
        VL_ASSIGNBIT_II(0xdU, vlSelfRef.__Vdly__outstand_req_atmo_rd, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 0xdU)));
        VL_ASSIGNSEL_WI(768,24,0x138U, vlSelfRef.__Vdly__outstand_cmd, 
                        (0xffffffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd_nxt, 0x138U, 24)));
        VL_ASSIGNSEL_WI(160,5,0x41U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 0x41U, 5)));
        VL_ASSIGNSEL_WI(160,5,0x41U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 0x41U, 5)));
        VL_ASSIGNBIT_II(0xdU, vlSelfRef.__Vdly__vld_store_to_bn2, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 0xdU)));
        VL_ASSIGNBIT_II(0xdU, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 0xdU)));
    } else {
        VL_ASSIGNSEL_WQ(1664,52,0x2a4U, vlSelfRef.__Vdly__outstand_cmd_addr, 0ULL);
        VL_ASSIGNBIT_II(0xdU, vlSelfRef.__Vdly__outstand_req_atmo_wr, 0U);
        VL_ASSIGNBIT_II(0xdU, vlSelfRef.__Vdly__outstand_req_atmo_rd, 0U);
        VL_ASSIGNSEL_WI(768,24,0x138U, vlSelfRef.__Vdly__outstand_cmd, 0U);
        VL_ASSIGNSEL_WI(160,5,0x41U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 0U);
        VL_ASSIGNSEL_WI(160,5,0x41U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 0U);
        VL_ASSIGNBIT_II(0xdU, vlSelfRef.__Vdly__vld_store_to_bn2, 0U);
        VL_ASSIGNBIT_II(0xdU, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNSEL_WQ(1664,52,0x2d8U, vlSelfRef.__Vdly__outstand_cmd_addr, 
                        (0xfffffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 0x2d8U, 52)));
        VL_ASSIGNBIT_II(0xeU, vlSelfRef.__Vdly__outstand_req_atmo_wr, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 0xeU)));
        VL_ASSIGNBIT_II(0xeU, vlSelfRef.__Vdly__outstand_req_atmo_rd, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 0xeU)));
        VL_ASSIGNSEL_WI(768,24,0x150U, vlSelfRef.__Vdly__outstand_cmd, 
                        (0xffffffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd_nxt, 0x150U, 24)));
        VL_ASSIGNSEL_WI(160,5,0x46U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 0x46U, 5)));
        VL_ASSIGNSEL_WI(160,5,0x46U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 0x46U, 5)));
        VL_ASSIGNBIT_II(0xeU, vlSelfRef.__Vdly__vld_store_to_bn2, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 0xeU)));
        VL_ASSIGNBIT_II(0xeU, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 0xeU)));
    } else {
        VL_ASSIGNSEL_WQ(1664,52,0x2d8U, vlSelfRef.__Vdly__outstand_cmd_addr, 0ULL);
        VL_ASSIGNBIT_II(0xeU, vlSelfRef.__Vdly__outstand_req_atmo_wr, 0U);
        VL_ASSIGNBIT_II(0xeU, vlSelfRef.__Vdly__outstand_req_atmo_rd, 0U);
        VL_ASSIGNSEL_WI(768,24,0x150U, vlSelfRef.__Vdly__outstand_cmd, 0U);
        VL_ASSIGNSEL_WI(160,5,0x46U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 0U);
        VL_ASSIGNSEL_WI(160,5,0x46U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 0U);
        VL_ASSIGNBIT_II(0xeU, vlSelfRef.__Vdly__vld_store_to_bn2, 0U);
        VL_ASSIGNBIT_II(0xeU, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNSEL_WQ(1664,52,0x30cU, vlSelfRef.__Vdly__outstand_cmd_addr, 
                        (0xfffffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 0x30cU, 52)));
        VL_ASSIGNBIT_II(0xfU, vlSelfRef.__Vdly__outstand_req_atmo_wr, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 0xfU)));
        VL_ASSIGNBIT_II(0xfU, vlSelfRef.__Vdly__outstand_req_atmo_rd, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 0xfU)));
        VL_ASSIGNSEL_WI(768,24,0x168U, vlSelfRef.__Vdly__outstand_cmd, 
                        (0xffffffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd_nxt, 0x168U, 24)));
        VL_ASSIGNSEL_WI(160,5,0x4bU, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 0x4bU, 5)));
        VL_ASSIGNSEL_WI(160,5,0x4bU, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 0x4bU, 5)));
        VL_ASSIGNBIT_II(0xfU, vlSelfRef.__Vdly__vld_store_to_bn2, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 0xfU)));
        VL_ASSIGNBIT_II(0xfU, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 0xfU)));
    } else {
        VL_ASSIGNSEL_WQ(1664,52,0x30cU, vlSelfRef.__Vdly__outstand_cmd_addr, 0ULL);
        VL_ASSIGNBIT_II(0xfU, vlSelfRef.__Vdly__outstand_req_atmo_wr, 0U);
        VL_ASSIGNBIT_II(0xfU, vlSelfRef.__Vdly__outstand_req_atmo_rd, 0U);
        VL_ASSIGNSEL_WI(768,24,0x168U, vlSelfRef.__Vdly__outstand_cmd, 0U);
        VL_ASSIGNSEL_WI(160,5,0x4bU, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 0U);
        VL_ASSIGNSEL_WI(160,5,0x4bU, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 0U);
        VL_ASSIGNBIT_II(0xfU, vlSelfRef.__Vdly__vld_store_to_bn2, 0U);
        VL_ASSIGNBIT_II(0xfU, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNSEL_WQ(1664,52,0x340U, vlSelfRef.__Vdly__outstand_cmd_addr, 
                        (0xfffffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 0x340U, 52)));
        VL_ASSIGNBIT_II(0x10U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 0x10U)));
        VL_ASSIGNBIT_II(0x10U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 0x10U)));
        VL_ASSIGNSEL_WI(768,24,0x180U, vlSelfRef.__Vdly__outstand_cmd, 
                        (0xffffffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd_nxt, 0x180U, 24)));
        VL_ASSIGNSEL_WI(160,5,0x50U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 0x50U, 5)));
        VL_ASSIGNSEL_WI(160,5,0x50U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 0x50U, 5)));
        VL_ASSIGNBIT_II(0x10U, vlSelfRef.__Vdly__vld_store_to_bn2, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 0x10U)));
        VL_ASSIGNBIT_II(0x10U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 0x10U)));
    } else {
        VL_ASSIGNSEL_WQ(1664,52,0x340U, vlSelfRef.__Vdly__outstand_cmd_addr, 0ULL);
        VL_ASSIGNBIT_II(0x10U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 0U);
        VL_ASSIGNBIT_II(0x10U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 0U);
        VL_ASSIGNSEL_WI(768,24,0x180U, vlSelfRef.__Vdly__outstand_cmd, 0U);
        VL_ASSIGNSEL_WI(160,5,0x50U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 0U);
        VL_ASSIGNSEL_WI(160,5,0x50U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 0U);
        VL_ASSIGNBIT_II(0x10U, vlSelfRef.__Vdly__vld_store_to_bn2, 0U);
        VL_ASSIGNBIT_II(0x10U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNSEL_WQ(1664,52,0x374U, vlSelfRef.__Vdly__outstand_cmd_addr, 
                        (0xfffffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 0x374U, 52)));
        VL_ASSIGNBIT_II(0x11U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 0x11U)));
        VL_ASSIGNBIT_II(0x11U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 0x11U)));
        VL_ASSIGNSEL_WI(768,24,0x198U, vlSelfRef.__Vdly__outstand_cmd, 
                        (0xffffffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd_nxt, 0x198U, 24)));
        VL_ASSIGNSEL_WI(160,5,0x55U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 0x55U, 5)));
        VL_ASSIGNSEL_WI(160,5,0x55U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 0x55U, 5)));
        VL_ASSIGNBIT_II(0x11U, vlSelfRef.__Vdly__vld_store_to_bn2, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 0x11U)));
        VL_ASSIGNBIT_II(0x11U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 0x11U)));
    } else {
        VL_ASSIGNSEL_WQ(1664,52,0x374U, vlSelfRef.__Vdly__outstand_cmd_addr, 0ULL);
        VL_ASSIGNBIT_II(0x11U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 0U);
        VL_ASSIGNBIT_II(0x11U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 0U);
        VL_ASSIGNSEL_WI(768,24,0x198U, vlSelfRef.__Vdly__outstand_cmd, 0U);
        VL_ASSIGNSEL_WI(160,5,0x55U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 0U);
        VL_ASSIGNSEL_WI(160,5,0x55U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 0U);
        VL_ASSIGNBIT_II(0x11U, vlSelfRef.__Vdly__vld_store_to_bn2, 0U);
        VL_ASSIGNBIT_II(0x11U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNSEL_WQ(1664,52,0x3a8U, vlSelfRef.__Vdly__outstand_cmd_addr, 
                        (0xfffffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 0x3a8U, 52)));
        VL_ASSIGNBIT_II(0x12U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 0x12U)));
        VL_ASSIGNBIT_II(0x12U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 0x12U)));
        VL_ASSIGNSEL_WI(768,24,0x1b0U, vlSelfRef.__Vdly__outstand_cmd, 
                        (0xffffffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd_nxt, 0x1b0U, 24)));
        VL_ASSIGNSEL_WI(160,5,0x5aU, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 0x5aU, 5)));
        VL_ASSIGNSEL_WI(160,5,0x5aU, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 0x5aU, 5)));
        VL_ASSIGNBIT_II(0x12U, vlSelfRef.__Vdly__vld_store_to_bn2, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 0x12U)));
        VL_ASSIGNBIT_II(0x12U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 0x12U)));
    } else {
        VL_ASSIGNSEL_WQ(1664,52,0x3a8U, vlSelfRef.__Vdly__outstand_cmd_addr, 0ULL);
        VL_ASSIGNBIT_II(0x12U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 0U);
        VL_ASSIGNBIT_II(0x12U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 0U);
        VL_ASSIGNSEL_WI(768,24,0x1b0U, vlSelfRef.__Vdly__outstand_cmd, 0U);
        VL_ASSIGNSEL_WI(160,5,0x5aU, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 0U);
        VL_ASSIGNSEL_WI(160,5,0x5aU, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 0U);
        VL_ASSIGNBIT_II(0x12U, vlSelfRef.__Vdly__vld_store_to_bn2, 0U);
        VL_ASSIGNBIT_II(0x12U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNSEL_WQ(1664,52,0x3dcU, vlSelfRef.__Vdly__outstand_cmd_addr, 
                        (0xfffffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 0x3dcU, 52)));
        VL_ASSIGNBIT_II(0x13U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 0x13U)));
        VL_ASSIGNBIT_II(0x13U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 0x13U)));
        VL_ASSIGNSEL_WI(768,24,0x1c8U, vlSelfRef.__Vdly__outstand_cmd, 
                        (0xffffffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd_nxt, 0x1c8U, 24)));
        VL_ASSIGNSEL_WI(160,5,0x5fU, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 0x5fU, 5)));
        VL_ASSIGNSEL_WI(160,5,0x5fU, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 0x5fU, 5)));
        VL_ASSIGNBIT_II(0x13U, vlSelfRef.__Vdly__vld_store_to_bn2, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 0x13U)));
        VL_ASSIGNBIT_II(0x13U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 0x13U)));
    } else {
        VL_ASSIGNSEL_WQ(1664,52,0x3dcU, vlSelfRef.__Vdly__outstand_cmd_addr, 0ULL);
        VL_ASSIGNBIT_II(0x13U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 0U);
        VL_ASSIGNBIT_II(0x13U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 0U);
        VL_ASSIGNSEL_WI(768,24,0x1c8U, vlSelfRef.__Vdly__outstand_cmd, 0U);
        VL_ASSIGNSEL_WI(160,5,0x5fU, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 0U);
        VL_ASSIGNSEL_WI(160,5,0x5fU, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 0U);
        VL_ASSIGNBIT_II(0x13U, vlSelfRef.__Vdly__vld_store_to_bn2, 0U);
        VL_ASSIGNBIT_II(0x13U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNSEL_WQ(1664,52,0x410U, vlSelfRef.__Vdly__outstand_cmd_addr, 
                        (0xfffffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 0x410U, 52)));
        VL_ASSIGNBIT_II(0x14U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 0x14U)));
        VL_ASSIGNBIT_II(0x14U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 0x14U)));
        VL_ASSIGNSEL_WI(768,24,0x1e0U, vlSelfRef.__Vdly__outstand_cmd, 
                        (0xffffffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd_nxt, 0x1e0U, 24)));
        VL_ASSIGNSEL_WI(160,5,0x64U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 0x64U, 5)));
        VL_ASSIGNSEL_WI(160,5,0x64U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 0x64U, 5)));
        VL_ASSIGNBIT_II(0x14U, vlSelfRef.__Vdly__vld_store_to_bn2, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 0x14U)));
        VL_ASSIGNBIT_II(0x14U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 0x14U)));
    } else {
        VL_ASSIGNSEL_WQ(1664,52,0x410U, vlSelfRef.__Vdly__outstand_cmd_addr, 0ULL);
        VL_ASSIGNBIT_II(0x14U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 0U);
        VL_ASSIGNBIT_II(0x14U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 0U);
        VL_ASSIGNSEL_WI(768,24,0x1e0U, vlSelfRef.__Vdly__outstand_cmd, 0U);
        VL_ASSIGNSEL_WI(160,5,0x64U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 0U);
        VL_ASSIGNSEL_WI(160,5,0x64U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 0U);
        VL_ASSIGNBIT_II(0x14U, vlSelfRef.__Vdly__vld_store_to_bn2, 0U);
        VL_ASSIGNBIT_II(0x14U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNSEL_WQ(1664,52,0x444U, vlSelfRef.__Vdly__outstand_cmd_addr, 
                        (0xfffffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 0x444U, 52)));
        VL_ASSIGNBIT_II(0x15U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 0x15U)));
        VL_ASSIGNBIT_II(0x15U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 0x15U)));
        VL_ASSIGNSEL_WI(768,24,0x1f8U, vlSelfRef.__Vdly__outstand_cmd, 
                        (0xffffffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd_nxt, 0x1f8U, 24)));
        VL_ASSIGNSEL_WI(160,5,0x69U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 0x69U, 5)));
        VL_ASSIGNSEL_WI(160,5,0x69U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 0x69U, 5)));
        VL_ASSIGNBIT_II(0x15U, vlSelfRef.__Vdly__vld_store_to_bn2, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 0x15U)));
        VL_ASSIGNBIT_II(0x15U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 0x15U)));
    } else {
        VL_ASSIGNSEL_WQ(1664,52,0x444U, vlSelfRef.__Vdly__outstand_cmd_addr, 0ULL);
        VL_ASSIGNBIT_II(0x15U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 0U);
        VL_ASSIGNBIT_II(0x15U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 0U);
        VL_ASSIGNSEL_WI(768,24,0x1f8U, vlSelfRef.__Vdly__outstand_cmd, 0U);
        VL_ASSIGNSEL_WI(160,5,0x69U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 0U);
        VL_ASSIGNSEL_WI(160,5,0x69U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 0U);
        VL_ASSIGNBIT_II(0x15U, vlSelfRef.__Vdly__vld_store_to_bn2, 0U);
        VL_ASSIGNBIT_II(0x15U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNSEL_WQ(1664,52,0x478U, vlSelfRef.__Vdly__outstand_cmd_addr, 
                        (0xfffffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 0x478U, 52)));
        VL_ASSIGNBIT_II(0x16U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 0x16U)));
        VL_ASSIGNBIT_II(0x16U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 0x16U)));
        VL_ASSIGNSEL_WI(768,24,0x210U, vlSelfRef.__Vdly__outstand_cmd, 
                        (0xffffffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd_nxt, 0x210U, 24)));
        VL_ASSIGNSEL_WI(160,5,0x6eU, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 0x6eU, 5)));
        VL_ASSIGNSEL_WI(160,5,0x6eU, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 0x6eU, 5)));
        VL_ASSIGNBIT_II(0x16U, vlSelfRef.__Vdly__vld_store_to_bn2, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 0x16U)));
        VL_ASSIGNBIT_II(0x16U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 0x16U)));
    } else {
        VL_ASSIGNSEL_WQ(1664,52,0x478U, vlSelfRef.__Vdly__outstand_cmd_addr, 0ULL);
        VL_ASSIGNBIT_II(0x16U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 0U);
        VL_ASSIGNBIT_II(0x16U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 0U);
        VL_ASSIGNSEL_WI(768,24,0x210U, vlSelfRef.__Vdly__outstand_cmd, 0U);
        VL_ASSIGNSEL_WI(160,5,0x6eU, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 0U);
        VL_ASSIGNSEL_WI(160,5,0x6eU, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 0U);
        VL_ASSIGNBIT_II(0x16U, vlSelfRef.__Vdly__vld_store_to_bn2, 0U);
        VL_ASSIGNBIT_II(0x16U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNSEL_WQ(1664,52,0x4acU, vlSelfRef.__Vdly__outstand_cmd_addr, 
                        (0xfffffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 0x4acU, 52)));
        VL_ASSIGNBIT_II(0x17U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 0x17U)));
        VL_ASSIGNBIT_II(0x17U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 0x17U)));
        VL_ASSIGNSEL_WI(768,24,0x228U, vlSelfRef.__Vdly__outstand_cmd, 
                        (0xffffffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd_nxt, 0x228U, 24)));
        VL_ASSIGNSEL_WI(160,5,0x73U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 0x73U, 5)));
        VL_ASSIGNSEL_WI(160,5,0x73U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 0x73U, 5)));
        VL_ASSIGNBIT_II(0x17U, vlSelfRef.__Vdly__vld_store_to_bn2, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 0x17U)));
        VL_ASSIGNBIT_II(0x17U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 0x17U)));
    } else {
        VL_ASSIGNSEL_WQ(1664,52,0x4acU, vlSelfRef.__Vdly__outstand_cmd_addr, 0ULL);
        VL_ASSIGNBIT_II(0x17U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 0U);
        VL_ASSIGNBIT_II(0x17U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 0U);
        VL_ASSIGNSEL_WI(768,24,0x228U, vlSelfRef.__Vdly__outstand_cmd, 0U);
        VL_ASSIGNSEL_WI(160,5,0x73U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 0U);
        VL_ASSIGNSEL_WI(160,5,0x73U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 0U);
        VL_ASSIGNBIT_II(0x17U, vlSelfRef.__Vdly__vld_store_to_bn2, 0U);
        VL_ASSIGNBIT_II(0x17U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNSEL_WQ(1664,52,0x4e0U, vlSelfRef.__Vdly__outstand_cmd_addr, 
                        (0xfffffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 0x4e0U, 52)));
        VL_ASSIGNBIT_II(0x18U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 0x18U)));
        VL_ASSIGNBIT_II(0x18U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 0x18U)));
        VL_ASSIGNSEL_WI(768,24,0x240U, vlSelfRef.__Vdly__outstand_cmd, 
                        (0xffffffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd_nxt, 0x240U, 24)));
        VL_ASSIGNSEL_WI(160,5,0x78U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 0x78U, 5)));
        VL_ASSIGNSEL_WI(160,5,0x78U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 0x78U, 5)));
        VL_ASSIGNBIT_II(0x18U, vlSelfRef.__Vdly__vld_store_to_bn2, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 0x18U)));
        VL_ASSIGNBIT_II(0x18U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 0x18U)));
    } else {
        VL_ASSIGNSEL_WQ(1664,52,0x4e0U, vlSelfRef.__Vdly__outstand_cmd_addr, 0ULL);
        VL_ASSIGNBIT_II(0x18U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 0U);
        VL_ASSIGNBIT_II(0x18U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 0U);
        VL_ASSIGNSEL_WI(768,24,0x240U, vlSelfRef.__Vdly__outstand_cmd, 0U);
        VL_ASSIGNSEL_WI(160,5,0x78U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 0U);
        VL_ASSIGNSEL_WI(160,5,0x78U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 0U);
        VL_ASSIGNBIT_II(0x18U, vlSelfRef.__Vdly__vld_store_to_bn2, 0U);
        VL_ASSIGNBIT_II(0x18U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNSEL_WQ(1664,52,0x514U, vlSelfRef.__Vdly__outstand_cmd_addr, 
                        (0xfffffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 0x514U, 52)));
        VL_ASSIGNBIT_II(0x19U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 0x19U)));
        VL_ASSIGNBIT_II(0x19U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 0x19U)));
        VL_ASSIGNSEL_WI(768,24,0x258U, vlSelfRef.__Vdly__outstand_cmd, 
                        (0xffffffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd_nxt, 0x258U, 24)));
        VL_ASSIGNSEL_WI(160,5,0x7dU, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 0x7dU, 5)));
        VL_ASSIGNSEL_WI(160,5,0x7dU, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 0x7dU, 5)));
        VL_ASSIGNBIT_II(0x19U, vlSelfRef.__Vdly__vld_store_to_bn2, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 0x19U)));
        VL_ASSIGNBIT_II(0x19U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 0x19U)));
    } else {
        VL_ASSIGNSEL_WQ(1664,52,0x514U, vlSelfRef.__Vdly__outstand_cmd_addr, 0ULL);
        VL_ASSIGNBIT_II(0x19U, vlSelfRef.__Vdly__outstand_req_atmo_wr, 0U);
        VL_ASSIGNBIT_II(0x19U, vlSelfRef.__Vdly__outstand_req_atmo_rd, 0U);
        VL_ASSIGNSEL_WI(768,24,0x258U, vlSelfRef.__Vdly__outstand_cmd, 0U);
        VL_ASSIGNSEL_WI(160,5,0x7dU, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 0U);
        VL_ASSIGNSEL_WI(160,5,0x7dU, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 0U);
        VL_ASSIGNBIT_II(0x19U, vlSelfRef.__Vdly__vld_store_to_bn2, 0U);
        VL_ASSIGNBIT_II(0x19U, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNSEL_WQ(1664,52,0x548U, vlSelfRef.__Vdly__outstand_cmd_addr, 
                        (0xfffffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 0x548U, 52)));
        VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__Vdly__outstand_req_atmo_wr, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 0x1aU)));
        VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__Vdly__outstand_req_atmo_rd, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 0x1aU)));
        VL_ASSIGNSEL_WI(768,24,0x270U, vlSelfRef.__Vdly__outstand_cmd, 
                        (0xffffffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd_nxt, 0x270U, 24)));
        VL_ASSIGNSEL_WI(160,5,0x82U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 0x82U, 5)));
        VL_ASSIGNSEL_WI(160,5,0x82U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 0x82U, 5)));
        VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__Vdly__vld_store_to_bn2, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 0x1aU)));
        VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 0x1aU)));
    } else {
        VL_ASSIGNSEL_WQ(1664,52,0x548U, vlSelfRef.__Vdly__outstand_cmd_addr, 0ULL);
        VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__Vdly__outstand_req_atmo_wr, 0U);
        VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__Vdly__outstand_req_atmo_rd, 0U);
        VL_ASSIGNSEL_WI(768,24,0x270U, vlSelfRef.__Vdly__outstand_cmd, 0U);
        VL_ASSIGNSEL_WI(160,5,0x82U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 0U);
        VL_ASSIGNSEL_WI(160,5,0x82U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 0U);
        VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__Vdly__vld_store_to_bn2, 0U);
        VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNSEL_WQ(1664,52,0x57cU, vlSelfRef.__Vdly__outstand_cmd_addr, 
                        (0xfffffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 0x57cU, 52)));
        VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__Vdly__outstand_req_atmo_wr, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 0x1bU)));
        VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__Vdly__outstand_req_atmo_rd, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 0x1bU)));
        VL_ASSIGNSEL_WI(768,24,0x288U, vlSelfRef.__Vdly__outstand_cmd, 
                        (0xffffffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd_nxt, 0x288U, 24)));
        VL_ASSIGNSEL_WI(160,5,0x87U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 0x87U, 5)));
        VL_ASSIGNSEL_WI(160,5,0x87U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 0x87U, 5)));
        VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__Vdly__vld_store_to_bn2, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 0x1bU)));
        VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 0x1bU)));
    } else {
        VL_ASSIGNSEL_WQ(1664,52,0x57cU, vlSelfRef.__Vdly__outstand_cmd_addr, 0ULL);
        VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__Vdly__outstand_req_atmo_wr, 0U);
        VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__Vdly__outstand_req_atmo_rd, 0U);
        VL_ASSIGNSEL_WI(768,24,0x288U, vlSelfRef.__Vdly__outstand_cmd, 0U);
        VL_ASSIGNSEL_WI(160,5,0x87U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 0U);
        VL_ASSIGNSEL_WI(160,5,0x87U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 0U);
        VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__Vdly__vld_store_to_bn2, 0U);
        VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNSEL_WQ(1664,52,0x5b0U, vlSelfRef.__Vdly__outstand_cmd_addr, 
                        (0xfffffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 0x5b0U, 52)));
        VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__Vdly__outstand_req_atmo_wr, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 0x1cU)));
        VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__Vdly__outstand_req_atmo_rd, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 0x1cU)));
        VL_ASSIGNSEL_WI(768,24,0x2a0U, vlSelfRef.__Vdly__outstand_cmd, 
                        (0xffffffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd_nxt, 0x2a0U, 24)));
        VL_ASSIGNSEL_WI(160,5,0x8cU, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 0x8cU, 5)));
        VL_ASSIGNSEL_WI(160,5,0x8cU, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 0x8cU, 5)));
        VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__Vdly__vld_store_to_bn2, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 0x1cU)));
        VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 0x1cU)));
    } else {
        VL_ASSIGNSEL_WQ(1664,52,0x5b0U, vlSelfRef.__Vdly__outstand_cmd_addr, 0ULL);
        VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__Vdly__outstand_req_atmo_wr, 0U);
        VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__Vdly__outstand_req_atmo_rd, 0U);
        VL_ASSIGNSEL_WI(768,24,0x2a0U, vlSelfRef.__Vdly__outstand_cmd, 0U);
        VL_ASSIGNSEL_WI(160,5,0x8cU, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 0U);
        VL_ASSIGNSEL_WI(160,5,0x8cU, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 0U);
        VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__Vdly__vld_store_to_bn2, 0U);
        VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNSEL_WQ(1664,52,0x5e4U, vlSelfRef.__Vdly__outstand_cmd_addr, 
                        (0xfffffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 0x5e4U, 52)));
        VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__Vdly__outstand_req_atmo_wr, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 0x1dU)));
        VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__Vdly__outstand_req_atmo_rd, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 0x1dU)));
        VL_ASSIGNSEL_WI(768,24,0x2b8U, vlSelfRef.__Vdly__outstand_cmd, 
                        (0xffffffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd_nxt, 0x2b8U, 24)));
        VL_ASSIGNSEL_WI(160,5,0x91U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 0x91U, 5)));
        VL_ASSIGNSEL_WI(160,5,0x91U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 0x91U, 5)));
        VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__Vdly__vld_store_to_bn2, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 0x1dU)));
        VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 0x1dU)));
    } else {
        VL_ASSIGNSEL_WQ(1664,52,0x5e4U, vlSelfRef.__Vdly__outstand_cmd_addr, 0ULL);
        VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__Vdly__outstand_req_atmo_wr, 0U);
        VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__Vdly__outstand_req_atmo_rd, 0U);
        VL_ASSIGNSEL_WI(768,24,0x2b8U, vlSelfRef.__Vdly__outstand_cmd, 0U);
        VL_ASSIGNSEL_WI(160,5,0x91U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 0U);
        VL_ASSIGNSEL_WI(160,5,0x91U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 0U);
        VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__Vdly__vld_store_to_bn2, 0U);
        VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNSEL_WQ(1664,52,0x618U, vlSelfRef.__Vdly__outstand_cmd_addr, 
                        (0xfffffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 0x618U, 52)));
        VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__Vdly__outstand_req_atmo_wr, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 0x1eU)));
        VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__Vdly__outstand_req_atmo_rd, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 0x1eU)));
        VL_ASSIGNSEL_WI(768,24,0x2d0U, vlSelfRef.__Vdly__outstand_cmd, 
                        (0xffffffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd_nxt, 0x2d0U, 24)));
        VL_ASSIGNSEL_WI(160,5,0x96U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 0x96U, 5)));
        VL_ASSIGNSEL_WI(160,5,0x96U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 0x96U, 5)));
        VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__Vdly__vld_store_to_bn2, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 0x1eU)));
        VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 0x1eU)));
    } else {
        VL_ASSIGNSEL_WQ(1664,52,0x618U, vlSelfRef.__Vdly__outstand_cmd_addr, 0ULL);
        VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__Vdly__outstand_req_atmo_wr, 0U);
        VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__Vdly__outstand_req_atmo_rd, 0U);
        VL_ASSIGNSEL_WI(768,24,0x2d0U, vlSelfRef.__Vdly__outstand_cmd, 0U);
        VL_ASSIGNSEL_WI(160,5,0x96U, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 0U);
        VL_ASSIGNSEL_WI(160,5,0x96U, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 0U);
        VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__Vdly__vld_store_to_bn2, 0U);
        VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 0U);
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        VL_ASSIGNSEL_WQ(1664,52,0x64cU, vlSelfRef.__Vdly__outstand_cmd_addr, 
                        (0xfffffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 0x64cU, 52)));
        VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__Vdly__outstand_req_atmo_wr, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 0x1fU)));
        VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__Vdly__outstand_req_atmo_rd, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 0x1fU)));
        VL_ASSIGNSEL_WI(768,24,0x2e8U, vlSelfRef.__Vdly__outstand_cmd, 
                        (0xffffffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd_nxt, 0x2e8U, 24)));
        VL_ASSIGNSEL_WI(160,5,0x9bU, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 0x9bU, 5)));
        VL_ASSIGNSEL_WI(160,5,0x9bU, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 
                        (0x1fU & VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 0x9bU, 5)));
        VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__Vdly__vld_store_to_bn2, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 0x1fU)));
        VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 
                        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 0x1fU)));
    } else {
        VL_ASSIGNSEL_WQ(1664,52,0x64cU, vlSelfRef.__Vdly__outstand_cmd_addr, 0ULL);
        VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__Vdly__outstand_req_atmo_wr, 0U);
        VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__Vdly__outstand_req_atmo_rd, 0U);
        VL_ASSIGNSEL_WI(768,24,0x2e8U, vlSelfRef.__Vdly__outstand_cmd, 0U);
        VL_ASSIGNSEL_WI(160,5,0x9bU, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st, 0U);
        VL_ASSIGNSEL_WI(160,5,0x9bU, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd, 0U);
        VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__Vdly__vld_store_to_bn2, 0U);
        VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata, 0U);
    }
    vlSelfRef.__PVT__cm_addr_match_pm_ph2 = vlSelfRef.__Vdly__cm_addr_match_pm_ph2;
    vlSelfRef.__PVT__noncm_addr_match_pm_ph2 = vlSelfRef.__Vdly__noncm_addr_match_pm_ph2;
    vlSelfRef.__PVT__noncm_tgt_sn_supports_dmt_ph3 
        = vlSelfRef.__Vdly__noncm_tgt_sn_supports_dmt_ph3;
    vlSelfRef.__PVT__cm_tgt_sn_supports_dmt_ph3 = vlSelfRef.__Vdly__cm_tgt_sn_supports_dmt_ph3;
    vlSelfRef.__PVT__resp_block_cnt_0 = vlSelfRef.__Vdly__resp_block_cnt_0;
    vlSelfRef.__PVT__resp_block_cnt_1 = vlSelfRef.__Vdly__resp_block_cnt_1;
    vlSelfRef.__PVT__resp_block_cnt_2 = vlSelfRef.__Vdly__resp_block_cnt_2;
    vlSelfRef.__PVT__resp_block_cnt_3 = vlSelfRef.__Vdly__resp_block_cnt_3;
    vlSelfRef.__PVT__resp_block_cnt_4 = vlSelfRef.__Vdly__resp_block_cnt_4;
    vlSelfRef.__PVT__last_resp_index_0 = vlSelfRef.__Vdly__last_resp_index_0;
    vlSelfRef.__PVT__last_resp_index_1 = vlSelfRef.__Vdly__last_resp_index_1;
    vlSelfRef.__PVT__last_resp_index_2 = vlSelfRef.__Vdly__last_resp_index_2;
    vlSelfRef.__PVT__last_resp_index_3 = vlSelfRef.__Vdly__last_resp_index_3;
    vlSelfRef.__PVT__last_resp_index_4 = vlSelfRef.__Vdly__last_resp_index_4;
    vlSelfRef.__PVT__occupied_last_resp_index_4 = vlSelfRef.__Vdly__occupied_last_resp_index_4;
    vlSelfRef.__PVT__occupied_last_resp_index_3 = vlSelfRef.__Vdly__occupied_last_resp_index_3;
    vlSelfRef.__PVT__occupied_last_resp_index_2 = vlSelfRef.__Vdly__occupied_last_resp_index_2;
    vlSelfRef.__PVT__occupied_last_resp_index_1 = vlSelfRef.__Vdly__occupied_last_resp_index_1;
    vlSelfRef.__PVT__occupied_last_resp_index_0 = vlSelfRef.__Vdly__occupied_last_resp_index_0;
    vlSelfRef.__PVT__dataless_xfrdata_tomem_ph4 = vlSelfRef.__Vdly__dataless_xfrdata_tomem_ph4;
    vlSelfRef.__PVT__reqid_matches_ownerpid_ph4 = vlSelfRef.__Vdly__reqid_matches_ownerpid_ph4;
    vlSelfRef.__PVT__addr_clln_clearing = vlSelfRef.__Vdly__addr_clln_clearing;
    VL_ASSIGN_W(576,vlSelfRef.__PVT__cmd_timeoutctr, vlSelfRef.__Vdly__cmd_timeoutctr);
    vlSelfRef.__PVT__cmd_timeout_flag = vlSelfRef.__Vdly__cmd_timeout_flag;
    vlSelfRef.__PVT__tgt_id_ph3 = vlSelfRef.__Vdly__tgt_id_ph3;
    vlSelfRef.__PVT__tgt_id_ph4 = vlSelfRef.__Vdly__tgt_id_ph4;
    vlSelfRef.__PVT__en_clr_collnreg = vlSelfRef.__Vdly__en_clr_collnreg;
    vlSelfRef.__PVT__en_clr_atom_rd_collnreg = vlSelfRef.__Vdly__en_clr_atom_rd_collnreg;
    vlSelfRef.__PVT__num_emptyloc_collnq = vlSelfRef.__Vdly__num_emptyloc_collnq;
    vlSelfRef.__PVT__seq_num_all_atom = vlSelfRef.__Vdly__seq_num_all_atom;
    vlSelfRef.__PVT__seq_num_all = vlSelfRef.__Vdly__seq_num_all;
    vlSelfRef.__PVT__respbuff_avail = vlSelfRef.__Vdly__respbuff_avail;
    VL_ASSIGN_W(512,vlSelfRef.__PVT__status_field_retry_ph3, vlSelfRef.__Vdly__status_field_retry_ph3);
    VL_ASSIGN_W(4352,vlSelfRef.__PVT__status_field_common, vlSelfRef.__Vdly__status_field_common);
    VL_ASSIGN_W(3456,vlSelfRef.__PVT__status_field_req, vlSelfRef.__Vdly__status_field_req);
    vlSelfRef.__PVT__req_is_invalid_resperr_ph4 = vlSelfRef.__Vdly__req_is_invalid_resperr_ph4;
    vlSelfRef.__PVT__req_is_invalid_resperr_ph2 = vlSelfRef.__Vdly__req_is_invalid_resperr_ph2;
    vlSelfRef.__PVT__req_is_invalid_resperr_ph3 = vlSelfRef.__Vdly__req_is_invalid_resperr_ph3;
    vlSelfRef.__PVT__colln_detected_ph3 = vlSelfRef.__Vdly__colln_detected_ph3;
    vlSelfRef.__PVT__colln_atom_detected_ph3 = vlSelfRef.__Vdly__colln_atom_detected_ph3;
    vlSelfRef.__PVT__colln_rdy_for_proc = vlSelfRef.__Vdly__colln_rdy_for_proc;
    vlSelfRef.__PVT__colln_rdy_atom_block_rd = vlSelfRef.__Vdly__colln_rdy_atom_block_rd;
    vlSelfRef.__PVT__colln_cmd_invalidate = vlSelfRef.__Vdly__colln_cmd_invalidate;
    vlSelfRef.__PVT__colln_rdy_for_proc_lock = vlSelfRef.__Vdly__colln_rdy_for_proc_lock;
    vlSelfRef.__PVT__colln_empty = vlSelfRef.__Vdly__colln_empty;
    vlSelfRef.__PVT__wren_cache_vector_ph4_rsp = vlSelfRef.__Vdly__wren_cache_vector_ph4_rsp;
    vlSelfRef.__PVT__wren_cache_vector_ph4_req = vlSelfRef.__Vdly__wren_cache_vector_ph4_req;
    vlSelfRef.__PVT__wren_cache_vector_ph5_req = vlSelfRef.__Vdly__wren_cache_vector_ph5_req;
    vlSelfRef.__PVT__wren_cache_vector_ph6_req = vlSelfRef.__Vdly__wren_cache_vector_ph6_req;
    vlSelfRef.__PVT__cmd_ph4_23_18_rsp = vlSelfRef.__Vdly__cmd_ph4_23_18_rsp;
    vlSelfRef.__PVT__cmd_ph4_23_18_req = vlSelfRef.__Vdly__cmd_ph4_23_18_req;
    vlSelfRef.__PVT__cmd_ph5_23_18_req = vlSelfRef.__Vdly__cmd_ph5_23_18_req;
    vlSelfRef.__PVT__cmd_ph6_23_18_req = vlSelfRef.__Vdly__cmd_ph6_23_18_req;
    vlSelfRef.__PVT__index_statusreg_ph4 = vlSelfRef.__Vdly__index_statusreg_ph4;
    vlSelfRef.__PVT__cmd_ph5_req_addr = vlSelfRef.__Vdly__cmd_ph5_req_addr;
    vlSelfRef.__PVT__wren_cache_vector_ph5_rsp = vlSelfRef.__Vdly__wren_cache_vector_ph5_rsp;
    vlSelfRef.__PVT__cmd_ph6_req_addr = vlSelfRef.__Vdly__cmd_ph6_req_addr;
    vlSelfRef.__PVT__wrdata_cache_ph5_rsp = vlSelfRef.__Vdly__wrdata_cache_ph5_rsp;
    vlSelfRef.__PVT__wrdata_cache_ph5_req = vlSelfRef.__Vdly__wrdata_cache_ph5_req;
    vlSelfRef.__PVT__cmd_ph5_23_18_rsp = vlSelfRef.__Vdly__cmd_ph5_23_18_rsp;
    vlSelfRef.__PVT__ownerp_id_ph6_req = vlSelfRef.__Vdly__ownerp_id_ph6_req;
    VL_ASSIGN_W(136,vlSelfRef.__PVT__rddata_statcommon_rsp_ph4, vlSelfRef.__Vdly__rddata_statcommon_rsp_ph4);
    vlSelfRef.__PVT__wrdata_cache_ph6_req = vlSelfRef.__Vdly__wrdata_cache_ph6_req;
    vlSelfRef.__PVT__pshare_cnt_ph6_req = vlSelfRef.__Vdly__pshare_cnt_ph6_req;
    VL_ASSIGN_W(108,vlSelfRef.__PVT__rddata_statreg_req_ph4, vlSelfRef.__Vdly__rddata_statreg_req_ph4);
    vlSelfRef.__PVT__new_share_vect_ph4_rsp = vlSelfRef.__Vdly__new_share_vect_ph4_rsp;
    vlSelfRef.__PVT__new_ownerp_id_ph4_rsp = vlSelfRef.__Vdly__new_ownerp_id_ph4_rsp;
    vlSelfRef.__PVT__new_cache_st_ph4_rsp = vlSelfRef.__Vdly__new_cache_st_ph4_rsp;
    vlSelfRef.__PVT__new_share_vect_ph4_req = vlSelfRef.__Vdly__new_share_vect_ph4_req;
    vlSelfRef.__PVT__new_ownerp_id_ph4_req = vlSelfRef.__Vdly__new_ownerp_id_ph4_req;
    vlSelfRef.__PVT__new_cache_st_ph4_req = vlSelfRef.__Vdly__new_cache_st_ph4_req;
    vlSelfRef.__PVT__wrdata_cache_ph7final_req = vlSelfRef.__Vdly__wrdata_cache_ph7final_req;
    vlSelfRef.__PVT__ownerp_id_ph6_rsp = vlSelfRef.__Vdly__ownerp_id_ph6_rsp;
    vlSelfRef.__PVT__wrdata_cache_ph6_rsp = vlSelfRef.__Vdly__wrdata_cache_ph6_rsp;
    vlSelfRef.__PVT__pshare_cnt_ph6_rsp = vlSelfRef.__Vdly__pshare_cnt_ph6_rsp;
    vlSelfRef.__PVT__wren_cache_vector_ph7_req = vlSelfRef.__Vdly__wren_cache_vector_ph7_req;
    vlSelfRef.__PVT__cache_tag_wr_rsp = vlSelfRef.__Vdly__cache_tag_wr_rsp;
    vlSelfRef.__PVT__cache_tag_wr_req = vlSelfRef.__Vdly__cache_tag_wr_req;
    vlSelfRef.__PVT__cache_index_wr_rsp = vlSelfRef.__Vdly__cache_index_wr_rsp;
    vlSelfRef.__PVT__cache_index_wr_req = vlSelfRef.__Vdly__cache_index_wr_req;
    vlSelfRef.__PVT__wren_cache_vector_ph6rsp = vlSelfRef.__Vdly__wren_cache_vector_ph6rsp;
    vlSelfRef.__Vdly__index_statusreg_ph3 = vlSelfRef.__PVT__index_statusreg_ph3;
    vlSelfRef.__PVT__dn_sm_req_ph4 = vlSelfRef.__Vdly__dn_sm_req_ph4;
    vlSelfRef.__PVT__cmdq_src_ph4_rsp = vlSelfRef.__Vdly__cmdq_src_ph4_rsp;
    vlSelfRef.__Vdly__cmdq_src_ph3_rsp = vlSelfRef.__PVT__cmdq_src_ph3_rsp;
    vlSelfRef.__PVT__colln_cmd_isatmo_rd = vlSelfRef.__Vdly__colln_cmd_isatmo_rd;
    vlSelfRef.__PVT__colln_cmd_addr_invalid = vlSelfRef.__Vdly__colln_cmd_addr_invalid;
    VL_ASSIGN_W(1240,vlSelfRef.__PVT__colln_cmd_field, vlSelfRef.__Vdly__colln_cmd_field);
    VL_ASSIGN_W(224,vlSelfRef.__PVT__colln_cmd, vlSelfRef.__Vdly__colln_cmd);
    vlSelfRef.__PVT__colln_cmd_isatmo_wr = vlSelfRef.__Vdly__colln_cmd_isatmo_wr;
    vlSelfRef.__PVT__req_atmo_ph4 = vlSelfRef.__Vdly__req_atmo_ph4;
    vlSelfRef.__PVT__cmd_isatmo_ph3 = vlSelfRef.__Vdly__cmd_isatmo_ph3;
    vlSelfRef.__PVT__cmd_isatmo_rd_ph3 = vlSelfRef.__Vdly__cmd_isatmo_rd_ph3;
    vlSelfRef.__PVT__cmd_isatmo_wr_ph3 = vlSelfRef.__Vdly__cmd_isatmo_wr_ph3;
    vlSelfRef.__PVT__outstand_prep_valid = vlSelfRef.__Vdly__outstand_prep_valid;
    vlSelfRef.__PVT__outstand_atmo_rd_alloc_then_wr_clr 
        = vlSelfRef.__Vdly__outstand_atmo_rd_alloc_then_wr_clr;
    vlSelfRef.__PVT__num_emptyloc_outstandq = vlSelfRef.__Vdly__num_emptyloc_outstandq;
    vlSelfRef.__PVT__outstand_cmd_invalid = vlSelfRef.__Vdly__outstand_cmd_invalid;
    vlSelfRef.__PVT__cmdvalid_ph4_rsp = vlSelfRef.__Vdly__cmdvalid_ph4_rsp;
    vlSelfRef.__PVT__cmdis_resp_ph4 = vlSelfRef.__Vdly__cmdis_resp_ph4;
    VL_ASSIGN_W(155,vlSelfRef.__PVT__cmd_ph4_rsp, vlSelfRef.__Vdly__cmd_ph4_rsp);
    vlSelfRef.__PVT__cmdvalid_ph4_req = vlSelfRef.__Vdly__cmdvalid_ph4_req;
    vlSelfRef.__PVT__cmdis_req_ph4 = vlSelfRef.__Vdly__cmdis_req_ph4;
    vlSelfRef.__PVT__cachehit_vector_ph4 = vlSelfRef.__Vdly__cachehit_vector_ph4;
    vlSelfRef.__PVT__wrindex_req_ph4 = vlSelfRef.__Vdly__wrindex_req_ph4;
    VL_ASSIGN_W(155,vlSelfRef.__PVT__cmd_ph4_req, vlSelfRef.__Vdly__cmd_ph4_req);
    vlSelfRef.__PVT__wren_cmq_ph4 = vlSelfRef.__Vdly__wren_cmq_ph4;
    vlSelfRef.__Vdly__cmdis_resp_ph3 = vlSelfRef.__PVT__cmdis_resp_ph3;
    vlSelfRef.__Vdly__cmdis_req_ph3 = vlSelfRef.__PVT__cmdis_req_ph3;
    vlSelfRef.__Vdly__cmdvalid_ph3_rsp = vlSelfRef.__PVT__cmdvalid_ph3_rsp;
    VL_ASSIGN_W(155,vlSelfRef.__Vdly__cmd_ph3_rsp, vlSelfRef.__PVT__cmd_ph3_rsp);
    VL_ASSIGN_W(155,vlSelfRef.__Vdly__cmd_ph3_req, vlSelfRef.__PVT__cmd_ph3_req);
    vlSelfRef.__PVT__outstand_req_atmo_wr = vlSelfRef.__Vdly__outstand_req_atmo_wr;
    vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata 
        = vlSelfRef.__Vdly__vld_store_compbuf_2nd_for_snpdata;
    vlSelfRef.__PVT__vld_store_to_bn2 = vlSelfRef.__Vdly__vld_store_to_bn2;
    VL_ASSIGN_W(160,vlSelfRef.__PVT__outstand_cmd_buffnum_2nd, vlSelfRef.__Vdly__outstand_cmd_buffnum_2nd);
    VL_ASSIGN_W(160,vlSelfRef.__PVT__outstand_cmd_buffnum_1st, vlSelfRef.__Vdly__outstand_cmd_buffnum_1st);
    VL_ASSIGN_W(1664,vlSelfRef.__PVT__outstand_cmd_addr, vlSelfRef.__Vdly__outstand_cmd_addr);
    vlSelfRef.__PVT__outstand_req_atmo_rd = vlSelfRef.__Vdly__outstand_req_atmo_rd;
    VL_ASSIGN_W(768,vlSelfRef.__PVT__outstand_cmd, vlSelfRef.__Vdly__outstand_cmd);
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
    vlSelfRef.__PVT__collnq_full = (2U >= (IData)(vlSelfRef.__PVT__num_emptyloc_collnq));
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
    vlSelfRef.__PVT__wren_cache_vector_ph6rsp_nxt = vlSelfRef.__PVT__wren_cache_vector_ph5_rsp;
    vlSelfRef.__PVT__cache_index_wr_req_nxt = (0x3ffU 
                                               & VL_SEL_IQII(52, vlSelfRef.__PVT__cmd_ph6_req_addr, 6U, 10));
    vlSelfRef.__PVT__cache_tag_wr_req_nxt = (0xfffffffffULL 
                                             & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_ph6_req_addr, 0x10U, 36));
    vlSelfRef.__PVT__sharevec_ph5_rsp = (0x3fffffU 
                                         & VL_SEL_IIII(32, vlSelfRef.__PVT__wrdata_cache_ph5_rsp, 0xaU, 22));
    vlSelfRef.__PVT__sharevec_ph5_req = (0x3fffffU 
                                         & VL_SEL_IIII(32, vlSelfRef.__PVT__wrdata_cache_ph5_req, 0xaU, 22));
    vlSelfRef.__PVT__moving_share_vect_ph4 = (0x3fffffU 
                                              & VL_SEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph4, 0x1cU, 22));
    vlSelfRef.__PVT__moving_ownerp_id_ph4 = (0x7fU 
                                             & VL_SEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph4, 0x32U, 7));
    vlSelfRef.__PVT__moving_cache_st_ph4 = (7U & VL_SEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph4, 0x39U, 3));
    VL_ASSIGNSEL_II(32,22,0xaU, vlSelfRef.__PVT__wrdata_cache_ph6final_req, 
                    (0x3fffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__wrdata_cache_ph6_req, 0xaU, 22)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wrdata_cache_ph6final_req, 
                    (0U != (IData)(vlSelfRef.__PVT__pshare_cnt_ph6_req)));
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
    vlSelfRef.__PVT__orig_pshare_cnt_ph4 = (0x1fU & 
                                            VL_SEL_IWII(108, vlSelfRef.__PVT__rddata_statreg_req_ph4, 0x3cU, 5));
    vlSelfRef.__PVT__orig_cache_st_ph4 = (7U & VL_SEL_IWII(108, vlSelfRef.__PVT__rddata_statreg_req_ph4, 0x39U, 3));
    vlSelfRef.__PVT__origreq_opcode_ph4 = (0x7fU & 
                                           VL_SEL_IWII(108, vlSelfRef.__PVT__rddata_statreg_req_ph4, 2U, 7));
    vlSelfRef.__PVT__wrdata_cache_ph4_rsp = VL_CONCAT_III(32,22,10, vlSelfRef.__PVT__new_share_vect_ph4_rsp, 
                                                          VL_CONCAT_III(10,7,3, (IData)(vlSelfRef.__PVT__new_ownerp_id_ph4_rsp), (IData)(vlSelfRef.__PVT__new_cache_st_ph4_rsp)));
    vlSelfRef.__PVT__wrdata_cache_ph4_req = VL_CONCAT_III(32,22,10, vlSelfRef.__PVT__new_share_vect_ph4_req, 
                                                          VL_CONCAT_III(10,7,3, (IData)(vlSelfRef.__PVT__new_ownerp_id_ph4_req), (IData)(vlSelfRef.__PVT__new_cache_st_ph4_req)));
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
    vlSelfRef.__PVT__wren_cache_vector = ((IData)(vlSelfRef.__PVT__wren_cache_vector_ph6rsp) 
                                          | (IData)(vlSelfRef.__PVT__wren_cache_vector_ph7_req));
    vlSelfRef.__PVT__cache_tag_wr = ((0U != (IData)(vlSelfRef.__PVT__wren_cache_vector_ph6rsp))
                                      ? vlSelfRef.__PVT__cache_tag_wr_rsp
                                      : vlSelfRef.__PVT__cache_tag_wr_req);
    vlSelfRef.__PVT__cache_index_wr = ((0U != (IData)(vlSelfRef.__PVT__wren_cache_vector_ph6rsp))
                                        ? (IData)(vlSelfRef.__PVT__cache_index_wr_rsp)
                                        : (IData)(vlSelfRef.__PVT__cache_index_wr_req));
    vlSelfRef.__PVT__cmdq_srcdata_ph4 = (2U == (IData)(vlSelfRef.__PVT__cmdq_src_ph4_rsp));
    VL_CONCAT_WQQ(104,52,52, __Vtemp_289, (0xfffffffffffffULL 
                                           & VL_SEL_QWII(1240, vlSelfRef.__PVT__colln_cmd_field, 0xe3U, 52)), 
                  (0xfffffffffffffULL & VL_SEL_QWII(1240, vlSelfRef.__PVT__colln_cmd_field, 0x48U, 52)));
    VL_CONCAT_WQW(156,52,104, __Vtemp_290, (0xfffffffffffffULL 
                                            & VL_SEL_QWII(1240, vlSelfRef.__PVT__colln_cmd_field, 0x17eU, 52)), __Vtemp_289);
    VL_ASSIGNSEL_WW(416,156,0U, vlSelfRef.__PVT__colln_cmd_field_addr, __Vtemp_290);
    VL_CONCAT_WQQ(104,52,52, __Vtemp_291, (0xfffffffffffffULL 
                                           & VL_SEL_QWII(1240, vlSelfRef.__PVT__colln_cmd_field, 0x2b4U, 52)), 
                  (0xfffffffffffffULL & VL_SEL_QWII(1240, vlSelfRef.__PVT__colln_cmd_field, 0x219U, 52)));
    VL_CONCAT_WQW(156,52,104, __Vtemp_292, (0xfffffffffffffULL 
                                            & VL_SEL_QWII(1240, vlSelfRef.__PVT__colln_cmd_field, 0x34fU, 52)), __Vtemp_291);
    VL_ASSIGNSEL_WW(416,156,0x9cU, vlSelfRef.__PVT__colln_cmd_field_addr, __Vtemp_292);
    VL_CONCAT_WQQ(104,52,52, __Vtemp_293, (0xfffffffffffffULL 
                                           & VL_SEL_QWII(1240, vlSelfRef.__PVT__colln_cmd_field, 0x485U, 52)), 
                  (0xfffffffffffffULL & VL_SEL_QWII(1240, vlSelfRef.__PVT__colln_cmd_field, 0x3eaU, 52)));
    VL_ASSIGNSEL_WW(416,104,0x138U, vlSelfRef.__PVT__colln_cmd_field_addr, __Vtemp_293);
    vlSelfRef.__PVT__outstand_cmdq_full = (2U >= vlSelfRef.__PVT__num_emptyloc_outstandq);
    vlSelfRef.__PVT__outstand_cmd_invalid_allones = 
        VL_REDAND_II(32, vlSelfRef.__PVT__outstand_cmd_invalid);
    VL_CONST_W_3X(96,__Vtemp_294,0x000001ff,0xffffffff,0xffffffff);
    VL_SEL_WWII(73, 155, __Vtemp_295, vlSelfRef.__PVT__cmd_ph4_rsp, 0U, 73);
    VL_AND_W(3, vlSelfRef.__PVT__cmd_ph4_rsp_s, __Vtemp_294, __Vtemp_295);
    vlSelfRef.__PVT__wren_stat_req_ph4 = ((IData)(vlSelfRef.__PVT__cmdvalid_ph4_req) 
                                          & (IData)(vlSelfRef.__PVT__cmdis_req_ph4));
    vlSelfRef.__PVT__wraddr_stat_req_ph4 = vlSelfRef.__PVT__wrindex_req_ph4;
    VL_CONST_W_5X(160,__Vtemp_296,0x007fffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(151, 155, __Vtemp_297, vlSelfRef.__PVT__cmd_ph4_req, 0U, 151);
    VL_AND_W(5, vlSelfRef.__PVT__cmd_ph4_req_s, __Vtemp_296, __Vtemp_297);
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        vlSelfRef.__Vdly__cmdvalid_ph3_req = vlSelfRef.__PVT__cmdvalid_ph3_req_nxt;
        VL_ASSIGN_W(155,vlSelfRef.__Vdly__cmd_ph3_req, vlSelfRef.__PVT__cmd_ph2_req);
        vlSelfRef.__Vdly__cmdvalid_ph3_rsp = vlSelfRef.__PVT__cmdvalid_ph3_rsp_nxt;
        VL_ASSIGN_W(155,vlSelfRef.__Vdly__cmd_ph3_rsp, vlSelfRef.__PVT__cmd_ph3_rsp_nxt);
        vlSelfRef.__Vdly__cmdq_src_ph3_rsp = vlSelfRef.__PVT__cmdq_src_ph3_rsp_nxt;
        vlSelfRef.__Vdly__cmdis_req_ph3 = vlSelfRef.__PVT__cmdis_req_ph2;
        vlSelfRef.__Vdly__cmdis_resp_ph3 = vlSelfRef.__PVT__cmdis_resp_ph3_nxt;
        vlSelfRef.__Vdly__rddata_cache_ph4 = vlSelfRef.__PVT__rddata_cache_sel_ph3;
        vlSelfRef.__Vdly__reqid_matches_sharevec_ph4 
            = vlSelfRef.__PVT__reqid_matches_sharevec_ph3;
        vlSelfRef.__Vdly__index_statusreg_ph3 = vlSelfRef.__PVT__index_statusreg_ph3_nxt;
        vlSelfRef.__Vdly__excl_pass_ph4 = vlSelfRef.__PVT__excl_pass_ph3;
        vlSelfRef.__Vdly__cmd_ph4_apply_dmt_req = vlSelfRef.__PVT__cmd_ph3_apply_dmt_req;
        vlSelfRef.__Vdly__cmd_ph4_nonexcl_read_dct_req 
            = vlSelfRef.__PVT__cmd_ph3_nonexcl_read_dct_req;
        vlSelfRef.__Vdly__snpattr_req_ph3 = vlSelfRef.__PVT__snpattr_req_ph2;
        vlSelfRef.__Vdly__cmdq_srcis_cachemiss_ph3 
            = vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph2;
        vlSelfRef.__Vdly__cmdq_srcis_colln_ph3 = vlSelfRef.__PVT__cmdq_srcis_colln_ph2;
        vlSelfRef.__Vdly__cmdq_srcis_newreq_ph3 = vlSelfRef.__PVT__cmdq_srcis_newreq_ph2;
    } else {
        vlSelfRef.__Vdly__cmdvalid_ph3_req = 0U;
        VL_CONST_W_1X(155,vlSelfRef.__Vdly__cmd_ph3_req,0x00000000);
        vlSelfRef.__Vdly__cmdvalid_ph3_rsp = 0U;
        VL_CONST_W_1X(155,vlSelfRef.__Vdly__cmd_ph3_rsp,0x00000000);
        vlSelfRef.__Vdly__cmdq_src_ph3_rsp = 0U;
        vlSelfRef.__Vdly__cmdis_req_ph3 = 0U;
        vlSelfRef.__Vdly__cmdis_resp_ph3 = 0U;
        vlSelfRef.__Vdly__rddata_cache_ph4 = 0U;
        vlSelfRef.__Vdly__reqid_matches_sharevec_ph4 = 0U;
        vlSelfRef.__Vdly__index_statusreg_ph3 = 0U;
        vlSelfRef.__Vdly__excl_pass_ph4 = 0U;
        vlSelfRef.__Vdly__cmd_ph4_apply_dmt_req = 0U;
        vlSelfRef.__Vdly__cmd_ph4_nonexcl_read_dct_req = 0U;
        vlSelfRef.__Vdly__snpattr_req_ph3 = 0U;
        vlSelfRef.__Vdly__cmdq_srcis_cachemiss_ph3 = 0U;
        vlSelfRef.__Vdly__cmdq_srcis_colln_ph3 = 0U;
        vlSelfRef.__Vdly__cmdq_srcis_newreq_ph3 = 0U;
    }
    vlSelfRef.__PVT__outstand_atmo_wr = VL_REDOR_I(vlSelfRef.__PVT__outstand_req_atmo_wr);
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
    vlSelfRef.__PVT__outstand_atmo_rd = VL_REDOR_I(vlSelfRef.__PVT__outstand_req_atmo_rd);
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
    vlSelfRef.__PVT__cmdq_src0_SnpResp_ph4 = ((0U == (IData)(vlSelfRef.__PVT__cmdq_src_ph4_rsp)) 
                                              & (1U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph4_rsp_s, 0x26U, 5))));
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
    vlSelfRef.__PVT__excl_pass_ph4 = vlSelfRef.__Vdly__excl_pass_ph4;
    vlSelfRef.__PVT__cmd_ph4_apply_dmt_req = vlSelfRef.__Vdly__cmd_ph4_apply_dmt_req;
    vlSelfRef.__PVT__cmd_ph4_nonexcl_read_dct_req = vlSelfRef.__Vdly__cmd_ph4_nonexcl_read_dct_req;
    vlSelfRef.__PVT__reqid_matches_sharevec_ph4 = vlSelfRef.__Vdly__reqid_matches_sharevec_ph4;
    vlSelfRef.__PVT__rddata_cache_ph4 = vlSelfRef.__Vdly__rddata_cache_ph4;
    vlSelfRef.__PVT__cmdis_resp_ph3 = vlSelfRef.__Vdly__cmdis_resp_ph3;
    vlSelfRef.__PVT__cmdis_req_ph3 = vlSelfRef.__Vdly__cmdis_req_ph3;
    vlSelfRef.__PVT__index_statusreg_ph3 = vlSelfRef.__Vdly__index_statusreg_ph3;
    vlSelfRef.__PVT__cmdvalid_ph3_rsp = vlSelfRef.__Vdly__cmdvalid_ph3_rsp;
    vlSelfRef.__PVT__cmdq_src_ph3_rsp = vlSelfRef.__Vdly__cmdq_src_ph3_rsp;
    VL_ASSIGN_W(155,vlSelfRef.__PVT__cmd_ph3_rsp, vlSelfRef.__Vdly__cmd_ph3_rsp);
    vlSelfRef.__PVT__cmdq_srcis_colln_ph3 = vlSelfRef.__Vdly__cmdq_srcis_colln_ph3;
    vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3 = vlSelfRef.__Vdly__cmdq_srcis_cachemiss_ph3;
    vlSelfRef.__PVT__cmdvalid_ph3_req = vlSelfRef.__Vdly__cmdvalid_ph3_req;
    vlSelfRef.__PVT__cmdq_srcis_newreq_ph3 = vlSelfRef.__Vdly__cmdq_srcis_newreq_ph3;
    vlSelfRef.__PVT__snpattr_req_ph3 = vlSelfRef.__Vdly__snpattr_req_ph3;
    vlSelfRef.__Vdly__cmdis_req_ph2 = vlSelfRef.__PVT__cmdis_req_ph2;
    VL_ASSIGN_W(155,vlSelfRef.__Vdly__cmd_ph2_req, vlSelfRef.__PVT__cmd_ph2_req);
    VL_ASSIGN_W(155,vlSelfRef.__PVT__cmd_ph3_req, vlSelfRef.__Vdly__cmd_ph3_req);
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
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_rsp.__PVT__share_vec 
        = vlSelfRef.__Vcellinp__sig_countones_post_rsp__share_vec;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_req.__PVT__share_vec 
        = vlSelfRef.__Vcellinp__sig_countones_post_req__share_vec;
    vlSelfRef.__PVT__cmdq_snpresp_or_dataresp_ph4 = 
        ((IData)(vlSelfRef.__PVT__cmdq_src0_SnpResp_ph4) 
         | (IData)(vlSelfRef.__PVT__cmdq_srcdata_ph4));
    vlSelfRef.__PVT__req_is_clean_ui_ph4 = ((IData)(vlSelfRef.__PVT__req_is_clean_u_ph4) 
                                            | (IData)(vlSelfRef.__PVT__req_is_clean_i_ph4));
    vlSelfRef.__PVT__req_is_make_ui_ph4 = ((IData)(vlSelfRef.__PVT__req_is_make_u_ph4) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph4));
    vlSelfRef.__PVT__req_is_read_s_notsd_ph4 = ((IData)(vlSelfRef.__PVT__req_is_read_s_ph4) 
                                                | (IData)(vlSelfRef.__PVT__req_is_read_notsd_ph4));
    vlSelfRef.__PVT__req_share_vect_ph4 = (0x3fffffU 
                                           & VL_SEL_IIII(32, vlSelfRef.__PVT__rddata_cache_ph4, 0xaU, 22));
    vlSelfRef.__PVT__req_cache_st_ph4 = (7U & VL_SEL_IIII(32, vlSelfRef.__PVT__rddata_cache_ph4, 0U, 3));
    vlSelfRef.__PVT__wren_stat_rsp_ph3 = ((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                          & (IData)(vlSelfRef.__PVT__cmdis_resp_ph3));
    vlSelfRef.__PVT__cmdq_srcis_resp_ph3 = (0U == (IData)(vlSelfRef.__PVT__cmdq_src_ph3_rsp));
    vlSelfRef.__PVT__cmdq_srcis_mem_ph3 = (1U == (IData)(vlSelfRef.__PVT__cmdq_src_ph3_rsp));
    vlSelfRef.__PVT__cmdq_srcis_data_ph3 = (2U == (IData)(vlSelfRef.__PVT__cmdq_src_ph3_rsp));
    vlSelfRef.__PVT__cmdq_src1_ph3 = (1U == (IData)(vlSelfRef.__PVT__cmdq_src_ph3_rsp));
    vlSelfRef.__PVT__cmdq_src0_ph3 = (0U == (IData)(vlSelfRef.__PVT__cmdq_src_ph3_rsp));
    vlSelfRef.__PVT__cmdq_src2_ph3 = (2U == (IData)(vlSelfRef.__PVT__cmdq_src_ph3_rsp));
    vlSelfRef.__PVT__cmd_ph4_23_18_rsp_nxt = (0x3fU 
                                              & VL_SEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_rsp, 0x1aU, 6));
    vlSelfRef.__PVT__vld_compbuff_num_2nd_ph3 = (1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2, 
                                                                  (0x1fU 
                                                                   & VL_SEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_rsp, 0x1aU, 5))));
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
    vlSelfRef.__PVT__cmd_ph3_pkt_forwarded_bit98 = 
        (1U & VL_BITSEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_rsp, 0x98U));
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
    VL_CONST_W_4X(128,__Vtemp_298,0x00001fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(109, 155, __Vtemp_299, vlSelfRef.__PVT__cmd_ph3_rsp, 0U, 109);
    VL_AND_W(4, vlSelfRef.__PVT__cmd_ph3_datrsp_s, __Vtemp_298, __Vtemp_299);
    VL_CONST_W_3X(96,__Vtemp_300,0x000001ff,0xffffffff,0xffffffff);
    VL_SEL_WWII(73, 155, __Vtemp_301, vlSelfRef.__PVT__cmd_ph3_rsp, 0U, 73);
    VL_AND_W(3, vlSelfRef.__PVT__cmd_ph3_rsp_s, __Vtemp_300, __Vtemp_301);
    vlSelfRef.__PVT__atom_block_rd = (VL_REDOR_I((IData)(vlSelfRef.__PVT__colln_rdy_atom_block_rd)) 
                                      | ((IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3) 
                                         & (IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3)));
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        vlSelfRef.__Vdly__cmdvalid_ph2_req = vlSelfRef.__PVT__cmdvalid_ph2_req_nxt;
        VL_ASSIGN_W(155,vlSelfRef.__Vdly__cmd_ph2_req, vlSelfRef.__PVT__cmd_ph2_req_nxt);
        vlSelfRef.__Vdly__cmdq_src_ph2_req = vlSelfRef.__PVT__cmdq_src_ph2_req_nxt;
        vlSelfRef.__Vdly__cmdq_src_ph3_req = vlSelfRef.__PVT__cmdq_src_ph2_req;
        vlSelfRef.__Vdly__cmdis_req_ph2 = vlSelfRef.__PVT__cmdis_req_ph2_nxt;
        vlSelfRef.__Vdly__req_collnq = vlSelfRef.__PVT__req_collnq_nxt;
        vlSelfRef.__Vdly__collnreq_st = vlSelfRef.__PVT__collnreq_st_nxt;
        vlSelfRef.__Vdly__cmdis_invalidate_ph2 = vlSelfRef.__PVT__cmdis_invalidate_ph2_nxt;
        vlSelfRef.__Vdly__cmdis_invalidate_ph3 = vlSelfRef.__PVT__cmdis_invalidate_ph2;
        vlSelfRef.__Vdly__cmdis_invalidate_ph4 = vlSelfRef.__PVT__cmdis_invalidate_ph3;
        vlSelfRef.__Vdly__serv_history_req = vlSelfRef.__PVT__serv_history_req_nxt;
        vlSelfRef.__Vdly__serv_history_rsp = vlSelfRef.__PVT__serv_history_rsp_nxt;
    } else {
        vlSelfRef.__Vdly__cmdvalid_ph2_req = 0U;
        VL_CONST_W_1X(155,vlSelfRef.__Vdly__cmd_ph2_req,0x00000000);
        vlSelfRef.__Vdly__cmdq_src_ph2_req = 0U;
        vlSelfRef.__Vdly__cmdq_src_ph3_req = 0U;
        vlSelfRef.__Vdly__cmdis_req_ph2 = 0U;
        vlSelfRef.__Vdly__req_collnq = 0U;
        vlSelfRef.__Vdly__collnreq_st = 0U;
        vlSelfRef.__Vdly__cmdis_invalidate_ph2 = 0U;
        vlSelfRef.__Vdly__cmdis_invalidate_ph3 = 0U;
        vlSelfRef.__Vdly__cmdis_invalidate_ph4 = 0U;
        vlSelfRef.__Vdly__serv_history_req = 1U;
        vlSelfRef.__Vdly__serv_history_rsp = 1U;
    }
    vlSelfRef.__PVT__req_src_clstid_ph3 = (0xffU & 
                                           VL_SEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_req, 0x12U, 8));
    vlSelfRef.__PVT__req_is_anyrd_ph3 = (1U & VL_BITSEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_req, 0x98U));
    vlSelfRef.__PVT__req_is_anywr_ph3 = (1U & VL_BITSEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_req, 0x97U));
    VL_CONST_W_5X(160,__Vtemp_302,0x007fffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(151, 155, __Vtemp_303, vlSelfRef.__PVT__cmd_ph3_req, 0U, 151);
    VL_AND_W(5, vlSelfRef.__PVT__cmd_ph3_req_s, __Vtemp_302, __Vtemp_303);
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
    vlSelfRef.__PVT__any_timeout_flag_true = (0U != vlSelfRef.__PVT__service_timeout_flag);
    vlSelfRef.__PVT__req_is_dataless_ph4 = ((IData)(vlSelfRef.__PVT__req_is_clean_ui_ph4) 
                                            | (IData)(vlSelfRef.__PVT__req_is_make_ui_ph4));
    vlSelfRef.__PVT__req_is_read_ocs_notsd_ph4 = ((
                                                   ((IData)(vlSelfRef.__PVT__req_is_read_o_ph4) 
                                                    | (IData)(vlSelfRef.__PVT__req_is_read_c_ph4)) 
                                                   | (IData)(vlSelfRef.__PVT__req_is_read_s_ph4)) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_read_s_notsd_ph4));
    vlSelfRef.__PVT__req_st_notdirty_ph4 = (1U & ((~ 
                                                   VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_cache_st_ph4), 1U)) 
                                                  & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_cache_st_ph4), 0U)));
    vlSelfRef.__PVT__req_st_valid_ph4 = (1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_cache_st_ph4), 0U));
    vlSelfRef.__PVT__req_st_invalid_ph4 = (1U & (~ 
                                                 VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_cache_st_ph4), 0U)));
    vlSelfRef.__PVT__req_st_dirty_ph4 = ((3U == (IData)(vlSelfRef.__PVT__req_cache_st_ph4)) 
                                         | (7U == (IData)(vlSelfRef.__PVT__req_cache_st_ph4)));
    vlSelfRef.__PVT__cmd_ph3_dat_resperr = (3U & VL_SEL_IWII(109, vlSelfRef.__PVT__cmd_ph3_datrsp_s, 0x35U, 2));
    vlSelfRef.__PVT__cmd_ph3_dat_opcode = (0xfU & VL_SEL_IWII(109, vlSelfRef.__PVT__cmd_ph3_datrsp_s, 0x31U, 4));
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
    vlSelfRef.__PVT__cmdis_req_ph2 = vlSelfRef.__Vdly__cmdis_req_ph2;
    vlSelfRef.__PVT__collnreq_st = vlSelfRef.__Vdly__collnreq_st;
    vlSelfRef.__PVT__serv_history_rsp = vlSelfRef.__Vdly__serv_history_rsp;
    vlSelfRef.__PVT__cmdis_invalidate_ph4 = vlSelfRef.__Vdly__cmdis_invalidate_ph4;
    vlSelfRef.__PVT__serv_history_req = vlSelfRef.__Vdly__serv_history_req;
    vlSelfRef.__PVT__req_collnq = vlSelfRef.__Vdly__req_collnq;
    vlSelfRef.__PVT__cmdq_src_ph3_req = vlSelfRef.__Vdly__cmdq_src_ph3_req;
    vlSelfRef.__PVT__cmdis_invalidate_ph2 = vlSelfRef.__Vdly__cmdis_invalidate_ph2;
    vlSelfRef.__PVT__cmdvalid_ph2_req = vlSelfRef.__Vdly__cmdvalid_ph2_req;
    VL_ASSIGN_W(155,vlSelfRef.__PVT__cmd_ph2_req, vlSelfRef.__Vdly__cmd_ph2_req);
    vlSelfRef.__PVT__cmdq_src_ph2_req = vlSelfRef.__Vdly__cmdq_src_ph2_req;
    vlSelfRef.__PVT__cmdis_invalidate_ph3 = vlSelfRef.__Vdly__cmdis_invalidate_ph3;
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
    vlSelfRef.__PVT__unused_signal = vlSelfRef.__PVT__any_timeout_flag_true;
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
    vlSelfRef.__PVT__cmdvalid_ph3_req_nxt = vlSelfRef.__PVT__cmdvalid_ph2_req;
    vlSelfRef.__PVT__cmd_isatmo_rd_ph2 = (2U == (3U 
                                                 & VL_SEL_IWII(155, vlSelfRef.__PVT__cmd_ph2_req, 0x99U, 2)));
    vlSelfRef.__PVT__cmd_isatmo_wr_ph2 = (1U == (3U 
                                                 & VL_SEL_IWII(155, vlSelfRef.__PVT__cmd_ph2_req, 0x99U, 2)));
    vlSelfRef.__PVT__cmd_isatmo_ph2 = (0U != (3U & 
                                              VL_SEL_IWII(155, vlSelfRef.__PVT__cmd_ph2_req, 0x99U, 2)));
    VL_CONST_W_5X(160,__Vtemp_304,0x007fffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(151, 155, __Vtemp_305, vlSelfRef.__PVT__cmd_ph2_req, 0U, 151);
    VL_AND_W(5, vlSelfRef.__PVT__cmd_ph2_req_s, __Vtemp_304, __Vtemp_305);
    vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph2 = (0U 
                                                 == (IData)(vlSelfRef.__PVT__cmdq_src_ph2_req));
    vlSelfRef.__PVT__cmdq_srcis_colln_ph2 = (1U == (IData)(vlSelfRef.__PVT__cmdq_src_ph2_req));
    vlSelfRef.__PVT__cmdq_srcis_newreq_ph2 = (2U == (IData)(vlSelfRef.__PVT__cmdq_src_ph2_req));
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
    vlSelfRef.__PVT__req_is_anydwt_ph3 = ((IData)(vlSelfRef.__PVT__reg_dwt_en) 
                                          & ((IData)(vlSelfRef.__PVT__req_is_wrnosnpfull_ph3) 
                                             | (IData)(vlSelfRef.__PVT__req_is_wrnosnpptl_ph3)));
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
    vlSelfRef.__PVT__snpattr_req_ph2 = (1U & VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0x89U));
    vlSelfRef.__PVT__cmd_addr_ph2 = (0xfffffffffffffULL 
                                     & VL_SEL_QWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0x48U, 52));
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
    vlSelfRef.__PVT__flit_dwt_en_ph3 = vlSelfRef.__PVT__req_is_anydwt_ph3;
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
    vlSelfRef.__PVT__new_readreceipt_cnt_req_ph3 = 
        (((2U == (3U & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x7fU, 2))) 
          | (3U == (3U & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x7fU, 2)))) 
         | (((0U == (3U & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x7fU, 2))) 
             & (~ VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x93U))) 
            & (IData)(vlSelfRef.__PVT__cmd_ph3_apply_dmt_req)));
    vlSelfRef.__PVT__new_wrdata_cnt_req_ph3 = 0U;
    if (vlSelfRef.__PVT__req_is_atom_ph3) {
        vlSelfRef.__PVT__new_wrdata_cnt_req_ph3 = 1U;
    } else if ((((((IData)(vlSelfRef.__PVT__req_is_anywr_ph3) 
                   & (~ (IData)(vlSelfRef.__PVT__req_is_wrnosnpzero_ph3))) 
                  & (~ (IData)(vlSelfRef.__PVT__req_is_wruniquezero_ph3))) 
                 & (~ (IData)(vlSelfRef.__PVT__flit_dwt_en_ph3))) 
                | (IData)(vlSelfRef.__PVT__req_is_writecmo_ph3))) {
        vlSelfRef.__PVT__new_wrdata_cnt_req_ph3 = 1U;
    }
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
}
