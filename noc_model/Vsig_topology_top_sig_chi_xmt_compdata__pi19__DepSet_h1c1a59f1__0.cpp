// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_chi_xmt_compdata__pi19.h"

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_compdata__pi19___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__3(Vsig_topology_top_sig_chi_xmt_compdata__pi19* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_compdata__pi19___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_xmt_compdata_nodeid_valid = 0U;
    if (((IData)(vlSelfRef.__PVT__ic_TX_DATFLITV) | (IData)(vlSelfRef.__PVT__slc_readnosnp_apply_dmt_compdata_out))) {
        vlSelfRef.__PVT__o_xmt_compdata_nodeid_valid = 1U;
    }
    vlSelfRef.__PVT__o_xmt_compdata_linear_nodeid = vlSelfRef.__PVT__comp_tgt_nodeid_linear;
    vlSelfRef.__PVT__tgt_nodeid_grid = vlSelfRef.__PVT__i_xmt_compdata_full_node_id;
    vlSelfRef.__PVT__comp_tgt_nodeid = ((IData)(vlSelfRef.__PVT__origreq_rdwr_nosnp)
                                         ? (IData)(vlSelfRef.__PVT__comp_tgt_nodeid_linear)
                                         : (IData)(vlSelfRef.__PVT__tgt_nodeid_grid));
    if ((1U & ((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xa5U) 
                | VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xa6U)) 
               | VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xa8U)))) {
        vlSelfRef.__PVT__returnnid = 0U;
    } else if ((1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x9aU))) {
        vlSelfRef.__PVT__returnnid = ((IData)(vlSelfRef.__PVT__slc_origreq_is_read_snp_dmt_out)
                                       ? (IData)(vlSelfRef.__PVT__tgt_nodeid_grid)
                                       : (IData)(vlSelfRef.__PVT__comp_tgt_nodeid_linear));
    } else {
        vlSelfRef.__PVT__returnnid = VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__mycluster_id), 4U);
    }
    VL_ASSIGNSEL_WI(680,15,0U, vlSelfRef.__PVT__ic_TX_DATFLIT_s, 
                    VL_CONCAT_III(15,11,4, (0x7ffU 
                                            & ((IData)(vlSelfRef.__PVT__send_memdata)
                                                ? VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x4aU, 11)
                                                : (IData)(vlSelfRef.__PVT__comp_tgt_nodeid))), 
                                  (0xfU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0U, 4))));
    VL_ASSIGNSEL_WI(151,23,0x1aU, vlSelfRef.__PVT__ic_TX_REQFLIT_s, 
                    VL_CONCAT_III(23,11,12, (IData)(vlSelfRef.__PVT__returnnid), 
                                  VL_EXTEND_II(12,6, 
                                               (0x3fU 
                                                & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x28U, 6)))));
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_TX_DATFLIT, vlSelfRef.__PVT__ic_TX_DATFLIT_s);
    VL_CONCAT_WIW(152,1,151, vlSelfRef.__PVT__ic_TX_REQFLIT, 1U, vlSelfRef.__PVT__ic_TX_REQFLIT_s);
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_compdata__pi19___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__0(Vsig_topology_top_sig_chi_xmt_compdata__pi19* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_compdata__pi19___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__respbuff_hasroom = (1U < (IData)(vlSelfRef.__PVT__respbuff_avail));
}

