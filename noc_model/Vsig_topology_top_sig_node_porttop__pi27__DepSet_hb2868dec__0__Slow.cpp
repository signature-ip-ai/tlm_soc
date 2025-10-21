// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_node_porttop__pi27.h"

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi27___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__0(Vsig_topology_top_sig_node_porttop__pi27* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi27___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__TX_REQLCRDV 
        = vlSelfRef.__PVT__ic_TX_REQLCRDV;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__ic_TX_REQFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__TX_REQFLIT);
    vlSelfRef.__PVT__ic_TX_REQFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__TX_REQFLITPEND;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__ic_RX_SNPFLITPEND 
        = vlSelfRef.__PVT__ic_RX_SNPFLITPEND;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__ic_RX_SNPFLITV 
        = vlSelfRef.__PVT__ic_RX_SNPFLITV;
    vlSelfRef.__PVT__id_translator_full = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0.__PVT__id_translator_full;
    vlSelfRef.__PVT__ic_TX_REQFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__TX_REQFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__enable_balanced_routing 
        = vlSelfRef.__PVT__enable_balanced_routing;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__mn_node_id 
        = vlSelfRef.__PVT__mn_node_id;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__cm_homeaddr_base_all_hn_f 
        = vlSelfRef.__PVT__cm_homeaddr_base_all_hn_f;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__xy_coord_all_hn_f 
        = vlSelfRef.__PVT__xy_coord_all_hn_f;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__noncm_homeaddr_base_all_hn_f 
        = vlSelfRef.__PVT__noncm_homeaddr_base_all_hn_f;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__cm_homeaddr_limit_all_hn_f 
        = vlSelfRef.__PVT__cm_homeaddr_limit_all_hn_f;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__noncm_homeaddr_limit_all_hn_f 
        = vlSelfRef.__PVT__noncm_homeaddr_limit_all_hn_f;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__xy_coord_all_hn_i 
        = vlSelfRef.__PVT__xy_coord_all_hn_i;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__xy_coord_all_pm 
        = vlSelfRef.__PVT__xy_coord_all_pm;
    VL_ASSIGN_W(112,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__noncm_homeaddr_base_all_hn_i, vlSelfRef.__PVT__noncm_homeaddr_base_all_hn_i);
    VL_ASSIGN_W(116,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__noncm_homeaddr_limit_all_hn_i, vlSelfRef.__PVT__noncm_homeaddr_limit_all_hn_i);
    VL_ASSIGN_W(108,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__ic_RX_SNPFLIT, vlSelfRef.__PVT__ic_RX_SNPFLIT);
    vlSelfRef.__PVT__tx_sactive_from_tx_top = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__ic_TXSACTIVE;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__datflit_from_tx_top, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__TX_DATFLIT);
    vlSelfRef.__PVT__datflitv_from_tx_top = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__TX_DATFLITV;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__rspflit_from_tx_top, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__TX_RSPFLIT);
    vlSelfRef.__PVT__rspflitv_from_tx_top = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__TX_RSPFLITV;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__snpflit_from_tx_top, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__TX_SNPFLIT);
    vlSelfRef.__PVT__snpflitv_from_tx_top = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__TX_SNPFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__id_translator_full_req 
        = vlSelfRef.__PVT__id_translator_full_req;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__portis_RN_or_SN 
        = vlSelfRef.__PVT__portis_RN_or_SN;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__sysco_is_disabled 
        = vlSelfRef.__PVT__sysco_is_disabled;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__portis_RN_or_SN 
        = vlSelfRef.__PVT__portis_RN_or_SN;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_in_recovery_mode 
        = vlSelfRef.__PVT__recovery_mode;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_in_timeout_mode 
        = vlSelfRef.__PVT__timeout_mode;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__i_in_recovery_mode 
        = vlSelfRef.__PVT__recovery_mode;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__i_in_timeout_mode 
        = vlSelfRef.__PVT__timeout_mode;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_bridge_locations[0U] 
        = vlSelfRef.__PVT__i_ucie_bridge_locations[0U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__qos_override_val 
        = vlSelfRef.__PVT__qos_override_val;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__qos_override_en 
        = vlSelfRef.__PVT__qos_override_en;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__myproc_id 
        = vlSelfRef.__PVT__myproc_id;
    VL_ASSIGN_W(112,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_addr_translator_0.__PVT__cm_homeaddr_base_all_pm, vlSelfRef.__PVT__cm_homeaddr_base_all_pm);
    VL_ASSIGN_W(112,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__cm_homeaddr_base_all_pm, vlSelfRef.__PVT__cm_homeaddr_base_all_pm);
    VL_ASSIGN_W(116,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_addr_translator_0.__PVT__cm_homeaddr_limit_all_pm, vlSelfRef.__PVT__cm_homeaddr_limit_all_pm);
    VL_ASSIGN_W(116,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__cm_homeaddr_limit_all_pm, vlSelfRef.__PVT__cm_homeaddr_limit_all_pm);
    VL_ASSIGN_W(112,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_addr_translator_0.__PVT__noncm_homeaddr_base_all_pm, vlSelfRef.__PVT__noncm_homeaddr_base_all_pm);
    VL_ASSIGN_W(112,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__noncm_homeaddr_base_all_pm, vlSelfRef.__PVT__noncm_homeaddr_base_all_pm);
    VL_ASSIGN_W(116,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_addr_translator_0.__PVT__noncm_homeaddr_limit_all_pm, vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm);
    VL_ASSIGN_W(116,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__noncm_homeaddr_limit_all_pm, vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_node_ids[0U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_node_ids[1U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[1U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_node_ids[2U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[2U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_node_ids[3U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[3U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_node_ids[4U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[4U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_node_ids[5U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[5U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_node_ids[6U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[6U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_node_ids[7U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[7U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_node_ids[8U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[8U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_node_ids[9U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[9U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_node_ids[0xaU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xaU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_node_ids[0xbU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xbU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_node_ids[0xcU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xcU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_node_ids[0xdU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xdU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_node_ids[0xeU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xeU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_node_ids[0xfU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xfU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_base_addresses[0U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_base_addresses[1U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[1U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_base_addresses[2U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[2U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_base_addresses[3U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[3U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_base_addresses[4U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[4U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_base_addresses[5U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[5U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_base_addresses[6U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[6U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_base_addresses[7U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[7U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_base_addresses[8U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[8U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_base_addresses[9U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[9U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_base_addresses[0xaU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xaU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_base_addresses[0xbU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xbU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_base_addresses[0xcU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xcU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_base_addresses[0xdU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xdU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_base_addresses[0xeU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xeU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_base_addresses[0xfU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xfU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_limit_addresses[0U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_limit_addresses[1U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[1U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_limit_addresses[2U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[2U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_limit_addresses[3U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[3U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_limit_addresses[4U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[4U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_limit_addresses[5U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[5U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_limit_addresses[6U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[6U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_limit_addresses[7U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[7U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_limit_addresses[8U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[8U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_limit_addresses[9U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[9U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_limit_addresses[0xaU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xaU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_limit_addresses[0xbU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xbU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_limit_addresses[0xcU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xcU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_limit_addresses[0xdU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xdU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_limit_addresses[0xeU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xeU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__i_ucie_limit_addresses[0xfU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xfU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__id_translator_full 
        = vlSelfRef.__PVT__id_translator_full;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi27___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__1(Vsig_topology_top_sig_node_porttop__pi27* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi27___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tx_linkactivereq_from_tx_top = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__ic_TX_LINKACTIVEREQ;
    VL_ASSIGN_W(680,vlSelfRef.__Vcellout__sig_node_txtop_0__dat_flit_to_id_translator, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__dat_flit_to_id_translator);
    vlSelfRef.__PVT__dat_flitv_to_id_translator = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__dat_flitv_to_id_translator;
    vlSelfRef.__PVT__tx_dat_empty_flit_store_fifo = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__o_dat_empty_flit_store_fifo;
    vlSelfRef.__PVT__id_translator_hs_pending_txn = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0.__PVT__id_translator_hs_pending_txn;
    vlSelfRef.__PVT__rx_req_port_is_inactive = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__rx_req_port_is_inactive;
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_reqf_vc1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__flit_out_reqf_vc1);
    vlSelfRef.__PVT__rx_linkactiveack_from_rx_top = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__ic_RX_LINKACTIVEACK;
    vlSelfRef.__PVT__credits_backto_full = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__credits_backto_full;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__ic_TX_LINKACTIVEREQ 
        = vlSelfRef.__PVT__tx_linkactivereq_from_tx_top;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__dat_flit_to_id_translator, vlSelfRef.__Vcellout__sig_node_txtop_0__dat_flit_to_id_translator);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__id_translator_hs_pending_txn 
        = vlSelfRef.__PVT__id_translator_hs_pending_txn;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__rx_req_port_is_inactive 
        = vlSelfRef.__PVT__rx_req_port_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__ic_RX_LINKACTIVEACK 
        = vlSelfRef.__PVT__rx_linkactiveack_from_rx_top;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__credits_backto_full 
        = vlSelfRef.__PVT__credits_backto_full;
}

extern const VlWide<22>/*703:0*/ Vsig_topology_top__ConstPool__CONST_h93abe68d_0;

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi27___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__2(Vsig_topology_top_sig_node_porttop__pi27* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi27___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<22>/*703:0*/ __Vtemp_1;
    VlWide<22>/*703:0*/ __Vtemp_2;
    // Body
    VL_ASSIGN_W(73,vlSelfRef.__Vcellout__sig_node_txtop_0__rsp_flit_to_id_translator, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__rsp_flit_to_id_translator);
    vlSelfRef.__PVT__rsp_flitv_to_id_translator = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__rsp_flitv_to_id_translator;
    vlSelfRef.__PVT__empty_snprsp_flit_fifo_tx_snp 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__empty_snprsp_flit_fifo_tx_snp;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__snpreq_flit_to_id_translator, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__snpreq_flit_to_id_translator);
    vlSelfRef.__PVT__snpreq_flitv_to_id_translator 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__snpreq_flitv_to_id_translator;
    vlSelfRef.__PVT__rspflitpend_from_tx_top = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__TX_RSPFLITPEND;
    vlSelfRef.__PVT__snpflitpend_from_tx_top = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__TX_SNPFLITPEND;
    vlSelfRef.__PVT__datflitpend_from_tx_top = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__TX_DATFLITPEND;
    VL_ASSIGN_W(686,vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_datf_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__flit_out_datf_vc0);
    VL_ASSIGN_W(686,vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_datf_vc1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__flit_out_datf_vc1);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_reqf_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__flit_out_reqf_vc0);
    vlSelfRef.__PVT__ic_RX_SNPLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__ic_RX_SNPLCRDV;
    vlSelfRef.__PVT__timeout_can_send_generated_dat_rsp_flit 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__o_timeout_can_send_generated_dat_rsp_flit;
    vlSelfRef.__PVT__icx_exist_req = vlSelfRef.__PVT__icx_exist;
    vlSelfRef.__PVT__icx_exist_rsp = vlSelfRef.__PVT__icx_exist;
    vlSelfRef.__PVT__icx_exist_dat = vlSelfRef.__PVT__icx_exist;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__mycluster_id 
        = vlSelfRef.__PVT__mycluster_id;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__rsp_flit_to_id_translator, vlSelfRef.__Vcellout__sig_node_txtop_0__rsp_flit_to_id_translator);
    vlSelfRef.__PVT__id_translator_sn__DOT__unused_signal_nxt 
        = ((IData)(vlSelfRef.__PVT__rsp_flitv_to_id_translator) 
           | ((IData)(vlSelfRef.__PVT__dat_flitv_to_id_translator) 
              | (IData)(vlSelfRef.__PVT__id_translator_sn__DOT__unused_signal)));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__empty_snprsp_flit_fifo_tx_snp 
        = vlSelfRef.__PVT__empty_snprsp_flit_fifo_tx_snp;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_to_id_translator, vlSelfRef.__PVT__snpreq_flit_to_id_translator);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_addr_translator_0.__PVT__i_tx_req_v 
        = vlSelfRef.__PVT__snpreq_flitv_to_id_translator;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0.__PVT__tx_req_v 
        = vlSelfRef.__PVT__snpreq_flitv_to_id_translator;
    vlSelfRef.__PVT__metadata_out_datf_vc0_tmp = (0x3fU 
                                                  & VL_SEL_IWII(686, vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_datf_vc0, 0x2a8U, 6));
    VL_SEL_WWII(680, 686, __Vtemp_1, vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_datf_vc0, 0U, 680);
    VL_AND_W(22, vlSelfRef.__PVT__flit_out_datf_vc0_to_id_translator, Vsig_topology_top__ConstPool__CONST_h93abe68d_0, __Vtemp_1);
    vlSelfRef.__PVT__metadata_out_datf_vc1_tmp = (0x3fU 
                                                  & VL_SEL_IWII(686, vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_datf_vc1, 0x2a8U, 6));
    VL_SEL_WWII(680, 686, __Vtemp_2, vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_datf_vc1, 0U, 680);
    VL_AND_W(22, vlSelfRef.__PVT__flit_out_datf_vc1_to_id_translator, Vsig_topology_top__ConstPool__CONST_h93abe68d_0, __Vtemp_2);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__icx_exist_req 
        = vlSelfRef.__PVT__icx_exist_req;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__icx_exist_rsp 
        = vlSelfRef.__PVT__icx_exist_rsp;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__icx_exist_dat 
        = vlSelfRef.__PVT__icx_exist_dat;
    vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__tx_req_returntxnid_from_hn 
        = (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_to_id_translator, 0x32U, 12));
    vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__tx_req_txnid_from_hn 
        = (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_to_id_translator, 0x1aU, 12));
    vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__tx_req_order 
        = (3U & VL_SEL_IWII(151, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_to_id_translator, 0x7fU, 2));
    vlSelfRef.__PVT__id_translator_sn__DOT__tx_req_apply_dmt_from_hn 
        = ((4U == (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_to_id_translator, 0x3eU, 7))) 
           & ((0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_to_id_translator, 0x26U, 11)) 
              != (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_to_id_translator, 0xfU, 11))));
    vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__tx_req_opcode 
        = (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_to_id_translator, 0x3eU, 7));
    vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_addr_translator_0__i_tx_req_addr 
        = (0xfffffffffffffULL & VL_SEL_QWII(151, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_to_id_translator, 0x48U, 52));
    vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc0_rx_dat_opcode 
        = (0xfU & VL_SEL_IWII(680, vlSelfRef.__PVT__flit_out_datf_vc0_to_id_translator, 0x31U, 4));
    vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc0_rx_dat_txnid_from_sn 
        = (0xfffU & VL_SEL_IWII(680, vlSelfRef.__PVT__flit_out_datf_vc0_to_id_translator, 0x1aU, 12));
    vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc0_rx_dat_dbid_from_sn 
        = (0xfffU & VL_SEL_IWII(680, vlSelfRef.__PVT__flit_out_datf_vc0_to_id_translator, 0x41U, 12));
    vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc1_rx_dat_opcode 
        = (0xfU & VL_SEL_IWII(680, vlSelfRef.__PVT__flit_out_datf_vc1_to_id_translator, 0x31U, 4));
    vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc1_rx_dat_txnid_from_sn 
        = (0xfffU & VL_SEL_IWII(680, vlSelfRef.__PVT__flit_out_datf_vc1_to_id_translator, 0x1aU, 12));
    vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc1_rx_dat_dbid_from_sn 
        = (0xfffU & VL_SEL_IWII(680, vlSelfRef.__PVT__flit_out_datf_vc1_to_id_translator, 0x41U, 12));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0.__PVT__tx_req_returntxnid_from_hn 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__tx_req_returntxnid_from_hn;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0.__PVT__tx_req_txnid_from_hn 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__tx_req_txnid_from_hn;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0.__PVT__tx_req_order 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__tx_req_order;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0.__PVT__tx_req_apply_dmt_from_hn 
        = vlSelfRef.__PVT__id_translator_sn__DOT__tx_req_apply_dmt_from_hn;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0.__PVT__tx_req_opcode 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__tx_req_opcode;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_addr_translator_0.__PVT__i_tx_req_addr 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_addr_translator_0__i_tx_req_addr;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0.__PVT__vc0_rx_dat_opcode 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc0_rx_dat_opcode;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0.__PVT__vc0_rx_dat_txnid_from_sn 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc0_rx_dat_txnid_from_sn;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0.__PVT__vc0_rx_dat_dbid_from_sn 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc0_rx_dat_dbid_from_sn;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0.__PVT__vc1_rx_dat_opcode 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc1_rx_dat_opcode;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0.__PVT__vc1_rx_dat_txnid_from_sn 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc1_rx_dat_txnid_from_sn;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0.__PVT__vc1_rx_dat_dbid_from_sn 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc1_rx_dat_dbid_from_sn;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi27___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__3(Vsig_topology_top_sig_node_porttop__pi27* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi27___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(73,vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__rddata_snprsp_flit_fifo_tx_snp);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_addr_translator_0.__PVT__rstn 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0.__PVT__rst_n 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_addr_translator_0.__PVT__clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0.__PVT__clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__cc_is_inactive 
        = vlSelfRef.__PVT__cc_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__all_cache_init_complete 
        = vlSelfRef.__PVT__all_cache_init_complete;
    vlSelfRef.__PVT__unused_signal_block__DOT__unused_signal_timeout 
        = (((IData)(vlSelfRef.__PVT__timeout_can_send_generated_dat_rsp_flit) 
            | (IData)(vlSelfRef.__PVT__i_clear_timeout_interrupt)) 
           | (IData)(vlSelfRef.__PVT__i_clear_recovery_interrupt));
    vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0.__PVT__vc0_rx_dat_txnid_to_hn;
    vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0.__PVT__vc0_rx_dat_dbid_to_hn;
    vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0.__PVT__vc1_rx_dat_txnid_to_hn;
    vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0.__PVT__vc1_rx_dat_dbid_to_hn;
    vlSelfRef.__PVT__id_translator_sn__DOT__tx_req_txnid_to_sn 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0.__PVT__tx_req_txnid_to_sn;
    vlSelfRef.__PVT__id_translator_sn__DOT__tx_req_returntxnid_to_sn 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0.__PVT__tx_req_returntxnid_to_sn;
    vlSelfRef.__PVT__id_translator_sn__DOT__tx_req_addr_to_sn 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_addr_translator_0.__PVT__o_tx_req_addr_to_sn;
    VL_ASSIGN_W(73,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__rddata_snprsp_flit_fifo_tx_snp, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_from_id_translator, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_to_id_translator);
    VL_ASSIGNSEL_WQ(151,52,0x48U, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_from_id_translator, vlSelfRef.__PVT__id_translator_sn__DOT__tx_req_addr_to_sn);
    VL_ASSIGNSEL_WI(151,12,0x1aU, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_from_id_translator, vlSelfRef.__PVT__id_translator_sn__DOT__tx_req_txnid_to_sn);
    VL_ASSIGNSEL_WI(151,12,0x32U, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_from_id_translator, vlSelfRef.__PVT__id_translator_sn__DOT__tx_req_returntxnid_to_sn);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__snpreq_flit_from_id_translator, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_from_id_translator);
    VL_ASSIGN_W(73,vlSelfRef.__PVT__rsp_flit_from_id_translator, vlSelfRef.__PVT__rsp_flit_to_id_translator);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__dat_flit_from_id_translator, vlSelfRef.__PVT__dat_flit_to_id_translator);
    VL_ASSIGN_W(73,vlSelfRef.__Vcellinp__sig_node_txtop_0__rsp_flit_from_id_translator, vlSelfRef.__PVT__rsp_flit_from_id_translator);
    VL_ASSIGN_W(680,vlSelfRef.__Vcellinp__sig_node_txtop_0__dat_flit_from_id_translator, vlSelfRef.__PVT__dat_flit_from_id_translator);
    VL_ASSIGN_W(151,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__snpreq_flit_from_id_translator, vlSelfRef.__PVT__snpreq_flit_from_id_translator);
    VL_ASSIGN_W(73,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__rsp_flit_from_id_translator, vlSelfRef.__Vcellinp__sig_node_txtop_0__rsp_flit_from_id_translator);
    VL_ASSIGN_W(680,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__dat_flit_from_id_translator, vlSelfRef.__Vcellinp__sig_node_txtop_0__dat_flit_from_id_translator);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi27___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__4(Vsig_topology_top_sig_node_porttop__pi27* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi27___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqlcrdv_from_rx_top = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__ic_RX_REQLCRDV;
    vlSelfRef.__PVT__datlcrdv_from_rx_top = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__ic_RX_DATLCRDV;
    vlSelfRef.__PVT__rsplcrdv_from_rx_top = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__ic_RX_RSPLCRDV;
    VL_ASSIGN_W(1610,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__flit_all_req_vc0, vlSelfRef.__PVT__flit_all_req_vc0);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi27___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__5(Vsig_topology_top_sig_node_porttop__pi27* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi27___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__ic_gclk 
        = vlSelfRef.__PVT__rx_ic_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__ic_gclk 
        = vlSelfRef.__PVT__tx_ic_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__intfrx_gclk 
        = vlSelfRef.__PVT__tx_intfrx_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__intfrx_gclk 
        = vlSelfRef.__PVT__rx_intfrx_gclk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi27___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__0(Vsig_topology_top_sig_node_porttop__pi27* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi27___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__flit_all_req_vc1, vlSelfRef.__PVT__flit_all_req_vc1);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi27___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__2(Vsig_topology_top_sig_node_porttop__pi27* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi27___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_timeout_interrupt = 0U;
    vlSelfRef.__PVT__o_timeout_recovery_successful = 0U;
    vlSelfRef.__PVT__ic_TXSACTIVE = vlSelfRef.__PVT__tx_sactive_from_tx_top;
    vlSelfRef.__PVT__ic_TX_LINKACTIVEREQ = vlSelfRef.__PVT__tx_linkactivereq_from_tx_top;
    vlSelfRef.__PVT__tx_linkactiveack_to_tx_top = vlSelfRef.__PVT__ic_TX_LINKACTIVEACK;
    vlSelfRef.__PVT__ic_TX_SNPFLITPEND = vlSelfRef.__PVT__snpflitpend_from_tx_top;
    vlSelfRef.__PVT__ic_TX_SNPFLITV = vlSelfRef.__PVT__snpflitv_from_tx_top;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__ic_TX_SNPFLIT, vlSelfRef.__PVT__snpflit_from_tx_top);
    vlSelfRef.__PVT__snplcrdv_to_tx_top = vlSelfRef.__PVT__ic_TX_SNPLCRDV;
    vlSelfRef.__PVT__ic_TX_DATFLITPEND = vlSelfRef.__PVT__datflitpend_from_tx_top;
    vlSelfRef.__PVT__ic_TX_DATFLITV = vlSelfRef.__PVT__datflitv_from_tx_top;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_TX_DATFLIT, vlSelfRef.__PVT__datflit_from_tx_top);
    vlSelfRef.__PVT__datlcrdv_to_tx_top = vlSelfRef.__PVT__ic_TX_DATLCRDV;
    vlSelfRef.__PVT__ic_TX_RSPFLITPEND = vlSelfRef.__PVT__rspflitpend_from_tx_top;
    vlSelfRef.__PVT__ic_TX_RSPFLITV = vlSelfRef.__PVT__rspflitv_from_tx_top;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__ic_TX_RSPFLIT, vlSelfRef.__PVT__rspflit_from_tx_top);
    vlSelfRef.__PVT__rsplcrdv_to_tx_top = vlSelfRef.__PVT__ic_TX_RSPLCRDV;
    vlSelfRef.__PVT__rx_sactive_to_rx_top = vlSelfRef.__PVT__ic_RXSACTIVE;
    vlSelfRef.__PVT__rx_linkactivereq_to_rx_top = vlSelfRef.__PVT__ic_RX_LINKACTIVEREQ;
    vlSelfRef.__PVT__ic_RX_LINKACTIVEACK = vlSelfRef.__PVT__rx_linkactiveack_from_rx_top;
    vlSelfRef.__PVT__reqflitpend_to_rx_top = vlSelfRef.__PVT__ic_RX_REQFLITPEND;
    vlSelfRef.__PVT__reqflitv_to_rx_top = vlSelfRef.__PVT__ic_RX_REQFLITV;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__reqflit_to_rx_top, vlSelfRef.__PVT__ic_RX_REQFLIT);
    vlSelfRef.__PVT__ic_RX_REQLCRDV = vlSelfRef.__PVT__reqlcrdv_from_rx_top;
    vlSelfRef.__PVT__rspflitpend_to_rx_top = vlSelfRef.__PVT__ic_RX_RSPFLITPEND;
    vlSelfRef.__PVT__rspflitv_to_rx_top = vlSelfRef.__PVT__ic_RX_RSPFLITV;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__rspflit_to_rx_top, vlSelfRef.__PVT__ic_RX_RSPFLIT);
    vlSelfRef.__PVT__ic_RX_RSPLCRDV = vlSelfRef.__PVT__rsplcrdv_from_rx_top;
    vlSelfRef.__PVT__datflitpend_to_rx_top = vlSelfRef.__PVT__ic_RX_DATFLITPEND;
    vlSelfRef.__PVT__datflitv_to_rx_top = vlSelfRef.__PVT__ic_RX_DATFLITV;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__datflit_to_rx_top, vlSelfRef.__PVT__ic_RX_DATFLIT);
    vlSelfRef.__PVT__ic_RX_DATLCRDV = vlSelfRef.__PVT__datlcrdv_from_rx_top;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__ic_RXSACTIVE 
        = vlSelfRef.__PVT__rx_sactive_to_rx_top;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__ic_TX_LINKACTIVEACK 
        = vlSelfRef.__PVT__tx_linkactiveack_to_tx_top;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__TX_SNPLCRDV 
        = vlSelfRef.__PVT__snplcrdv_to_tx_top;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__TX_DATLCRDV 
        = vlSelfRef.__PVT__datlcrdv_to_tx_top;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__TX_RSPLCRDV 
        = vlSelfRef.__PVT__rsplcrdv_to_tx_top;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__ic_RX_RSPFLITPEND 
        = vlSelfRef.__PVT__rspflitpend_to_rx_top;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__ic_RX_DATFLITPEND 
        = vlSelfRef.__PVT__datflitpend_to_rx_top;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__ic_RX_REQFLITPEND 
        = vlSelfRef.__PVT__reqflitpend_to_rx_top;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__ic_RX_LINKACTIVEREQ 
        = vlSelfRef.__PVT__rx_linkactivereq_to_rx_top;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__ic_RX_LINKACTIVEREQ 
        = vlSelfRef.__PVT__rx_linkactivereq_to_rx_top;
    vlSelfRef.__PVT__tx_is_inactive = (1U & (~ ((((IData)(vlSelfRef.__PVT__ic_TX_SNPFLITV) 
                                                  | (IData)(vlSelfRef.__PVT__ic_TX_RSPFLITV)) 
                                                 | (IData)(vlSelfRef.__PVT__ic_TX_DATFLITV)) 
                                                | (IData)(vlSelfRef.__PVT__ic_TX_REQFLITV))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__ic_RX_REQFLITV 
        = vlSelfRef.__PVT__reqflitv_to_rx_top;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__ic_RX_DATFLITV 
        = vlSelfRef.__PVT__datflitv_to_rx_top;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__ic_RX_RSPFLITV 
        = vlSelfRef.__PVT__rspflitv_to_rx_top;
    VL_ASSIGN_W(680,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__ic_RX_DATFLIT, vlSelfRef.__PVT__datflit_to_rx_top);
    VL_ASSIGN_W(73,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__ic_RX_RSPFLIT, vlSelfRef.__PVT__rspflit_to_rx_top);
    VL_ASSIGN_W(151,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__ic_RX_REQFLIT, vlSelfRef.__PVT__reqflit_to_rx_top);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi27___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__3(Vsig_topology_top_sig_node_porttop__pi27* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi27___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc0_rx_rsp_v 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_tx_hs.__PVT__end_send;
    vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc1_rx_rsp_v 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_tx_hs.__PVT__end_send;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0.__PVT__vc0_rx_rsp_v 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc0_rx_rsp_v;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0.__PVT__vc1_rx_rsp_v 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc1_rx_rsp_v;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi27___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__4(Vsig_topology_top_sig_node_porttop__pi27* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi27___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_rspf_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__flit_out_rspf_vc0);
    VL_ASSIGN_W(79,vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_rspf_vc1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__flit_out_rspf_vc1);
    vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0.__PVT__rden_snprsp_flit_fifo_tx_snp;
    vlSelfRef.__PVT__metadata_out_rspf_vc0_tmp = (0x3fU 
                                                  & VL_SEL_IWII(79, vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_rspf_vc0, 0x49U, 6));
    VL_CONST_W_3X(96,__Vtemp_1,0x000001ff,0xffffffff,0xffffffff);
    VL_SEL_WWII(73, 79, __Vtemp_2, vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_rspf_vc0, 0U, 73);
    VL_AND_W(3, vlSelfRef.__PVT__flit_out_rspf_vc0_to_id_translator, __Vtemp_1, __Vtemp_2);
    vlSelfRef.__PVT__metadata_out_rspf_vc1_tmp = (0x3fU 
                                                  & VL_SEL_IWII(79, vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_rspf_vc1, 0x49U, 6));
    VL_CONST_W_3X(96,__Vtemp_3,0x000001ff,0xffffffff,0xffffffff);
    VL_SEL_WWII(73, 79, __Vtemp_4, vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_rspf_vc1, 0U, 73);
    VL_AND_W(3, vlSelfRef.__PVT__flit_out_rspf_vc1_to_id_translator, __Vtemp_3, __Vtemp_4);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__rden_snprsp_flit_fifo_tx_snp 
        = vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp;
    vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc0_rx_rsp_opcode 
        = (0x1fU & VL_SEL_IWII(73, vlSelfRef.__PVT__flit_out_rspf_vc0_to_id_translator, 0x26U, 5));
    vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc0_rx_rsp_txnid_from_sn 
        = (0xfffU & VL_SEL_IWII(73, vlSelfRef.__PVT__flit_out_rspf_vc0_to_id_translator, 0x1aU, 12));
    vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc1_rx_rsp_opcode 
        = (0x1fU & VL_SEL_IWII(73, vlSelfRef.__PVT__flit_out_rspf_vc1_to_id_translator, 0x26U, 5));
    vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc1_rx_rsp_txnid_from_sn 
        = (0xfffU & VL_SEL_IWII(73, vlSelfRef.__PVT__flit_out_rspf_vc1_to_id_translator, 0x1aU, 12));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0.__PVT__vc0_rx_rsp_opcode 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc0_rx_rsp_opcode;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0.__PVT__vc0_rx_rsp_txnid_from_sn 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc0_rx_rsp_txnid_from_sn;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0.__PVT__vc1_rx_rsp_opcode 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc1_rx_rsp_opcode;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0.__PVT__vc1_rx_rsp_txnid_from_sn 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc1_rx_rsp_txnid_from_sn;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi27___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__5(Vsig_topology_top_sig_node_porttop__pi27* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi27___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0.__PVT__vc0_rx_rsp_txnid_to_hn;
    vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0.__PVT__vc1_rx_rsp_txnid_to_hn;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__flit_out_rspf_vc0_from_id_translator, vlSelfRef.__PVT__flit_out_rspf_vc0_to_id_translator);
    VL_ASSIGNSEL_WI(73,12,0x1aU, vlSelfRef.__PVT__flit_out_rspf_vc0_from_id_translator, vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn);
    VL_CONCAT_WIW(79,6,73, vlSelfRef.__PVT__flit_out_rspf_vc0, (IData)(vlSelfRef.__PVT__metadata_out_rspf_vc0_tmp), vlSelfRef.__PVT__flit_out_rspf_vc0_from_id_translator);
    VL_ASSIGN_W(73,vlSelfRef.__PVT__flit_out_rspf_vc1_from_id_translator, vlSelfRef.__PVT__flit_out_rspf_vc1_to_id_translator);
    VL_ASSIGNSEL_WI(73,12,0x1aU, vlSelfRef.__PVT__flit_out_rspf_vc1_from_id_translator, vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn);
    VL_CONCAT_WIW(79,6,73, vlSelfRef.__PVT__flit_out_rspf_vc1, (IData)(vlSelfRef.__PVT__metadata_out_rspf_vc1_tmp), vlSelfRef.__PVT__flit_out_rspf_vc1_from_id_translator);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__flit_out_datf_vc0_from_id_translator, vlSelfRef.__PVT__flit_out_datf_vc0_to_id_translator);
    VL_ASSIGNSEL_WI(680,12,0x1aU, vlSelfRef.__PVT__flit_out_datf_vc0_from_id_translator, vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn);
    VL_ASSIGNSEL_WI(680,12,0x41U, vlSelfRef.__PVT__flit_out_datf_vc0_from_id_translator, vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn);
    VL_CONCAT_WIW(686,6,680, vlSelfRef.__PVT__flit_out_datf_vc0, (IData)(vlSelfRef.__PVT__metadata_out_datf_vc0_tmp), vlSelfRef.__PVT__flit_out_datf_vc0_from_id_translator);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__flit_out_datf_vc1_from_id_translator, vlSelfRef.__PVT__flit_out_datf_vc1_to_id_translator);
    VL_ASSIGNSEL_WI(680,12,0x1aU, vlSelfRef.__PVT__flit_out_datf_vc1_from_id_translator, vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn);
    VL_ASSIGNSEL_WI(680,12,0x41U, vlSelfRef.__PVT__flit_out_datf_vc1_from_id_translator, vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn);
    VL_CONCAT_WIW(686,6,680, vlSelfRef.__PVT__flit_out_datf_vc1, (IData)(vlSelfRef.__PVT__metadata_out_datf_vc1_tmp), vlSelfRef.__PVT__flit_out_datf_vc1_from_id_translator);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi27___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__6(Vsig_topology_top_sig_node_porttop__pi27* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi27___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc0_rx_dat_v 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_tx_hs.__PVT__end_send;
    vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc1_rx_dat_v 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_tx_hs.__PVT__end_send;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0.__PVT__vc0_rx_dat_v 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc0_rx_dat_v;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0.__PVT__vc1_rx_dat_v 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc1_rx_dat_v;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi27___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__7(Vsig_topology_top_sig_node_porttop__pi27* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi27___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_is_inactive = (1U & (~ ((((
                                                   (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_tx_hs.__PVT__req_send)) 
                                                    | VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_tx_hs.__PVT__req_send))) 
                                                   | VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_tx_hs.__PVT__req_send))) 
                                                  | VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc1_tx_hs.__PVT__req_send))) 
                                                 | VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_tx_hs.__PVT__req_send))) 
                                                | VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_tx_hs.__PVT__req_send)))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi27___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__8(Vsig_topology_top_sig_node_porttop__pi27* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi27___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tx_activate_clk = (((((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_rx_hs.__PVT__recv_req)) 
                                            | VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_rx_hs.__PVT__recv_req))) 
                                           | VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_rx_hs.__PVT__recv_req))) 
                                          | VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc1_rx_hs.__PVT__recv_req))) 
                                         | VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_rx_hs.__PVT__recv_req))) 
                                        | VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_rx_hs.__PVT__recv_req)));
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi27___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__9(Vsig_topology_top_sig_node_porttop__pi27* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi27___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__flit_all_rsp_vc0, vlSelfRef.__PVT__flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__flit_all_rsp_vc1, vlSelfRef.__PVT__flit_all_rsp_vc1);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi27___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__10(Vsig_topology_top_sig_node_porttop__pi27* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi27___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__flit_all_dat_vc0, vlSelfRef.__PVT__flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0.__PVT__flit_all_dat_vc1, vlSelfRef.__PVT__flit_all_dat_vc1);
}
