// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_node_porttop__pi28.h"
#include "Vsig_topology_top_sig_node_porttop_wrapper__pi10.h"

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__0(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__id_translator_hs_pending_txn_snp 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__id_translator_hs_pending_txn_snp;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_bridge_locations[0U] 
        = vlSelfRef.__PVT__i_ucie_bridge_locations[0U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__qos_override_val 
        = vlSelfRef.__PVT__qos_override_val;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__qos_override_en 
        = vlSelfRef.__PVT__qos_override_en;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__myproc_id 
        = vlSelfRef.__PVT__myproc_id;
    VL_ASSIGN_W(112,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__cm_homeaddr_base_all_pm, vlSelfRef.__PVT__cm_homeaddr_base_all_pm);
    VL_ASSIGN_W(116,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__cm_homeaddr_limit_all_pm, vlSelfRef.__PVT__cm_homeaddr_limit_all_pm);
    VL_ASSIGN_W(112,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__noncm_homeaddr_base_all_pm, vlSelfRef.__PVT__noncm_homeaddr_base_all_pm);
    VL_ASSIGN_W(116,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__noncm_homeaddr_limit_all_pm, vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm);
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_node_ids[0U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_node_ids[1U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[1U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_node_ids[2U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[2U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_node_ids[3U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[3U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_node_ids[4U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[4U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_node_ids[5U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[5U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_node_ids[6U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[6U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_node_ids[7U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[7U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_node_ids[8U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[8U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_node_ids[9U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[9U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_node_ids[0xaU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xaU];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_node_ids[0xbU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xbU];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_node_ids[0xcU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xcU];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_node_ids[0xdU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xdU];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_node_ids[0xeU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xeU];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_node_ids[0xfU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xfU];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_base_addresses[0U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_base_addresses[1U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[1U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_base_addresses[2U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[2U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_base_addresses[3U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[3U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_base_addresses[4U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[4U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_base_addresses[5U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[5U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_base_addresses[6U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[6U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_base_addresses[7U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[7U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_base_addresses[8U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[8U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_base_addresses[9U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[9U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_base_addresses[0xaU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xaU];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_base_addresses[0xbU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xbU];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_base_addresses[0xcU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xcU];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_base_addresses[0xdU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xdU];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_base_addresses[0xeU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xeU];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_base_addresses[0xfU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xfU];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_limit_addresses[0U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_limit_addresses[1U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[1U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_limit_addresses[2U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[2U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_limit_addresses[3U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[3U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_limit_addresses[4U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[4U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_limit_addresses[5U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[5U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_limit_addresses[6U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[6U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_limit_addresses[7U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[7U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_limit_addresses[8U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[8U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_limit_addresses[9U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[9U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_limit_addresses[0xaU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xaU];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_limit_addresses[0xbU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xbU];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_limit_addresses[0xcU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xcU];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_limit_addresses[0xdU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xdU];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_limit_addresses[0xeU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xeU];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_limit_addresses[0xfU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xfU];
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__1(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__icx_exist 
        = vlSelfRef.__PVT__icx_exist;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__mycluster_id 
        = vlSelfRef.__PVT__mycluster_id;
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_reqf_vc1, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_reqf_vc1);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__3(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_req_vc0, vlSelfRef.__PVT__flit_all_req_vc0);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__4(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__rx_ic_gclk 
        = vlSelfRef.__PVT__rx_ic_gclk;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__tx_ic_gclk 
        = vlSelfRef.__PVT__tx_ic_gclk;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__tx_intfrx_gclk 
        = vlSelfRef.__PVT__tx_intfrx_gclk;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__rx_intfrx_gclk 
        = vlSelfRef.__PVT__rx_intfrx_gclk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__2(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_req_vc1, vlSelfRef.__PVT__flit_all_req_vc1);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__3(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_activate_clk = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__rx_activate_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__6(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc0, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_rspf_vc0);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc1, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_rspf_vc1);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc0, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_datf_vc0);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc1, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_datf_vc1);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__7(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_is_inactive = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__rx_is_inactive;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__8(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tx_activate_clk = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__tx_activate_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__9(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_rsp_vc0, vlSelfRef.__PVT__flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_rsp_vc1, vlSelfRef.__PVT__flit_all_rsp_vc1);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__10(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_dat_vc0, vlSelfRef.__PVT__flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_dat_vc1, vlSelfRef.__PVT__flit_all_dat_vc1);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__0(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__id_translator_hs_pending_txn_snp 
        = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__id_translator_hs_pending_txn_snp;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_bridge_locations[0U] 
        = vlSelfRef.__PVT__i_ucie_bridge_locations[0U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__qos_override_val 
        = vlSelfRef.__PVT__qos_override_val;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__qos_override_en 
        = vlSelfRef.__PVT__qos_override_en;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__myproc_id 
        = vlSelfRef.__PVT__myproc_id;
    VL_ASSIGN_W(112,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__cm_homeaddr_base_all_pm, vlSelfRef.__PVT__cm_homeaddr_base_all_pm);
    VL_ASSIGN_W(116,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__cm_homeaddr_limit_all_pm, vlSelfRef.__PVT__cm_homeaddr_limit_all_pm);
    VL_ASSIGN_W(112,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__noncm_homeaddr_base_all_pm, vlSelfRef.__PVT__noncm_homeaddr_base_all_pm);
    VL_ASSIGN_W(116,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__noncm_homeaddr_limit_all_pm, vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm);
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_node_ids[0U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_node_ids[1U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[1U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_node_ids[2U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[2U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_node_ids[3U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[3U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_node_ids[4U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[4U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_node_ids[5U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[5U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_node_ids[6U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[6U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_node_ids[7U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[7U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_node_ids[8U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[8U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_node_ids[9U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[9U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_node_ids[0xaU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xaU];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_node_ids[0xbU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xbU];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_node_ids[0xcU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xcU];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_node_ids[0xdU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xdU];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_node_ids[0xeU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xeU];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_node_ids[0xfU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xfU];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_base_addresses[0U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_base_addresses[1U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[1U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_base_addresses[2U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[2U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_base_addresses[3U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[3U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_base_addresses[4U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[4U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_base_addresses[5U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[5U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_base_addresses[6U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[6U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_base_addresses[7U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[7U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_base_addresses[8U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[8U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_base_addresses[9U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[9U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_base_addresses[0xaU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xaU];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_base_addresses[0xbU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xbU];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_base_addresses[0xcU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xcU];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_base_addresses[0xdU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xdU];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_base_addresses[0xeU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xeU];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_base_addresses[0xfU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xfU];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_limit_addresses[0U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_limit_addresses[1U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[1U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_limit_addresses[2U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[2U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_limit_addresses[3U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[3U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_limit_addresses[4U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[4U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_limit_addresses[5U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[5U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_limit_addresses[6U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[6U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_limit_addresses[7U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[7U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_limit_addresses[8U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[8U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_limit_addresses[9U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[9U];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_limit_addresses[0xaU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xaU];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_limit_addresses[0xbU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xbU];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_limit_addresses[0xcU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xcU];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_limit_addresses[0xdU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xdU];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_limit_addresses[0xeU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xeU];
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_ucie_limit_addresses[0xfU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xfU];
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__1(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__icx_exist 
        = vlSelfRef.__PVT__icx_exist;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__mycluster_id 
        = vlSelfRef.__PVT__mycluster_id;
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_reqf_vc1, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_reqf_vc1);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__3(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_req_vc0, vlSelfRef.__PVT__flit_all_req_vc0);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__4(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__rx_ic_gclk 
        = vlSelfRef.__PVT__rx_ic_gclk;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__tx_ic_gclk 
        = vlSelfRef.__PVT__tx_ic_gclk;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__tx_intfrx_gclk 
        = vlSelfRef.__PVT__tx_intfrx_gclk;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__rx_intfrx_gclk 
        = vlSelfRef.__PVT__rx_intfrx_gclk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__2(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_req_vc1, vlSelfRef.__PVT__flit_all_req_vc1);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__3(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_activate_clk = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__rx_activate_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__6(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc0, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_rspf_vc0);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc1, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_rspf_vc1);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc0, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_datf_vc0);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc1, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_datf_vc1);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__7(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_is_inactive = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__rx_is_inactive;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__8(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tx_activate_clk = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__tx_activate_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__9(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_rsp_vc0, vlSelfRef.__PVT__flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_rsp_vc1, vlSelfRef.__PVT__flit_all_rsp_vc1);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__10(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_dat_vc0, vlSelfRef.__PVT__flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_dat_vc1, vlSelfRef.__PVT__flit_all_dat_vc1);
}