extern const VlWide<16>/*511:0*/ Vsig_topology_top__ConstPool__CONST_h93e1b771_0;

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_compdata__pi19___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__2(Vsig_topology_top_sig_chi_xmt_compdata__pi19* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_compdata__pi19___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__l3_wrbe_stored = vlSelfRef.__PVT__l3_wrbe_stored;
    VL_ASSIGN_W(512,vlSelfRef.__Vdly__l3_wrdata_stored, vlSelfRef.__PVT__l3_wrdata_stored);
    vlSelfRef.__Vdly__l3_drop_wrdata_stored = vlSelfRef.__PVT__l3_drop_wrdata_stored;
    vlSelfRef.__Vdly__proc_state_c = vlSelfRef.__PVT__proc_state_c;
    vlSelfRef.__Vdly__outstand_already_clr = vlSelfRef.__PVT__outstand_already_clr;
    vlSelfRef.__Vdly__avoid_clearing_outstand = vlSelfRef.__PVT__avoid_clearing_outstand;
    vlSelfRef.__Vdly__flag_memwr_allbe_zero = vlSelfRef.__PVT__flag_memwr_allbe_zero;
    vlSelfRef.__Vdly__was_SEND_REQ_st = vlSelfRef.__PVT__was_SEND_REQ_st;
    vlSelfRef.__Vdly__clr_collnreg_sending_ini = vlSelfRef.__PVT__clr_collnreg_sending_ini;
    vlSelfRef.__Vdly__index_pendingq_clr_outstand_cmd 
        = vlSelfRef.__PVT__index_pendingq_clr_outstand_cmd;
    vlSelfRef.__Vdly__clr_outstand_cmd = vlSelfRef.__PVT__clr_outstand_cmd;
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        vlSelfRef.__Vdly__proc_state_c = vlSelfRef.__PVT__proc_state_n;
        vlSelfRef.__Vdly__outstand_already_clr = vlSelfRef.__PVT__outstand_already_clr_nxt;
        vlSelfRef.__Vdly__avoid_clearing_outstand = vlSelfRef.__PVT__avoid_clearing_outstand_nxt;
        vlSelfRef.__Vdly__flag_memwr_allbe_zero = vlSelfRef.__PVT__flag_memwr_allbe_zero_nxt;
        vlSelfRef.__Vdly__was_SEND_REQ_st = vlSelfRef.__PVT__was_SEND_REQ_st_nxt;
        VL_ASSIGN_W(512,vlSelfRef.__Vdly__l3_wrdata_stored, vlSelfRef.__PVT__l3_wrdata_nxt);
        vlSelfRef.__Vdly__l3_wrbe_stored = vlSelfRef.__PVT__l3_wrbe_nxt;
        vlSelfRef.__Vdly__l3_drop_wrdata_stored = vlSelfRef.__PVT__l3_drop_wrdata_nxt;
    } else {
        vlSelfRef.__Vdly__proc_state_c = 0U;
        vlSelfRef.__Vdly__outstand_already_clr = 0U;
        vlSelfRef.__Vdly__avoid_clearing_outstand = 0U;
        vlSelfRef.__Vdly__flag_memwr_allbe_zero = 0U;
        vlSelfRef.__Vdly__was_SEND_REQ_st = 0U;
        VL_ASSIGN_W(512,vlSelfRef.__Vdly__l3_wrdata_stored, Vsig_topology_top__ConstPool__CONST_h93e1b771_0);
        vlSelfRef.__Vdly__l3_wrbe_stored = 0ULL;
        vlSelfRef.__Vdly__l3_drop_wrdata_stored = 0U;
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        vlSelfRef.__Vdly__clr_outstand_cmd = vlSelfRef.__PVT__clr_outstand_cmd_pre;
        vlSelfRef.__Vdly__clr_collnreg_sending_ini 
            = vlSelfRef.__PVT__clr_collnreg_sending_ini_pre;
        vlSelfRef.__Vdly__index_pendingq_clr_outstand_cmd 
            = (0x3fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x28U, 6));
    } else {
        vlSelfRef.__Vdly__clr_outstand_cmd = 0U;
        vlSelfRef.__Vdly__clr_collnreg_sending_ini = 0U;
        vlSelfRef.__Vdly__index_pendingq_clr_outstand_cmd = 0U;
    }
    vlSelfRef.__PVT__l3_wrbe_stored = vlSelfRef.__Vdly__l3_wrbe_stored;
    VL_ASSIGN_W(512,vlSelfRef.__PVT__l3_wrdata_stored, vlSelfRef.__Vdly__l3_wrdata_stored);
    vlSelfRef.__PVT__l3_drop_wrdata_stored = vlSelfRef.__Vdly__l3_drop_wrdata_stored;
    vlSelfRef.__PVT__proc_state_c = vlSelfRef.__Vdly__proc_state_c;
    vlSelfRef.__PVT__outstand_already_clr = vlSelfRef.__Vdly__outstand_already_clr;
    vlSelfRef.__PVT__avoid_clearing_outstand = vlSelfRef.__Vdly__avoid_clearing_outstand;
    vlSelfRef.__PVT__flag_memwr_allbe_zero = vlSelfRef.__Vdly__flag_memwr_allbe_zero;
    vlSelfRef.__PVT__was_SEND_REQ_st = vlSelfRef.__Vdly__was_SEND_REQ_st;
    vlSelfRef.__PVT__clr_collnreg_sending_ini = vlSelfRef.__Vdly__clr_collnreg_sending_ini;
    vlSelfRef.__PVT__index_pendingq_clr_outstand_cmd 
        = vlSelfRef.__Vdly__index_pendingq_clr_outstand_cmd;
    vlSelfRef.__PVT__clr_outstand_cmd = vlSelfRef.__Vdly__clr_outstand_cmd;
    vlSelfRef.__PVT__l3_wrbe = vlSelfRef.__PVT__l3_wrbe_stored;
    VL_ASSIGN_W(512,vlSelfRef.__PVT__l3_wrdata, vlSelfRef.__PVT__l3_wrdata_stored);
    vlSelfRef.__PVT__l3_drop_wrdata = vlSelfRef.__PVT__l3_drop_wrdata_stored;
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_compdata__pi19___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__0(Vsig_topology_top_sig_chi_xmt_compdata__pi19* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_compdata__pi19___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__valid_location[0U] = (0xfU & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0U, 4));
    vlSelfRef.__PVT__valid_location[1U] = (0xfU & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 4U, 4));
    vlSelfRef.__PVT__valid_location[2U] = (0xfU & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 8U, 4));
    vlSelfRef.__PVT__valid_location[3U] = (0xfU & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0xcU, 4));
    vlSelfRef.__PVT__valid_location[4U] = (0xfU & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x10U, 4));
    vlSelfRef.__PVT__valid_location[5U] = (0xfU & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x14U, 4));
    vlSelfRef.__PVT__valid_location[6U] = (0xfU & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x18U, 4));
    vlSelfRef.__PVT__valid_location[7U] = (0xfU & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x1cU, 4));
    vlSelfRef.__PVT__valid_location[8U] = (0xfU & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x20U, 4));
    vlSelfRef.__PVT__valid_location[9U] = (0xfU & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x24U, 4));
    vlSelfRef.__PVT__valid_location[0xaU] = (0xfU & 
                                             VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x28U, 4));
    vlSelfRef.__PVT__valid_location[0xbU] = (0xfU & 
                                             VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x2cU, 4));
    vlSelfRef.__PVT__valid_location[0xcU] = (0xfU & 
                                             VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x30U, 4));
    vlSelfRef.__PVT__valid_location[0xdU] = (0xfU & 
                                             VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x34U, 4));
    vlSelfRef.__PVT__valid_location[0xeU] = (0xfU & 
                                             VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x38U, 4));
    vlSelfRef.__PVT__valid_location[0xfU] = (0xfU & 
                                             VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x3cU, 4));
    vlSelfRef.__PVT__valid_location[0x10U] = (0xfU 
                                              & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x40U, 4));
    vlSelfRef.__PVT__valid_location[0x11U] = (0xfU 
                                              & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x44U, 4));
    vlSelfRef.__PVT__valid_location[0x12U] = (0xfU 
                                              & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x48U, 4));
    vlSelfRef.__PVT__valid_location[0x13U] = (0xfU 
                                              & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x4cU, 4));
    vlSelfRef.__PVT__valid_location[0x14U] = (0xfU 
                                              & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x50U, 4));
    vlSelfRef.__PVT__valid_location[0x15U] = (0xfU 
                                              & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x54U, 4));
    vlSelfRef.__PVT__valid_location[0x16U] = (0xfU 
                                              & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x58U, 4));
    vlSelfRef.__PVT__valid_location[0x17U] = (0xfU 
                                              & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x5cU, 4));
    vlSelfRef.__PVT__valid_location[0x18U] = (0xfU 
                                              & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x60U, 4));
    vlSelfRef.__PVT__valid_location[0x19U] = (0xfU 
                                              & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x64U, 4));
    vlSelfRef.__PVT__valid_location[0x1aU] = (0xfU 
                                              & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x68U, 4));
    vlSelfRef.__PVT__valid_location[0x1bU] = (0xfU 
                                              & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x6cU, 4));
    vlSelfRef.__PVT__valid_location[0x1cU] = (0xfU 
                                              & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x70U, 4));
    vlSelfRef.__PVT__valid_location[0x1dU] = (0xfU 
                                              & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x74U, 4));
    vlSelfRef.__PVT__valid_location[0x1eU] = (0xfU 
                                              & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x78U, 4));
    vlSelfRef.__PVT__valid_location[0x1fU] = (0xfU 
                                              & VL_SEL_IWII(128, vlSelfRef.__PVT__valid_location_all, 0x7cU, 4));
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_compdata__pi19___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__1(Vsig_topology_top_sig_chi_xmt_compdata__pi19* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_compdata__pi19___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__expcompack_has_respbufroom = (1U 
                                                   & ((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x38U) 
                                                       & (IData)(vlSelfRef.__PVT__respbuff_hasroom)) 
                                                      | (~ 
                                                         VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x38U))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_compdata__pi19___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__2(Vsig_topology_top_sig_chi_xmt_compdata__pi19* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_compdata__pi19___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_WQ(151,53,0x48U, vlSelfRef.__PVT__ic_TX_REQFLIT_s, 
                    VL_CONCAT_QIQ(53,1,52, (1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xa0U)), 
                                  VL_CONCAT_QQI(52,46,6, 
                                                (0x3fffffffffffULL 
                                                 & VL_SEL_QQII(52, vlSelfRef.__PVT__addr_outstandq_to_compdata, 6U, 46)), 0U)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_compdata__pi19___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__3(Vsig_topology_top_sig_chi_xmt_compdata__pi19* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_compdata__pi19___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__selected_valid_location_1st = 
        vlSelfRef.__PVT__valid_location[(0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x20U, 5))];
    vlSelfRef.__PVT__selected_valid_location_2nd = 
        vlSelfRef.__PVT__valid_location[(0x1fU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x31U, 5))];
    vlSelfRef.__PVT__all4_locations_have_data = 0U;
    if (((((IData)(vlSelfRef.__PVT__merge_rdcompdata) 
           | (IData)(vlSelfRef.__PVT__merge_wr_ptl_data)) 
          | (IData)(vlSelfRef.__PVT__merge_dataless)) 
         | (IData)(vlSelfRef.__PVT__merge_wrcmo))) {
        vlSelfRef.__PVT__all4_locations_have_data = 
            ((0xfU == (IData)(vlSelfRef.__PVT__selected_valid_location_1st)) 
             & (0xfU == (IData)(vlSelfRef.__PVT__selected_valid_location_2nd)));
    } else if ((0xfU == (IData)(vlSelfRef.__PVT__selected_valid_location_1st))) {
        vlSelfRef.__PVT__all4_locations_have_data = 1U;
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_compdata__pi19___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__8(Vsig_topology_top_sig_chi_xmt_compdata__pi19* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_compdata__pi19___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_xmt_compdata_nodeid_valid = 0U;
    if (((IData)(vlSelfRef.__PVT__ic_TX_DATFLITV) | (IData)(vlSelfRef.__PVT__slc_readnosnp_apply_dmt_compdata_out))) {
        vlSelfRef.__PVT__o_xmt_compdata_nodeid_valid = 1U;
    }
    vlSelfRef.__PVT__o_xmt_compdata_linear_nodeid = vlSelfRef.__PVT__comp_tgt_nodeid_linear;
    vlSelfRef.__PVT__tgt_nodeid_grid = vlSelfRef.__PVT__i_xmt_compdata_full_node_id;
    vlSelfRef.__PVT__comp_tgt_nodeid = ((IData)(vlSelfRef.__PVT__origreq_rdwr_nosnp)
                                         ? (IData)(vlSelfRef.__PVT__comp_tgt_nodeid_linear)
                                         : (IData)(vlSelfRef.__PVT__tgt_nodeid_grid));
    if ((1U & ((VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xa5U) 
                | VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xa6U)) 
               | VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0xa8U)))) {
        vlSelfRef.__PVT__returnnid = 0U;
    } else if ((1U & VL_BITSEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x9aU))) {
        vlSelfRef.__PVT__returnnid = ((IData)(vlSelfRef.__PVT__slc_origreq_is_read_snp_dmt_out)
                                       ? (IData)(vlSelfRef.__PVT__tgt_nodeid_grid)
                                       : (IData)(vlSelfRef.__PVT__comp_tgt_nodeid_linear));
    } else {
        vlSelfRef.__PVT__returnnid = VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__mycluster_id), 4U);
    }
    VL_ASSIGNSEL_WI(680,15,0U, vlSelfRef.__PVT__ic_TX_DATFLIT_s, 
                    VL_CONCAT_III(15,11,4, (0x7ffU 
                                            & ((IData)(vlSelfRef.__PVT__send_memdata)
                                                ? VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x4aU, 11)
                                                : (IData)(vlSelfRef.__PVT__comp_tgt_nodeid))), 
                                  (0xfU & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0U, 4))));
    VL_ASSIGNSEL_WI(151,23,0x1aU, vlSelfRef.__PVT__ic_TX_REQFLIT_s, 
                    VL_CONCAT_III(23,11,12, (IData)(vlSelfRef.__PVT__returnnid), 
                                  VL_EXTEND_II(12,6, 
                                               (0x3fU 
                                                & VL_SEL_IWII(181, vlSelfRef.__PVT__cc_outcompfifo_s, 0x28U, 6)))));
    VL_CONCAT_WIW(152,1,151, vlSelfRef.__PVT__ic_TX_REQFLIT, 1U, vlSelfRef.__PVT__ic_TX_REQFLIT_s);
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_compdata__pi19___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__9(Vsig_topology_top_sig_chi_xmt_compdata__pi19* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_compdata__pi19___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_TX_DATFLIT, vlSelfRef.__PVT__ic_TX_DATFLIT_s);
}
