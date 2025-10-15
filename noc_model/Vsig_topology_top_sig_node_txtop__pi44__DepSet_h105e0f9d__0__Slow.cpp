// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_double_synchronizer.h"
#include "Vsig_topology_top_sig_ic_crdt_recv.h"
#include "Vsig_topology_top_sig_lnkactive_xmt.h"
#include "Vsig_topology_top_sig_node_dattxflit_top__pi60.h"
#include "Vsig_topology_top_sig_node_rsptxflit_top.h"
#include "Vsig_topology_top_sig_node_snptxflit_top__pi59.h"
#include "Vsig_topology_top_sig_node_txtop__pi44.h"

VL_ATTR_COLD void Vsig_topology_top_sig_node_txtop__pi44___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__0(Vsig_topology_top_sig_node_txtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi44___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cc_is_inactive_sync = vlSelf->__PVT__double_sync_ucie_gen__DOT__inst_sync_cc_inactive->__PVT__sig_dest;
    vlSelfRef.__PVT__return_linkcrdt = vlSelf->__PVT__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt->__PVT__return_linkcrdt;
    vlSelfRef.__PVT__ic_TX_LINKACTIVEREQ = vlSelf->__PVT__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt->__PVT__TXLINKACTIVEREQ;
    vlSelfRef.__PVT__available_credits_rsp = vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp->__PVT__available_credits;
    vlSelfRef.__PVT__available_credits_dat = vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat->__PVT__available_credits;
    vlSelfRef.__PVT__available_credits_snp = vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp->__PVT__available_credits;
    vlSelfRef.__PVT__xmtr_cansend_flits = vlSelf->__PVT__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt->__PVT__xmtr_cansend_flits;
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__portis_RN_or_SN 
        = vlSelfRef.__PVT__portis_RN_or_SN;
    vlSelfRef.__PVT__timeout_or_recovery_mode = ((IData)(vlSelfRef.__PVT__i_in_timeout_mode) 
                                                 | (IData)(vlSelfRef.__PVT__i_in_recovery_mode));
    vlSelfRef.__PVT__dat_empty_flit_store_fifo = vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__empty_flit_store_fifo;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__dat_flit_to_id_translator, vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__flit_to_id_translator);
    vlSelfRef.__PVT__dat_flitv_to_id_translator = vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__flitv_to_id_translator;
    vlSelfRef.__PVT__porthas_credits_rsp = (0U != (IData)(vlSelfRef.__PVT__available_credits_rsp));
    vlSelfRef.__PVT__porthas_credits_dat = (0U != (IData)(vlSelfRef.__PVT__available_credits_dat));
    vlSelfRef.__PVT__porthas_credits_snp = (0U != (IData)(vlSelfRef.__PVT__available_credits_snp));
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp->__PVT__i_in_timeout_or_recovery 
        = vlSelfRef.__PVT__timeout_or_recovery_mode;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp->__PVT__i_in_timeout_or_recovery 
        = vlSelfRef.__PVT__timeout_or_recovery_mode;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat->__PVT__i_in_timeout_or_recovery 
        = vlSelfRef.__PVT__timeout_or_recovery_mode;
    vlSelf->__PVT__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt->__PVT__i_timeout_or_recovery_mode 
        = vlSelfRef.__PVT__timeout_or_recovery_mode;
    vlSelfRef.__PVT__o_dat_empty_flit_store_fifo = vlSelfRef.__PVT__dat_empty_flit_store_fifo;
    vlSelfRef.__PVT__port_can_send_flit_rsp = (((IData)(vlSelfRef.__PVT__porthas_credits_rsp) 
                                                & (IData)(vlSelfRef.__PVT__xmtr_cansend_flits)) 
                                               | (IData)(vlSelfRef.__PVT__timeout_or_recovery_mode));
    vlSelfRef.__PVT__port_can_send_flit_dat = (((IData)(vlSelfRef.__PVT__porthas_credits_dat) 
                                                & (IData)(vlSelfRef.__PVT__xmtr_cansend_flits)) 
                                               | (IData)(vlSelfRef.__PVT__timeout_or_recovery_mode));
    vlSelfRef.__PVT__port_can_send_flit_req = (((IData)(vlSelfRef.__PVT__porthas_credits_snp) 
                                                & (IData)(vlSelfRef.__PVT__xmtr_cansend_flits)) 
                                               | (IData)(vlSelfRef.__PVT__i_in_timeout_mode));
    vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__porthas_credits 
        = vlSelfRef.__PVT__port_can_send_flit_rsp;
    vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__porthas_credits 
        = vlSelfRef.__PVT__port_can_send_flit_dat;
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__porthas_credits 
        = vlSelfRef.__PVT__port_can_send_flit_req;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_txtop__pi44___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__3(Vsig_topology_top_sig_node_txtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi44___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__double_sync_ucie_gen__DOT__inst_sync_cc_inactive->__PVT__resetb_clkdest 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__double_sync_ucie_gen__DOT__inst_sync_cc_inactive->__PVT__clkdest 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp->__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp->__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat->__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt->__PVT__rstb_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp->__PVT__cc_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp->__PVT__cc_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat->__PVT__cc_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt->__PVT__clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__double_sync_ucie_gen__DOT__inst_sync_cc_inactive->__PVT__sig_src 
        = vlSelfRef.__PVT__cc_is_inactive;
    vlSelf->__PVT__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt->__PVT__all_cache_init_complete 
        = vlSelfRef.__PVT__all_cache_init_complete;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_txtop__pi44___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__0(Vsig_topology_top_sig_node_txtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi44___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cc_is_inactive_sync = vlSelf->__PVT__double_sync_ucie_gen__DOT__inst_sync_cc_inactive->__PVT__sig_dest;
    vlSelfRef.__PVT__return_linkcrdt = vlSelf->__PVT__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt->__PVT__return_linkcrdt;
    vlSelfRef.__PVT__ic_TX_LINKACTIVEREQ = vlSelf->__PVT__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt->__PVT__TXLINKACTIVEREQ;
    vlSelfRef.__PVT__available_credits_rsp = vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp->__PVT__available_credits;
    vlSelfRef.__PVT__available_credits_dat = vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat->__PVT__available_credits;
    vlSelfRef.__PVT__available_credits_snp = vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp->__PVT__available_credits;
    vlSelfRef.__PVT__xmtr_cansend_flits = vlSelf->__PVT__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt->__PVT__xmtr_cansend_flits;
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__sysco_is_disabled 
        = vlSelfRef.__PVT__sysco_is_disabled;
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__portis_RN_or_SN 
        = vlSelfRef.__PVT__portis_RN_or_SN;
    vlSelfRef.__PVT__timeout_or_recovery_mode = ((IData)(vlSelfRef.__PVT__i_in_timeout_mode) 
                                                 | (IData)(vlSelfRef.__PVT__i_in_recovery_mode));
    vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__id_translator_full 
        = vlSelfRef.__PVT__id_translator_full;
    vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__id_translator_full 
        = vlSelfRef.__PVT__id_translator_full;
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__id_translator_full 
        = vlSelfRef.__PVT__id_translator_full;
    vlSelfRef.__PVT__dat_empty_flit_store_fifo = vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__empty_flit_store_fifo;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__dat_flit_to_id_translator, vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__flit_to_id_translator);
    vlSelfRef.__PVT__dat_flitv_to_id_translator = vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__flitv_to_id_translator;
    vlSelfRef.__PVT__porthas_credits_rsp = (0U != (IData)(vlSelfRef.__PVT__available_credits_rsp));
    vlSelfRef.__PVT__porthas_credits_dat = (0U != (IData)(vlSelfRef.__PVT__available_credits_dat));
    vlSelfRef.__PVT__porthas_credits_snp = (0U != (IData)(vlSelfRef.__PVT__available_credits_snp));
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp->__PVT__i_in_timeout_or_recovery 
        = vlSelfRef.__PVT__timeout_or_recovery_mode;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp->__PVT__i_in_timeout_or_recovery 
        = vlSelfRef.__PVT__timeout_or_recovery_mode;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat->__PVT__i_in_timeout_or_recovery 
        = vlSelfRef.__PVT__timeout_or_recovery_mode;
    vlSelf->__PVT__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt->__PVT__i_timeout_or_recovery_mode 
        = vlSelfRef.__PVT__timeout_or_recovery_mode;
    vlSelfRef.__PVT__o_dat_empty_flit_store_fifo = vlSelfRef.__PVT__dat_empty_flit_store_fifo;
    vlSelfRef.__PVT__port_can_send_flit_rsp = (((IData)(vlSelfRef.__PVT__porthas_credits_rsp) 
                                                & (IData)(vlSelfRef.__PVT__xmtr_cansend_flits)) 
                                               | (IData)(vlSelfRef.__PVT__timeout_or_recovery_mode));
    vlSelfRef.__PVT__port_can_send_flit_dat = (((IData)(vlSelfRef.__PVT__porthas_credits_dat) 
                                                & (IData)(vlSelfRef.__PVT__xmtr_cansend_flits)) 
                                               | (IData)(vlSelfRef.__PVT__timeout_or_recovery_mode));
    vlSelfRef.__PVT__port_can_send_flit_req = (((IData)(vlSelfRef.__PVT__porthas_credits_snp) 
                                                & (IData)(vlSelfRef.__PVT__xmtr_cansend_flits)) 
                                               | (IData)(vlSelfRef.__PVT__i_in_timeout_mode));
    vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__porthas_credits 
        = vlSelfRef.__PVT__port_can_send_flit_rsp;
    vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__porthas_credits 
        = vlSelfRef.__PVT__port_can_send_flit_dat;
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__porthas_credits 
        = vlSelfRef.__PVT__port_can_send_flit_req;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_txtop__pi44___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__3(Vsig_topology_top_sig_node_txtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi44___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__double_sync_ucie_gen__DOT__inst_sync_cc_inactive->__PVT__resetb_clkdest 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__double_sync_ucie_gen__DOT__inst_sync_cc_inactive->__PVT__clkdest 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp->__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp->__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat->__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt->__PVT__rstb_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp->__PVT__cc_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp->__PVT__cc_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat->__PVT__cc_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt->__PVT__clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__double_sync_ucie_gen__DOT__inst_sync_cc_inactive->__PVT__sig_src 
        = vlSelfRef.__PVT__cc_is_inactive;
    vlSelf->__PVT__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt->__PVT__all_cache_init_complete 
        = vlSelfRef.__PVT__all_cache_init_complete;
    VL_ASSIGN_W(151,vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__flit_from_id_translator, vlSelfRef.__PVT__snpreq_flit_from_id_translator);
    VL_ASSIGN_W(73,vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__flit_from_id_translator, vlSelfRef.__PVT__rsp_flit_from_id_translator);
    VL_ASSIGN_W(680,vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__flit_from_id_translator, vlSelfRef.__PVT__dat_flit_from_id_translator);
}
