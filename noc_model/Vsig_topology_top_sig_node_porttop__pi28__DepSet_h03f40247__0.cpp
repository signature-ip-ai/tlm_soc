// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_id_translator_sn__I23_Tc.h"
#include "Vsig_topology_top_sig_node_porttop__pi28.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi28___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__4(Vsig_topology_top_sig_node_porttop__pi28* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi28___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc0_rx_rsp_txnid_to_hn;
    vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc1_rx_rsp_txnid_to_hn;
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

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi28___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__5(Vsig_topology_top_sig_node_porttop__pi28* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi28___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc0_rx_rsp_txnid_to_hn;
    vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc1_rx_rsp_txnid_to_hn;
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

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi28___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__6(Vsig_topology_top_sig_node_porttop__pi28* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi28___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc0_rx_dat_txnid_to_hn;
    vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc0_rx_dat_dbid_to_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi28___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__7(Vsig_topology_top_sig_node_porttop__pi28* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi28___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc1_rx_dat_txnid_to_hn;
    vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc1_rx_dat_dbid_to_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi28___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__10(Vsig_topology_top_sig_node_porttop__pi28* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi28___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__id_translator_sn__DOT__tx_req_txnid_to_sn 
        = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__tx_req_txnid_to_sn;
    vlSelfRef.__PVT__id_translator_sn__DOT__tx_req_returntxnid_to_sn 
        = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__tx_req_returntxnid_to_sn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi28___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__27(Vsig_topology_top_sig_node_porttop__pi28* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi28___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__27\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc0_rx_rsp_txnid_to_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi28___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__29(Vsig_topology_top_sig_node_porttop__pi28* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi28___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__29\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc1_rx_rsp_txnid_to_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi28___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__4(Vsig_topology_top_sig_node_porttop__pi28* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi28___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc0_rx_rsp_txnid_to_hn;
    vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc1_rx_rsp_txnid_to_hn;
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

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi28___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__5(Vsig_topology_top_sig_node_porttop__pi28* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi28___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc0_rx_rsp_txnid_to_hn;
    vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc1_rx_rsp_txnid_to_hn;
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

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi28___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__6(Vsig_topology_top_sig_node_porttop__pi28* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi28___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc0_rx_dat_txnid_to_hn;
    vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc0_rx_dat_dbid_to_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi28___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__7(Vsig_topology_top_sig_node_porttop__pi28* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi28___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc1_rx_dat_txnid_to_hn;
    vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc1_rx_dat_dbid_to_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi28___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__10(Vsig_topology_top_sig_node_porttop__pi28* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi28___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__id_translator_sn__DOT__tx_req_txnid_to_sn 
        = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__tx_req_txnid_to_sn;
    vlSelfRef.__PVT__id_translator_sn__DOT__tx_req_returntxnid_to_sn 
        = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__tx_req_returntxnid_to_sn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi28___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__27(Vsig_topology_top_sig_node_porttop__pi28* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi28___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__27\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc0_rx_rsp_txnid_to_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi28___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__29(Vsig_topology_top_sig_node_porttop__pi28* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi28___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__29\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc1_rx_rsp_txnid_to_hn;
}
