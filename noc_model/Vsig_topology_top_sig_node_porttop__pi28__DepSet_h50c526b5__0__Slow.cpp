// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_addr_translator.h"
#include "Vsig_topology_top_sig_id_translator_sn__I23_Tc.h"
#include "Vsig_topology_top_sig_node_porttop__pi28.h"
#include "Vsig_topology_top_sig_node_rxtop__pi46.h"
#include "Vsig_topology_top_sig_node_txtop__pi45.h"

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi28___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__0(Vsig_topology_top_sig_node_porttop__pi28* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi28___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_REQLCRDV 
        = vlSelfRef.__PVT__ic_TX_REQLCRDV;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__ic_TX_REQFLIT, vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_REQFLIT);
    vlSelfRef.__PVT__ic_TX_REQFLITPEND = vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_REQFLITPEND;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_SNPFLITPEND 
        = vlSelfRef.__PVT__ic_RX_SNPFLITPEND;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_SNPFLITV 
        = vlSelfRef.__PVT__ic_RX_SNPFLITV;
    vlSelfRef.__PVT__id_translator_full = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__id_translator_full;
    vlSelfRef.__PVT__ic_TX_REQFLITV = vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_REQFLITV;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__enable_balanced_routing 
        = vlSelfRef.__PVT__enable_balanced_routing;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__mn_node_id 
        = vlSelfRef.__PVT__mn_node_id;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__cm_homeaddr_base_all_hn_f 
        = vlSelfRef.__PVT__cm_homeaddr_base_all_hn_f;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__xy_coord_all_hn_f 
        = vlSelfRef.__PVT__xy_coord_all_hn_f;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__noncm_homeaddr_base_all_hn_f 
        = vlSelfRef.__PVT__noncm_homeaddr_base_all_hn_f;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__cm_homeaddr_limit_all_hn_f 
        = vlSelfRef.__PVT__cm_homeaddr_limit_all_hn_f;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__noncm_homeaddr_limit_all_hn_f 
        = vlSelfRef.__PVT__noncm_homeaddr_limit_all_hn_f;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__xy_coord_all_hn_i 
        = vlSelfRef.__PVT__xy_coord_all_hn_i;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__xy_coord_all_pm 
        = vlSelfRef.__PVT__xy_coord_all_pm;
    VL_ASSIGN_W(112,vlSelf->__PVT__sig_node_rxtop_0->__PVT__noncm_homeaddr_base_all_hn_i, vlSelfRef.__PVT__noncm_homeaddr_base_all_hn_i);
    VL_ASSIGN_W(116,vlSelf->__PVT__sig_node_rxtop_0->__PVT__noncm_homeaddr_limit_all_hn_i, vlSelfRef.__PVT__noncm_homeaddr_limit_all_hn_i);
    VL_ASSIGN_W(108,vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_SNPFLIT, vlSelfRef.__PVT__ic_RX_SNPFLIT);
    vlSelfRef.__PVT__tx_sactive_from_tx_top = vlSelf->__PVT__sig_node_txtop_0->__PVT__ic_TXSACTIVE;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__datflit_from_tx_top, vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_DATFLIT);
    vlSelfRef.__PVT__datflitv_from_tx_top = vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_DATFLITV;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__rspflit_from_tx_top, vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_RSPFLIT);
    vlSelfRef.__PVT__rspflitv_from_tx_top = vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_RSPFLITV;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__snpflit_from_tx_top, vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_SNPFLIT);
    vlSelfRef.__PVT__snpflitv_from_tx_top = vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_SNPFLITV;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__id_translator_full_req 
        = vlSelfRef.__PVT__id_translator_full_req;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__portis_RN_or_SN 
        = vlSelfRef.__PVT__portis_RN_or_SN;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__sysco_is_disabled 
        = vlSelfRef.__PVT__sysco_is_disabled;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__portis_RN_or_SN 
        = vlSelfRef.__PVT__portis_RN_or_SN;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_in_recovery_mode 
        = vlSelfRef.__PVT__recovery_mode;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_in_timeout_mode 
        = vlSelfRef.__PVT__timeout_mode;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__i_in_recovery_mode 
        = vlSelfRef.__PVT__recovery_mode;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__i_in_timeout_mode 
        = vlSelfRef.__PVT__timeout_mode;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_bridge_locations[0U] 
        = vlSelfRef.__PVT__i_ucie_bridge_locations[0U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__qos_override_val 
        = vlSelfRef.__PVT__qos_override_val;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__qos_override_en 
        = vlSelfRef.__PVT__qos_override_en;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__myproc_id 
        = vlSelfRef.__PVT__myproc_id;
    VL_ASSIGN_W(112,vlSelf->__PVT__id_translator_sn__DOT__sig_addr_translator_0->__PVT__cm_homeaddr_base_all_pm, vlSelfRef.__PVT__cm_homeaddr_base_all_pm);
    VL_ASSIGN_W(112,vlSelf->__PVT__sig_node_rxtop_0->__PVT__cm_homeaddr_base_all_pm, vlSelfRef.__PVT__cm_homeaddr_base_all_pm);
    VL_ASSIGN_W(116,vlSelf->__PVT__id_translator_sn__DOT__sig_addr_translator_0->__PVT__cm_homeaddr_limit_all_pm, vlSelfRef.__PVT__cm_homeaddr_limit_all_pm);
    VL_ASSIGN_W(116,vlSelf->__PVT__sig_node_rxtop_0->__PVT__cm_homeaddr_limit_all_pm, vlSelfRef.__PVT__cm_homeaddr_limit_all_pm);
    VL_ASSIGN_W(112,vlSelf->__PVT__id_translator_sn__DOT__sig_addr_translator_0->__PVT__noncm_homeaddr_base_all_pm, vlSelfRef.__PVT__noncm_homeaddr_base_all_pm);
    VL_ASSIGN_W(112,vlSelf->__PVT__sig_node_rxtop_0->__PVT__noncm_homeaddr_base_all_pm, vlSelfRef.__PVT__noncm_homeaddr_base_all_pm);
    VL_ASSIGN_W(116,vlSelf->__PVT__id_translator_sn__DOT__sig_addr_translator_0->__PVT__noncm_homeaddr_limit_all_pm, vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm);
    VL_ASSIGN_W(116,vlSelf->__PVT__sig_node_rxtop_0->__PVT__noncm_homeaddr_limit_all_pm, vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm);
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_node_ids[0U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_node_ids[1U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[1U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_node_ids[2U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[2U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_node_ids[3U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[3U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_node_ids[4U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[4U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_node_ids[5U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[5U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_node_ids[6U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[6U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_node_ids[7U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[7U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_node_ids[8U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[8U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_node_ids[9U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[9U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_node_ids[0xaU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xaU];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_node_ids[0xbU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xbU];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_node_ids[0xcU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xcU];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_node_ids[0xdU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xdU];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_node_ids[0xeU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xeU];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_node_ids[0xfU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xfU];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_base_addresses[0U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_base_addresses[1U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[1U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_base_addresses[2U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[2U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_base_addresses[3U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[3U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_base_addresses[4U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[4U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_base_addresses[5U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[5U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_base_addresses[6U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[6U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_base_addresses[7U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[7U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_base_addresses[8U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[8U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_base_addresses[9U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[9U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_base_addresses[0xaU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xaU];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_base_addresses[0xbU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xbU];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_base_addresses[0xcU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xcU];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_base_addresses[0xdU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xdU];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_base_addresses[0xeU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xeU];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_base_addresses[0xfU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xfU];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_limit_addresses[0U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_limit_addresses[1U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[1U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_limit_addresses[2U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[2U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_limit_addresses[3U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[3U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_limit_addresses[4U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[4U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_limit_addresses[5U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[5U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_limit_addresses[6U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[6U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_limit_addresses[7U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[7U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_limit_addresses[8U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[8U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_limit_addresses[9U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[9U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_limit_addresses[0xaU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xaU];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_limit_addresses[0xbU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xbU];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_limit_addresses[0xcU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xcU];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_limit_addresses[0xdU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xdU];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_limit_addresses[0xeU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xeU];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_limit_addresses[0xfU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xfU];
    vlSelf->__PVT__sig_node_txtop_0->__PVT__id_translator_full 
        = vlSelfRef.__PVT__id_translator_full;
}

extern const VlWide<22>/*703:0*/ Vsig_topology_top__ConstPool__CONST_h93abe68d_0;

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi28___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__2(Vsig_topology_top_sig_node_porttop__pi28* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi28___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<22>/*703:0*/ __Vtemp_1;
    VlWide<22>/*703:0*/ __Vtemp_2;
    // Body
    VL_ASSIGN_W(73,vlSelfRef.__Vcellout__sig_node_txtop_0__rsp_flit_to_id_translator, vlSelf->__PVT__sig_node_txtop_0->__PVT__rsp_flit_to_id_translator);
    vlSelfRef.__PVT__rsp_flitv_to_id_translator = vlSelf->__PVT__sig_node_txtop_0->__PVT__rsp_flitv_to_id_translator;
    vlSelfRef.__PVT__empty_snprsp_flit_fifo_tx_snp 
        = vlSelf->__PVT__sig_node_txtop_0->__PVT__empty_snprsp_flit_fifo_tx_snp;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__snpreq_flit_to_id_translator, vlSelf->__PVT__sig_node_txtop_0->__PVT__snpreq_flit_to_id_translator);
    vlSelfRef.__PVT__snpreq_flitv_to_id_translator 
        = vlSelf->__PVT__sig_node_txtop_0->__PVT__snpreq_flitv_to_id_translator;
    vlSelfRef.__PVT__rspflitpend_from_tx_top = vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_RSPFLITPEND;
    vlSelfRef.__PVT__snpflitpend_from_tx_top = vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_SNPFLITPEND;
    vlSelfRef.__PVT__datflitpend_from_tx_top = vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_DATFLITPEND;
    VL_ASSIGN_W(686,vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_datf_vc0, vlSelf->__PVT__sig_node_rxtop_0->__PVT__flit_out_datf_vc0);
    VL_ASSIGN_W(686,vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_datf_vc1, vlSelf->__PVT__sig_node_rxtop_0->__PVT__flit_out_datf_vc1);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_reqf_vc0, vlSelf->__PVT__sig_node_rxtop_0->__PVT__flit_out_reqf_vc0);
    vlSelfRef.__PVT__ic_RX_SNPLCRDV = vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_SNPLCRDV;
    vlSelfRef.__PVT__timeout_can_send_generated_dat_rsp_flit 
        = vlSelf->__PVT__sig_node_rxtop_0->__PVT__o_timeout_can_send_generated_dat_rsp_flit;
    vlSelfRef.__PVT__icx_exist_req = vlSelfRef.__PVT__icx_exist;
    vlSelfRef.__PVT__icx_exist_rsp = vlSelfRef.__PVT__icx_exist;
    vlSelfRef.__PVT__icx_exist_dat = vlSelfRef.__PVT__icx_exist;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__mycluster_id 
        = vlSelfRef.__PVT__mycluster_id;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__rsp_flit_to_id_translator, vlSelfRef.__Vcellout__sig_node_txtop_0__rsp_flit_to_id_translator);
    vlSelfRef.__PVT__id_translator_sn__DOT__unused_signal_nxt 
        = ((IData)(vlSelfRef.__PVT__rsp_flitv_to_id_translator) 
           | ((IData)(vlSelfRef.__PVT__dat_flitv_to_id_translator) 
              | (IData)(vlSelfRef.__PVT__id_translator_sn__DOT__unused_signal)));
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__empty_snprsp_flit_fifo_tx_snp 
        = vlSelfRef.__PVT__empty_snprsp_flit_fifo_tx_snp;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_to_id_translator, vlSelfRef.__PVT__snpreq_flit_to_id_translator);
    vlSelf->__PVT__id_translator_sn__DOT__sig_addr_translator_0->__PVT__i_tx_req_v 
        = vlSelfRef.__PVT__snpreq_flitv_to_id_translator;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__tx_req_v 
        = vlSelfRef.__PVT__snpreq_flitv_to_id_translator;
    vlSelfRef.__PVT__metadata_out_datf_vc0_tmp = (0x3fU 
                                                  & VL_SEL_IWII(686, vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_datf_vc0, 0x2a8U, 6));
    VL_SEL_WWII(680, 686, __Vtemp_1, vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_datf_vc0, 0U, 680);
    VL_AND_W(22, vlSelfRef.__PVT__flit_out_datf_vc0_to_id_translator, Vsig_topology_top__ConstPool__CONST_h93abe68d_0, __Vtemp_1);
    vlSelfRef.__PVT__metadata_out_datf_vc1_tmp = (0x3fU 
                                                  & VL_SEL_IWII(686, vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_datf_vc1, 0x2a8U, 6));
    VL_SEL_WWII(680, 686, __Vtemp_2, vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_datf_vc1, 0U, 680);
    VL_AND_W(22, vlSelfRef.__PVT__flit_out_datf_vc1_to_id_translator, Vsig_topology_top__ConstPool__CONST_h93abe68d_0, __Vtemp_2);
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__icx_exist_req 
        = vlSelfRef.__PVT__icx_exist_req;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__icx_exist_rsp 
        = vlSelfRef.__PVT__icx_exist_rsp;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__icx_exist_dat 
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
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__tx_req_returntxnid_from_hn 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__tx_req_returntxnid_from_hn;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__tx_req_txnid_from_hn 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__tx_req_txnid_from_hn;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__tx_req_order 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__tx_req_order;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__tx_req_apply_dmt_from_hn 
        = vlSelfRef.__PVT__id_translator_sn__DOT__tx_req_apply_dmt_from_hn;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__tx_req_opcode 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__tx_req_opcode;
    vlSelf->__PVT__id_translator_sn__DOT__sig_addr_translator_0->__PVT__i_tx_req_addr 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_addr_translator_0__i_tx_req_addr;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc0_rx_dat_opcode 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc0_rx_dat_opcode;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc0_rx_dat_txnid_from_sn 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc0_rx_dat_txnid_from_sn;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc0_rx_dat_dbid_from_sn 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc0_rx_dat_dbid_from_sn;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc1_rx_dat_opcode 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc1_rx_dat_opcode;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc1_rx_dat_txnid_from_sn 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc1_rx_dat_txnid_from_sn;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc1_rx_dat_dbid_from_sn 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc1_rx_dat_dbid_from_sn;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi28___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__3(Vsig_topology_top_sig_node_porttop__pi28* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi28___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(73,vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp, vlSelf->__PVT__sig_node_txtop_0->__PVT__rddata_snprsp_flit_fifo_tx_snp);
    vlSelf->__PVT__sig_node_txtop_0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSelf->__PVT__id_translator_sn__DOT__sig_addr_translator_0->__PVT__rstn 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__rst_n 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__id_translator_sn__DOT__sig_addr_translator_0->__PVT__clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__cc_is_inactive 
        = vlSelfRef.__PVT__cc_is_inactive;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__all_cache_init_complete 
        = vlSelfRef.__PVT__all_cache_init_complete;
    vlSelfRef.__PVT__unused_signal_block__DOT__unused_signal_timeout 
        = (((IData)(vlSelfRef.__PVT__timeout_can_send_generated_dat_rsp_flit) 
            | (IData)(vlSelfRef.__PVT__i_clear_timeout_interrupt)) 
           | (IData)(vlSelfRef.__PVT__i_clear_recovery_interrupt));
    vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc0_rx_dat_txnid_to_hn;
    vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc0_rx_dat_dbid_to_hn;
    vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc1_rx_dat_txnid_to_hn;
    vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc1_rx_dat_dbid_to_hn;
    vlSelfRef.__PVT__id_translator_sn__DOT__tx_req_txnid_to_sn 
        = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__tx_req_txnid_to_sn;
    vlSelfRef.__PVT__id_translator_sn__DOT__tx_req_returntxnid_to_sn 
        = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__tx_req_returntxnid_to_sn;
    vlSelfRef.__PVT__id_translator_sn__DOT__tx_req_addr_to_sn 
        = vlSelf->__PVT__id_translator_sn__DOT__sig_addr_translator_0->__PVT__o_tx_req_addr_to_sn;
    VL_ASSIGN_W(73,vlSelf->__PVT__sig_node_rxtop_0->__PVT__rddata_snprsp_flit_fifo_tx_snp, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_from_id_translator, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_to_id_translator);
    VL_ASSIGNSEL_WQ(151,52,0x48U, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_from_id_translator, vlSelfRef.__PVT__id_translator_sn__DOT__tx_req_addr_to_sn);
    VL_ASSIGNSEL_WI(151,12,0x1aU, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_from_id_translator, vlSelfRef.__PVT__id_translator_sn__DOT__tx_req_txnid_to_sn);
    VL_ASSIGNSEL_WI(151,12,0x32U, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_from_id_translator, vlSelfRef.__PVT__id_translator_sn__DOT__tx_req_returntxnid_to_sn);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__snpreq_flit_from_id_translator, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_from_id_translator);
    VL_ASSIGN_W(73,vlSelfRef.__PVT__rsp_flit_from_id_translator, vlSelfRef.__PVT__rsp_flit_to_id_translator);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__dat_flit_from_id_translator, vlSelfRef.__PVT__dat_flit_to_id_translator);
    VL_ASSIGN_W(73,vlSelfRef.__Vcellinp__sig_node_txtop_0__rsp_flit_from_id_translator, vlSelfRef.__PVT__rsp_flit_from_id_translator);
    VL_ASSIGN_W(680,vlSelfRef.__Vcellinp__sig_node_txtop_0__dat_flit_from_id_translator, vlSelfRef.__PVT__dat_flit_from_id_translator);
    VL_ASSIGN_W(151,vlSelf->__PVT__sig_node_txtop_0->__PVT__snpreq_flit_from_id_translator, vlSelfRef.__PVT__snpreq_flit_from_id_translator);
    VL_ASSIGN_W(73,vlSelf->__PVT__sig_node_txtop_0->__PVT__rsp_flit_from_id_translator, vlSelfRef.__Vcellinp__sig_node_txtop_0__rsp_flit_from_id_translator);
    VL_ASSIGN_W(680,vlSelf->__PVT__sig_node_txtop_0->__PVT__dat_flit_from_id_translator, vlSelfRef.__Vcellinp__sig_node_txtop_0__dat_flit_from_id_translator);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi28___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__0(Vsig_topology_top_sig_node_porttop__pi28* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi28___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_REQLCRDV 
        = vlSelfRef.__PVT__ic_TX_REQLCRDV;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__ic_TX_REQFLIT, vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_REQFLIT);
    vlSelfRef.__PVT__ic_TX_REQFLITPEND = vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_REQFLITPEND;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_SNPFLITPEND 
        = vlSelfRef.__PVT__ic_RX_SNPFLITPEND;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_SNPFLITV 
        = vlSelfRef.__PVT__ic_RX_SNPFLITV;
    vlSelfRef.__PVT__id_translator_full = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__id_translator_full;
    vlSelfRef.__PVT__ic_TX_REQFLITV = vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_REQFLITV;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__enable_balanced_routing 
        = vlSelfRef.__PVT__enable_balanced_routing;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__mn_node_id 
        = vlSelfRef.__PVT__mn_node_id;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__cm_homeaddr_base_all_hn_f 
        = vlSelfRef.__PVT__cm_homeaddr_base_all_hn_f;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__xy_coord_all_hn_f 
        = vlSelfRef.__PVT__xy_coord_all_hn_f;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__noncm_homeaddr_base_all_hn_f 
        = vlSelfRef.__PVT__noncm_homeaddr_base_all_hn_f;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__cm_homeaddr_limit_all_hn_f 
        = vlSelfRef.__PVT__cm_homeaddr_limit_all_hn_f;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__noncm_homeaddr_limit_all_hn_f 
        = vlSelfRef.__PVT__noncm_homeaddr_limit_all_hn_f;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__xy_coord_all_hn_i 
        = vlSelfRef.__PVT__xy_coord_all_hn_i;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__xy_coord_all_pm 
        = vlSelfRef.__PVT__xy_coord_all_pm;
    VL_ASSIGN_W(112,vlSelf->__PVT__sig_node_rxtop_0->__PVT__noncm_homeaddr_base_all_hn_i, vlSelfRef.__PVT__noncm_homeaddr_base_all_hn_i);
    VL_ASSIGN_W(116,vlSelf->__PVT__sig_node_rxtop_0->__PVT__noncm_homeaddr_limit_all_hn_i, vlSelfRef.__PVT__noncm_homeaddr_limit_all_hn_i);
    VL_ASSIGN_W(108,vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_SNPFLIT, vlSelfRef.__PVT__ic_RX_SNPFLIT);
    vlSelfRef.__PVT__tx_sactive_from_tx_top = vlSelf->__PVT__sig_node_txtop_0->__PVT__ic_TXSACTIVE;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__datflit_from_tx_top, vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_DATFLIT);
    vlSelfRef.__PVT__datflitv_from_tx_top = vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_DATFLITV;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__rspflit_from_tx_top, vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_RSPFLIT);
    vlSelfRef.__PVT__rspflitv_from_tx_top = vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_RSPFLITV;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__snpflit_from_tx_top, vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_SNPFLIT);
    vlSelfRef.__PVT__snpflitv_from_tx_top = vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_SNPFLITV;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__id_translator_full_req 
        = vlSelfRef.__PVT__id_translator_full_req;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__portis_RN_or_SN 
        = vlSelfRef.__PVT__portis_RN_or_SN;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__sysco_is_disabled 
        = vlSelfRef.__PVT__sysco_is_disabled;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__portis_RN_or_SN 
        = vlSelfRef.__PVT__portis_RN_or_SN;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_in_recovery_mode 
        = vlSelfRef.__PVT__recovery_mode;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_in_timeout_mode 
        = vlSelfRef.__PVT__timeout_mode;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__i_in_recovery_mode 
        = vlSelfRef.__PVT__recovery_mode;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__i_in_timeout_mode 
        = vlSelfRef.__PVT__timeout_mode;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_bridge_locations[0U] 
        = vlSelfRef.__PVT__i_ucie_bridge_locations[0U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__qos_override_val 
        = vlSelfRef.__PVT__qos_override_val;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__qos_override_en 
        = vlSelfRef.__PVT__qos_override_en;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__myproc_id 
        = vlSelfRef.__PVT__myproc_id;
    VL_ASSIGN_W(112,vlSelf->__PVT__id_translator_sn__DOT__sig_addr_translator_0->__PVT__cm_homeaddr_base_all_pm, vlSelfRef.__PVT__cm_homeaddr_base_all_pm);
    VL_ASSIGN_W(112,vlSelf->__PVT__sig_node_rxtop_0->__PVT__cm_homeaddr_base_all_pm, vlSelfRef.__PVT__cm_homeaddr_base_all_pm);
    VL_ASSIGN_W(116,vlSelf->__PVT__id_translator_sn__DOT__sig_addr_translator_0->__PVT__cm_homeaddr_limit_all_pm, vlSelfRef.__PVT__cm_homeaddr_limit_all_pm);
    VL_ASSIGN_W(116,vlSelf->__PVT__sig_node_rxtop_0->__PVT__cm_homeaddr_limit_all_pm, vlSelfRef.__PVT__cm_homeaddr_limit_all_pm);
    VL_ASSIGN_W(112,vlSelf->__PVT__id_translator_sn__DOT__sig_addr_translator_0->__PVT__noncm_homeaddr_base_all_pm, vlSelfRef.__PVT__noncm_homeaddr_base_all_pm);
    VL_ASSIGN_W(112,vlSelf->__PVT__sig_node_rxtop_0->__PVT__noncm_homeaddr_base_all_pm, vlSelfRef.__PVT__noncm_homeaddr_base_all_pm);
    VL_ASSIGN_W(116,vlSelf->__PVT__id_translator_sn__DOT__sig_addr_translator_0->__PVT__noncm_homeaddr_limit_all_pm, vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm);
    VL_ASSIGN_W(116,vlSelf->__PVT__sig_node_rxtop_0->__PVT__noncm_homeaddr_limit_all_pm, vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm);
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_node_ids[0U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_node_ids[1U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[1U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_node_ids[2U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[2U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_node_ids[3U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[3U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_node_ids[4U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[4U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_node_ids[5U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[5U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_node_ids[6U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[6U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_node_ids[7U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[7U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_node_ids[8U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[8U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_node_ids[9U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[9U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_node_ids[0xaU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xaU];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_node_ids[0xbU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xbU];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_node_ids[0xcU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xcU];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_node_ids[0xdU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xdU];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_node_ids[0xeU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xeU];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_node_ids[0xfU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xfU];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_base_addresses[0U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_base_addresses[1U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[1U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_base_addresses[2U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[2U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_base_addresses[3U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[3U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_base_addresses[4U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[4U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_base_addresses[5U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[5U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_base_addresses[6U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[6U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_base_addresses[7U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[7U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_base_addresses[8U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[8U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_base_addresses[9U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[9U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_base_addresses[0xaU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xaU];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_base_addresses[0xbU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xbU];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_base_addresses[0xcU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xcU];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_base_addresses[0xdU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xdU];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_base_addresses[0xeU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xeU];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_base_addresses[0xfU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xfU];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_limit_addresses[0U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_limit_addresses[1U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[1U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_limit_addresses[2U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[2U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_limit_addresses[3U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[3U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_limit_addresses[4U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[4U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_limit_addresses[5U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[5U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_limit_addresses[6U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[6U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_limit_addresses[7U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[7U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_limit_addresses[8U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[8U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_limit_addresses[9U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[9U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_limit_addresses[0xaU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xaU];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_limit_addresses[0xbU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xbU];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_limit_addresses[0xcU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xcU];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_limit_addresses[0xdU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xdU];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_limit_addresses[0xeU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xeU];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_limit_addresses[0xfU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xfU];
    vlSelf->__PVT__sig_node_txtop_0->__PVT__id_translator_full 
        = vlSelfRef.__PVT__id_translator_full;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi28___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__2(Vsig_topology_top_sig_node_porttop__pi28* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi28___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<22>/*703:0*/ __Vtemp_1;
    VlWide<22>/*703:0*/ __Vtemp_2;
    // Body
    VL_ASSIGN_W(73,vlSelfRef.__Vcellout__sig_node_txtop_0__rsp_flit_to_id_translator, vlSelf->__PVT__sig_node_txtop_0->__PVT__rsp_flit_to_id_translator);
    vlSelfRef.__PVT__rsp_flitv_to_id_translator = vlSelf->__PVT__sig_node_txtop_0->__PVT__rsp_flitv_to_id_translator;
    vlSelfRef.__PVT__empty_snprsp_flit_fifo_tx_snp 
        = vlSelf->__PVT__sig_node_txtop_0->__PVT__empty_snprsp_flit_fifo_tx_snp;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__snpreq_flit_to_id_translator, vlSelf->__PVT__sig_node_txtop_0->__PVT__snpreq_flit_to_id_translator);
    vlSelfRef.__PVT__snpreq_flitv_to_id_translator 
        = vlSelf->__PVT__sig_node_txtop_0->__PVT__snpreq_flitv_to_id_translator;
    vlSelfRef.__PVT__rspflitpend_from_tx_top = vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_RSPFLITPEND;
    vlSelfRef.__PVT__snpflitpend_from_tx_top = vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_SNPFLITPEND;
    vlSelfRef.__PVT__datflitpend_from_tx_top = vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_DATFLITPEND;
    VL_ASSIGN_W(686,vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_datf_vc0, vlSelf->__PVT__sig_node_rxtop_0->__PVT__flit_out_datf_vc0);
    VL_ASSIGN_W(686,vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_datf_vc1, vlSelf->__PVT__sig_node_rxtop_0->__PVT__flit_out_datf_vc1);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_reqf_vc0, vlSelf->__PVT__sig_node_rxtop_0->__PVT__flit_out_reqf_vc0);
    vlSelfRef.__PVT__ic_RX_SNPLCRDV = vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_SNPLCRDV;
    vlSelfRef.__PVT__timeout_can_send_generated_dat_rsp_flit 
        = vlSelf->__PVT__sig_node_rxtop_0->__PVT__o_timeout_can_send_generated_dat_rsp_flit;
    vlSelfRef.__PVT__icx_exist_req = vlSelfRef.__PVT__icx_exist;
    vlSelfRef.__PVT__icx_exist_rsp = vlSelfRef.__PVT__icx_exist;
    vlSelfRef.__PVT__icx_exist_dat = vlSelfRef.__PVT__icx_exist;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__mycluster_id 
        = vlSelfRef.__PVT__mycluster_id;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__rsp_flit_to_id_translator, vlSelfRef.__Vcellout__sig_node_txtop_0__rsp_flit_to_id_translator);
    vlSelfRef.__PVT__id_translator_sn__DOT__unused_signal_nxt 
        = ((IData)(vlSelfRef.__PVT__rsp_flitv_to_id_translator) 
           | ((IData)(vlSelfRef.__PVT__dat_flitv_to_id_translator) 
              | (IData)(vlSelfRef.__PVT__id_translator_sn__DOT__unused_signal)));
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__empty_snprsp_flit_fifo_tx_snp 
        = vlSelfRef.__PVT__empty_snprsp_flit_fifo_tx_snp;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_to_id_translator, vlSelfRef.__PVT__snpreq_flit_to_id_translator);
    vlSelf->__PVT__id_translator_sn__DOT__sig_addr_translator_0->__PVT__i_tx_req_v 
        = vlSelfRef.__PVT__snpreq_flitv_to_id_translator;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__tx_req_v 
        = vlSelfRef.__PVT__snpreq_flitv_to_id_translator;
    vlSelfRef.__PVT__metadata_out_datf_vc0_tmp = (0x3fU 
                                                  & VL_SEL_IWII(686, vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_datf_vc0, 0x2a8U, 6));
    VL_SEL_WWII(680, 686, __Vtemp_1, vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_datf_vc0, 0U, 680);
    VL_AND_W(22, vlSelfRef.__PVT__flit_out_datf_vc0_to_id_translator, Vsig_topology_top__ConstPool__CONST_h93abe68d_0, __Vtemp_1);
    vlSelfRef.__PVT__metadata_out_datf_vc1_tmp = (0x3fU 
                                                  & VL_SEL_IWII(686, vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_datf_vc1, 0x2a8U, 6));
    VL_SEL_WWII(680, 686, __Vtemp_2, vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_datf_vc1, 0U, 680);
    VL_AND_W(22, vlSelfRef.__PVT__flit_out_datf_vc1_to_id_translator, Vsig_topology_top__ConstPool__CONST_h93abe68d_0, __Vtemp_2);
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__icx_exist_req 
        = vlSelfRef.__PVT__icx_exist_req;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__icx_exist_rsp 
        = vlSelfRef.__PVT__icx_exist_rsp;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__icx_exist_dat 
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
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__tx_req_returntxnid_from_hn 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__tx_req_returntxnid_from_hn;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__tx_req_txnid_from_hn 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__tx_req_txnid_from_hn;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__tx_req_order 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__tx_req_order;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__tx_req_apply_dmt_from_hn 
        = vlSelfRef.__PVT__id_translator_sn__DOT__tx_req_apply_dmt_from_hn;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__tx_req_opcode 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__tx_req_opcode;
    vlSelf->__PVT__id_translator_sn__DOT__sig_addr_translator_0->__PVT__i_tx_req_addr 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_addr_translator_0__i_tx_req_addr;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc0_rx_dat_opcode 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc0_rx_dat_opcode;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc0_rx_dat_txnid_from_sn 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc0_rx_dat_txnid_from_sn;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc0_rx_dat_dbid_from_sn 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc0_rx_dat_dbid_from_sn;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc1_rx_dat_opcode 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc1_rx_dat_opcode;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc1_rx_dat_txnid_from_sn 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc1_rx_dat_txnid_from_sn;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc1_rx_dat_dbid_from_sn 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc1_rx_dat_dbid_from_sn;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi28___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__3(Vsig_topology_top_sig_node_porttop__pi28* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi28___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(73,vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp, vlSelf->__PVT__sig_node_txtop_0->__PVT__rddata_snprsp_flit_fifo_tx_snp);
    vlSelf->__PVT__sig_node_txtop_0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSelf->__PVT__id_translator_sn__DOT__sig_addr_translator_0->__PVT__rstn 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__rst_n 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__id_translator_sn__DOT__sig_addr_translator_0->__PVT__clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__cc_is_inactive 
        = vlSelfRef.__PVT__cc_is_inactive;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__all_cache_init_complete 
        = vlSelfRef.__PVT__all_cache_init_complete;
    vlSelfRef.__PVT__unused_signal_block__DOT__unused_signal_timeout 
        = (((IData)(vlSelfRef.__PVT__timeout_can_send_generated_dat_rsp_flit) 
            | (IData)(vlSelfRef.__PVT__i_clear_timeout_interrupt)) 
           | (IData)(vlSelfRef.__PVT__i_clear_recovery_interrupt));
    vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc0_rx_dat_txnid_to_hn;
    vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc0_rx_dat_dbid_to_hn;
    vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc1_rx_dat_txnid_to_hn;
    vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc1_rx_dat_dbid_to_hn;
    vlSelfRef.__PVT__id_translator_sn__DOT__tx_req_txnid_to_sn 
        = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__tx_req_txnid_to_sn;
    vlSelfRef.__PVT__id_translator_sn__DOT__tx_req_returntxnid_to_sn 
        = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__tx_req_returntxnid_to_sn;
    vlSelfRef.__PVT__id_translator_sn__DOT__tx_req_addr_to_sn 
        = vlSelf->__PVT__id_translator_sn__DOT__sig_addr_translator_0->__PVT__o_tx_req_addr_to_sn;
    VL_ASSIGN_W(73,vlSelf->__PVT__sig_node_rxtop_0->__PVT__rddata_snprsp_flit_fifo_tx_snp, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_from_id_translator, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_to_id_translator);
    VL_ASSIGNSEL_WQ(151,52,0x48U, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_from_id_translator, vlSelfRef.__PVT__id_translator_sn__DOT__tx_req_addr_to_sn);
    VL_ASSIGNSEL_WI(151,12,0x1aU, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_from_id_translator, vlSelfRef.__PVT__id_translator_sn__DOT__tx_req_txnid_to_sn);
    VL_ASSIGNSEL_WI(151,12,0x32U, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_from_id_translator, vlSelfRef.__PVT__id_translator_sn__DOT__tx_req_returntxnid_to_sn);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__snpreq_flit_from_id_translator, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_from_id_translator);
    VL_ASSIGN_W(73,vlSelfRef.__PVT__rsp_flit_from_id_translator, vlSelfRef.__PVT__rsp_flit_to_id_translator);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__dat_flit_from_id_translator, vlSelfRef.__PVT__dat_flit_to_id_translator);
    VL_ASSIGN_W(73,vlSelfRef.__Vcellinp__sig_node_txtop_0__rsp_flit_from_id_translator, vlSelfRef.__PVT__rsp_flit_from_id_translator);
    VL_ASSIGN_W(680,vlSelfRef.__Vcellinp__sig_node_txtop_0__dat_flit_from_id_translator, vlSelfRef.__PVT__dat_flit_from_id_translator);
    VL_ASSIGN_W(151,vlSelf->__PVT__sig_node_txtop_0->__PVT__snpreq_flit_from_id_translator, vlSelfRef.__PVT__snpreq_flit_from_id_translator);
    VL_ASSIGN_W(73,vlSelf->__PVT__sig_node_txtop_0->__PVT__rsp_flit_from_id_translator, vlSelfRef.__Vcellinp__sig_node_txtop_0__rsp_flit_from_id_translator);
    VL_ASSIGN_W(680,vlSelf->__PVT__sig_node_txtop_0->__PVT__dat_flit_from_id_translator, vlSelfRef.__Vcellinp__sig_node_txtop_0__dat_flit_from_id_translator);
}
