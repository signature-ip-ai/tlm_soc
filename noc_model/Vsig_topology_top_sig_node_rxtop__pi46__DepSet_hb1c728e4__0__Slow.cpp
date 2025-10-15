// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_ic_initcrdt_enable.h"
#include "Vsig_topology_top_sig_lnkactive_rcv.h"
#include "Vsig_topology_top_sig_node_rx_datproc__pi59.h"
#include "Vsig_topology_top_sig_node_rx_reqproc__pi62.h"
#include "Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1.h"
#include "Vsig_topology_top_sig_node_rxtop__pi46.h"

VL_ATTR_COLD void Vsig_topology_top_sig_node_rxtop__pi46___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__0(Vsig_topology_top_sig_node_rxtop__pi46* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi46___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__credits_backto_full_snp = vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__snpcredits_backto_full;
    vlSelfRef.__PVT__credits_backto_full_req = vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__reqcredits_backto_full;
    vlSelfRef.__PVT__credits_backto_full_rsp = vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__credits_backto_full;
    vlSelfRef.__PVT__credits_backto_full_data = vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__credits_backto_full;
    vlSelfRef.__PVT__rx_req_port_is_inactive = vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__rx_req_port_is_inactive;
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_reqf_vc1, vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__flit_out_vc1);
    vlSelfRef.__PVT__ic_RX_LINKACTIVEACK = vlSelf->__PVT__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0->__PVT__RXLINKACTIVEACK;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__ic_RX_SNPFLITPEND 
        = vlSelfRef.__PVT__ic_RX_SNPFLITPEND;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__ic_RX_SNPFLITV 
        = vlSelfRef.__PVT__ic_RX_SNPFLITV;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__enable_balanced_routing 
        = vlSelfRef.__PVT__enable_balanced_routing;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__enable_balanced_routing 
        = vlSelfRef.__PVT__enable_balanced_routing;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__enable_balanced_routing 
        = vlSelfRef.__PVT__enable_balanced_routing;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__mn_node_id 
        = vlSelfRef.__PVT__mn_node_id;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__cm_homeaddr_base_all_hn_f 
        = vlSelfRef.__PVT__cm_homeaddr_base_all_hn_f;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__xy_coord_all_hn_f 
        = vlSelfRef.__PVT__xy_coord_all_hn_f;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__noncm_homeaddr_base_all_hn_f 
        = vlSelfRef.__PVT__noncm_homeaddr_base_all_hn_f;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__cm_homeaddr_limit_all_hn_f 
        = vlSelfRef.__PVT__cm_homeaddr_limit_all_hn_f;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__noncm_homeaddr_limit_all_hn_f 
        = vlSelfRef.__PVT__noncm_homeaddr_limit_all_hn_f;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__xy_coord_all_hn_i 
        = vlSelfRef.__PVT__xy_coord_all_hn_i;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__xy_coord_all_pm 
        = vlSelfRef.__PVT__xy_coord_all_pm;
    VL_ASSIGN_W(112,vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__noncm_homeaddr_base_all_hn_i, vlSelfRef.__PVT__noncm_homeaddr_base_all_hn_i);
    VL_ASSIGN_W(116,vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__noncm_homeaddr_limit_all_hn_i, vlSelfRef.__PVT__noncm_homeaddr_limit_all_hn_i);
    VL_ASSIGN_W(108,vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__ic_RX_SNPFLIT, vlSelfRef.__PVT__ic_RX_SNPFLIT);
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__portis_RN_or_SN 
        = vlSelfRef.__PVT__portis_RN_or_SN;
    vlSelfRef.__PVT__timeout_or_recovery_mode = ((IData)(vlSelfRef.__PVT__i_in_timeout_mode) 
                                                 | (IData)(vlSelfRef.__PVT__i_in_recovery_mode));
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_bridge_locations[0U] 
        = vlSelfRef.__PVT__i_ucie_bridge_locations[0U];
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__i_ucie_bridge_locations[0U] 
        = vlSelfRef.__PVT__i_ucie_bridge_locations[0U];
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__i_ucie_bridge_locations[0U] 
        = vlSelfRef.__PVT__i_ucie_bridge_locations[0U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__qos_override_val 
        = vlSelfRef.__PVT__qos_override_val;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__qos_override_en 
        = vlSelfRef.__PVT__qos_override_en;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__myproc_id 
        = vlSelfRef.__PVT__myproc_id;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__myproc_id 
        = vlSelfRef.__PVT__myproc_id;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__myproc_id 
        = vlSelfRef.__PVT__myproc_id;
    VL_ASSIGN_W(112,vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__cm_homeaddr_base_all_pm, vlSelfRef.__PVT__cm_homeaddr_base_all_pm);
    VL_ASSIGN_W(116,vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__cm_homeaddr_limit_all_pm, vlSelfRef.__PVT__cm_homeaddr_limit_all_pm);
    VL_ASSIGN_W(112,vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__noncm_homeaddr_base_all_pm, vlSelfRef.__PVT__noncm_homeaddr_base_all_pm);
    VL_ASSIGN_W(116,vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__noncm_homeaddr_limit_all_pm, vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm);
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[0U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[1U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[1U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[2U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[2U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[3U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[3U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[4U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[4U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[5U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[5U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[6U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[6U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[7U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[7U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[8U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[8U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[9U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[9U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[0xaU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xaU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[0xbU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xbU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[0xcU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xcU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[0xdU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xdU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[0xeU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xeU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[0xfU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xfU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[0U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[1U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[1U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[2U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[2U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[3U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[3U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[4U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[4U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[5U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[5U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[6U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[6U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[7U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[7U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[8U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[8U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[9U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[9U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[0xaU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xaU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[0xbU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xbU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[0xcU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xcU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[0xdU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xdU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[0xeU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xeU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[0xfU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xfU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[0U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[1U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[1U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[2U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[2U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[3U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[3U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[4U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[4U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[5U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[5U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[6U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[6U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[7U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[7U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[8U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[8U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[9U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[9U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[0xaU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xaU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[0xbU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xbU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[0xcU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xcU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[0xdU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xdU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[0xeU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xeU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[0xfU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xfU];
    vlSelfRef.__PVT__enable_init_update = vlSelf->__PVT__initcrdt_en_sync_port_gen__DOT__sig_ic_initcrdt_enable_0->__PVT__enable_init_update;
    vlSelfRef.__PVT__credits_backto_full = ((((IData)(vlSelfRef.__PVT__credits_backto_full_req) 
                                              & (IData)(vlSelfRef.__PVT__credits_backto_full_snp)) 
                                             & (IData)(vlSelfRef.__PVT__credits_backto_full_rsp)) 
                                            & (IData)(vlSelfRef.__PVT__credits_backto_full_data));
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_timeout_or_recovery_mode 
        = vlSelfRef.__PVT__timeout_or_recovery_mode;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__i_timeout_or_recovery_mode 
        = vlSelfRef.__PVT__timeout_or_recovery_mode;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__i_timeout_or_recovery_mode 
        = vlSelfRef.__PVT__timeout_or_recovery_mode;
    vlSelf->__PVT__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0->__PVT__i_timeout_or_recovery_mode 
        = vlSelfRef.__PVT__timeout_or_recovery_mode;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__enable_init_update 
        = vlSelfRef.__PVT__enable_init_update;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__enable_init_update 
        = vlSelfRef.__PVT__enable_init_update;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__enable_init_update 
        = vlSelfRef.__PVT__enable_init_update;
    vlSelf->__PVT__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0->__PVT__credits_backto_full 
        = vlSelfRef.__PVT__credits_backto_full;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rxtop__pi46___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__3(Vsig_topology_top_sig_node_rxtop__pi46* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi46___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSelf->__PVT__initcrdt_en_sync_port_gen__DOT__sig_ic_initcrdt_enable_0->__PVT__rstb_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0->__PVT__rstb_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__initcrdt_en_sync_port_gen__DOT__sig_ic_initcrdt_enable_0->__PVT__clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0->__PVT__clk 
        = vlSelfRef.__PVT__ic_clk;
    VL_ASSIGN_W(73,vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__rddata_snprsp_flit_fifo_tx_snp, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp);
    vlSelfRef.__PVT__ic_RX_REQLCRDV = vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__ic_RX_REQLCRDV;
    vlSelfRef.__PVT__ic_RX_DATLCRDV = vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__ic_RX_LCRDV;
    vlSelfRef.__PVT__ic_RX_RSPLCRDV = vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__ic_RX_LCRDV;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rxtop__pi46___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__0(Vsig_topology_top_sig_node_rxtop__pi46* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi46___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__credits_backto_full_snp = vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__snpcredits_backto_full;
    vlSelfRef.__PVT__credits_backto_full_req = vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__reqcredits_backto_full;
    vlSelfRef.__PVT__credits_backto_full_rsp = vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__credits_backto_full;
    vlSelfRef.__PVT__credits_backto_full_data = vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__credits_backto_full;
    vlSelfRef.__PVT__rx_req_port_is_inactive = vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__rx_req_port_is_inactive;
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_reqf_vc1, vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__flit_out_vc1);
    vlSelfRef.__PVT__ic_RX_LINKACTIVEACK = vlSelf->__PVT__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0->__PVT__RXLINKACTIVEACK;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__ic_RX_SNPFLITPEND 
        = vlSelfRef.__PVT__ic_RX_SNPFLITPEND;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__ic_RX_SNPFLITV 
        = vlSelfRef.__PVT__ic_RX_SNPFLITV;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__enable_balanced_routing 
        = vlSelfRef.__PVT__enable_balanced_routing;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__enable_balanced_routing 
        = vlSelfRef.__PVT__enable_balanced_routing;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__enable_balanced_routing 
        = vlSelfRef.__PVT__enable_balanced_routing;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__mn_node_id 
        = vlSelfRef.__PVT__mn_node_id;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__cm_homeaddr_base_all_hn_f 
        = vlSelfRef.__PVT__cm_homeaddr_base_all_hn_f;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__xy_coord_all_hn_f 
        = vlSelfRef.__PVT__xy_coord_all_hn_f;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__noncm_homeaddr_base_all_hn_f 
        = vlSelfRef.__PVT__noncm_homeaddr_base_all_hn_f;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__cm_homeaddr_limit_all_hn_f 
        = vlSelfRef.__PVT__cm_homeaddr_limit_all_hn_f;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__noncm_homeaddr_limit_all_hn_f 
        = vlSelfRef.__PVT__noncm_homeaddr_limit_all_hn_f;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__xy_coord_all_hn_i 
        = vlSelfRef.__PVT__xy_coord_all_hn_i;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__xy_coord_all_pm 
        = vlSelfRef.__PVT__xy_coord_all_pm;
    VL_ASSIGN_W(112,vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__noncm_homeaddr_base_all_hn_i, vlSelfRef.__PVT__noncm_homeaddr_base_all_hn_i);
    VL_ASSIGN_W(116,vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__noncm_homeaddr_limit_all_hn_i, vlSelfRef.__PVT__noncm_homeaddr_limit_all_hn_i);
    VL_ASSIGN_W(108,vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__ic_RX_SNPFLIT, vlSelfRef.__PVT__ic_RX_SNPFLIT);
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__portis_RN_or_SN 
        = vlSelfRef.__PVT__portis_RN_or_SN;
    vlSelfRef.__PVT__timeout_or_recovery_mode = ((IData)(vlSelfRef.__PVT__i_in_timeout_mode) 
                                                 | (IData)(vlSelfRef.__PVT__i_in_recovery_mode));
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_bridge_locations[0U] 
        = vlSelfRef.__PVT__i_ucie_bridge_locations[0U];
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__i_ucie_bridge_locations[0U] 
        = vlSelfRef.__PVT__i_ucie_bridge_locations[0U];
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__i_ucie_bridge_locations[0U] 
        = vlSelfRef.__PVT__i_ucie_bridge_locations[0U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__qos_override_val 
        = vlSelfRef.__PVT__qos_override_val;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__qos_override_en 
        = vlSelfRef.__PVT__qos_override_en;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__myproc_id 
        = vlSelfRef.__PVT__myproc_id;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__myproc_id 
        = vlSelfRef.__PVT__myproc_id;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__myproc_id 
        = vlSelfRef.__PVT__myproc_id;
    VL_ASSIGN_W(112,vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__cm_homeaddr_base_all_pm, vlSelfRef.__PVT__cm_homeaddr_base_all_pm);
    VL_ASSIGN_W(116,vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__cm_homeaddr_limit_all_pm, vlSelfRef.__PVT__cm_homeaddr_limit_all_pm);
    VL_ASSIGN_W(112,vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__noncm_homeaddr_base_all_pm, vlSelfRef.__PVT__noncm_homeaddr_base_all_pm);
    VL_ASSIGN_W(116,vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__noncm_homeaddr_limit_all_pm, vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm);
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[0U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[1U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[1U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[2U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[2U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[3U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[3U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[4U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[4U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[5U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[5U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[6U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[6U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[7U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[7U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[8U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[8U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[9U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[9U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[0xaU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xaU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[0xbU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xbU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[0xcU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xcU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[0xdU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xdU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[0xeU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xeU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[0xfU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xfU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[0U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[1U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[1U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[2U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[2U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[3U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[3U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[4U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[4U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[5U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[5U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[6U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[6U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[7U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[7U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[8U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[8U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[9U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[9U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[0xaU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xaU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[0xbU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xbU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[0xcU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xcU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[0xdU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xdU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[0xeU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xeU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[0xfU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xfU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[0U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[1U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[1U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[2U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[2U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[3U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[3U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[4U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[4U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[5U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[5U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[6U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[6U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[7U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[7U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[8U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[8U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[9U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[9U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[0xaU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xaU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[0xbU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xbU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[0xcU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xcU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[0xdU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xdU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[0xeU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xeU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[0xfU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xfU];
    vlSelfRef.__PVT__enable_init_update = vlSelf->__PVT__initcrdt_en_sync_port_gen__DOT__sig_ic_initcrdt_enable_0->__PVT__enable_init_update;
    vlSelfRef.__PVT__credits_backto_full = ((((IData)(vlSelfRef.__PVT__credits_backto_full_req) 
                                              & (IData)(vlSelfRef.__PVT__credits_backto_full_snp)) 
                                             & (IData)(vlSelfRef.__PVT__credits_backto_full_rsp)) 
                                            & (IData)(vlSelfRef.__PVT__credits_backto_full_data));
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_timeout_or_recovery_mode 
        = vlSelfRef.__PVT__timeout_or_recovery_mode;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__i_timeout_or_recovery_mode 
        = vlSelfRef.__PVT__timeout_or_recovery_mode;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__i_timeout_or_recovery_mode 
        = vlSelfRef.__PVT__timeout_or_recovery_mode;
    vlSelf->__PVT__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0->__PVT__i_timeout_or_recovery_mode 
        = vlSelfRef.__PVT__timeout_or_recovery_mode;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__enable_init_update 
        = vlSelfRef.__PVT__enable_init_update;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__enable_init_update 
        = vlSelfRef.__PVT__enable_init_update;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__enable_init_update 
        = vlSelfRef.__PVT__enable_init_update;
    vlSelf->__PVT__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0->__PVT__credits_backto_full 
        = vlSelfRef.__PVT__credits_backto_full;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rxtop__pi46___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__3(Vsig_topology_top_sig_node_rxtop__pi46* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi46___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSelf->__PVT__initcrdt_en_sync_port_gen__DOT__sig_ic_initcrdt_enable_0->__PVT__rstb_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0->__PVT__rstb_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__initcrdt_en_sync_port_gen__DOT__sig_ic_initcrdt_enable_0->__PVT__clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0->__PVT__clk 
        = vlSelfRef.__PVT__ic_clk;
    VL_ASSIGN_W(73,vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__rddata_snprsp_flit_fifo_tx_snp, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp);
    vlSelfRef.__PVT__ic_RX_REQLCRDV = vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__ic_RX_REQLCRDV;
    vlSelfRef.__PVT__ic_RX_DATLCRDV = vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__ic_RX_LCRDV;
    vlSelfRef.__PVT__ic_RX_RSPLCRDV = vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__ic_RX_LCRDV;
}
