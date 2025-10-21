// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_id_translator_rn_wrapper__pi43.h"
#include "Vsig_topology_top_sig_node_porttop__pi26.h"
#include "Vsig_topology_top_sig_node_txtop__pi45.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__3(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__id_translator_full = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__id_translator_full_snp;
    vlSelfRef.__PVT__id_translator_hs_pending_txn_snp 
        = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__id_translator_hs_pending_txn_snp;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__id_translator_full 
        = vlSelfRef.__PVT__id_translator_full;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__10(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    VL_ASSIGN_W(151,vlSelfRef.__PVT__snpreq_flit_to_id_translator, vlSelf->__PVT__sig_node_txtop_0->__PVT__snpreq_flit_to_id_translator);
    vlSelfRef.__PVT__snpreq_flitv_to_id_translator 
        = vlSelf->__PVT__sig_node_txtop_0->__PVT__snpreq_flitv_to_id_translator;
    VL_CONST_W_4X(128,__Vtemp_1,0x007fffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(119, 151, __Vtemp_2, vlSelfRef.__PVT__snpreq_flit_to_id_translator, 0U, 119);
    VL_AND_W(4, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__snp_flit_to_id_translator, __Vtemp_1, __Vtemp_2);
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_snp_v 
        = vlSelfRef.__PVT__snpreq_flitv_to_id_translator;
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_snp_txnid_from_hn 
        = (0xfffU & VL_SEL_IWII(119, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__snp_flit_to_id_translator, 0xfU, 12));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_snp_opcode 
        = (0x1fU & VL_SEL_IWII(119, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__snp_flit_to_id_translator, 0x32U, 5));
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_snp_txnid_from_hn 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_snp_txnid_from_hn;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_snp_opcode 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_snp_opcode;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__11(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__11\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__Vcellout__sig_node_txtop_0__dat_flit_to_id_translator, vlSelf->__PVT__sig_node_txtop_0->__PVT__dat_flit_to_id_translator);
    vlSelfRef.__PVT__dat_flitv_to_id_translator = vlSelf->__PVT__sig_node_txtop_0->__PVT__dat_flitv_to_id_translator;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__dat_flit_to_id_translator, vlSelfRef.__Vcellout__sig_node_txtop_0__dat_flit_to_id_translator);
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_dat_v 
        = vlSelfRef.__PVT__dat_flitv_to_id_translator;
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_dat_dbid_from_hn 
        = (0xfffU & VL_SEL_IWII(680, vlSelfRef.__PVT__dat_flit_to_id_translator, 0x41U, 12));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_dat_txnid_from_hn 
        = (0xfffU & VL_SEL_IWII(680, vlSelfRef.__PVT__dat_flit_to_id_translator, 0x1aU, 12));
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_dat_dbid_from_hn 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_dat_dbid_from_hn;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_dat_txnid_from_hn 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_dat_txnid_from_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__12(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__12\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(73,vlSelfRef.__Vcellout__sig_node_txtop_0__rsp_flit_to_id_translator, vlSelf->__PVT__sig_node_txtop_0->__PVT__rsp_flit_to_id_translator);
    vlSelfRef.__PVT__rsp_flitv_to_id_translator = vlSelf->__PVT__sig_node_txtop_0->__PVT__rsp_flitv_to_id_translator;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__rsp_flit_to_id_translator, vlSelfRef.__Vcellout__sig_node_txtop_0__rsp_flit_to_id_translator);
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_rsp_v 
        = vlSelfRef.__PVT__rsp_flitv_to_id_translator;
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_rsp_dbid_from_hn 
        = (0xfffU & VL_SEL_IWII(73, vlSelfRef.__PVT__rsp_flit_to_id_translator, 0x36U, 12));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_rsp_opcode 
        = (0x1fU & VL_SEL_IWII(73, vlSelfRef.__PVT__rsp_flit_to_id_translator, 0x26U, 5));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_rsp_txnid_from_hn 
        = (0xfffU & VL_SEL_IWII(73, vlSelfRef.__PVT__rsp_flit_to_id_translator, 0x1aU, 12));
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_rsp_dbid_from_hn 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_rsp_dbid_from_hn;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_rsp_opcode 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_rsp_opcode;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_rsp_txnid_from_hn 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_rsp_txnid_from_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__1(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__id_translator_hs_pending_txn = 
        ((IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__id_translator_hs_pending_txn_req) 
         | (IData)(vlSelfRef.__PVT__id_translator_hs_pending_txn_snp));
    vlSelfRef.__PVT__id_translator_req_snp_empty = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__id_translator_req_snp_empty;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__id_translator_hs_pending_txn 
        = vlSelfRef.__PVT__id_translator_hs_pending_txn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__3(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__id_translator_full = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__id_translator_full_snp;
    vlSelfRef.__PVT__id_translator_hs_pending_txn_snp 
        = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__id_translator_hs_pending_txn_snp;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__id_translator_full 
        = vlSelfRef.__PVT__id_translator_full;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__10(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    VL_ASSIGN_W(151,vlSelfRef.__PVT__snpreq_flit_to_id_translator, vlSelf->__PVT__sig_node_txtop_0->__PVT__snpreq_flit_to_id_translator);
    vlSelfRef.__PVT__snpreq_flitv_to_id_translator 
        = vlSelf->__PVT__sig_node_txtop_0->__PVT__snpreq_flitv_to_id_translator;
    VL_CONST_W_4X(128,__Vtemp_1,0x007fffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(119, 151, __Vtemp_2, vlSelfRef.__PVT__snpreq_flit_to_id_translator, 0U, 119);
    VL_AND_W(4, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__snp_flit_to_id_translator, __Vtemp_1, __Vtemp_2);
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_snp_v 
        = vlSelfRef.__PVT__snpreq_flitv_to_id_translator;
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_snp_txnid_from_hn 
        = (0xfffU & VL_SEL_IWII(119, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__snp_flit_to_id_translator, 0xfU, 12));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_snp_opcode 
        = (0x1fU & VL_SEL_IWII(119, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__snp_flit_to_id_translator, 0x32U, 5));
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_snp_txnid_from_hn 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_snp_txnid_from_hn;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_snp_opcode 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_snp_opcode;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__11(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__11\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__Vcellout__sig_node_txtop_0__dat_flit_to_id_translator, vlSelf->__PVT__sig_node_txtop_0->__PVT__dat_flit_to_id_translator);
    vlSelfRef.__PVT__dat_flitv_to_id_translator = vlSelf->__PVT__sig_node_txtop_0->__PVT__dat_flitv_to_id_translator;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__dat_flit_to_id_translator, vlSelfRef.__Vcellout__sig_node_txtop_0__dat_flit_to_id_translator);
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_dat_v 
        = vlSelfRef.__PVT__dat_flitv_to_id_translator;
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_dat_dbid_from_hn 
        = (0xfffU & VL_SEL_IWII(680, vlSelfRef.__PVT__dat_flit_to_id_translator, 0x41U, 12));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_dat_txnid_from_hn 
        = (0xfffU & VL_SEL_IWII(680, vlSelfRef.__PVT__dat_flit_to_id_translator, 0x1aU, 12));
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_dat_dbid_from_hn 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_dat_dbid_from_hn;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_dat_txnid_from_hn 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_dat_txnid_from_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__12(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__12\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(73,vlSelfRef.__Vcellout__sig_node_txtop_0__rsp_flit_to_id_translator, vlSelf->__PVT__sig_node_txtop_0->__PVT__rsp_flit_to_id_translator);
    vlSelfRef.__PVT__rsp_flitv_to_id_translator = vlSelf->__PVT__sig_node_txtop_0->__PVT__rsp_flitv_to_id_translator;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__rsp_flit_to_id_translator, vlSelfRef.__Vcellout__sig_node_txtop_0__rsp_flit_to_id_translator);
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_rsp_v 
        = vlSelfRef.__PVT__rsp_flitv_to_id_translator;
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_rsp_dbid_from_hn 
        = (0xfffU & VL_SEL_IWII(73, vlSelfRef.__PVT__rsp_flit_to_id_translator, 0x36U, 12));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_rsp_opcode 
        = (0x1fU & VL_SEL_IWII(73, vlSelfRef.__PVT__rsp_flit_to_id_translator, 0x26U, 5));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_rsp_txnid_from_hn 
        = (0xfffU & VL_SEL_IWII(73, vlSelfRef.__PVT__rsp_flit_to_id_translator, 0x1aU, 12));
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_rsp_dbid_from_hn 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_rsp_dbid_from_hn;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_rsp_opcode 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_rsp_opcode;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_rsp_txnid_from_hn 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_rsp_txnid_from_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__1(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__id_translator_hs_pending_txn = 
        ((IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__id_translator_hs_pending_txn_req) 
         | (IData)(vlSelfRef.__PVT__id_translator_hs_pending_txn_snp));
    vlSelfRef.__PVT__id_translator_req_snp_empty = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__id_translator_req_snp_empty;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__id_translator_hs_pending_txn 
        = vlSelfRef.__PVT__id_translator_hs_pending_txn;
}
