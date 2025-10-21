// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cmn_pipeline_chi__pi27.h"
#include "Vsig_topology_top_sig_node_porttop__pi28.h"
#include "Vsig_topology_top_sig_node_porttop_wrapper__pi10.h"

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi10___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ic_RX_REQLCRDV = 0U;
    vlSelfRef.__PVT__ic_TX_SNPFLITPEND = 0U;
    vlSelfRef.__PVT__ic_TX_SNPFLITV = 0U;
    VL_CONST_W_1X(108,vlSelfRef.__PVT__ic_TX_SNPFLIT,0x00000000);
    vlSelfRef.__PVT__ic_TX_RSPFLITPEND = 0U;
    vlSelfRef.__PVT__ic_TX_RSPFLITV = 0U;
    VL_CONST_W_1X(73,vlSelfRef.__PVT__ic_TX_RSPFLIT,0x00000000);
    vlSelfRef.__PVT__syscoack = 0U;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__syscoack_mst = 0U;
    VL_CONST_W_1X(73,vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txrspflit_mst,0x00000000);
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txrspflitv_mst = 0U;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txrspflitpend_mst = 0U;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxreqlcrdv_mst = 0U;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__syscoreq_slv = 0U;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txrsplcrdv_slv = 0U;
    VL_CONST_W_1X(151,vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxreqflit_slv,0x00000000);
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxreqflitv_slv = 0U;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxreqflitpend_slv = 0U;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__portis_RN_or_SN = 0U;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_TX_REQLCRDV = 0U;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_TX_RSPLCRDV = 0U;
    VL_CONST_W_1X(108,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_RX_SNPFLIT,0x00000000);
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_RX_SNPFLITV = 0U;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_RX_SNPFLITPEND = 0U;
    VL_CONST_W_1X(151,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_RX_REQFLIT,0x00000000);
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_RX_REQFLITV = 0U;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_RX_REQFLITPEND = 0U;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__xy_coord_all_pm = 0ULL;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__xy_coord_all_hn_i = 0U;
    VL_CONST_W_1X(116,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__noncm_homeaddr_limit_all_hn_i,0x00000000);
    VL_CONST_W_1X(112,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__noncm_homeaddr_base_all_hn_i,0x00000000);
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__noncm_homeaddr_limit_all_hn_f = 0U;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__noncm_homeaddr_base_all_hn_f = 0U;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__xy_coord_all_hn_f = 0U;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__cm_homeaddr_limit_all_hn_f = 0U;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__cm_homeaddr_base_all_hn_f = 0U;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__sysco_is_disabled = 1U;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__mn_node_id = 0U;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__2(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxsactive_slv 
        = vlSelfRef.__PVT__ic_RXSACTIVE;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txlinkactiveack_slv 
        = vlSelfRef.__PVT__ic_TX_LINKACTIVEACK;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxlinkactivereq_slv 
        = vlSelfRef.__PVT__ic_RX_LINKACTIVEREQ;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txdatlcrdv_slv 
        = vlSelfRef.__PVT__ic_TX_DATLCRDV;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txsnplcrdv_slv 
        = vlSelfRef.__PVT__ic_TX_REQLCRDV;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__reset_n 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__clk 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    VL_ASSIGN_W(680,vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxdatflit_slv, vlSelfRef.__PVT__ic_RX_DATFLIT);
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxdatflitv_slv 
        = vlSelfRef.__PVT__ic_RX_DATFLITV;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxdatflitpend_slv 
        = vlSelfRef.__PVT__ic_RX_DATFLITPEND;
    VL_ASSIGN_W(73,vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxrspflit_slv, vlSelfRef.__PVT__ic_RX_RSPFLIT);
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxrspflitv_slv 
        = vlSelfRef.__PVT__ic_RX_RSPFLITV;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxrspflitpend_slv 
        = vlSelfRef.__PVT__ic_RX_RSPFLITPEND;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__cc_is_inactive 
        = vlSelfRef.__PVT__cc_is_inactive;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__all_cache_init_complete 
        = vlSelfRef.__PVT__all_cache_init_complete;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_clear_timeout_interrupt 
        = vlSelfRef.__PVT__i_clear_timeout_interrupt;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_clear_recovery_interrupt 
        = vlSelfRef.__PVT__i_clear_recovery_interrupt;
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_reqf_vc0, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_reqf_vc0);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__0(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ic_RX_DATLCRDV = vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxdatlcrdv_slv;
    vlSelfRef.__PVT__node_porttop_sn__DOT__rxdatflitv_to_hn 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxdatflitv_mst;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__node_porttop_sn__DOT__rxdatflit_to_hn, vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxdatflit_mst);
    vlSelfRef.__PVT__node_porttop_sn__DOT__rxdatflitpend_to_hn 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxdatflitpend_mst;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_RX_DATFLITV 
        = vlSelfRef.__PVT__node_porttop_sn__DOT__rxdatflitv_to_hn;
    VL_ASSIGN_W(680,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_RX_DATFLIT, vlSelfRef.__PVT__node_porttop_sn__DOT__rxdatflit_to_hn);
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_RX_DATFLITPEND 
        = vlSelfRef.__PVT__node_porttop_sn__DOT__rxdatflitpend_to_hn;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__1(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ic_RX_RSPLCRDV = vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxrsplcrdv_slv;
    vlSelfRef.__PVT__node_porttop_sn__DOT__rxrspflitv_to_hn 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxrspflitv_mst;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__node_porttop_sn__DOT__rxrspflit_to_hn, vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxrspflit_mst);
    vlSelfRef.__PVT__node_porttop_sn__DOT__rxrspflitpend_to_hn 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxrspflitpend_mst;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_RX_RSPFLITV 
        = vlSelfRef.__PVT__node_porttop_sn__DOT__rxrspflitv_to_hn;
    VL_ASSIGN_W(73,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_RX_RSPFLIT, vlSelfRef.__PVT__node_porttop_sn__DOT__rxrspflit_to_hn);
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_RX_RSPFLITPEND 
        = vlSelfRef.__PVT__node_porttop_sn__DOT__rxrspflitpend_to_hn;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__4(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__node_porttop_sn__DOT__rxrsplcrdv_to_pl 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_RX_RSPLCRDV;
    vlSelfRef.__PVT__node_porttop_sn__DOT__rxdatlcrdv_to_pl 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_RX_DATLCRDV;
    vlSelfRef.__PVT__o_timeout_interrupt = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__o_timeout_interrupt;
    vlSelfRef.__PVT__o_timeout_recovery_successful 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__o_timeout_recovery_successful;
    vlSelfRef.__PVT__node_porttop_sn__DOT__txsactive_to_pl 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_TXSACTIVE;
    vlSelfRef.__PVT__node_porttop_sn__DOT__txlinkactivereq_to_pl 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_TX_LINKACTIVEREQ;
    vlSelfRef.__PVT__node_porttop_sn__DOT__rxlinkactiveack_to_pl 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_RX_LINKACTIVEACK;
    vlSelfRef.__PVT__node_porttop_sn__DOT__txreqflitpend_to_pl 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_TX_SNPFLITPEND;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__node_porttop_sn__DOT__txreqflit_to_pl, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_TX_SNPFLIT);
    vlSelfRef.__PVT__node_porttop_sn__DOT__txdatflitpend_to_pl 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_TX_DATFLITPEND;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__node_porttop_sn__DOT__txdatflit_to_pl, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_TX_DATFLIT);
    vlSelfRef.__PVT__node_porttop_sn__DOT__txreqflitv_to_pl 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_TX_SNPFLITV;
    vlSelfRef.__PVT__node_porttop_sn__DOT__txdatflitv_to_pl 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_TX_DATFLITV;
    vlSelfRef.__PVT__tx_is_inactive = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__tx_is_inactive;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxrsplcrdv_mst 
        = vlSelfRef.__PVT__node_porttop_sn__DOT__rxrsplcrdv_to_pl;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxdatlcrdv_mst 
        = vlSelfRef.__PVT__node_porttop_sn__DOT__rxdatlcrdv_to_pl;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txsactive_mst 
        = vlSelfRef.__PVT__node_porttop_sn__DOT__txsactive_to_pl;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txlinkactivereq_mst 
        = vlSelfRef.__PVT__node_porttop_sn__DOT__txlinkactivereq_to_pl;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxlinkactiveack_mst 
        = vlSelfRef.__PVT__node_porttop_sn__DOT__rxlinkactiveack_to_pl;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txsnpflitpend_mst 
        = vlSelfRef.__PVT__node_porttop_sn__DOT__txreqflitpend_to_pl;
    VL_ASSIGN_W(151,vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txsnpflit_mst, vlSelfRef.__PVT__node_porttop_sn__DOT__txreqflit_to_pl);
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txdatflitpend_mst 
        = vlSelfRef.__PVT__node_porttop_sn__DOT__txdatflitpend_to_pl;
    VL_ASSIGN_W(680,vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txdatflit_mst, vlSelfRef.__PVT__node_porttop_sn__DOT__txdatflit_to_pl);
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txsnpflitv_mst 
        = vlSelfRef.__PVT__node_porttop_sn__DOT__txreqflitv_to_pl;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txdatflitv_mst 
        = vlSelfRef.__PVT__node_porttop_sn__DOT__txdatflitv_to_pl;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__5(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__node_porttop_sn__DOT__rxsactive_to_hn 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxsactive_mst;
    vlSelfRef.__PVT__ic_TXSACTIVE = vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txsactive_slv;
    vlSelfRef.__PVT__node_porttop_sn__DOT__txlinkactiveack_to_hn 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txlinkactiveack_mst;
    vlSelfRef.__PVT__ic_TX_LINKACTIVEREQ = vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txlinkactivereq_slv;
    vlSelfRef.__PVT__node_porttop_sn__DOT__rxlinkactivereq_to_hn 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxlinkactivereq_mst;
    vlSelfRef.__PVT__ic_RX_LINKACTIVEACK = vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxlinkactiveack_slv;
    vlSelfRef.__PVT__node_porttop_sn__DOT__txreqlcrdv_to_hn 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txsnplcrdv_mst;
    vlSelfRef.__PVT__ic_TX_REQFLITPEND = vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txsnpflitpend_slv;
    vlSelfRef.__PVT__ic_TX_REQFLITV = vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txsnpflitv_slv;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__ic_TX_REQFLIT, vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txsnpflit_slv);
    vlSelfRef.__PVT__node_porttop_sn__DOT__txdatlcrdv_to_hn 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txdatlcrdv_mst;
    vlSelfRef.__PVT__ic_TX_DATFLITPEND = vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txdatflitpend_slv;
    vlSelfRef.__PVT__ic_TX_DATFLITV = vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txdatflitv_slv;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_TX_DATFLIT, vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txdatflit_slv);
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_RXSACTIVE 
        = vlSelfRef.__PVT__node_porttop_sn__DOT__rxsactive_to_hn;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_TX_LINKACTIVEACK 
        = vlSelfRef.__PVT__node_porttop_sn__DOT__txlinkactiveack_to_hn;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_RX_LINKACTIVEREQ 
        = vlSelfRef.__PVT__node_porttop_sn__DOT__rxlinkactivereq_to_hn;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_TX_SNPLCRDV 
        = vlSelfRef.__PVT__node_porttop_sn__DOT__txreqlcrdv_to_hn;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_TX_DATLCRDV 
        = vlSelfRef.__PVT__node_porttop_sn__DOT__txdatlcrdv_to_hn;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi10___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ic_RX_REQLCRDV = 0U;
    vlSelfRef.__PVT__ic_TX_SNPFLITPEND = 0U;
    vlSelfRef.__PVT__ic_TX_SNPFLITV = 0U;
    VL_CONST_W_1X(108,vlSelfRef.__PVT__ic_TX_SNPFLIT,0x00000000);
    vlSelfRef.__PVT__ic_TX_RSPFLITPEND = 0U;
    vlSelfRef.__PVT__ic_TX_RSPFLITV = 0U;
    VL_CONST_W_1X(73,vlSelfRef.__PVT__ic_TX_RSPFLIT,0x00000000);
    vlSelfRef.__PVT__syscoack = 0U;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__syscoack_mst = 0U;
    VL_CONST_W_1X(73,vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txrspflit_mst,0x00000000);
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txrspflitv_mst = 0U;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txrspflitpend_mst = 0U;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxreqlcrdv_mst = 0U;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__syscoreq_slv = 0U;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txrsplcrdv_slv = 0U;
    VL_CONST_W_1X(151,vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxreqflit_slv,0x00000000);
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxreqflitv_slv = 0U;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxreqflitpend_slv = 0U;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__portis_RN_or_SN = 0U;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_TX_REQLCRDV = 0U;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_TX_RSPLCRDV = 0U;
    VL_CONST_W_1X(108,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_RX_SNPFLIT,0x00000000);
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_RX_SNPFLITV = 0U;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_RX_SNPFLITPEND = 0U;
    VL_CONST_W_1X(151,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_RX_REQFLIT,0x00000000);
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_RX_REQFLITV = 0U;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_RX_REQFLITPEND = 0U;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__xy_coord_all_pm = 0ULL;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__xy_coord_all_hn_i = 0U;
    VL_CONST_W_1X(116,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__noncm_homeaddr_limit_all_hn_i,0x00000000);
    VL_CONST_W_1X(112,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__noncm_homeaddr_base_all_hn_i,0x00000000);
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__noncm_homeaddr_limit_all_hn_f = 0U;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__noncm_homeaddr_base_all_hn_f = 0U;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__xy_coord_all_hn_f = 0U;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__cm_homeaddr_limit_all_hn_f = 0U;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__cm_homeaddr_base_all_hn_f = 0U;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__sysco_is_disabled = 1U;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__mn_node_id = 0U;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__2(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxsactive_slv 
        = vlSelfRef.__PVT__ic_RXSACTIVE;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txlinkactiveack_slv 
        = vlSelfRef.__PVT__ic_TX_LINKACTIVEACK;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxlinkactivereq_slv 
        = vlSelfRef.__PVT__ic_RX_LINKACTIVEREQ;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txdatlcrdv_slv 
        = vlSelfRef.__PVT__ic_TX_DATLCRDV;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txsnplcrdv_slv 
        = vlSelfRef.__PVT__ic_TX_REQLCRDV;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__reset_n 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__clk 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    VL_ASSIGN_W(680,vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxdatflit_slv, vlSelfRef.__PVT__ic_RX_DATFLIT);
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxdatflitv_slv 
        = vlSelfRef.__PVT__ic_RX_DATFLITV;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxdatflitpend_slv 
        = vlSelfRef.__PVT__ic_RX_DATFLITPEND;
    VL_ASSIGN_W(73,vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxrspflit_slv, vlSelfRef.__PVT__ic_RX_RSPFLIT);
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxrspflitv_slv 
        = vlSelfRef.__PVT__ic_RX_RSPFLITV;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxrspflitpend_slv 
        = vlSelfRef.__PVT__ic_RX_RSPFLITPEND;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__cc_is_inactive 
        = vlSelfRef.__PVT__cc_is_inactive;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__all_cache_init_complete 
        = vlSelfRef.__PVT__all_cache_init_complete;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_clear_timeout_interrupt 
        = vlSelfRef.__PVT__i_clear_timeout_interrupt;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_clear_recovery_interrupt 
        = vlSelfRef.__PVT__i_clear_recovery_interrupt;
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_reqf_vc0, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_reqf_vc0);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__0(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ic_RX_DATLCRDV = vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxdatlcrdv_slv;
    vlSelfRef.__PVT__node_porttop_sn__DOT__rxdatflitv_to_hn 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxdatflitv_mst;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__node_porttop_sn__DOT__rxdatflit_to_hn, vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxdatflit_mst);
    vlSelfRef.__PVT__node_porttop_sn__DOT__rxdatflitpend_to_hn 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxdatflitpend_mst;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_RX_DATFLITV 
        = vlSelfRef.__PVT__node_porttop_sn__DOT__rxdatflitv_to_hn;
    VL_ASSIGN_W(680,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_RX_DATFLIT, vlSelfRef.__PVT__node_porttop_sn__DOT__rxdatflit_to_hn);
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_RX_DATFLITPEND 
        = vlSelfRef.__PVT__node_porttop_sn__DOT__rxdatflitpend_to_hn;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__1(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ic_RX_RSPLCRDV = vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxrsplcrdv_slv;
    vlSelfRef.__PVT__node_porttop_sn__DOT__rxrspflitv_to_hn 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxrspflitv_mst;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__node_porttop_sn__DOT__rxrspflit_to_hn, vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxrspflit_mst);
    vlSelfRef.__PVT__node_porttop_sn__DOT__rxrspflitpend_to_hn 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxrspflitpend_mst;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_RX_RSPFLITV 
        = vlSelfRef.__PVT__node_porttop_sn__DOT__rxrspflitv_to_hn;
    VL_ASSIGN_W(73,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_RX_RSPFLIT, vlSelfRef.__PVT__node_porttop_sn__DOT__rxrspflit_to_hn);
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_RX_RSPFLITPEND 
        = vlSelfRef.__PVT__node_porttop_sn__DOT__rxrspflitpend_to_hn;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__4(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__node_porttop_sn__DOT__rxrsplcrdv_to_pl 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_RX_RSPLCRDV;
    vlSelfRef.__PVT__node_porttop_sn__DOT__rxdatlcrdv_to_pl 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_RX_DATLCRDV;
    vlSelfRef.__PVT__o_timeout_interrupt = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__o_timeout_interrupt;
    vlSelfRef.__PVT__o_timeout_recovery_successful 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__o_timeout_recovery_successful;
    vlSelfRef.__PVT__node_porttop_sn__DOT__txsactive_to_pl 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_TXSACTIVE;
    vlSelfRef.__PVT__node_porttop_sn__DOT__txlinkactivereq_to_pl 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_TX_LINKACTIVEREQ;
    vlSelfRef.__PVT__node_porttop_sn__DOT__rxlinkactiveack_to_pl 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_RX_LINKACTIVEACK;
    vlSelfRef.__PVT__node_porttop_sn__DOT__txreqflitpend_to_pl 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_TX_SNPFLITPEND;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__node_porttop_sn__DOT__txreqflit_to_pl, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_TX_SNPFLIT);
    vlSelfRef.__PVT__node_porttop_sn__DOT__txdatflitpend_to_pl 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_TX_DATFLITPEND;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__node_porttop_sn__DOT__txdatflit_to_pl, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_TX_DATFLIT);
    vlSelfRef.__PVT__node_porttop_sn__DOT__txreqflitv_to_pl 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_TX_SNPFLITV;
    vlSelfRef.__PVT__node_porttop_sn__DOT__txdatflitv_to_pl 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_TX_DATFLITV;
    vlSelfRef.__PVT__tx_is_inactive = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__tx_is_inactive;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxrsplcrdv_mst 
        = vlSelfRef.__PVT__node_porttop_sn__DOT__rxrsplcrdv_to_pl;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxdatlcrdv_mst 
        = vlSelfRef.__PVT__node_porttop_sn__DOT__rxdatlcrdv_to_pl;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txsactive_mst 
        = vlSelfRef.__PVT__node_porttop_sn__DOT__txsactive_to_pl;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txlinkactivereq_mst 
        = vlSelfRef.__PVT__node_porttop_sn__DOT__txlinkactivereq_to_pl;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxlinkactiveack_mst 
        = vlSelfRef.__PVT__node_porttop_sn__DOT__rxlinkactiveack_to_pl;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txsnpflitpend_mst 
        = vlSelfRef.__PVT__node_porttop_sn__DOT__txreqflitpend_to_pl;
    VL_ASSIGN_W(151,vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txsnpflit_mst, vlSelfRef.__PVT__node_porttop_sn__DOT__txreqflit_to_pl);
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txdatflitpend_mst 
        = vlSelfRef.__PVT__node_porttop_sn__DOT__txdatflitpend_to_pl;
    VL_ASSIGN_W(680,vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txdatflit_mst, vlSelfRef.__PVT__node_porttop_sn__DOT__txdatflit_to_pl);
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txsnpflitv_mst 
        = vlSelfRef.__PVT__node_porttop_sn__DOT__txreqflitv_to_pl;
    vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txdatflitv_mst 
        = vlSelfRef.__PVT__node_porttop_sn__DOT__txdatflitv_to_pl;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__5(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__node_porttop_sn__DOT__rxsactive_to_hn 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxsactive_mst;
    vlSelfRef.__PVT__ic_TXSACTIVE = vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txsactive_slv;
    vlSelfRef.__PVT__node_porttop_sn__DOT__txlinkactiveack_to_hn 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txlinkactiveack_mst;
    vlSelfRef.__PVT__ic_TX_LINKACTIVEREQ = vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txlinkactivereq_slv;
    vlSelfRef.__PVT__node_porttop_sn__DOT__rxlinkactivereq_to_hn 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxlinkactivereq_mst;
    vlSelfRef.__PVT__ic_RX_LINKACTIVEACK = vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__rxlinkactiveack_slv;
    vlSelfRef.__PVT__node_porttop_sn__DOT__txreqlcrdv_to_hn 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txsnplcrdv_mst;
    vlSelfRef.__PVT__ic_TX_REQFLITPEND = vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txsnpflitpend_slv;
    vlSelfRef.__PVT__ic_TX_REQFLITV = vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txsnpflitv_slv;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__ic_TX_REQFLIT, vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txsnpflit_slv);
    vlSelfRef.__PVT__node_porttop_sn__DOT__txdatlcrdv_to_hn 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txdatlcrdv_mst;
    vlSelfRef.__PVT__ic_TX_DATFLITPEND = vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txdatflitpend_slv;
    vlSelfRef.__PVT__ic_TX_DATFLITV = vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txdatflitv_slv;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_TX_DATFLIT, vlSelf->__PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn->__PVT__txdatflit_slv);
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_RXSACTIVE 
        = vlSelfRef.__PVT__node_porttop_sn__DOT__rxsactive_to_hn;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_TX_LINKACTIVEACK 
        = vlSelfRef.__PVT__node_porttop_sn__DOT__txlinkactiveack_to_hn;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_RX_LINKACTIVEREQ 
        = vlSelfRef.__PVT__node_porttop_sn__DOT__rxlinkactivereq_to_hn;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_TX_SNPLCRDV 
        = vlSelfRef.__PVT__node_porttop_sn__DOT__txreqlcrdv_to_hn;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__ic_TX_DATLCRDV 
        = vlSelfRef.__PVT__node_porttop_sn__DOT__txdatlcrdv_to_hn;
}
