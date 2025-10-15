// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cmn_pipeline_chi__pi24.h"
#include "Vsig_topology_top_sig_node_porttop__pi26.h"
#include "Vsig_topology_top_sig_node_porttop_wrapper__pi9.h"

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__0(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_bridge_locations[0U] 
        = vlSelfRef.__PVT__i_ucie_bridge_locations[0U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__qos_override_val 
        = vlSelfRef.__PVT__qos_override_val;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__qos_override_en 
        = vlSelfRef.__PVT__qos_override_en;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__xy_coord_all_hn_i 
        = vlSelfRef.__PVT__xy_coord_all_hn_i;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__myproc_id 
        = vlSelfRef.__PVT__myproc_id;
    VL_ASSIGN_W(112,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__noncm_homeaddr_base_all_hn_i, vlSelfRef.__PVT__noncm_homeaddr_base_all_hn_i);
    VL_ASSIGN_W(116,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__noncm_homeaddr_limit_all_hn_i, vlSelfRef.__PVT__noncm_homeaddr_limit_all_hn_i);
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_node_ids[0U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_node_ids[1U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[1U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_node_ids[2U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[2U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_node_ids[3U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[3U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_node_ids[4U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[4U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_node_ids[5U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[5U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_node_ids[6U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[6U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_node_ids[7U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[7U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_node_ids[8U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[8U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_node_ids[9U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[9U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_node_ids[0xaU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xaU];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_node_ids[0xbU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xbU];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_node_ids[0xcU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xcU];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_node_ids[0xdU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xdU];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_node_ids[0xeU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xeU];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_node_ids[0xfU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xfU];
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__syscoack_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_to_pl;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_base_addresses[0U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_base_addresses[1U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[1U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_base_addresses[2U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[2U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_base_addresses[3U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[3U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_base_addresses[4U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[4U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_base_addresses[5U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[5U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_base_addresses[6U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[6U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_base_addresses[7U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[7U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_base_addresses[8U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[8U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_base_addresses[9U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[9U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_base_addresses[0xaU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xaU];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_base_addresses[0xbU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xbU];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_base_addresses[0xcU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xcU];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_base_addresses[0xdU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xdU];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_base_addresses[0xeU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xeU];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_base_addresses[0xfU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xfU];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_limit_addresses[0U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_limit_addresses[1U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[1U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_limit_addresses[2U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[2U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_limit_addresses[3U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[3U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_limit_addresses[4U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[4U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_limit_addresses[5U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[5U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_limit_addresses[6U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[6U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_limit_addresses[7U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[7U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_limit_addresses[8U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[8U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_limit_addresses[9U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[9U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_limit_addresses[0xaU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xaU];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_limit_addresses[0xbU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xbU];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_limit_addresses[0xcU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xcU];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_limit_addresses[0xdU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xdU];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_limit_addresses[0xeU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xeU];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_limit_addresses[0xfU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xfU];
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__5(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__syscoack = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__syscoack_slv;
    vlSelfRef.__PVT__node_porttop_rn__DOT__syscoreq_to_hn 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__syscoreq_mst;
    vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state_nxt 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state;
    vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_nxt 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_to_pl;
    vlSelfRef.__PVT__node_porttop_rn__DOT__sysco_is_disabled = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state))) {
        vlSelfRef.__PVT__node_porttop_rn__DOT__sysco_is_disabled = 1U;
        if (vlSelfRef.__PVT__node_porttop_rn__DOT__syscoreq_to_hn) {
            vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state_nxt = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state))) {
        if (vlSelfRef.__PVT__node_porttop_rn__DOT__coh_con2enable) {
            vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_nxt = 1U;
            vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state_nxt = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__syscoreq_to_hn)))) {
            vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state_nxt = 3U;
        }
    } else if ((3U == (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state))) {
        vlSelfRef.__PVT__node_porttop_rn__DOT__sysco_is_disabled = 1U;
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__coh_snppend)) 
                   & (~ (IData)(vlSelfRef.__PVT__id_translator_hs_pending_txn_snp))))) {
            vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_nxt = 0U;
            vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state_nxt = 0U;
        }
    }
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__sysco_is_disabled 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__sysco_is_disabled;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__0(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ic_RX_DATLCRDV = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxdatlcrdv_slv;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxdatflitv_to_hn 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxdatflitv_mst;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__node_porttop_rn__DOT__rxdatflit_to_hn, vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxdatflit_mst);
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxdatflitpend_to_hn 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxdatflitpend_mst;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_RX_DATFLITV 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxdatflitv_to_hn;
    VL_ASSIGN_W(680,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_RX_DATFLIT, vlSelfRef.__PVT__node_porttop_rn__DOT__rxdatflit_to_hn);
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_RX_DATFLITPEND 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxdatflitpend_to_hn;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__1(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ic_RX_RSPLCRDV = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxrsplcrdv_slv;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxrspflitv_to_hn 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxrspflitv_mst;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__node_porttop_rn__DOT__rxrspflit_to_hn, vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxrspflit_mst);
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxrspflitpend_to_hn 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxrspflitpend_mst;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_RX_RSPFLITV 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxrspflitv_to_hn;
    VL_ASSIGN_W(73,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_RX_RSPFLIT, vlSelfRef.__PVT__node_porttop_rn__DOT__rxrspflit_to_hn);
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_RX_RSPFLITPEND 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxrspflitpend_to_hn;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__2(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ic_RX_REQLCRDV = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxreqlcrdv_slv;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxreqflitpend_to_hn 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxreqflitpend_mst;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxreqflitv_to_hn 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxreqflitv_mst;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__node_porttop_rn__DOT__rxreqflit_to_hn, vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxreqflit_mst);
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_RX_REQFLITPEND 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxreqflitpend_to_hn;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_RX_REQFLITV 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxreqflitv_to_hn;
    VL_ASSIGN_W(151,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_RX_REQFLIT, vlSelfRef.__PVT__node_porttop_rn__DOT__rxreqflit_to_hn);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__5(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxreqlcrdv_to_pl 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_RX_REQLCRDV;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxrsplcrdv_to_pl 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_RX_RSPLCRDV;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxdatlcrdv_to_pl 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_RX_DATLCRDV;
    vlSelfRef.__PVT__o_timeout_interrupt = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__o_timeout_interrupt;
    vlSelfRef.__PVT__o_timeout_recovery_successful 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__o_timeout_recovery_successful;
    vlSelfRef.__PVT__node_porttop_rn__DOT__txlinkactivereq_to_pl 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_TX_LINKACTIVEREQ;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxlinkactiveack_to_pl 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_RX_LINKACTIVEACK;
    vlSelfRef.__PVT__node_porttop_rn__DOT__txsactive_to_pl 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_TXSACTIVE;
    vlSelfRef.__PVT__node_porttop_rn__DOT__txsnpflitpend_to_pl 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_TX_SNPFLITPEND;
    vlSelfRef.__PVT__node_porttop_rn__DOT__txdatflitpend_to_pl 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_TX_DATFLITPEND;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__node_porttop_rn__DOT__txdatflit_to_pl, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_TX_DATFLIT);
    vlSelfRef.__PVT__node_porttop_rn__DOT__txrspflitpend_to_pl 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_TX_RSPFLITPEND;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__node_porttop_rn__DOT__txrspflit_to_pl, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_TX_RSPFLIT);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__node_porttop_rn__DOT__ic_TX_SNPFLIT_w, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_TX_SNPFLIT);
    vlSelfRef.__PVT__node_porttop_rn__DOT__txsnpflitv_to_pl 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_TX_SNPFLITV;
    vlSelfRef.__PVT__node_porttop_rn__DOT__txdatflitv_to_pl 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_TX_DATFLITV;
    vlSelfRef.__PVT__node_porttop_rn__DOT__txrspflitv_to_pl 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_TX_RSPFLITV;
    vlSelfRef.__PVT__tx_is_inactive = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__tx_is_inactive;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxreqlcrdv_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxreqlcrdv_to_pl;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxrsplcrdv_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxrsplcrdv_to_pl;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxdatlcrdv_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxdatlcrdv_to_pl;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txlinkactivereq_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txlinkactivereq_to_pl;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxlinkactiveack_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxlinkactiveack_to_pl;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txsactive_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txsactive_to_pl;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txsnpflitpend_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txsnpflitpend_to_pl;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txdatflitpend_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txdatflitpend_to_pl;
    VL_ASSIGN_W(680,vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txdatflit_mst, vlSelfRef.__PVT__node_porttop_rn__DOT__txdatflit_to_pl);
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txrspflitpend_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txrspflitpend_to_pl;
    VL_ASSIGN_W(73,vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txrspflit_mst, vlSelfRef.__PVT__node_porttop_rn__DOT__txrspflit_to_pl);
    VL_CONST_W_4X(128,__Vtemp_1,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 151, __Vtemp_2, vlSelfRef.__PVT__node_porttop_rn__DOT__ic_TX_SNPFLIT_w, 0U, 108);
    VL_AND_W(4, vlSelfRef.__PVT__node_porttop_rn__DOT__txsnpflit_to_pl, __Vtemp_1, __Vtemp_2);
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txsnpflitv_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txsnpflitv_to_pl;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txdatflitv_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txdatflitv_to_pl;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txrspflitv_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txrspflitv_to_pl;
    VL_ASSIGN_W(108,vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txsnpflit_mst, vlSelfRef.__PVT__node_porttop_rn__DOT__txsnpflit_to_pl);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__6(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__node_porttop_rn__DOT__txlinkactiveack_to_hn 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txlinkactiveack_mst;
    vlSelfRef.__PVT__ic_TX_LINKACTIVEREQ = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txlinkactivereq_slv;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxlinkactivereq_to_hn 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxlinkactivereq_mst;
    vlSelfRef.__PVT__ic_RX_LINKACTIVEACK = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxlinkactiveack_slv;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxsactive_to_hn 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxsactive_mst;
    vlSelfRef.__PVT__ic_TXSACTIVE = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txsactive_slv;
    vlSelfRef.__PVT__node_porttop_rn__DOT__txdatlcrdv_to_hn 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txdatlcrdv_mst;
    vlSelfRef.__PVT__ic_TX_DATFLITPEND = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txdatflitpend_slv;
    vlSelfRef.__PVT__ic_TX_DATFLITV = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txdatflitv_slv;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_TX_DATFLIT, vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txdatflit_slv);
    vlSelfRef.__PVT__node_porttop_rn__DOT__txrsplcrdv_to_hn 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txrsplcrdv_mst;
    vlSelfRef.__PVT__ic_TX_RSPFLITPEND = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txrspflitpend_slv;
    vlSelfRef.__PVT__ic_TX_RSPFLITV = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txrspflitv_slv;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__ic_TX_RSPFLIT, vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txrspflit_slv);
    vlSelfRef.__PVT__node_porttop_rn__DOT__txsnplcrdv_to_hn 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txsnplcrdv_mst;
    vlSelfRef.__PVT__ic_TX_SNPFLITPEND = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txsnpflitpend_slv;
    vlSelfRef.__PVT__ic_TX_SNPFLITV = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txsnpflitv_slv;
    VL_ASSIGN_W(108,vlSelfRef.__PVT__ic_TX_SNPFLIT, vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txsnpflit_slv);
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_TX_LINKACTIVEACK 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txlinkactiveack_to_hn;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_RX_LINKACTIVEREQ 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxlinkactivereq_to_hn;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_RXSACTIVE 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxsactive_to_hn;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_TX_DATLCRDV 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txdatlcrdv_to_hn;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_TX_RSPLCRDV 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txrsplcrdv_to_hn;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_TX_SNPLCRDV 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txsnplcrdv_to_hn;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__0(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_bridge_locations[0U] 
        = vlSelfRef.__PVT__i_ucie_bridge_locations[0U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__qos_override_val 
        = vlSelfRef.__PVT__qos_override_val;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__qos_override_en 
        = vlSelfRef.__PVT__qos_override_en;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__xy_coord_all_hn_i 
        = vlSelfRef.__PVT__xy_coord_all_hn_i;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__myproc_id 
        = vlSelfRef.__PVT__myproc_id;
    VL_ASSIGN_W(112,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__noncm_homeaddr_base_all_hn_i, vlSelfRef.__PVT__noncm_homeaddr_base_all_hn_i);
    VL_ASSIGN_W(116,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__noncm_homeaddr_limit_all_hn_i, vlSelfRef.__PVT__noncm_homeaddr_limit_all_hn_i);
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_node_ids[0U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_node_ids[1U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[1U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_node_ids[2U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[2U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_node_ids[3U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[3U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_node_ids[4U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[4U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_node_ids[5U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[5U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_node_ids[6U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[6U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_node_ids[7U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[7U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_node_ids[8U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[8U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_node_ids[9U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[9U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_node_ids[0xaU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xaU];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_node_ids[0xbU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xbU];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_node_ids[0xcU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xcU];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_node_ids[0xdU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xdU];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_node_ids[0xeU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xeU];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_node_ids[0xfU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xfU];
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__syscoack_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_to_pl;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_base_addresses[0U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_base_addresses[1U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[1U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_base_addresses[2U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[2U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_base_addresses[3U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[3U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_base_addresses[4U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[4U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_base_addresses[5U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[5U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_base_addresses[6U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[6U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_base_addresses[7U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[7U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_base_addresses[8U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[8U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_base_addresses[9U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[9U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_base_addresses[0xaU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xaU];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_base_addresses[0xbU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xbU];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_base_addresses[0xcU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xcU];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_base_addresses[0xdU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xdU];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_base_addresses[0xeU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xeU];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_base_addresses[0xfU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xfU];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_limit_addresses[0U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_limit_addresses[1U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[1U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_limit_addresses[2U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[2U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_limit_addresses[3U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[3U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_limit_addresses[4U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[4U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_limit_addresses[5U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[5U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_limit_addresses[6U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[6U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_limit_addresses[7U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[7U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_limit_addresses[8U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[8U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_limit_addresses[9U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[9U];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_limit_addresses[0xaU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xaU];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_limit_addresses[0xbU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xbU];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_limit_addresses[0xcU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xcU];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_limit_addresses[0xdU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xdU];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_limit_addresses[0xeU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xeU];
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_ucie_limit_addresses[0xfU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xfU];
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__5(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__syscoack = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__syscoack_slv;
    vlSelfRef.__PVT__node_porttop_rn__DOT__syscoreq_to_hn 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__syscoreq_mst;
    vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state_nxt 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state;
    vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_nxt 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_to_pl;
    vlSelfRef.__PVT__node_porttop_rn__DOT__sysco_is_disabled = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state))) {
        vlSelfRef.__PVT__node_porttop_rn__DOT__sysco_is_disabled = 1U;
        if (vlSelfRef.__PVT__node_porttop_rn__DOT__syscoreq_to_hn) {
            vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state_nxt = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state))) {
        if (vlSelfRef.__PVT__node_porttop_rn__DOT__coh_con2enable) {
            vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_nxt = 1U;
            vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state_nxt = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__syscoreq_to_hn)))) {
            vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state_nxt = 3U;
        }
    } else if ((3U == (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state))) {
        vlSelfRef.__PVT__node_porttop_rn__DOT__sysco_is_disabled = 1U;
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__coh_snppend)) 
                   & (~ (IData)(vlSelfRef.__PVT__id_translator_hs_pending_txn_snp))))) {
            vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_nxt = 0U;
            vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state_nxt = 0U;
        }
    }
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__sysco_is_disabled 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__sysco_is_disabled;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__0(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ic_RX_DATLCRDV = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxdatlcrdv_slv;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxdatflitv_to_hn 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxdatflitv_mst;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__node_porttop_rn__DOT__rxdatflit_to_hn, vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxdatflit_mst);
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxdatflitpend_to_hn 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxdatflitpend_mst;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_RX_DATFLITV 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxdatflitv_to_hn;
    VL_ASSIGN_W(680,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_RX_DATFLIT, vlSelfRef.__PVT__node_porttop_rn__DOT__rxdatflit_to_hn);
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_RX_DATFLITPEND 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxdatflitpend_to_hn;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__1(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ic_RX_RSPLCRDV = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxrsplcrdv_slv;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxrspflitv_to_hn 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxrspflitv_mst;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__node_porttop_rn__DOT__rxrspflit_to_hn, vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxrspflit_mst);
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxrspflitpend_to_hn 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxrspflitpend_mst;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_RX_RSPFLITV 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxrspflitv_to_hn;
    VL_ASSIGN_W(73,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_RX_RSPFLIT, vlSelfRef.__PVT__node_porttop_rn__DOT__rxrspflit_to_hn);
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_RX_RSPFLITPEND 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxrspflitpend_to_hn;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__2(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ic_RX_REQLCRDV = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxreqlcrdv_slv;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxreqflitpend_to_hn 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxreqflitpend_mst;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxreqflitv_to_hn 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxreqflitv_mst;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__node_porttop_rn__DOT__rxreqflit_to_hn, vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxreqflit_mst);
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_RX_REQFLITPEND 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxreqflitpend_to_hn;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_RX_REQFLITV 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxreqflitv_to_hn;
    VL_ASSIGN_W(151,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_RX_REQFLIT, vlSelfRef.__PVT__node_porttop_rn__DOT__rxreqflit_to_hn);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__5(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxreqlcrdv_to_pl 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_RX_REQLCRDV;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxrsplcrdv_to_pl 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_RX_RSPLCRDV;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxdatlcrdv_to_pl 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_RX_DATLCRDV;
    vlSelfRef.__PVT__o_timeout_interrupt = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__o_timeout_interrupt;
    vlSelfRef.__PVT__o_timeout_recovery_successful 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__o_timeout_recovery_successful;
    vlSelfRef.__PVT__node_porttop_rn__DOT__txlinkactivereq_to_pl 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_TX_LINKACTIVEREQ;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxlinkactiveack_to_pl 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_RX_LINKACTIVEACK;
    vlSelfRef.__PVT__node_porttop_rn__DOT__txsactive_to_pl 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_TXSACTIVE;
    vlSelfRef.__PVT__node_porttop_rn__DOT__txsnpflitpend_to_pl 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_TX_SNPFLITPEND;
    vlSelfRef.__PVT__node_porttop_rn__DOT__txdatflitpend_to_pl 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_TX_DATFLITPEND;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__node_porttop_rn__DOT__txdatflit_to_pl, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_TX_DATFLIT);
    vlSelfRef.__PVT__node_porttop_rn__DOT__txrspflitpend_to_pl 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_TX_RSPFLITPEND;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__node_porttop_rn__DOT__txrspflit_to_pl, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_TX_RSPFLIT);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__node_porttop_rn__DOT__ic_TX_SNPFLIT_w, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_TX_SNPFLIT);
    vlSelfRef.__PVT__node_porttop_rn__DOT__txsnpflitv_to_pl 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_TX_SNPFLITV;
    vlSelfRef.__PVT__node_porttop_rn__DOT__txdatflitv_to_pl 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_TX_DATFLITV;
    vlSelfRef.__PVT__node_porttop_rn__DOT__txrspflitv_to_pl 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_TX_RSPFLITV;
    vlSelfRef.__PVT__tx_is_inactive = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__tx_is_inactive;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxreqlcrdv_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxreqlcrdv_to_pl;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxrsplcrdv_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxrsplcrdv_to_pl;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxdatlcrdv_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxdatlcrdv_to_pl;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txlinkactivereq_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txlinkactivereq_to_pl;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxlinkactiveack_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxlinkactiveack_to_pl;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txsactive_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txsactive_to_pl;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txsnpflitpend_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txsnpflitpend_to_pl;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txdatflitpend_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txdatflitpend_to_pl;
    VL_ASSIGN_W(680,vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txdatflit_mst, vlSelfRef.__PVT__node_porttop_rn__DOT__txdatflit_to_pl);
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txrspflitpend_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txrspflitpend_to_pl;
    VL_ASSIGN_W(73,vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txrspflit_mst, vlSelfRef.__PVT__node_porttop_rn__DOT__txrspflit_to_pl);
    VL_CONST_W_4X(128,__Vtemp_1,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 151, __Vtemp_2, vlSelfRef.__PVT__node_porttop_rn__DOT__ic_TX_SNPFLIT_w, 0U, 108);
    VL_AND_W(4, vlSelfRef.__PVT__node_porttop_rn__DOT__txsnpflit_to_pl, __Vtemp_1, __Vtemp_2);
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txsnpflitv_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txsnpflitv_to_pl;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txdatflitv_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txdatflitv_to_pl;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txrspflitv_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txrspflitv_to_pl;
    VL_ASSIGN_W(108,vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txsnpflit_mst, vlSelfRef.__PVT__node_porttop_rn__DOT__txsnpflit_to_pl);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__6(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__node_porttop_rn__DOT__txlinkactiveack_to_hn 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txlinkactiveack_mst;
    vlSelfRef.__PVT__ic_TX_LINKACTIVEREQ = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txlinkactivereq_slv;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxlinkactivereq_to_hn 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxlinkactivereq_mst;
    vlSelfRef.__PVT__ic_RX_LINKACTIVEACK = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxlinkactiveack_slv;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxsactive_to_hn 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__rxsactive_mst;
    vlSelfRef.__PVT__ic_TXSACTIVE = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txsactive_slv;
    vlSelfRef.__PVT__node_porttop_rn__DOT__txdatlcrdv_to_hn 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txdatlcrdv_mst;
    vlSelfRef.__PVT__ic_TX_DATFLITPEND = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txdatflitpend_slv;
    vlSelfRef.__PVT__ic_TX_DATFLITV = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txdatflitv_slv;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_TX_DATFLIT, vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txdatflit_slv);
    vlSelfRef.__PVT__node_porttop_rn__DOT__txrsplcrdv_to_hn 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txrsplcrdv_mst;
    vlSelfRef.__PVT__ic_TX_RSPFLITPEND = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txrspflitpend_slv;
    vlSelfRef.__PVT__ic_TX_RSPFLITV = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txrspflitv_slv;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__ic_TX_RSPFLIT, vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txrspflit_slv);
    vlSelfRef.__PVT__node_porttop_rn__DOT__txsnplcrdv_to_hn 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txsnplcrdv_mst;
    vlSelfRef.__PVT__ic_TX_SNPFLITPEND = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txsnpflitpend_slv;
    vlSelfRef.__PVT__ic_TX_SNPFLITV = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txsnpflitv_slv;
    VL_ASSIGN_W(108,vlSelfRef.__PVT__ic_TX_SNPFLIT, vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__txsnpflit_slv);
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_TX_LINKACTIVEACK 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txlinkactiveack_to_hn;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_RX_LINKACTIVEREQ 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxlinkactivereq_to_hn;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_RXSACTIVE 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxsactive_to_hn;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_TX_DATLCRDV 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txdatlcrdv_to_hn;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_TX_RSPLCRDV 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txrsplcrdv_to_hn;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_TX_SNPLCRDV 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txsnplcrdv_to_hn;
}
