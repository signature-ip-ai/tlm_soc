// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_chi_xmt_resp.h"

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_resp___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0__1(Vsig_topology_top_sig_chi_xmt_resp* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_resp___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    VL_ASSIGN_W(74,vlSelfRef.__PVT__ic_TX_RSPFLIT_s, vlSelfRef.__PVT__respbody_snpreq);
    if ((1U == (IData)(vlSelfRef.__PVT__grant_resp))) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__ic_TX_RSPFLIT_s, vlSelfRef.__PVT__respbody_snpreq);
    } else if ((2U == (IData)(vlSelfRef.__PVT__grant_resp))) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__ic_TX_RSPFLIT_s, vlSelfRef.__PVT__respbody_compdata);
    } else if ((4U == (IData)(vlSelfRef.__PVT__grant_resp))) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__ic_TX_RSPFLIT_s, vlSelfRef.__PVT__respbody_rdrcpt);
    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_resp))) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__ic_TX_RSPFLIT_s, vlSelfRef.__PVT__respbody_retryack);
    } else if ((0x10U == (IData)(vlSelfRef.__PVT__grant_resp))) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__ic_TX_RSPFLIT_s, vlSelfRef.__PVT__respbody_pcrdgnt);
    }
    vlSelfRef.__PVT__rev_xform_linear_to_actual = (1U 
                                                   & VL_BITSEL_IWII(74, vlSelfRef.__PVT__ic_TX_RSPFLIT_s, 0x49U));
    VL_CONST_W_3X(96,__Vtemp_1,0x000001ff,0xffffffff,0xffffffff);
    VL_SEL_WWII(73, 74, __Vtemp_2, vlSelfRef.__PVT__ic_TX_RSPFLIT_s, 0U, 73);
    VL_AND_W(3, vlSelfRef.__PVT__ic_TX_RSPFLIT_nxt, __Vtemp_1, __Vtemp_2);
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_resp___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0__2(Vsig_topology_top_sig_chi_xmt_resp* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_resp___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_xmt_resp_nodeid_valid = 0U;
    if (vlSelfRef.__PVT__ic_TX_RSPFLITV_nxt) {
        vlSelfRef.__PVT__o_xmt_resp_nodeid_valid = 1U;
    }
    vlSelfRef.__PVT__o_xmt_resp_linear_nodeid = (0x7ffU 
                                                 & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_TX_RSPFLIT_nxt, 4U, 11));
    vlSelfRef.__PVT__tgt_nodeid_grid = vlSelfRef.__PVT__i_xmt_resp_full_node_id;
    vlSelfRef.__PVT__final_tgt_id = (0x7ffU & ((IData)(vlSelfRef.__PVT__rev_xform_linear_to_actual)
                                                ? (IData)(vlSelfRef.__PVT__tgt_nodeid_grid)
                                                : VL_SEL_IWII(73, vlSelfRef.__PVT__ic_TX_RSPFLIT_nxt, 4U, 11)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_resp___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0__0(Vsig_topology_top_sig_chi_xmt_resp* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_resp___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ic_TX_RSPFLITV = vlSelfRef.__PVT__ic_TX_RSPFLITV;
    VL_ASSIGN_W(73,vlSelfRef.__Vdly__ic_TX_RSPFLIT, vlSelfRef.__PVT__ic_TX_RSPFLIT);
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        vlSelfRef.__Vdly__ic_TX_RSPFLITV = vlSelfRef.__PVT__ic_TX_RSPFLITV_nxt;
        VL_ASSIGNSEL_WI(73,26,0U, vlSelfRef.__Vdly__ic_TX_RSPFLIT, 
                        VL_CONCAT_III(26,11,15, (0x7ffU 
                                                 & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_TX_RSPFLIT_nxt, 0xfU, 11)), 
                                      VL_CONCAT_III(15,11,4, (IData)(vlSelfRef.__PVT__final_tgt_id), 
                                                    (0xfU 
                                                     & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_TX_RSPFLIT_nxt, 0U, 4)))));
        VL_ASSIGNSEL_WI(73,12,0x1aU, vlSelfRef.__Vdly__ic_TX_RSPFLIT, 
                        (0xfffU & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_TX_RSPFLIT_nxt, 0x1aU, 12)));
        VL_ASSIGNSEL_WI(73,16,0x26U, vlSelfRef.__Vdly__ic_TX_RSPFLIT, 
                        VL_CONCAT_III(16,6,10, VL_CONCAT_III(6,3,3, 
                                                             (7U 
                                                              & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_TX_RSPFLIT_nxt, 0x33U, 3)), 
                                                             (7U 
                                                              & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_TX_RSPFLIT_nxt, 0x30U, 3))), 
                                      VL_CONCAT_III(10,3,7, 
                                                    (7U 
                                                     & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_TX_RSPFLIT_nxt, 0x2dU, 3)), 
                                                    VL_CONCAT_III(7,2,5, 
                                                                  (3U 
                                                                   & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_TX_RSPFLIT_nxt, 0x2bU, 2)), 
                                                                  (0x1fU 
                                                                   & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_TX_RSPFLIT_nxt, 0x26U, 5))))));
        VL_ASSIGNSEL_WI(73,12,0x36U, vlSelfRef.__Vdly__ic_TX_RSPFLIT, 
                        (0xfffU & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_TX_RSPFLIT_nxt, 0x36U, 12)));
        VL_ASSIGNSEL_WI(73,7,0x42U, vlSelfRef.__Vdly__ic_TX_RSPFLIT, 
                        VL_CONCAT_III(7,1,6, (1U & 
                                              VL_BITSEL_IWII(73, vlSelfRef.__PVT__ic_TX_RSPFLIT_nxt, 0x48U)), 
                                      VL_CONCAT_III(6,2,4, 
                                                    (3U 
                                                     & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_TX_RSPFLIT_nxt, 0x46U, 2)), 
                                                    (0xfU 
                                                     & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_TX_RSPFLIT_nxt, 0x42U, 4)))));
    } else {
        vlSelfRef.__Vdly__ic_TX_RSPFLITV = 0U;
        VL_CONST_W_1X(73,vlSelfRef.__Vdly__ic_TX_RSPFLIT,0x00000000);
    }
    vlSelfRef.__PVT__ic_TX_RSPFLITV = vlSelfRef.__Vdly__ic_TX_RSPFLITV;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__ic_TX_RSPFLIT, vlSelfRef.__Vdly__ic_TX_RSPFLIT);
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_resp___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0__1(Vsig_topology_top_sig_chi_xmt_resp* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_resp___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    VL_ASSIGN_W(74,vlSelfRef.__PVT__ic_TX_RSPFLIT_s, vlSelfRef.__PVT__respbody_snpreq);
    if ((1U == (IData)(vlSelfRef.__PVT__grant_resp))) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__ic_TX_RSPFLIT_s, vlSelfRef.__PVT__respbody_snpreq);
    } else if ((2U == (IData)(vlSelfRef.__PVT__grant_resp))) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__ic_TX_RSPFLIT_s, vlSelfRef.__PVT__respbody_compdata);
    } else if ((4U == (IData)(vlSelfRef.__PVT__grant_resp))) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__ic_TX_RSPFLIT_s, vlSelfRef.__PVT__respbody_rdrcpt);
    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_resp))) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__ic_TX_RSPFLIT_s, vlSelfRef.__PVT__respbody_retryack);
    } else if ((0x10U == (IData)(vlSelfRef.__PVT__grant_resp))) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__ic_TX_RSPFLIT_s, vlSelfRef.__PVT__respbody_pcrdgnt);
    }
    vlSelfRef.__PVT__rev_xform_linear_to_actual = (1U 
                                                   & VL_BITSEL_IWII(74, vlSelfRef.__PVT__ic_TX_RSPFLIT_s, 0x49U));
    VL_CONST_W_3X(96,__Vtemp_1,0x000001ff,0xffffffff,0xffffffff);
    VL_SEL_WWII(73, 74, __Vtemp_2, vlSelfRef.__PVT__ic_TX_RSPFLIT_s, 0U, 73);
    VL_AND_W(3, vlSelfRef.__PVT__ic_TX_RSPFLIT_nxt, __Vtemp_1, __Vtemp_2);
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_resp___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0__2(Vsig_topology_top_sig_chi_xmt_resp* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_resp___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_xmt_resp_nodeid_valid = 0U;
    if (vlSelfRef.__PVT__ic_TX_RSPFLITV_nxt) {
        vlSelfRef.__PVT__o_xmt_resp_nodeid_valid = 1U;
    }
    vlSelfRef.__PVT__o_xmt_resp_linear_nodeid = (0x7ffU 
                                                 & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_TX_RSPFLIT_nxt, 4U, 11));
    vlSelfRef.__PVT__tgt_nodeid_grid = vlSelfRef.__PVT__i_xmt_resp_full_node_id;
    vlSelfRef.__PVT__final_tgt_id = (0x7ffU & ((IData)(vlSelfRef.__PVT__rev_xform_linear_to_actual)
                                                ? (IData)(vlSelfRef.__PVT__tgt_nodeid_grid)
                                                : VL_SEL_IWII(73, vlSelfRef.__PVT__ic_TX_RSPFLIT_nxt, 4U, 11)));
}
