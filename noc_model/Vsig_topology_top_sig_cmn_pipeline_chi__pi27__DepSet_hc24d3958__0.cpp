// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cmn_pipeline_chi__pi27.h"

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi27___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn__0(Vsig_topology_top_sig_cmn_pipeline_chi__pi27* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi27___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__nodeport_configuration__DOT__hn_to_sn_configuration__DOT__unused_signals 
        = vlSelfRef.__PVT__nodeport_configuration__DOT__hn_to_sn_configuration__DOT__unused_signals;
    vlSelfRef.__Vdly__nodeport_configuration__DOT__hn_to_sn_configuration__DOT__unused_signals 
        = ((IData)(vlSelfRef.__PVT__reset_n) && (IData)(vlSelfRef.__PVT__nodeport_configuration__DOT__hn_to_sn_configuration__DOT__unused_signals_nxt));
    vlSelfRef.__PVT__nodeport_configuration__DOT__hn_to_sn_configuration__DOT__unused_signals 
        = vlSelfRef.__Vdly__nodeport_configuration__DOT__hn_to_sn_configuration__DOT__unused_signals;
    vlSelfRef.__PVT__nodeport_configuration__DOT__hn_to_sn_configuration__DOT__unused_signals_nxt 
        = ((IData)(vlSelfRef.__PVT__nodeport_configuration__DOT__hn_to_sn_configuration__DOT__unused_signals) 
           | ((IData)(vlSelfRef.__PVT__syscoack_mst) 
              | ((IData)(vlSelfRef.__PVT__syscoreq_slv) 
                 | ((IData)(vlSelfRef.__PVT__rxreqflitpend_slv) 
                    | ((IData)(vlSelfRef.__PVT__rxreqflitv_slv) 
                       | (VL_REDOR_W(5, vlSelfRef.__PVT__rxreqflit_slv) 
                          | ((IData)(vlSelfRef.__PVT__rxreqlcrdv_mst) 
                             | ((IData)(vlSelfRef.__PVT__txrspflitpend_mst) 
                                | ((IData)(vlSelfRef.__PVT__txrspflitv_mst) 
                                   | (VL_REDOR_W(3, vlSelfRef.__PVT__txrspflit_mst) 
                                      | (IData)(vlSelfRef.__PVT__txrsplcrdv_slv)))))))))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi27___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn__0(Vsig_topology_top_sig_cmn_pipeline_chi__pi27* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi27___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__nodeport_configuration__DOT__hn_to_sn_configuration__DOT__unused_signals 
        = vlSelfRef.__PVT__nodeport_configuration__DOT__hn_to_sn_configuration__DOT__unused_signals;
    vlSelfRef.__Vdly__nodeport_configuration__DOT__hn_to_sn_configuration__DOT__unused_signals 
        = ((IData)(vlSelfRef.__PVT__reset_n) && (IData)(vlSelfRef.__PVT__nodeport_configuration__DOT__hn_to_sn_configuration__DOT__unused_signals_nxt));
    vlSelfRef.__PVT__nodeport_configuration__DOT__hn_to_sn_configuration__DOT__unused_signals 
        = vlSelfRef.__Vdly__nodeport_configuration__DOT__hn_to_sn_configuration__DOT__unused_signals;
    vlSelfRef.__PVT__nodeport_configuration__DOT__hn_to_sn_configuration__DOT__unused_signals_nxt 
        = ((IData)(vlSelfRef.__PVT__nodeport_configuration__DOT__hn_to_sn_configuration__DOT__unused_signals) 
           | ((IData)(vlSelfRef.__PVT__syscoack_mst) 
              | ((IData)(vlSelfRef.__PVT__syscoreq_slv) 
                 | ((IData)(vlSelfRef.__PVT__rxreqflitpend_slv) 
                    | ((IData)(vlSelfRef.__PVT__rxreqflitv_slv) 
                       | (VL_REDOR_W(5, vlSelfRef.__PVT__rxreqflit_slv) 
                          | ((IData)(vlSelfRef.__PVT__rxreqlcrdv_mst) 
                             | ((IData)(vlSelfRef.__PVT__txrspflitpend_mst) 
                                | ((IData)(vlSelfRef.__PVT__txrspflitv_mst) 
                                   | (VL_REDOR_W(3, vlSelfRef.__PVT__txrspflit_mst) 
                                      | (IData)(vlSelfRef.__PVT__txrsplcrdv_slv)))))))))));
}
