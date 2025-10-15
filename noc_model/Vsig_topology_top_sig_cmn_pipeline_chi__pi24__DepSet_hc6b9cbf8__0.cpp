// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cmn_pipeline_chi__pi24.h"
#include "Vsig_topology_top_sig_cmn_pipeline_ff__D2.h"
#include "Vsig_topology_top_sig_cmn_pipeline_ff__D2ab.h"
#include "Vsig_topology_top_sig_cmn_pipeline_ff__D4c.h"
#include "Vsig_topology_top_sig_cmn_pipeline_ff__D6f.h"
#include "Vsig_topology_top_sig_cmn_pipeline_ff__D9a.h"

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi24___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__0(Vsig_topology_top_sig_cmn_pipeline_chi__pi24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi24___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__i_pipe_rxrsp_slv->__PVT__reset_n 
        = vlSelfRef.__PVT__reset_n;
    vlSelf->__PVT__i_pipe_rxdat_slv->__PVT__reset_n 
        = vlSelfRef.__PVT__reset_n;
    vlSelf->__PVT__i_pipe_rxdat_mst->__PVT__reset_n 
        = vlSelfRef.__PVT__reset_n;
    vlSelf->__PVT__i_pipe_rxsnp_mst->__PVT__reset_n 
        = vlSelfRef.__PVT__reset_n;
    vlSelf->__PVT__nodeport_configuration__DOT__i_pipe_sact->__PVT__reset_n 
        = vlSelfRef.__PVT__reset_n;
    vlSelf->__PVT__nodeport_configuration__DOT__i_pipe_rxlink->__PVT__reset_n 
        = vlSelfRef.__PVT__reset_n;
    vlSelf->__PVT__nodeport_configuration__DOT__i_pipe_txlink_slv->__PVT__reset_n 
        = vlSelfRef.__PVT__reset_n;
    vlSelf->__PVT__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_sysco->__PVT__reset_n 
        = vlSelfRef.__PVT__reset_n;
    vlSelf->__PVT__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv->__PVT__reset_n 
        = vlSelfRef.__PVT__reset_n;
    vlSelf->__PVT__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxrsp_mst->__PVT__reset_n 
        = vlSelfRef.__PVT__reset_n;
    vlSelf->__PVT__i_pipe_rxrsp_slv->__PVT__clk = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__i_pipe_rxdat_slv->__PVT__clk = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__i_pipe_rxdat_mst->__PVT__clk = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__i_pipe_rxsnp_mst->__PVT__clk = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__nodeport_configuration__DOT__i_pipe_sact->__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__nodeport_configuration__DOT__i_pipe_rxlink->__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__nodeport_configuration__DOT__i_pipe_txlink_slv->__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_sysco->__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv->__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxrsp_mst->__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSelfRef.__Vcellinp__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_sysco__data_in 
        = VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__syscoack_mst), (IData)(vlSelfRef.__PVT__syscoreq_slv));
    vlSelf->__PVT__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_sysco->__PVT__data_in 
        = vlSelfRef.__Vcellinp__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_sysco__data_in;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi24___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__0(Vsig_topology_top_sig_cmn_pipeline_chi__pi24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi24___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__i_pipe_rxrsp_slv->__PVT__reset_n 
        = vlSelfRef.__PVT__reset_n;
    vlSelf->__PVT__i_pipe_rxdat_slv->__PVT__reset_n 
        = vlSelfRef.__PVT__reset_n;
    vlSelf->__PVT__i_pipe_rxdat_mst->__PVT__reset_n 
        = vlSelfRef.__PVT__reset_n;
    vlSelf->__PVT__i_pipe_rxsnp_mst->__PVT__reset_n 
        = vlSelfRef.__PVT__reset_n;
    vlSelf->__PVT__nodeport_configuration__DOT__i_pipe_sact->__PVT__reset_n 
        = vlSelfRef.__PVT__reset_n;
    vlSelf->__PVT__nodeport_configuration__DOT__i_pipe_rxlink->__PVT__reset_n 
        = vlSelfRef.__PVT__reset_n;
    vlSelf->__PVT__nodeport_configuration__DOT__i_pipe_txlink_slv->__PVT__reset_n 
        = vlSelfRef.__PVT__reset_n;
    vlSelf->__PVT__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_sysco->__PVT__reset_n 
        = vlSelfRef.__PVT__reset_n;
    vlSelf->__PVT__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv->__PVT__reset_n 
        = vlSelfRef.__PVT__reset_n;
    vlSelf->__PVT__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxrsp_mst->__PVT__reset_n 
        = vlSelfRef.__PVT__reset_n;
    vlSelf->__PVT__i_pipe_rxrsp_slv->__PVT__clk = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__i_pipe_rxdat_slv->__PVT__clk = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__i_pipe_rxdat_mst->__PVT__clk = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__i_pipe_rxsnp_mst->__PVT__clk = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__nodeport_configuration__DOT__i_pipe_sact->__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__nodeport_configuration__DOT__i_pipe_rxlink->__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__nodeport_configuration__DOT__i_pipe_txlink_slv->__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_sysco->__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv->__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxrsp_mst->__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSelfRef.__Vcellinp__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_sysco__data_in 
        = VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__syscoack_mst), (IData)(vlSelfRef.__PVT__syscoreq_slv));
    vlSelf->__PVT__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_sysco->__PVT__data_in 
        = vlSelfRef.__Vcellinp__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_sysco__data_in;
}
