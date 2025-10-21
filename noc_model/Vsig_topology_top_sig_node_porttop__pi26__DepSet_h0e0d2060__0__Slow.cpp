// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_id_translator_rn_wrapper__pi43.h"
#include "Vsig_topology_top_sig_node_porttop__pi26.h"
#include "Vsig_topology_top_sig_node_rxtop__pi44.h"
#include "Vsig_topology_top_sig_node_txtop__pi45.h"

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi26___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__1(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tx_linkactivereq_from_tx_top = vlSelf->__PVT__sig_node_txtop_0->__PVT__ic_TX_LINKACTIVEREQ;
    VL_ASSIGN_W(680,vlSelfRef.__Vcellout__sig_node_txtop_0__dat_flit_to_id_translator, vlSelf->__PVT__sig_node_txtop_0->__PVT__dat_flit_to_id_translator);
    vlSelfRef.__PVT__dat_flitv_to_id_translator = vlSelf->__PVT__sig_node_txtop_0->__PVT__dat_flitv_to_id_translator;
    vlSelfRef.__PVT__tx_dat_empty_flit_store_fifo = vlSelf->__PVT__sig_node_txtop_0->__PVT__o_dat_empty_flit_store_fifo;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_bridge_locations[0U] 
        = vlSelfRef.__PVT__i_ucie_bridge_locations[0U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__qos_override_val 
        = vlSelfRef.__PVT__qos_override_val;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__qos_override_en 
        = vlSelfRef.__PVT__qos_override_en;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__xy_coord_all_hn_i 
        = vlSelfRef.__PVT__xy_coord_all_hn_i;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__myproc_id 
        = vlSelfRef.__PVT__myproc_id;
    VL_ASSIGN_W(112,vlSelf->__PVT__sig_node_rxtop_0->__PVT__noncm_homeaddr_base_all_hn_i, vlSelfRef.__PVT__noncm_homeaddr_base_all_hn_i);
    VL_ASSIGN_W(116,vlSelf->__PVT__sig_node_rxtop_0->__PVT__noncm_homeaddr_limit_all_hn_i, vlSelfRef.__PVT__noncm_homeaddr_limit_all_hn_i);
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
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_reqf_vc1, vlSelf->__PVT__sig_node_rxtop_0->__PVT__flit_out_reqf_vc1);
    vlSelfRef.__PVT__rx_linkactiveack_from_rx_top = vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_LINKACTIVEACK;
    vlSelfRef.__PVT__credits_backto_full = vlSelf->__PVT__sig_node_rxtop_0->__PVT__credits_backto_full;
    vlSelfRef.__PVT__id_translator_full = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__id_translator_full_snp;
    vlSelfRef.__PVT__id_translator_full_req = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__id_translator_full_req;
    vlSelfRef.__PVT__id_translator_hs_pending_txn_snp 
        = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__id_translator_hs_pending_txn_snp;
    vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__id_translator_hs_pending_txn_req 
        = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__id_translator_hs_pending_txn_req;
    vlSelfRef.__PVT__id_translator_req_snp_empty = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__id_translator_req_snp_empty;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_TX_LINKACTIVEREQ 
        = vlSelfRef.__PVT__tx_linkactivereq_from_tx_top;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__dat_flit_to_id_translator, vlSelfRef.__Vcellout__sig_node_txtop_0__dat_flit_to_id_translator);
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_dat_v 
        = vlSelfRef.__PVT__dat_flitv_to_id_translator;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__ic_RX_LINKACTIVEACK 
        = vlSelfRef.__PVT__rx_linkactiveack_from_rx_top;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__credits_backto_full 
        = vlSelfRef.__PVT__credits_backto_full;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__id_translator_full 
        = vlSelfRef.__PVT__id_translator_full;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__id_translator_full_req 
        = vlSelfRef.__PVT__id_translator_full_req;
    vlSelfRef.__PVT__id_translator_hs_pending_txn = 
        ((IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__id_translator_hs_pending_txn_req) 
         | (IData)(vlSelfRef.__PVT__id_translator_hs_pending_txn_snp));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_dat_dbid_from_hn 
        = (0xfffU & VL_SEL_IWII(680, vlSelfRef.__PVT__dat_flit_to_id_translator, 0x41U, 12));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_dat_txnid_from_hn 
        = (0xfffU & VL_SEL_IWII(680, vlSelfRef.__PVT__dat_flit_to_id_translator, 0x1aU, 12));
    vlSelf->__PVT__sig_node_txtop_0->__PVT__id_translator_hs_pending_txn 
        = vlSelfRef.__PVT__id_translator_hs_pending_txn;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_dat_dbid_from_hn 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_dat_dbid_from_hn;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_dat_txnid_from_hn 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_dat_txnid_from_hn;
}

