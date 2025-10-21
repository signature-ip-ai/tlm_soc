// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_node_txtop__pi44.h"

extern const VlWide<22>/*703:0*/ Vsig_topology_top__ConstPool__CONST_he95d9d6c_0;

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi44___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__7(Vsig_topology_top_sig_node_txtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi44___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__inactive_cntr = vlSelfRef.__PVT__inactive_cntr;
    vlSelfRef.__Vdly__port_is_inactive = vlSelfRef.__PVT__port_is_inactive;
    vlSelfRef.__Vdly__sactive_st = vlSelfRef.__PVT__sactive_st;
    vlSelfRef.__Vdly__ic_TXSACTIVE = vlSelfRef.__PVT__ic_TXSACTIVE;
    VL_ASSIGN_W(151,vlSelfRef.__Vdly__TX_REQFLIT, vlSelfRef.__PVT__TX_REQFLIT);
    vlSelfRef.__Vdly__TX_REQFLITV = vlSelfRef.__PVT__TX_REQFLITV;
    vlSelfRef.__Vdly__TX_SNPFLITV = vlSelfRef.__PVT__TX_SNPFLITV;
    VL_ASSIGN_W(151,vlSelfRef.__Vdly__TX_SNPFLIT, vlSelfRef.__PVT__TX_SNPFLIT);
    vlSelfRef.__Vdly__TX_RSPFLITV = vlSelfRef.__PVT__TX_RSPFLITV;
    VL_ASSIGN_W(73,vlSelfRef.__Vdly__TX_RSPFLIT, vlSelfRef.__PVT__TX_RSPFLIT);
    vlSelfRef.__Vdly__TX_DATFLITV = vlSelfRef.__PVT__TX_DATFLITV;
    VL_ASSIGN_W(680,vlSelfRef.__Vdly__TX_DATFLIT, vlSelfRef.__PVT__TX_DATFLIT);
    if (vlSelfRef.__PVT__rstb_ic_clk) {
        vlSelfRef.__Vdly__inactive_cntr = vlSelfRef.__PVT__inactive_cntr_nxt;
        vlSelfRef.__Vdly__port_is_inactive = vlSelfRef.__PVT__port_is_inactive_nxt;
    } else {
        vlSelfRef.__Vdly__inactive_cntr = 0U;
        vlSelfRef.__Vdly__port_is_inactive = 0U;
    }
    if (vlSelfRef.__PVT__rstb_ic_clk) {
        vlSelfRef.__Vdly__sactive_st = vlSelfRef.__PVT__sactive_st_nxt;
        vlSelfRef.__Vdly__ic_TXSACTIVE = vlSelfRef.__PVT__ic_TXSACTIVE_nxt;
    } else {
        vlSelfRef.__Vdly__sactive_st = 0U;
        vlSelfRef.__Vdly__ic_TXSACTIVE = 0U;
    }
    if (vlSelfRef.__PVT__rstb_ic_clk) {
        vlSelfRef.__Vdly__TX_SNPFLITV = vlSelfRef.__PVT__TX_SNPFLITV_nxt;
        VL_ASSIGN_W(151,vlSelfRef.__Vdly__TX_SNPFLIT, vlSelfRef.__PVT__TX_SNPFLIT_nxt);
        vlSelfRef.__Vdly__TX_RSPFLITV = vlSelfRef.__PVT__TX_RSPFLITV_nxt;
        VL_ASSIGN_W(73,vlSelfRef.__Vdly__TX_RSPFLIT, vlSelfRef.__PVT__TX_RSPFLIT_nxt);
        vlSelfRef.__Vdly__TX_DATFLITV = vlSelfRef.__PVT__TX_DATFLITV_nxt;
        VL_ASSIGN_W(680,vlSelfRef.__Vdly__TX_DATFLIT, vlSelfRef.__PVT__TX_DATFLIT_nxt);
        vlSelfRef.__Vdly__TX_REQFLITV = vlSelfRef.__PVT__TX_REQFLITV_nxt;
        VL_ASSIGN_W(151,vlSelfRef.__Vdly__TX_REQFLIT, vlSelfRef.__PVT__TX_REQFLIT_nxt);
    } else {
        vlSelfRef.__Vdly__TX_SNPFLITV = 0U;
        VL_CONST_W_1X(151,vlSelfRef.__Vdly__TX_SNPFLIT,0x00000000);
        vlSelfRef.__Vdly__TX_RSPFLITV = 0U;
        VL_CONST_W_1X(73,vlSelfRef.__Vdly__TX_RSPFLIT,0x00000000);
        vlSelfRef.__Vdly__TX_DATFLITV = 0U;
        VL_ASSIGN_W(680,vlSelfRef.__Vdly__TX_DATFLIT, Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
        vlSelfRef.__Vdly__TX_REQFLITV = 0U;
        VL_CONST_W_1X(151,vlSelfRef.__Vdly__TX_REQFLIT,0x00000000);
    }
    vlSelfRef.__PVT__inactive_cntr = vlSelfRef.__Vdly__inactive_cntr;
    vlSelfRef.__PVT__port_is_inactive = vlSelfRef.__Vdly__port_is_inactive;
    vlSelfRef.__PVT__sactive_st = vlSelfRef.__Vdly__sactive_st;
    vlSelfRef.__PVT__ic_TXSACTIVE = vlSelfRef.__Vdly__ic_TXSACTIVE;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__TX_REQFLIT, vlSelfRef.__Vdly__TX_REQFLIT);
    vlSelfRef.__PVT__TX_REQFLITV = vlSelfRef.__Vdly__TX_REQFLITV;
    vlSelfRef.__PVT__TX_SNPFLITV = vlSelfRef.__Vdly__TX_SNPFLITV;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__TX_SNPFLIT, vlSelfRef.__Vdly__TX_SNPFLIT);
    vlSelfRef.__PVT__TX_RSPFLITV = vlSelfRef.__Vdly__TX_RSPFLITV;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__TX_RSPFLIT, vlSelfRef.__Vdly__TX_RSPFLIT);
    vlSelfRef.__PVT__TX_DATFLITV = vlSelfRef.__Vdly__TX_DATFLITV;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__TX_DATFLIT, vlSelfRef.__Vdly__TX_DATFLIT);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi44___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__9(Vsig_topology_top_sig_node_txtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi44___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__inactive_cntr_nxt = vlSelfRef.__PVT__inactive_cntr;
    vlSelfRef.__PVT__port_is_inactive_nxt = vlSelfRef.__PVT__port_is_inactive;
    if ((((((IData)(vlSelfRef.__PVT__xmtr_cansend_flits) 
            & (IData)(vlSelfRef.__PVT__snpreq_empty_flit_store_fifo)) 
           & (IData)(vlSelfRef.__PVT__rsp_empty_flit_store_fifo)) 
          & (IData)(vlSelfRef.__PVT__dat_empty_flit_store_fifo)) 
         & (~ (IData)(vlSelfRef.__PVT__id_translator_hs_pending_txn)))) {
        if ((0x2710U == (IData)(vlSelfRef.__PVT__inactive_cntr))) {
            vlSelfRef.__PVT__port_is_inactive_nxt = 1U;
        } else {
            vlSelfRef.__PVT__inactive_cntr_nxt = (0x3fffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__inactive_cntr)));
        }
    } else {
        vlSelfRef.__PVT__inactive_cntr_nxt = 0U;
        vlSelfRef.__PVT__port_is_inactive_nxt = 0U;
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi44___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__10(Vsig_topology_top_sig_node_txtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi44___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sactive_st_nxt = vlSelfRef.__PVT__sactive_st;
    vlSelfRef.__PVT__ic_TXSACTIVE_nxt = vlSelfRef.__PVT__ic_TXSACTIVE;
    if (vlSelfRef.__PVT__sactive_st) {
        if (vlSelfRef.__PVT__sactive_st) {
            if ((((IData)(vlSelfRef.__PVT__cc_is_inactive_sync) 
                  & (IData)(vlSelfRef.__PVT__credits_backto_full)) 
                 & (~ (IData)(vlSelfRef.__PVT__id_translator_hs_pending_txn)))) {
                vlSelfRef.__PVT__sactive_st_nxt = 0U;
                vlSelfRef.__PVT__ic_TXSACTIVE_nxt = 0U;
            }
        } else {
            vlSelfRef.__PVT__sactive_st_nxt = vlSelfRef.__PVT__sactive_st;
        }
    } else if ((1U & (((((~ (IData)(vlSelfRef.__PVT__cc_is_inactive_sync)) 
                         | (~ (IData)(vlSelfRef.__PVT__snpreq_empty_flit_store_fifo))) 
                        | (~ (IData)(vlSelfRef.__PVT__rsp_empty_flit_store_fifo))) 
                       | (~ (IData)(vlSelfRef.__PVT__dat_empty_flit_store_fifo))) 
                      | (IData)(vlSelfRef.__PVT__id_translator_hs_pending_txn)))) {
        vlSelfRef.__PVT__sactive_st_nxt = 1U;
        vlSelfRef.__PVT__ic_TXSACTIVE_nxt = 1U;
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi44___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__7(Vsig_topology_top_sig_node_txtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi44___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__inactive_cntr_nxt = vlSelfRef.__PVT__inactive_cntr;
    vlSelfRef.__PVT__port_is_inactive_nxt = vlSelfRef.__PVT__port_is_inactive;
    if ((((((IData)(vlSelfRef.__PVT__xmtr_cansend_flits) 
            & (IData)(vlSelfRef.__PVT__snpreq_empty_flit_store_fifo)) 
           & (IData)(vlSelfRef.__PVT__rsp_empty_flit_store_fifo)) 
          & (IData)(vlSelfRef.__PVT__dat_empty_flit_store_fifo)) 
         & (~ (IData)(vlSelfRef.__PVT__id_translator_hs_pending_txn)))) {
        if ((0x2710U == (IData)(vlSelfRef.__PVT__inactive_cntr))) {
            vlSelfRef.__PVT__port_is_inactive_nxt = 1U;
        } else {
            vlSelfRef.__PVT__inactive_cntr_nxt = (0x3fffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__inactive_cntr)));
        }
    } else {
        vlSelfRef.__PVT__inactive_cntr_nxt = 0U;
        vlSelfRef.__PVT__port_is_inactive_nxt = 0U;
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi44___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__8(Vsig_topology_top_sig_node_txtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi44___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sactive_st_nxt = vlSelfRef.__PVT__sactive_st;
    vlSelfRef.__PVT__ic_TXSACTIVE_nxt = vlSelfRef.__PVT__ic_TXSACTIVE;
    if (vlSelfRef.__PVT__sactive_st) {
        if (vlSelfRef.__PVT__sactive_st) {
            if ((((IData)(vlSelfRef.__PVT__cc_is_inactive_sync) 
                  & (IData)(vlSelfRef.__PVT__credits_backto_full)) 
                 & (~ (IData)(vlSelfRef.__PVT__id_translator_hs_pending_txn)))) {
                vlSelfRef.__PVT__sactive_st_nxt = 0U;
                vlSelfRef.__PVT__ic_TXSACTIVE_nxt = 0U;
            }
        } else {
            vlSelfRef.__PVT__sactive_st_nxt = vlSelfRef.__PVT__sactive_st;
        }
    } else if ((1U & (((((~ (IData)(vlSelfRef.__PVT__cc_is_inactive_sync)) 
                         | (~ (IData)(vlSelfRef.__PVT__snpreq_empty_flit_store_fifo))) 
                        | (~ (IData)(vlSelfRef.__PVT__rsp_empty_flit_store_fifo))) 
                       | (~ (IData)(vlSelfRef.__PVT__dat_empty_flit_store_fifo))) 
                      | (IData)(vlSelfRef.__PVT__id_translator_hs_pending_txn)))) {
        vlSelfRef.__PVT__sactive_st_nxt = 1U;
        vlSelfRef.__PVT__ic_TXSACTIVE_nxt = 1U;
    }
}
