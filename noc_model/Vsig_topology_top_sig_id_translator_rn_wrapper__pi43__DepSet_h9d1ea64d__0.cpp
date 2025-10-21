// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_id_translator_rn_req__pi57.h"
#include "Vsig_topology_top_sig_id_translator_rn_snp__pi56.h"
#include "Vsig_topology_top_sig_id_translator_rn_wrapper__pi43.h"

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__0(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__rst_n 
        = vlSelfRef.__PVT__rst_n;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__rst_n 
        = vlSelfRef.__PVT__rst_n;
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__clk 
        = vlSelfRef.__PVT__clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__1(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc0_rx_rsp_opcode 
        = vlSelfRef.__PVT__vc0_rx_rsp_opcode;
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc0_rx_rsp_txnid_from_rn 
        = vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc0_rx_rsp_txnid_from_rn 
        = vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn;
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc1_rx_rsp_opcode 
        = vlSelfRef.__PVT__vc1_rx_rsp_opcode;
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc1_rx_rsp_txnid_from_rn 
        = vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc1_rx_rsp_txnid_from_rn 
        = vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__3(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn_req = vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc0_rx_dat_txnid_to_hn;
    if (((((1U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)) 
           | (6U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode))) 
          | (5U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode))) 
         | (4U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)))) {
        vlSelfRef.__PVT__vc0_rx_dat_v_snp = vlSelfRef.__PVT__vc0_rx_dat_v;
        vlSelfRef.__PVT__vc0_rx_dat_v_req = 0U;
        vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn_snp;
        vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn_muxed 
            = vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn_snp;
    } else {
        vlSelfRef.__PVT__vc0_rx_dat_v_snp = 0U;
        vlSelfRef.__PVT__vc0_rx_dat_v_req = vlSelfRef.__PVT__vc0_rx_dat_v;
        vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn_req;
        vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn_muxed 
            = vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn_req;
    }
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc0_rx_dat_v 
        = vlSelfRef.__PVT__vc0_rx_dat_v_snp;
    vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn = vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn_muxed;
    vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn = vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn_muxed;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc0_rx_dat_v 
        = vlSelfRef.__PVT__vc0_rx_dat_v_req;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__4(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn_req = vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc0_rx_rsp_txnid_to_hn;
    if (((1U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_opcode)) 
         | (9U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_opcode)))) {
        vlSelfRef.__PVT__vc0_rx_rsp_v_snp = vlSelfRef.__PVT__vc0_rx_rsp_v;
        vlSelfRef.__PVT__vc0_rx_rsp_v_req = 0U;
        vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn_snp;
    } else {
        vlSelfRef.__PVT__vc0_rx_rsp_v_snp = 0U;
        vlSelfRef.__PVT__vc0_rx_rsp_v_req = vlSelfRef.__PVT__vc0_rx_rsp_v;
        vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn_req;
    }
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc0_rx_rsp_v 
        = vlSelfRef.__PVT__vc0_rx_rsp_v_snp;
    vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn = vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn_muxed;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc0_rx_rsp_v 
        = vlSelfRef.__PVT__vc0_rx_rsp_v_req;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__5(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn_req = vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc1_rx_dat_txnid_to_hn;
    if (((((1U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)) 
           | (6U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode))) 
          | (5U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode))) 
         | (4U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)))) {
        vlSelfRef.__PVT__vc1_rx_dat_v_snp = vlSelfRef.__PVT__vc1_rx_dat_v;
        vlSelfRef.__PVT__vc1_rx_dat_v_req = 0U;
        vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn_snp;
        vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn_muxed 
            = vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn_snp;
    } else {
        vlSelfRef.__PVT__vc1_rx_dat_v_snp = 0U;
        vlSelfRef.__PVT__vc1_rx_dat_v_req = vlSelfRef.__PVT__vc1_rx_dat_v;
        vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn_req;
        vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn_muxed 
            = vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn_req;
    }
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc1_rx_dat_v 
        = vlSelfRef.__PVT__vc1_rx_dat_v_snp;
    vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn = vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn_muxed;
    vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn = vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn_muxed;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc1_rx_dat_v 
        = vlSelfRef.__PVT__vc1_rx_dat_v_req;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__6(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn_req = vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc1_rx_rsp_txnid_to_hn;
    if (((1U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_opcode)) 
         | (9U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_opcode)))) {
        vlSelfRef.__PVT__vc1_rx_rsp_v_snp = vlSelfRef.__PVT__vc1_rx_rsp_v;
        vlSelfRef.__PVT__vc1_rx_rsp_v_req = 0U;
        vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn_snp;
    } else {
        vlSelfRef.__PVT__vc1_rx_rsp_v_snp = 0U;
        vlSelfRef.__PVT__vc1_rx_rsp_v_req = vlSelfRef.__PVT__vc1_rx_rsp_v;
        vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn_req;
    }
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc1_rx_rsp_v 
        = vlSelfRef.__PVT__vc1_rx_rsp_v_snp;
    vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn = vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn_muxed;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc1_rx_rsp_v 
        = vlSelfRef.__PVT__vc1_rx_rsp_v_req;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__0(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc0_rx_rsp_opcode 
        = vlSelfRef.__PVT__vc0_rx_rsp_opcode;
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc0_rx_rsp_txnid_from_rn 
        = vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc0_rx_rsp_txnid_from_rn 
        = vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn;
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc1_rx_rsp_opcode 
        = vlSelfRef.__PVT__vc1_rx_rsp_opcode;
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc1_rx_rsp_txnid_from_rn 
        = vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc1_rx_rsp_txnid_from_rn 
        = vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__4(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((((1U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)) 
           | (6U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode))) 
          | (5U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode))) 
         | (4U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)))) {
        vlSelfRef.__PVT__vc0_rx_dat_v_snp = vlSelfRef.__PVT__vc0_rx_dat_v;
        vlSelfRef.__PVT__vc0_rx_dat_v_req = 0U;
        vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn_snp;
        vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn_muxed 
            = vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn_snp;
    } else {
        vlSelfRef.__PVT__vc0_rx_dat_v_snp = 0U;
        vlSelfRef.__PVT__vc0_rx_dat_v_req = vlSelfRef.__PVT__vc0_rx_dat_v;
        vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn_req;
        vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn_muxed 
            = vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn_req;
    }
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc0_rx_dat_v 
        = vlSelfRef.__PVT__vc0_rx_dat_v_snp;
    vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn = vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn_muxed;
    vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn = vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn_muxed;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc0_rx_dat_v 
        = vlSelfRef.__PVT__vc0_rx_dat_v_req;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__5(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn_req = vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc0_rx_rsp_txnid_to_hn;
    if (((1U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_opcode)) 
         | (9U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_opcode)))) {
        vlSelfRef.__PVT__vc0_rx_rsp_v_snp = vlSelfRef.__PVT__vc0_rx_rsp_v;
        vlSelfRef.__PVT__vc0_rx_rsp_v_req = 0U;
        vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn_snp;
    } else {
        vlSelfRef.__PVT__vc0_rx_rsp_v_snp = 0U;
        vlSelfRef.__PVT__vc0_rx_rsp_v_req = vlSelfRef.__PVT__vc0_rx_rsp_v;
        vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn_req;
    }
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc0_rx_rsp_v 
        = vlSelfRef.__PVT__vc0_rx_rsp_v_snp;
    vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn = vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn_muxed;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc0_rx_rsp_v 
        = vlSelfRef.__PVT__vc0_rx_rsp_v_req;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__6(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((((1U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)) 
           | (6U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode))) 
          | (5U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode))) 
         | (4U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)))) {
        vlSelfRef.__PVT__vc1_rx_dat_v_snp = vlSelfRef.__PVT__vc1_rx_dat_v;
        vlSelfRef.__PVT__vc1_rx_dat_v_req = 0U;
        vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn_snp;
        vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn_muxed 
            = vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn_snp;
    } else {
        vlSelfRef.__PVT__vc1_rx_dat_v_snp = 0U;
        vlSelfRef.__PVT__vc1_rx_dat_v_req = vlSelfRef.__PVT__vc1_rx_dat_v;
        vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn_req;
        vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn_muxed 
            = vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn_req;
    }
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc1_rx_dat_v 
        = vlSelfRef.__PVT__vc1_rx_dat_v_snp;
    vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn = vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn_muxed;
    vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn = vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn_muxed;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc1_rx_dat_v 
        = vlSelfRef.__PVT__vc1_rx_dat_v_req;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__7(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn_req = vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc1_rx_rsp_txnid_to_hn;
    if (((1U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_opcode)) 
         | (9U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_opcode)))) {
        vlSelfRef.__PVT__vc1_rx_rsp_v_snp = vlSelfRef.__PVT__vc1_rx_rsp_v;
        vlSelfRef.__PVT__vc1_rx_rsp_v_req = 0U;
        vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn_snp;
    } else {
        vlSelfRef.__PVT__vc1_rx_rsp_v_snp = 0U;
        vlSelfRef.__PVT__vc1_rx_rsp_v_req = vlSelfRef.__PVT__vc1_rx_rsp_v;
        vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn_req;
    }
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc1_rx_rsp_v 
        = vlSelfRef.__PVT__vc1_rx_rsp_v_snp;
    vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn = vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn_muxed;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc1_rx_rsp_v 
        = vlSelfRef.__PVT__vc1_rx_rsp_v_req;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__2(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc0_rx_dat_opcode 
        = vlSelfRef.__PVT__vc0_rx_dat_opcode;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc0_rx_dat_opcode 
        = vlSelfRef.__PVT__vc0_rx_dat_opcode;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc0_rx_dat_dbid_from_rn 
        = vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn;
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc0_rx_dat_dbid_from_rn 
        = vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn;
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc0_rx_dat_txnid_from_rn 
        = vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc0_rx_dat_txnid_from_rn 
        = vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__3(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc1_rx_dat_opcode 
        = vlSelfRef.__PVT__vc1_rx_dat_opcode;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc1_rx_dat_opcode 
        = vlSelfRef.__PVT__vc1_rx_dat_opcode;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc1_rx_dat_dbid_from_rn 
        = vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn;
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc1_rx_dat_dbid_from_rn 
        = vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn;
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc1_rx_dat_txnid_from_rn 
        = vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc1_rx_dat_txnid_from_rn 
        = vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__8(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc0_rx_rsp_opcode 
        = vlSelfRef.__PVT__vc0_rx_rsp_opcode;
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc0_rx_rsp_txnid_from_rn 
        = vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc0_rx_rsp_txnid_from_rn 
        = vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__10(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc1_rx_rsp_opcode 
        = vlSelfRef.__PVT__vc1_rx_rsp_opcode;
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc1_rx_rsp_txnid_from_rn 
        = vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc1_rx_rsp_txnid_from_rn 
        = vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__14(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__14\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((((1U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)) 
           | (6U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode))) 
          | (5U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode))) 
         | (4U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)))) {
        vlSelfRef.__PVT__vc0_rx_dat_v_snp = vlSelfRef.__PVT__vc0_rx_dat_v;
        vlSelfRef.__PVT__vc0_rx_dat_v_req = 0U;
        vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn_snp;
        vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn_muxed 
            = vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn_snp;
    } else {
        vlSelfRef.__PVT__vc0_rx_dat_v_snp = 0U;
        vlSelfRef.__PVT__vc0_rx_dat_v_req = vlSelfRef.__PVT__vc0_rx_dat_v;
        vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn_req;
        vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn_muxed 
            = vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn_req;
    }
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc0_rx_dat_v 
        = vlSelfRef.__PVT__vc0_rx_dat_v_snp;
    vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn = vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn_muxed;
    vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn = vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn_muxed;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc0_rx_dat_v 
        = vlSelfRef.__PVT__vc0_rx_dat_v_req;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__15(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__15\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn_req = vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc0_rx_rsp_txnid_to_hn;
    if (((1U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_opcode)) 
         | (9U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_opcode)))) {
        vlSelfRef.__PVT__vc0_rx_rsp_v_snp = vlSelfRef.__PVT__vc0_rx_rsp_v;
        vlSelfRef.__PVT__vc0_rx_rsp_v_req = 0U;
        vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn_snp;
    } else {
        vlSelfRef.__PVT__vc0_rx_rsp_v_snp = 0U;
        vlSelfRef.__PVT__vc0_rx_rsp_v_req = vlSelfRef.__PVT__vc0_rx_rsp_v;
        vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn_req;
    }
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc0_rx_rsp_v 
        = vlSelfRef.__PVT__vc0_rx_rsp_v_snp;
    vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn = vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn_muxed;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc0_rx_rsp_v 
        = vlSelfRef.__PVT__vc0_rx_rsp_v_req;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__16(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__16\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((((1U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)) 
           | (6U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode))) 
          | (5U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode))) 
         | (4U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)))) {
        vlSelfRef.__PVT__vc1_rx_dat_v_snp = vlSelfRef.__PVT__vc1_rx_dat_v;
        vlSelfRef.__PVT__vc1_rx_dat_v_req = 0U;
        vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn_snp;
        vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn_muxed 
            = vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn_snp;
    } else {
        vlSelfRef.__PVT__vc1_rx_dat_v_snp = 0U;
        vlSelfRef.__PVT__vc1_rx_dat_v_req = vlSelfRef.__PVT__vc1_rx_dat_v;
        vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn_req;
        vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn_muxed 
            = vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn_req;
    }
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc1_rx_dat_v 
        = vlSelfRef.__PVT__vc1_rx_dat_v_snp;
    vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn = vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn_muxed;
    vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn = vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn_muxed;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc1_rx_dat_v 
        = vlSelfRef.__PVT__vc1_rx_dat_v_req;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__17(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__17\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn_req = vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc1_rx_rsp_txnid_to_hn;
    if (((1U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_opcode)) 
         | (9U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_opcode)))) {
        vlSelfRef.__PVT__vc1_rx_rsp_v_snp = vlSelfRef.__PVT__vc1_rx_rsp_v;
        vlSelfRef.__PVT__vc1_rx_rsp_v_req = 0U;
        vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn_snp;
    } else {
        vlSelfRef.__PVT__vc1_rx_rsp_v_snp = 0U;
        vlSelfRef.__PVT__vc1_rx_rsp_v_req = vlSelfRef.__PVT__vc1_rx_rsp_v;
        vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn_req;
    }
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc1_rx_rsp_v 
        = vlSelfRef.__PVT__vc1_rx_rsp_v_snp;
    vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn = vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn_muxed;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc1_rx_rsp_v 
        = vlSelfRef.__PVT__vc1_rx_rsp_v_req;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__0(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__rst_n 
        = vlSelfRef.__PVT__rst_n;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__rst_n 
        = vlSelfRef.__PVT__rst_n;
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__clk 
        = vlSelfRef.__PVT__clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__1(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc0_rx_rsp_opcode 
        = vlSelfRef.__PVT__vc0_rx_rsp_opcode;
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc0_rx_rsp_txnid_from_rn 
        = vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc0_rx_rsp_txnid_from_rn 
        = vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn;
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc1_rx_rsp_opcode 
        = vlSelfRef.__PVT__vc1_rx_rsp_opcode;
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc1_rx_rsp_txnid_from_rn 
        = vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc1_rx_rsp_txnid_from_rn 
        = vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__3(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn_req = vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc0_rx_dat_txnid_to_hn;
    if (((((1U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)) 
           | (6U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode))) 
          | (5U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode))) 
         | (4U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)))) {
        vlSelfRef.__PVT__vc0_rx_dat_v_snp = vlSelfRef.__PVT__vc0_rx_dat_v;
        vlSelfRef.__PVT__vc0_rx_dat_v_req = 0U;
        vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn_snp;
        vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn_muxed 
            = vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn_snp;
    } else {
        vlSelfRef.__PVT__vc0_rx_dat_v_snp = 0U;
        vlSelfRef.__PVT__vc0_rx_dat_v_req = vlSelfRef.__PVT__vc0_rx_dat_v;
        vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn_req;
        vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn_muxed 
            = vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn_req;
    }
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc0_rx_dat_v 
        = vlSelfRef.__PVT__vc0_rx_dat_v_snp;
    vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn = vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn_muxed;
    vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn = vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn_muxed;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc0_rx_dat_v 
        = vlSelfRef.__PVT__vc0_rx_dat_v_req;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__4(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn_req = vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc0_rx_rsp_txnid_to_hn;
    if (((1U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_opcode)) 
         | (9U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_opcode)))) {
        vlSelfRef.__PVT__vc0_rx_rsp_v_snp = vlSelfRef.__PVT__vc0_rx_rsp_v;
        vlSelfRef.__PVT__vc0_rx_rsp_v_req = 0U;
        vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn_snp;
    } else {
        vlSelfRef.__PVT__vc0_rx_rsp_v_snp = 0U;
        vlSelfRef.__PVT__vc0_rx_rsp_v_req = vlSelfRef.__PVT__vc0_rx_rsp_v;
        vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn_req;
    }
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc0_rx_rsp_v 
        = vlSelfRef.__PVT__vc0_rx_rsp_v_snp;
    vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn = vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn_muxed;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc0_rx_rsp_v 
        = vlSelfRef.__PVT__vc0_rx_rsp_v_req;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__5(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn_req = vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc1_rx_dat_txnid_to_hn;
    if (((((1U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)) 
           | (6U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode))) 
          | (5U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode))) 
         | (4U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)))) {
        vlSelfRef.__PVT__vc1_rx_dat_v_snp = vlSelfRef.__PVT__vc1_rx_dat_v;
        vlSelfRef.__PVT__vc1_rx_dat_v_req = 0U;
        vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn_snp;
        vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn_muxed 
            = vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn_snp;
    } else {
        vlSelfRef.__PVT__vc1_rx_dat_v_snp = 0U;
        vlSelfRef.__PVT__vc1_rx_dat_v_req = vlSelfRef.__PVT__vc1_rx_dat_v;
        vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn_req;
        vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn_muxed 
            = vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn_req;
    }
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc1_rx_dat_v 
        = vlSelfRef.__PVT__vc1_rx_dat_v_snp;
    vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn = vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn_muxed;
    vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn = vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn_muxed;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc1_rx_dat_v 
        = vlSelfRef.__PVT__vc1_rx_dat_v_req;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__6(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn_req = vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc1_rx_rsp_txnid_to_hn;
    if (((1U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_opcode)) 
         | (9U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_opcode)))) {
        vlSelfRef.__PVT__vc1_rx_rsp_v_snp = vlSelfRef.__PVT__vc1_rx_rsp_v;
        vlSelfRef.__PVT__vc1_rx_rsp_v_req = 0U;
        vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn_snp;
    } else {
        vlSelfRef.__PVT__vc1_rx_rsp_v_snp = 0U;
        vlSelfRef.__PVT__vc1_rx_rsp_v_req = vlSelfRef.__PVT__vc1_rx_rsp_v;
        vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn_req;
    }
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc1_rx_rsp_v 
        = vlSelfRef.__PVT__vc1_rx_rsp_v_snp;
    vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn = vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn_muxed;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc1_rx_rsp_v 
        = vlSelfRef.__PVT__vc1_rx_rsp_v_req;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__0(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc0_rx_rsp_opcode 
        = vlSelfRef.__PVT__vc0_rx_rsp_opcode;
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc0_rx_rsp_txnid_from_rn 
        = vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc0_rx_rsp_txnid_from_rn 
        = vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn;
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc1_rx_rsp_opcode 
        = vlSelfRef.__PVT__vc1_rx_rsp_opcode;
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc1_rx_rsp_txnid_from_rn 
        = vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc1_rx_rsp_txnid_from_rn 
        = vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__4(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((((1U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)) 
           | (6U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode))) 
          | (5U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode))) 
         | (4U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)))) {
        vlSelfRef.__PVT__vc0_rx_dat_v_snp = vlSelfRef.__PVT__vc0_rx_dat_v;
        vlSelfRef.__PVT__vc0_rx_dat_v_req = 0U;
        vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn_snp;
        vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn_muxed 
            = vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn_snp;
    } else {
        vlSelfRef.__PVT__vc0_rx_dat_v_snp = 0U;
        vlSelfRef.__PVT__vc0_rx_dat_v_req = vlSelfRef.__PVT__vc0_rx_dat_v;
        vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn_req;
        vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn_muxed 
            = vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn_req;
    }
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc0_rx_dat_v 
        = vlSelfRef.__PVT__vc0_rx_dat_v_snp;
    vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn = vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn_muxed;
    vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn = vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn_muxed;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc0_rx_dat_v 
        = vlSelfRef.__PVT__vc0_rx_dat_v_req;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__5(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn_req = vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc0_rx_rsp_txnid_to_hn;
    if (((1U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_opcode)) 
         | (9U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_opcode)))) {
        vlSelfRef.__PVT__vc0_rx_rsp_v_snp = vlSelfRef.__PVT__vc0_rx_rsp_v;
        vlSelfRef.__PVT__vc0_rx_rsp_v_req = 0U;
        vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn_snp;
    } else {
        vlSelfRef.__PVT__vc0_rx_rsp_v_snp = 0U;
        vlSelfRef.__PVT__vc0_rx_rsp_v_req = vlSelfRef.__PVT__vc0_rx_rsp_v;
        vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn_req;
    }
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc0_rx_rsp_v 
        = vlSelfRef.__PVT__vc0_rx_rsp_v_snp;
    vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn = vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn_muxed;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc0_rx_rsp_v 
        = vlSelfRef.__PVT__vc0_rx_rsp_v_req;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__6(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((((1U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)) 
           | (6U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode))) 
          | (5U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode))) 
         | (4U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)))) {
        vlSelfRef.__PVT__vc1_rx_dat_v_snp = vlSelfRef.__PVT__vc1_rx_dat_v;
        vlSelfRef.__PVT__vc1_rx_dat_v_req = 0U;
        vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn_snp;
        vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn_muxed 
            = vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn_snp;
    } else {
        vlSelfRef.__PVT__vc1_rx_dat_v_snp = 0U;
        vlSelfRef.__PVT__vc1_rx_dat_v_req = vlSelfRef.__PVT__vc1_rx_dat_v;
        vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn_req;
        vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn_muxed 
            = vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn_req;
    }
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc1_rx_dat_v 
        = vlSelfRef.__PVT__vc1_rx_dat_v_snp;
    vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn = vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn_muxed;
    vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn = vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn_muxed;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc1_rx_dat_v 
        = vlSelfRef.__PVT__vc1_rx_dat_v_req;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__7(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn_req = vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc1_rx_rsp_txnid_to_hn;
    if (((1U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_opcode)) 
         | (9U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_opcode)))) {
        vlSelfRef.__PVT__vc1_rx_rsp_v_snp = vlSelfRef.__PVT__vc1_rx_rsp_v;
        vlSelfRef.__PVT__vc1_rx_rsp_v_req = 0U;
        vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn_snp;
    } else {
        vlSelfRef.__PVT__vc1_rx_rsp_v_snp = 0U;
        vlSelfRef.__PVT__vc1_rx_rsp_v_req = vlSelfRef.__PVT__vc1_rx_rsp_v;
        vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn_req;
    }
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc1_rx_rsp_v 
        = vlSelfRef.__PVT__vc1_rx_rsp_v_snp;
    vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn = vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn_muxed;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc1_rx_rsp_v 
        = vlSelfRef.__PVT__vc1_rx_rsp_v_req;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__2(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc0_rx_dat_opcode 
        = vlSelfRef.__PVT__vc0_rx_dat_opcode;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc0_rx_dat_opcode 
        = vlSelfRef.__PVT__vc0_rx_dat_opcode;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc0_rx_dat_dbid_from_rn 
        = vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn;
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc0_rx_dat_dbid_from_rn 
        = vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn;
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc0_rx_dat_txnid_from_rn 
        = vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc0_rx_dat_txnid_from_rn 
        = vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__3(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc1_rx_dat_opcode 
        = vlSelfRef.__PVT__vc1_rx_dat_opcode;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc1_rx_dat_opcode 
        = vlSelfRef.__PVT__vc1_rx_dat_opcode;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc1_rx_dat_dbid_from_rn 
        = vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn;
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc1_rx_dat_dbid_from_rn 
        = vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn;
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc1_rx_dat_txnid_from_rn 
        = vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc1_rx_dat_txnid_from_rn 
        = vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__8(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc0_rx_rsp_opcode 
        = vlSelfRef.__PVT__vc0_rx_rsp_opcode;
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc0_rx_rsp_txnid_from_rn 
        = vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc0_rx_rsp_txnid_from_rn 
        = vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__10(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc1_rx_rsp_opcode 
        = vlSelfRef.__PVT__vc1_rx_rsp_opcode;
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc1_rx_rsp_txnid_from_rn 
        = vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc1_rx_rsp_txnid_from_rn 
        = vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__14(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__14\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((((1U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)) 
           | (6U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode))) 
          | (5U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode))) 
         | (4U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)))) {
        vlSelfRef.__PVT__vc0_rx_dat_v_snp = vlSelfRef.__PVT__vc0_rx_dat_v;
        vlSelfRef.__PVT__vc0_rx_dat_v_req = 0U;
        vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn_snp;
        vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn_muxed 
            = vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn_snp;
    } else {
        vlSelfRef.__PVT__vc0_rx_dat_v_snp = 0U;
        vlSelfRef.__PVT__vc0_rx_dat_v_req = vlSelfRef.__PVT__vc0_rx_dat_v;
        vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn_req;
        vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn_muxed 
            = vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn_req;
    }
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc0_rx_dat_v 
        = vlSelfRef.__PVT__vc0_rx_dat_v_snp;
    vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn = vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn_muxed;
    vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn = vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn_muxed;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc0_rx_dat_v 
        = vlSelfRef.__PVT__vc0_rx_dat_v_req;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__15(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__15\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn_req = vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc0_rx_rsp_txnid_to_hn;
    if (((1U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_opcode)) 
         | (9U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_opcode)))) {
        vlSelfRef.__PVT__vc0_rx_rsp_v_snp = vlSelfRef.__PVT__vc0_rx_rsp_v;
        vlSelfRef.__PVT__vc0_rx_rsp_v_req = 0U;
        vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn_snp;
    } else {
        vlSelfRef.__PVT__vc0_rx_rsp_v_snp = 0U;
        vlSelfRef.__PVT__vc0_rx_rsp_v_req = vlSelfRef.__PVT__vc0_rx_rsp_v;
        vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn_req;
    }
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc0_rx_rsp_v 
        = vlSelfRef.__PVT__vc0_rx_rsp_v_snp;
    vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn = vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn_muxed;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc0_rx_rsp_v 
        = vlSelfRef.__PVT__vc0_rx_rsp_v_req;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__16(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__16\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((((1U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)) 
           | (6U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode))) 
          | (5U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode))) 
         | (4U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)))) {
        vlSelfRef.__PVT__vc1_rx_dat_v_snp = vlSelfRef.__PVT__vc1_rx_dat_v;
        vlSelfRef.__PVT__vc1_rx_dat_v_req = 0U;
        vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn_snp;
        vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn_muxed 
            = vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn_snp;
    } else {
        vlSelfRef.__PVT__vc1_rx_dat_v_snp = 0U;
        vlSelfRef.__PVT__vc1_rx_dat_v_req = vlSelfRef.__PVT__vc1_rx_dat_v;
        vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn_req;
        vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn_muxed 
            = vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn_req;
    }
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc1_rx_dat_v 
        = vlSelfRef.__PVT__vc1_rx_dat_v_snp;
    vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn = vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn_muxed;
    vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn = vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn_muxed;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc1_rx_dat_v 
        = vlSelfRef.__PVT__vc1_rx_dat_v_req;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__17(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__17\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn_req = vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc1_rx_rsp_txnid_to_hn;
    if (((1U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_opcode)) 
         | (9U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_opcode)))) {
        vlSelfRef.__PVT__vc1_rx_rsp_v_snp = vlSelfRef.__PVT__vc1_rx_rsp_v;
        vlSelfRef.__PVT__vc1_rx_rsp_v_req = 0U;
        vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn_snp;
    } else {
        vlSelfRef.__PVT__vc1_rx_rsp_v_snp = 0U;
        vlSelfRef.__PVT__vc1_rx_rsp_v_req = vlSelfRef.__PVT__vc1_rx_rsp_v;
        vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn_muxed 
            = vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn_req;
    }
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__vc1_rx_rsp_v 
        = vlSelfRef.__PVT__vc1_rx_rsp_v_snp;
    vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn = vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn_muxed;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc1_rx_rsp_v 
        = vlSelfRef.__PVT__vc1_rx_rsp_v_req;
}