extern const VlWide<22>/*703:0*/ Vsig_topology_top__ConstPool__CONST_h93abe68d_0;

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi26___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__2(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<22>/*703:0*/ __Vtemp_1;
    VlWide<22>/*703:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    // Body
    vlSelfRef.__PVT__rx_req_port_is_inactive = vlSelf->__PVT__sig_node_rxtop_0->__PVT__rx_req_port_is_inactive;
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_reqf_vc0, vlSelf->__PVT__sig_node_rxtop_0->__PVT__flit_out_reqf_vc0);
    vlSelfRef.__PVT__ic_RX_SNPLCRDV = vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_SNPLCRDV;
    VL_ASSIGN_W(686,vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_datf_vc0, vlSelf->__PVT__sig_node_rxtop_0->__PVT__flit_out_datf_vc0);
    VL_ASSIGN_W(686,vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_datf_vc1, vlSelf->__PVT__sig_node_rxtop_0->__PVT__flit_out_datf_vc1);
    vlSelfRef.__PVT__timeout_can_send_generated_dat_rsp_flit 
        = vlSelf->__PVT__sig_node_rxtop_0->__PVT__o_timeout_can_send_generated_dat_rsp_flit;
    VL_ASSIGN_W(73,vlSelfRef.__Vcellout__sig_node_txtop_0__rsp_flit_to_id_translator, vlSelf->__PVT__sig_node_txtop_0->__PVT__rsp_flit_to_id_translator);
    vlSelfRef.__PVT__rsp_flitv_to_id_translator = vlSelf->__PVT__sig_node_txtop_0->__PVT__rsp_flitv_to_id_translator;
    vlSelfRef.__PVT__empty_snprsp_flit_fifo_tx_snp 
        = vlSelf->__PVT__sig_node_txtop_0->__PVT__empty_snprsp_flit_fifo_tx_snp;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__snpreq_flit_to_id_translator, vlSelf->__PVT__sig_node_txtop_0->__PVT__snpreq_flit_to_id_translator);
    vlSelfRef.__PVT__snpreq_flitv_to_id_translator 
        = vlSelf->__PVT__sig_node_txtop_0->__PVT__snpreq_flitv_to_id_translator;
    vlSelfRef.__PVT__rspflitpend_from_tx_top = vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_RSPFLITPEND;
    vlSelfRef.__PVT__datflitpend_from_tx_top = vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_DATFLITPEND;
    vlSelfRef.__PVT__icx_exist_req = vlSelfRef.__PVT__icx_exist;
    vlSelfRef.__PVT__icx_exist_rsp = vlSelfRef.__PVT__icx_exist;
    vlSelfRef.__PVT__icx_exist_dat = vlSelfRef.__PVT__icx_exist;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__mycluster_id 
        = vlSelfRef.__PVT__mycluster_id;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__mn_node_id 
        = vlSelfRef.__PVT__mn_node_id;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__rx_req_port_is_inactive 
        = vlSelfRef.__PVT__rx_req_port_is_inactive;
    vlSelfRef.__PVT__metadata_out_datf_vc0_tmp = (0x3fU 
                                                  & VL_SEL_IWII(686, vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_datf_vc0, 0x2a8U, 6));
    VL_SEL_WWII(680, 686, __Vtemp_1, vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_datf_vc0, 0U, 680);
    VL_AND_W(22, vlSelfRef.__PVT__flit_out_datf_vc0_to_id_translator, Vsig_topology_top__ConstPool__CONST_h93abe68d_0, __Vtemp_1);
    vlSelfRef.__PVT__metadata_out_datf_vc1_tmp = (0x3fU 
                                                  & VL_SEL_IWII(686, vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_datf_vc1, 0x2a8U, 6));
    VL_SEL_WWII(680, 686, __Vtemp_2, vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_datf_vc1, 0U, 680);
    VL_AND_W(22, vlSelfRef.__PVT__flit_out_datf_vc1_to_id_translator, Vsig_topology_top__ConstPool__CONST_h93abe68d_0, __Vtemp_2);
    VL_ASSIGN_W(73,vlSelfRef.__PVT__rsp_flit_to_id_translator, vlSelfRef.__Vcellout__sig_node_txtop_0__rsp_flit_to_id_translator);
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_rsp_v 
        = vlSelfRef.__PVT__rsp_flitv_to_id_translator;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__empty_snprsp_flit_fifo_tx_snp 
        = vlSelfRef.__PVT__empty_snprsp_flit_fifo_tx_snp;
    VL_CONST_W_4X(128,__Vtemp_3,0x007fffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(119, 151, __Vtemp_4, vlSelfRef.__PVT__snpreq_flit_to_id_translator, 0U, 119);
    VL_AND_W(4, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__snp_flit_to_id_translator, __Vtemp_3, __Vtemp_4);
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_snp_v 
        = vlSelfRef.__PVT__snpreq_flitv_to_id_translator;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__icx_exist_req 
        = vlSelfRef.__PVT__icx_exist_req;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__icx_exist_rsp 
        = vlSelfRef.__PVT__icx_exist_rsp;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__icx_exist_dat 
        = vlSelfRef.__PVT__icx_exist_dat;
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc0_rx_dat_opcode 
        = (0xfU & VL_SEL_IWII(680, vlSelfRef.__PVT__flit_out_datf_vc0_to_id_translator, 0x31U, 4));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc0_rx_dat_dbid_from_rn 
        = (0xfffU & VL_SEL_IWII(680, vlSelfRef.__PVT__flit_out_datf_vc0_to_id_translator, 0x41U, 12));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc0_rx_dat_txnid_from_rn 
        = (0xfffU & VL_SEL_IWII(680, vlSelfRef.__PVT__flit_out_datf_vc0_to_id_translator, 0x1aU, 12));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc1_rx_dat_opcode 
        = (0xfU & VL_SEL_IWII(680, vlSelfRef.__PVT__flit_out_datf_vc1_to_id_translator, 0x31U, 4));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc1_rx_dat_dbid_from_rn 
        = (0xfffU & VL_SEL_IWII(680, vlSelfRef.__PVT__flit_out_datf_vc1_to_id_translator, 0x41U, 12));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc1_rx_dat_txnid_from_rn 
        = (0xfffU & VL_SEL_IWII(680, vlSelfRef.__PVT__flit_out_datf_vc1_to_id_translator, 0x1aU, 12));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_rsp_dbid_from_hn 
        = (0xfffU & VL_SEL_IWII(73, vlSelfRef.__PVT__rsp_flit_to_id_translator, 0x36U, 12));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_rsp_opcode 
        = (0x1fU & VL_SEL_IWII(73, vlSelfRef.__PVT__rsp_flit_to_id_translator, 0x26U, 5));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_rsp_txnid_from_hn 
        = (0xfffU & VL_SEL_IWII(73, vlSelfRef.__PVT__rsp_flit_to_id_translator, 0x1aU, 12));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_snp_txnid_from_hn 
        = (0xfffU & VL_SEL_IWII(119, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__snp_flit_to_id_translator, 0xfU, 12));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_snp_opcode 
        = (0x1fU & VL_SEL_IWII(119, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__snp_flit_to_id_translator, 0x32U, 5));
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc0_rx_dat_opcode 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc0_rx_dat_opcode;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc0_rx_dat_dbid_from_rn 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc0_rx_dat_dbid_from_rn;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc0_rx_dat_txnid_from_rn 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc0_rx_dat_txnid_from_rn;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc1_rx_dat_opcode 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc1_rx_dat_opcode;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc1_rx_dat_dbid_from_rn 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc1_rx_dat_dbid_from_rn;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc1_rx_dat_txnid_from_rn 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc1_rx_dat_txnid_from_rn;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_rsp_dbid_from_hn 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_rsp_dbid_from_hn;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_rsp_opcode 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_rsp_opcode;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_rsp_txnid_from_hn 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_rsp_txnid_from_hn;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_snp_txnid_from_hn 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_snp_txnid_from_hn;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_snp_opcode 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_snp_opcode;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi26___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__3(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__3\n"); );
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
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__rst_n 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__clk 
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
    vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__tx_dat_dbid_to_rn 
        = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_dat_dbid_to_rn;
    VL_ASSIGN_W(73,vlSelf->__PVT__sig_node_rxtop_0->__PVT__rddata_snprsp_flit_fifo_tx_snp, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi26___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__4(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqlcrdv_from_rx_top = vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_REQLCRDV;
    vlSelfRef.__PVT__datlcrdv_from_rx_top = vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_DATLCRDV;
    vlSelfRef.__PVT__rsplcrdv_from_rx_top = vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_RSPLCRDV;
    vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__tx_snp_txnid_to_rn 
        = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_snp_txnid_to_rn;
    vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__tx_rsp_dbid_to_rn 
        = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_rsp_dbid_to_rn;
    VL_ASSIGN_W(1610,vlSelf->__PVT__sig_node_txtop_0->__PVT__flit_all_req_vc0, vlSelfRef.__PVT__flit_all_req_vc0);
    VL_ASSIGN_W(119,vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__snp_flit_from_id_translator, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__snp_flit_to_id_translator);
    VL_ASSIGNSEL_WI(119,12,0xfU, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__snp_flit_from_id_translator, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__tx_snp_txnid_to_rn);
    VL_EXTEND_WW(151,119, vlSelfRef.__PVT__snpreq_flit_from_id_translator, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__snp_flit_from_id_translator);
    VL_ASSIGN_W(73,vlSelfRef.__PVT__rsp_flit_from_id_translator, vlSelfRef.__PVT__rsp_flit_to_id_translator);
    VL_ASSIGNSEL_WI(73,12,0x36U, vlSelfRef.__PVT__rsp_flit_from_id_translator, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__tx_rsp_dbid_to_rn);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__dat_flit_from_id_translator, vlSelfRef.__PVT__dat_flit_to_id_translator);
    VL_ASSIGNSEL_WI(680,12,0x41U, vlSelfRef.__PVT__dat_flit_from_id_translator, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__tx_dat_dbid_to_rn);
    VL_ASSIGN_W(73,vlSelfRef.__Vcellinp__sig_node_txtop_0__rsp_flit_from_id_translator, vlSelfRef.__PVT__rsp_flit_from_id_translator);
    VL_ASSIGN_W(680,vlSelfRef.__Vcellinp__sig_node_txtop_0__dat_flit_from_id_translator, vlSelfRef.__PVT__dat_flit_from_id_translator);
    VL_ASSIGN_W(151,vlSelf->__PVT__sig_node_txtop_0->__PVT__snpreq_flit_from_id_translator, vlSelfRef.__PVT__snpreq_flit_from_id_translator);
    VL_ASSIGN_W(73,vlSelf->__PVT__sig_node_txtop_0->__PVT__rsp_flit_from_id_translator, vlSelfRef.__Vcellinp__sig_node_txtop_0__rsp_flit_from_id_translator);
    VL_ASSIGN_W(680,vlSelf->__PVT__sig_node_txtop_0->__PVT__dat_flit_from_id_translator, vlSelfRef.__Vcellinp__sig_node_txtop_0__dat_flit_from_id_translator);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi26___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__5(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_rspf_vc0, vlSelf->__PVT__sig_node_rxtop_0->__PVT__flit_out_rspf_vc0);
    VL_ASSIGN_W(79,vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_rspf_vc1, vlSelf->__PVT__sig_node_rxtop_0->__PVT__flit_out_rspf_vc1);
    vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp = vlSelf->__PVT__sig_node_rxtop_0->__PVT__rden_snprsp_flit_fifo_tx_snp;
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
    vlSelf->__PVT__sig_node_txtop_0->__PVT__rden_snprsp_flit_fifo_tx_snp 
        = vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp;
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc0_rx_rsp_opcode 
        = (0x1fU & VL_SEL_IWII(73, vlSelfRef.__PVT__flit_out_rspf_vc0_to_id_translator, 0x26U, 5));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc0_rx_rsp_txnid_from_rn 
        = (0xfffU & VL_SEL_IWII(73, vlSelfRef.__PVT__flit_out_rspf_vc0_to_id_translator, 0x1aU, 12));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc1_rx_rsp_opcode 
        = (0x1fU & VL_SEL_IWII(73, vlSelfRef.__PVT__flit_out_rspf_vc1_to_id_translator, 0x26U, 5));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc1_rx_rsp_txnid_from_rn 
        = (0xfffU & VL_SEL_IWII(73, vlSelfRef.__PVT__flit_out_rspf_vc1_to_id_translator, 0x1aU, 12));
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc0_rx_rsp_opcode 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc0_rx_rsp_opcode;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc0_rx_rsp_txnid_from_rn 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc0_rx_rsp_txnid_from_rn;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc1_rx_rsp_opcode 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc1_rx_rsp_opcode;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc1_rx_rsp_txnid_from_rn 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc1_rx_rsp_txnid_from_rn;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi26___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__1(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tx_linkactivereq_from_tx_top = vlSelf->__PVT__sig_node_txtop_0->__PVT__ic_TX_LINKACTIVEREQ;
    VL_ASSIGN_W(680,vlSelfRef.__Vcellout__sig_node_txtop_0__dat_flit_to_id_translator, vlSelf->__PVT__sig_node_txtop_0->__PVT__dat_flit_to_id_translator);
    vlSelfRef.__PVT__dat_flitv_to_id_translator = vlSelf->__PVT__sig_node_txtop_0->__PVT__dat_flitv_to_id_translator;
    vlSelfRef.__PVT__tx_dat_empty_flit_store_fifo = vlSelf->__PVT__sig_node_txtop_0->__PVT__o_dat_empty_flit_store_fifo;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__i_ucie_bridge_locations[0U] 
        = vlSelfRef.__PVT__i_ucie_bridge_locations[0U];
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__qos_override_val 
        = vlSelfRef.__PVT__qos_override_val;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__qos_override_en 
        = vlSelfRef.__PVT__qos_override_en;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__xy_coord_all_hn_i 
        = vlSelfRef.__PVT__xy_coord_all_hn_i;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__myproc_id 
        = vlSelfRef.__PVT__myproc_id;
    VL_ASSIGN_W(112,vlSelf->__PVT__sig_node_rxtop_0->__PVT__noncm_homeaddr_base_all_hn_i, vlSelfRef.__PVT__noncm_homeaddr_base_all_hn_i);
    VL_ASSIGN_W(116,vlSelf->__PVT__sig_node_rxtop_0->__PVT__noncm_homeaddr_limit_all_hn_i, vlSelfRef.__PVT__noncm_homeaddr_limit_all_hn_i);
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
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_reqf_vc1, vlSelf->__PVT__sig_node_rxtop_0->__PVT__flit_out_reqf_vc1);
    vlSelfRef.__PVT__rx_linkactiveack_from_rx_top = vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_LINKACTIVEACK;
    vlSelfRef.__PVT__credits_backto_full = vlSelf->__PVT__sig_node_rxtop_0->__PVT__credits_backto_full;
    vlSelfRef.__PVT__id_translator_full = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__id_translator_full_snp;
    vlSelfRef.__PVT__id_translator_full_req = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__id_translator_full_req;
    vlSelfRef.__PVT__id_translator_hs_pending_txn_snp 
        = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__id_translator_hs_pending_txn_snp;
    vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__id_translator_hs_pending_txn_req 
        = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__id_translator_hs_pending_txn_req;
    vlSelfRef.__PVT__id_translator_req_snp_empty = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__id_translator_req_snp_empty;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_TX_LINKACTIVEREQ 
        = vlSelfRef.__PVT__tx_linkactivereq_from_tx_top;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__dat_flit_to_id_translator, vlSelfRef.__Vcellout__sig_node_txtop_0__dat_flit_to_id_translator);
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_dat_v 
        = vlSelfRef.__PVT__dat_flitv_to_id_translator;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__ic_RX_LINKACTIVEACK 
        = vlSelfRef.__PVT__rx_linkactiveack_from_rx_top;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__credits_backto_full 
        = vlSelfRef.__PVT__credits_backto_full;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__id_translator_full 
        = vlSelfRef.__PVT__id_translator_full;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__id_translator_full_req 
        = vlSelfRef.__PVT__id_translator_full_req;
    vlSelfRef.__PVT__id_translator_hs_pending_txn = 
        ((IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__id_translator_hs_pending_txn_req) 
         | (IData)(vlSelfRef.__PVT__id_translator_hs_pending_txn_snp));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_dat_dbid_from_hn 
        = (0xfffU & VL_SEL_IWII(680, vlSelfRef.__PVT__dat_flit_to_id_translator, 0x41U, 12));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_dat_txnid_from_hn 
        = (0xfffU & VL_SEL_IWII(680, vlSelfRef.__PVT__dat_flit_to_id_translator, 0x1aU, 12));
    vlSelf->__PVT__sig_node_txtop_0->__PVT__id_translator_hs_pending_txn 
        = vlSelfRef.__PVT__id_translator_hs_pending_txn;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_dat_dbid_from_hn 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_dat_dbid_from_hn;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_dat_txnid_from_hn 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_dat_txnid_from_hn;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi26___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__2(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<22>/*703:0*/ __Vtemp_1;
    VlWide<22>/*703:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    // Body
    vlSelfRef.__PVT__rx_req_port_is_inactive = vlSelf->__PVT__sig_node_rxtop_0->__PVT__rx_req_port_is_inactive;
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_reqf_vc0, vlSelf->__PVT__sig_node_rxtop_0->__PVT__flit_out_reqf_vc0);
    vlSelfRef.__PVT__ic_RX_SNPLCRDV = vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_SNPLCRDV;
    VL_ASSIGN_W(686,vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_datf_vc0, vlSelf->__PVT__sig_node_rxtop_0->__PVT__flit_out_datf_vc0);
    VL_ASSIGN_W(686,vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_datf_vc1, vlSelf->__PVT__sig_node_rxtop_0->__PVT__flit_out_datf_vc1);
    vlSelfRef.__PVT__timeout_can_send_generated_dat_rsp_flit 
        = vlSelf->__PVT__sig_node_rxtop_0->__PVT__o_timeout_can_send_generated_dat_rsp_flit;
    VL_ASSIGN_W(73,vlSelfRef.__Vcellout__sig_node_txtop_0__rsp_flit_to_id_translator, vlSelf->__PVT__sig_node_txtop_0->__PVT__rsp_flit_to_id_translator);
    vlSelfRef.__PVT__rsp_flitv_to_id_translator = vlSelf->__PVT__sig_node_txtop_0->__PVT__rsp_flitv_to_id_translator;
    vlSelfRef.__PVT__empty_snprsp_flit_fifo_tx_snp 
        = vlSelf->__PVT__sig_node_txtop_0->__PVT__empty_snprsp_flit_fifo_tx_snp;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__snpreq_flit_to_id_translator, vlSelf->__PVT__sig_node_txtop_0->__PVT__snpreq_flit_to_id_translator);
    vlSelfRef.__PVT__snpreq_flitv_to_id_translator 
        = vlSelf->__PVT__sig_node_txtop_0->__PVT__snpreq_flitv_to_id_translator;
    vlSelfRef.__PVT__rspflitpend_from_tx_top = vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_RSPFLITPEND;
    vlSelfRef.__PVT__datflitpend_from_tx_top = vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_DATFLITPEND;
    vlSelfRef.__PVT__icx_exist_req = vlSelfRef.__PVT__icx_exist;
    vlSelfRef.__PVT__icx_exist_rsp = vlSelfRef.__PVT__icx_exist;
    vlSelfRef.__PVT__icx_exist_dat = vlSelfRef.__PVT__icx_exist;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__mycluster_id 
        = vlSelfRef.__PVT__mycluster_id;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__mn_node_id 
        = vlSelfRef.__PVT__mn_node_id;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__rx_req_port_is_inactive 
        = vlSelfRef.__PVT__rx_req_port_is_inactive;
    vlSelfRef.__PVT__metadata_out_datf_vc0_tmp = (0x3fU 
                                                  & VL_SEL_IWII(686, vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_datf_vc0, 0x2a8U, 6));
    VL_SEL_WWII(680, 686, __Vtemp_1, vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_datf_vc0, 0U, 680);
    VL_AND_W(22, vlSelfRef.__PVT__flit_out_datf_vc0_to_id_translator, Vsig_topology_top__ConstPool__CONST_h93abe68d_0, __Vtemp_1);
    vlSelfRef.__PVT__metadata_out_datf_vc1_tmp = (0x3fU 
                                                  & VL_SEL_IWII(686, vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_datf_vc1, 0x2a8U, 6));
    VL_SEL_WWII(680, 686, __Vtemp_2, vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_datf_vc1, 0U, 680);
    VL_AND_W(22, vlSelfRef.__PVT__flit_out_datf_vc1_to_id_translator, Vsig_topology_top__ConstPool__CONST_h93abe68d_0, __Vtemp_2);
    VL_ASSIGN_W(73,vlSelfRef.__PVT__rsp_flit_to_id_translator, vlSelfRef.__Vcellout__sig_node_txtop_0__rsp_flit_to_id_translator);
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_rsp_v 
        = vlSelfRef.__PVT__rsp_flitv_to_id_translator;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__empty_snprsp_flit_fifo_tx_snp 
        = vlSelfRef.__PVT__empty_snprsp_flit_fifo_tx_snp;
    VL_CONST_W_4X(128,__Vtemp_3,0x007fffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(119, 151, __Vtemp_4, vlSelfRef.__PVT__snpreq_flit_to_id_translator, 0U, 119);
    VL_AND_W(4, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__snp_flit_to_id_translator, __Vtemp_3, __Vtemp_4);
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_snp_v 
        = vlSelfRef.__PVT__snpreq_flitv_to_id_translator;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__icx_exist_req 
        = vlSelfRef.__PVT__icx_exist_req;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__icx_exist_rsp 
        = vlSelfRef.__PVT__icx_exist_rsp;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__icx_exist_dat 
        = vlSelfRef.__PVT__icx_exist_dat;
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc0_rx_dat_opcode 
        = (0xfU & VL_SEL_IWII(680, vlSelfRef.__PVT__flit_out_datf_vc0_to_id_translator, 0x31U, 4));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc0_rx_dat_dbid_from_rn 
        = (0xfffU & VL_SEL_IWII(680, vlSelfRef.__PVT__flit_out_datf_vc0_to_id_translator, 0x41U, 12));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc0_rx_dat_txnid_from_rn 
        = (0xfffU & VL_SEL_IWII(680, vlSelfRef.__PVT__flit_out_datf_vc0_to_id_translator, 0x1aU, 12));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc1_rx_dat_opcode 
        = (0xfU & VL_SEL_IWII(680, vlSelfRef.__PVT__flit_out_datf_vc1_to_id_translator, 0x31U, 4));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc1_rx_dat_dbid_from_rn 
        = (0xfffU & VL_SEL_IWII(680, vlSelfRef.__PVT__flit_out_datf_vc1_to_id_translator, 0x41U, 12));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc1_rx_dat_txnid_from_rn 
        = (0xfffU & VL_SEL_IWII(680, vlSelfRef.__PVT__flit_out_datf_vc1_to_id_translator, 0x1aU, 12));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_rsp_dbid_from_hn 
        = (0xfffU & VL_SEL_IWII(73, vlSelfRef.__PVT__rsp_flit_to_id_translator, 0x36U, 12));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_rsp_opcode 
        = (0x1fU & VL_SEL_IWII(73, vlSelfRef.__PVT__rsp_flit_to_id_translator, 0x26U, 5));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_rsp_txnid_from_hn 
        = (0xfffU & VL_SEL_IWII(73, vlSelfRef.__PVT__rsp_flit_to_id_translator, 0x1aU, 12));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_snp_txnid_from_hn 
        = (0xfffU & VL_SEL_IWII(119, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__snp_flit_to_id_translator, 0xfU, 12));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_snp_opcode 
        = (0x1fU & VL_SEL_IWII(119, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__snp_flit_to_id_translator, 0x32U, 5));
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc0_rx_dat_opcode 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc0_rx_dat_opcode;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc0_rx_dat_dbid_from_rn 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc0_rx_dat_dbid_from_rn;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc0_rx_dat_txnid_from_rn 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc0_rx_dat_txnid_from_rn;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc1_rx_dat_opcode 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc1_rx_dat_opcode;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc1_rx_dat_dbid_from_rn 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc1_rx_dat_dbid_from_rn;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc1_rx_dat_txnid_from_rn 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc1_rx_dat_txnid_from_rn;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_rsp_dbid_from_hn 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_rsp_dbid_from_hn;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_rsp_opcode 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_rsp_opcode;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_rsp_txnid_from_hn 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_rsp_txnid_from_hn;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_snp_txnid_from_hn 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_snp_txnid_from_hn;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_snp_opcode 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_snp_opcode;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi26___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__3(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__3\n"); );
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
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__rst_n 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__clk 
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
    vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__tx_dat_dbid_to_rn 
        = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_dat_dbid_to_rn;
    VL_ASSIGN_W(73,vlSelf->__PVT__sig_node_rxtop_0->__PVT__rddata_snprsp_flit_fifo_tx_snp, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi26___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__4(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqlcrdv_from_rx_top = vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_REQLCRDV;
    vlSelfRef.__PVT__datlcrdv_from_rx_top = vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_DATLCRDV;
    vlSelfRef.__PVT__rsplcrdv_from_rx_top = vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_RSPLCRDV;
    vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__tx_snp_txnid_to_rn 
        = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_snp_txnid_to_rn;
    vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__tx_rsp_dbid_to_rn 
        = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_rsp_dbid_to_rn;
    VL_ASSIGN_W(1610,vlSelf->__PVT__sig_node_txtop_0->__PVT__flit_all_req_vc0, vlSelfRef.__PVT__flit_all_req_vc0);
    VL_ASSIGN_W(119,vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__snp_flit_from_id_translator, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__snp_flit_to_id_translator);
    VL_ASSIGNSEL_WI(119,12,0xfU, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__snp_flit_from_id_translator, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__tx_snp_txnid_to_rn);
    VL_EXTEND_WW(151,119, vlSelfRef.__PVT__snpreq_flit_from_id_translator, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__snp_flit_from_id_translator);
    VL_ASSIGN_W(73,vlSelfRef.__PVT__rsp_flit_from_id_translator, vlSelfRef.__PVT__rsp_flit_to_id_translator);
    VL_ASSIGNSEL_WI(73,12,0x36U, vlSelfRef.__PVT__rsp_flit_from_id_translator, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__tx_rsp_dbid_to_rn);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__dat_flit_from_id_translator, vlSelfRef.__PVT__dat_flit_to_id_translator);
    VL_ASSIGNSEL_WI(680,12,0x41U, vlSelfRef.__PVT__dat_flit_from_id_translator, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__tx_dat_dbid_to_rn);
    VL_ASSIGN_W(73,vlSelfRef.__Vcellinp__sig_node_txtop_0__rsp_flit_from_id_translator, vlSelfRef.__PVT__rsp_flit_from_id_translator);
    VL_ASSIGN_W(680,vlSelfRef.__Vcellinp__sig_node_txtop_0__dat_flit_from_id_translator, vlSelfRef.__PVT__dat_flit_from_id_translator);
    VL_ASSIGN_W(151,vlSelf->__PVT__sig_node_txtop_0->__PVT__snpreq_flit_from_id_translator, vlSelfRef.__PVT__snpreq_flit_from_id_translator);
    VL_ASSIGN_W(73,vlSelf->__PVT__sig_node_txtop_0->__PVT__rsp_flit_from_id_translator, vlSelfRef.__Vcellinp__sig_node_txtop_0__rsp_flit_from_id_translator);
    VL_ASSIGN_W(680,vlSelf->__PVT__sig_node_txtop_0->__PVT__dat_flit_from_id_translator, vlSelfRef.__Vcellinp__sig_node_txtop_0__dat_flit_from_id_translator);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi26___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__5(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_rspf_vc0, vlSelf->__PVT__sig_node_rxtop_0->__PVT__flit_out_rspf_vc0);
    VL_ASSIGN_W(79,vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_rspf_vc1, vlSelf->__PVT__sig_node_rxtop_0->__PVT__flit_out_rspf_vc1);
    vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp = vlSelf->__PVT__sig_node_rxtop_0->__PVT__rden_snprsp_flit_fifo_tx_snp;
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
    vlSelf->__PVT__sig_node_txtop_0->__PVT__rden_snprsp_flit_fifo_tx_snp 
        = vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp;
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc0_rx_rsp_opcode 
        = (0x1fU & VL_SEL_IWII(73, vlSelfRef.__PVT__flit_out_rspf_vc0_to_id_translator, 0x26U, 5));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc0_rx_rsp_txnid_from_rn 
        = (0xfffU & VL_SEL_IWII(73, vlSelfRef.__PVT__flit_out_rspf_vc0_to_id_translator, 0x1aU, 12));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc1_rx_rsp_opcode 
        = (0x1fU & VL_SEL_IWII(73, vlSelfRef.__PVT__flit_out_rspf_vc1_to_id_translator, 0x26U, 5));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc1_rx_rsp_txnid_from_rn 
        = (0xfffU & VL_SEL_IWII(73, vlSelfRef.__PVT__flit_out_rspf_vc1_to_id_translator, 0x1aU, 12));
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc0_rx_rsp_opcode 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc0_rx_rsp_opcode;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc0_rx_rsp_txnid_from_rn 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc0_rx_rsp_txnid_from_rn;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc1_rx_rsp_opcode 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc1_rx_rsp_opcode;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc1_rx_rsp_txnid_from_rn 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc1_rx_rsp_txnid_from_rn;
}
