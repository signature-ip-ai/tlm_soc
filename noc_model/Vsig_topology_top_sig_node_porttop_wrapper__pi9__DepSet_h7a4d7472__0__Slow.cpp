// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_double_synchronizer_param_dw__pi25.h"
#include "Vsig_topology_top_sig_node_porttop__pi26.h"
#include "Vsig_topology_top_sig_node_porttop_wrapper__pi9.h"

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__1(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__node_porttop_rn__DOT__reg_syscoh_sync 
        = vlSelf->__PVT__node_porttop_rn__DOT__inst_sync_syscoh->__PVT__sig_dest;
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__u_node_porttop_rn__mn_node_id 
        = vlSelfRef.__PVT__mn_node_id;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__icx_exist 
        = vlSelfRef.__PVT__icx_exist;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__mycluster_id 
        = vlSelfRef.__PVT__mycluster_id;
    vlSelf->__PVT__node_porttop_rn__DOT__inst_sync_syscoh->__PVT__sig_src 
        = vlSelfRef.__PVT__reg_syscoh;
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_reqf_vc1, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_reqf_vc1);
    vlSelfRef.__PVT__id_translator_hs_pending_txn_snp 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__id_translator_hs_pending_txn_snp;
    vlSelfRef.__PVT__node_porttop_rn__DOT__coh_con2enable 
        = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__reg_syscoh_sync), 1U));
    vlSelfRef.__PVT__node_porttop_rn__DOT__coh_snppend 
        = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__reg_syscoh_sync), 0U));
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__mn_node_id 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__u_node_porttop_rn__mn_node_id;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__1(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__node_porttop_rn__DOT__reg_syscoh_sync 
        = vlSelf->__PVT__node_porttop_rn__DOT__inst_sync_syscoh->__PVT__sig_dest;
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__u_node_porttop_rn__mn_node_id 
        = vlSelfRef.__PVT__mn_node_id;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__icx_exist 
        = vlSelfRef.__PVT__icx_exist;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__mycluster_id 
        = vlSelfRef.__PVT__mycluster_id;
    vlSelf->__PVT__node_porttop_rn__DOT__inst_sync_syscoh->__PVT__sig_src 
        = vlSelfRef.__PVT__reg_syscoh;
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_reqf_vc1, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_reqf_vc1);
    vlSelfRef.__PVT__id_translator_hs_pending_txn_snp 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__id_translator_hs_pending_txn_snp;
    vlSelfRef.__PVT__node_porttop_rn__DOT__coh_con2enable 
        = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__reg_syscoh_sync), 1U));
    vlSelfRef.__PVT__node_porttop_rn__DOT__coh_snppend 
        = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__reg_syscoh_sync), 0U));
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__mn_node_id 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__u_node_porttop_rn__mn_node_id;
}
