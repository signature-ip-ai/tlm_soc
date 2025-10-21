// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cmn_pipeline_chi__pi24.h"
#include "Vsig_topology_top_sig_double_synchronizer_param_dw__pi25.h"
#include "Vsig_topology_top_sig_node_porttop__pi26.h"
#include "Vsig_topology_top_sig_node_porttop_wrapper__pi9.h"

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__2(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxlinkactivereq_slv 
        = vlSelfRef.__PVT__ic_RX_LINKACTIVEREQ;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txlinkactiveack_slv 
        = vlSelfRef.__PVT__ic_TX_LINKACTIVEACK;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxsactive_slv 
        = vlSelfRef.__PVT__ic_RXSACTIVE;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txdatlcrdv_slv 
        = vlSelfRef.__PVT__ic_TX_DATLCRDV;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txrsplcrdv_slv 
        = vlSelfRef.__PVT__ic_TX_RSPLCRDV;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txsnplcrdv_slv 
        = vlSelfRef.__PVT__ic_TX_SNPLCRDV;
    vlSelf->__PVT__node_porttop_rn__DOT__inst_sync_syscoh->__PVT__resetb_clkdest 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__reset_n 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__node_porttop_rn__DOT__inst_sync_syscoh->__PVT__clkdest 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__clk 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__syscoreq_slv 
        = vlSelfRef.__PVT__syscoreq;
    VL_ASSIGN_W(680,vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxdatflit_slv, vlSelfRef.__PVT__ic_RX_DATFLIT);
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxdatflitv_slv 
        = vlSelfRef.__PVT__ic_RX_DATFLITV;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxdatflitpend_slv 
        = vlSelfRef.__PVT__ic_RX_DATFLITPEND;
    VL_ASSIGN_W(73,vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxrspflit_slv, vlSelfRef.__PVT__ic_RX_RSPFLIT);
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxrspflitv_slv 
        = vlSelfRef.__PVT__ic_RX_RSPFLITV;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxrspflitpend_slv 
        = vlSelfRef.__PVT__ic_RX_RSPFLITPEND;
    VL_ASSIGN_W(151,vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxreqflit_slv, vlSelfRef.__PVT__ic_RX_REQFLIT);
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxreqflitv_slv 
        = vlSelfRef.__PVT__ic_RX_REQFLITV;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxreqflitpend_slv 
        = vlSelfRef.__PVT__ic_RX_REQFLITPEND;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__cc_is_inactive 
        = vlSelfRef.__PVT__cc_is_inactive;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__all_cache_init_complete 
        = vlSelfRef.__PVT__all_cache_init_complete;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_clear_timeout_interrupt 
        = vlSelfRef.__PVT__i_clear_timeout_interrupt;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_clear_recovery_interrupt 
        = vlSelfRef.__PVT__i_clear_recovery_interrupt;
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_reqf_vc0, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_reqf_vc0);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__2(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxlinkactivereq_slv 
        = vlSelfRef.__PVT__ic_RX_LINKACTIVEREQ;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txlinkactiveack_slv 
        = vlSelfRef.__PVT__ic_TX_LINKACTIVEACK;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxsactive_slv 
        = vlSelfRef.__PVT__ic_RXSACTIVE;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txdatlcrdv_slv 
        = vlSelfRef.__PVT__ic_TX_DATLCRDV;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txrsplcrdv_slv 
        = vlSelfRef.__PVT__ic_TX_RSPLCRDV;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txsnplcrdv_slv 
        = vlSelfRef.__PVT__ic_TX_SNPLCRDV;
    vlSelf->__PVT__node_porttop_rn__DOT__inst_sync_syscoh->__PVT__resetb_clkdest 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__reset_n 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__node_porttop_rn__DOT__inst_sync_syscoh->__PVT__clkdest 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__clk 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__syscoreq_slv 
        = vlSelfRef.__PVT__syscoreq;
    VL_ASSIGN_W(680,vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxdatflit_slv, vlSelfRef.__PVT__ic_RX_DATFLIT);
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxdatflitv_slv 
        = vlSelfRef.__PVT__ic_RX_DATFLITV;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxdatflitpend_slv 
        = vlSelfRef.__PVT__ic_RX_DATFLITPEND;
    VL_ASSIGN_W(73,vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxrspflit_slv, vlSelfRef.__PVT__ic_RX_RSPFLIT);
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxrspflitv_slv 
        = vlSelfRef.__PVT__ic_RX_RSPFLITV;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxrspflitpend_slv 
        = vlSelfRef.__PVT__ic_RX_RSPFLITPEND;
    VL_ASSIGN_W(151,vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxreqflit_slv, vlSelfRef.__PVT__ic_RX_REQFLIT);
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxreqflitv_slv 
        = vlSelfRef.__PVT__ic_RX_REQFLITV;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxreqflitpend_slv 
        = vlSelfRef.__PVT__ic_RX_REQFLITPEND;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__cc_is_inactive 
        = vlSelfRef.__PVT__cc_is_inactive;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__all_cache_init_complete 
        = vlSelfRef.__PVT__all_cache_init_complete;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_clear_timeout_interrupt 
        = vlSelfRef.__PVT__i_clear_timeout_interrupt;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_clear_recovery_interrupt 
        = vlSelfRef.__PVT__i_clear_recovery_interrupt;
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_reqf_vc0, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_reqf_vc0);
}
