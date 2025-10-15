// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_node_porttop__pi27.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi27___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__0(Vsig_topology_top_sig_node_porttop__pi27* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi27___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_activate_clk = ((((IData)(vlSelfRef.__PVT__ic_RX_REQFLITPEND) 
                                          | (IData)(vlSelfRef.__PVT__ic_RX_RSPFLITPEND)) 
                                         | (IData)(vlSelfRef.__PVT__ic_RX_DATFLITPEND)) 
                                        | (IData)(vlSelfRef.__PVT__ic_RX_SNPFLITPEND));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi27___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__1(Vsig_topology_top_sig_node_porttop__pi27* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi27___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_activate_clk = ((((IData)(vlSelfRef.__PVT__ic_RX_REQFLITPEND) 
                                          | (IData)(vlSelfRef.__PVT__ic_RX_RSPFLITPEND)) 
                                         | (IData)(vlSelfRef.__PVT__ic_RX_DATFLITPEND)) 
                                        | (IData)(vlSelfRef.__PVT__ic_RX_SNPFLITPEND));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi27___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__4(Vsig_topology_top_sig_node_porttop__pi27* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi27___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__id_translator_sn__DOT__unused_signal 
        = vlSelfRef.__PVT__id_translator_sn__DOT__unused_signal;
    vlSelfRef.__Vdly__id_translator_sn__DOT__unused_signal 
        = ((IData)(vlSelfRef.__PVT__rstb_ic_clk) && (IData)(vlSelfRef.__PVT__id_translator_sn__DOT__unused_signal_nxt));
    vlSelfRef.__PVT__id_translator_sn__DOT__unused_signal 
        = vlSelfRef.__Vdly__id_translator_sn__DOT__unused_signal;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi27___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__9(Vsig_topology_top_sig_node_porttop__pi27* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi27___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__id_translator_sn__DOT__unused_signal_nxt 
        = ((IData)(vlSelfRef.__PVT__rsp_flitv_to_id_translator) 
           | ((IData)(vlSelfRef.__PVT__dat_flitv_to_id_translator) 
              | (IData)(vlSelfRef.__PVT__id_translator_sn__DOT__unused_signal)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi27___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__11(Vsig_topology_top_sig_node_porttop__pi27* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi27___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__11\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__unused_signal_block__DOT__unused_signal_timeout 
        = (((IData)(vlSelfRef.__PVT__timeout_can_send_generated_dat_rsp_flit) 
            | (IData)(vlSelfRef.__PVT__i_clear_timeout_interrupt)) 
           | (IData)(vlSelfRef.__PVT__i_clear_recovery_interrupt));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi27___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__31(Vsig_topology_top_sig_node_porttop__pi27* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi27___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__31\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
