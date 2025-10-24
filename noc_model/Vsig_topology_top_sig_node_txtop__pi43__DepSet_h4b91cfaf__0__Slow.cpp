// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_ic_crdt_recv.h"
#include "Vsig_topology_top_sig_lnkactive_xmt.h"
#include "Vsig_topology_top_sig_node_dattxflit_top__pi59.h"
#include "Vsig_topology_top_sig_node_rsptxflit_top.h"
#include "Vsig_topology_top_sig_node_snptxflit_top__pi58.h"
#include "Vsig_topology_top_sig_node_txtop__pi43.h"

VL_ATTR_COLD void Vsig_topology_top_sig_node_txtop__pi43___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__1(Vsig_topology_top_sig_node_txtop__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi43___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rsp_empty_flit_store_fifo = vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__empty_flit_store_fifo;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__rsp_flit_to_id_translator, vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__flit_to_id_translator);
    vlSelfRef.__PVT__rsp_flitv_to_id_translator = vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__flitv_to_id_translator;
    vlSelfRef.__PVT__TX_RSPFLITV_ptcl = vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__flitv_out;
    vlSelfRef.__PVT__empty_snprsp_flit_fifo_tx_snp 
        = vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__empty_snprsp_flit_fifo;
    vlSelfRef.__PVT__snpreq_empty_flit_store_fifo = vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__empty_flit_store_fifo;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__snpreq_flit_to_id_translator, vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__flit_to_id_translator);
    vlSelfRef.__PVT__snpreq_flitv_to_id_translator 
        = vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__flitv_to_id_translator;
    vlSelf->__PVT__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt->__PVT__RXLINKACTIVEACK 
        = vlSelfRef.__PVT__ic_RX_LINKACTIVEACK;
    vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__id_translator_full 
        = vlSelfRef.__PVT__id_translator_full;
    vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__id_translator_full 
        = vlSelfRef.__PVT__id_translator_full;
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__id_translator_full 
        = vlSelfRef.__PVT__id_translator_full;
    vlSelfRef.__PVT__TX_DATFLITV_ptcl = vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__TX_DATFLITV;
    vlSelfRef.__PVT__TX_RSPFLITV_link = (((IData)(vlSelfRef.__PVT__return_linkcrdt) 
                                          & (~ (IData)(vlSelfRef.__PVT__TX_RSPFLITV_ptcl))) 
                                         & (0U != (IData)(vlSelfRef.__PVT__available_credits_rsp)));
    vlSelfRef.__PVT__enable_xmt = (1U & (((~ (IData)(vlSelfRef.__PVT__snpreq_empty_flit_store_fifo)) 
                                          | (~ (IData)(vlSelfRef.__PVT__rsp_empty_flit_store_fifo))) 
                                         | (~ (IData)(vlSelfRef.__PVT__dat_empty_flit_store_fifo))));
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
    vlSelfRef.__PVT__TX_DATFLITV_link = (((IData)(vlSelfRef.__PVT__return_linkcrdt) 
                                          & (~ (IData)(vlSelfRef.__PVT__TX_DATFLITV_ptcl))) 
                                         & (0U != (IData)(vlSelfRef.__PVT__available_credits_dat)));
    vlSelfRef.__PVT__TX_RSPFLITV_nxt = ((IData)(vlSelfRef.__PVT__TX_RSPFLITV_ptcl) 
                                        | (IData)(vlSelfRef.__PVT__TX_RSPFLITV_link));
    vlSelf->__PVT__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt->__PVT__enable_xmt 
        = vlSelfRef.__PVT__enable_xmt;
    vlSelfRef.__PVT__TX_DATFLITV_nxt = ((IData)(vlSelfRef.__PVT__TX_DATFLITV_ptcl) 
                                        | (IData)(vlSelfRef.__PVT__TX_DATFLITV_link));
    vlSelfRef.__PVT__consumed_crdt_rsp = vlSelfRef.__PVT__TX_RSPFLITV_nxt;
    vlSelfRef.__PVT__TX_RSPFLITPEND = vlSelfRef.__PVT__TX_RSPFLITV_nxt;
    vlSelfRef.__PVT__consumed_crdt_dat = vlSelfRef.__PVT__TX_DATFLITV_nxt;
    vlSelfRef.__PVT__TX_DATFLITPEND = vlSelfRef.__PVT__TX_DATFLITV_nxt;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp->__PVT__consumed_crdt 
        = vlSelfRef.__PVT__consumed_crdt_rsp;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat->__PVT__consumed_crdt 
        = vlSelfRef.__PVT__consumed_crdt_dat;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_txtop__pi43___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__1(Vsig_topology_top_sig_node_txtop__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi43___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rsp_empty_flit_store_fifo = vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__empty_flit_store_fifo;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__rsp_flit_to_id_translator, vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__flit_to_id_translator);
    vlSelfRef.__PVT__rsp_flitv_to_id_translator = vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__flitv_to_id_translator;
    vlSelfRef.__PVT__TX_RSPFLITV_ptcl = vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__flitv_out;
    vlSelfRef.__PVT__empty_snprsp_flit_fifo_tx_snp 
        = vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__empty_snprsp_flit_fifo;
    vlSelfRef.__PVT__snpreq_empty_flit_store_fifo = vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__empty_flit_store_fifo;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__snpreq_flit_to_id_translator, vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__flit_to_id_translator);
    vlSelfRef.__PVT__snpreq_flitv_to_id_translator 
        = vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__flitv_to_id_translator;
    vlSelfRef.__PVT__TX_SNPFLITV_ptcl = vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__flitv_out;
    vlSelfRef.__PVT__enter_deactivate = ((IData)(vlSelfRef.__PVT__port_is_inactive) 
                                         & (IData)(vlSelfRef.__PVT__rx_req_port_is_inactive));
    vlSelf->__PVT__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt->__PVT__RXLINKACTIVEACK 
        = vlSelfRef.__PVT__ic_RX_LINKACTIVEACK;
    vlSelfRef.__PVT__TX_DATFLITV_ptcl = vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__TX_DATFLITV;
    vlSelfRef.__PVT__TX_RSPFLITV_link = (((IData)(vlSelfRef.__PVT__return_linkcrdt) 
                                          & (~ (IData)(vlSelfRef.__PVT__TX_RSPFLITV_ptcl))) 
                                         & (0U != (IData)(vlSelfRef.__PVT__available_credits_rsp)));
    vlSelfRef.__PVT__enable_xmt = (1U & (((~ (IData)(vlSelfRef.__PVT__snpreq_empty_flit_store_fifo)) 
                                          | (~ (IData)(vlSelfRef.__PVT__rsp_empty_flit_store_fifo))) 
                                         | (~ (IData)(vlSelfRef.__PVT__dat_empty_flit_store_fifo))));
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
    vlSelfRef.__PVT__TX_SNPFLITV_link = (((IData)(vlSelfRef.__PVT__return_linkcrdt) 
                                          & (~ (IData)(vlSelfRef.__PVT__TX_SNPFLITV_ptcl))) 
                                         & (0U != (IData)(vlSelfRef.__PVT__available_credits_snp)));
    vlSelf->__PVT__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt->__PVT__enter_deactivate 
        = vlSelfRef.__PVT__enter_deactivate;
    vlSelfRef.__PVT__TX_DATFLITV_link = (((IData)(vlSelfRef.__PVT__return_linkcrdt) 
                                          & (~ (IData)(vlSelfRef.__PVT__TX_DATFLITV_ptcl))) 
                                         & (0U != (IData)(vlSelfRef.__PVT__available_credits_dat)));
    vlSelfRef.__PVT__TX_RSPFLITV_nxt = ((IData)(vlSelfRef.__PVT__TX_RSPFLITV_ptcl) 
                                        | (IData)(vlSelfRef.__PVT__TX_RSPFLITV_link));
    vlSelf->__PVT__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt->__PVT__enable_xmt 
        = vlSelfRef.__PVT__enable_xmt;
    vlSelfRef.__PVT__TX_SNPFLITV_nxt = ((IData)(vlSelfRef.__PVT__TX_SNPFLITV_ptcl) 
                                        | (IData)(vlSelfRef.__PVT__TX_SNPFLITV_link));
    vlSelfRef.__PVT__TX_DATFLITV_nxt = ((IData)(vlSelfRef.__PVT__TX_DATFLITV_ptcl) 
                                        | (IData)(vlSelfRef.__PVT__TX_DATFLITV_link));
    vlSelfRef.__PVT__consumed_crdt_rsp = vlSelfRef.__PVT__TX_RSPFLITV_nxt;
    vlSelfRef.__PVT__TX_RSPFLITPEND = vlSelfRef.__PVT__TX_RSPFLITV_nxt;
    vlSelfRef.__PVT__consumed_crdt_snp = vlSelfRef.__PVT__TX_SNPFLITV_nxt;
    vlSelfRef.__PVT__TX_SNPFLITPEND = vlSelfRef.__PVT__TX_SNPFLITV_nxt;
    vlSelfRef.__PVT__consumed_crdt_dat = vlSelfRef.__PVT__TX_DATFLITV_nxt;
    vlSelfRef.__PVT__TX_DATFLITPEND = vlSelfRef.__PVT__TX_DATFLITV_nxt;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp->__PVT__consumed_crdt 
        = vlSelfRef.__PVT__consumed_crdt_rsp;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp->__PVT__consumed_crdt 
        = vlSelfRef.__PVT__consumed_crdt_snp;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat->__PVT__consumed_crdt 
        = vlSelfRef.__PVT__consumed_crdt_dat;
}
