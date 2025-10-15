// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_id_translator_rn_req__pi57.h"
#include "Vsig_topology_top_sig_id_translator_rn_snp__pi56.h"
#include "Vsig_topology_top_sig_id_translator_rn_wrapper__pi43.h"

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__0(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__id_translator_full_snp = vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__id_translator_full;
    vlSelfRef.__PVT__id_translator_full_req = vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__id_translator_full;
    vlSelfRef.__PVT__id_translator_hs_pending_txn_snp 
        = vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__id_translator_hs_pending_txn;
    vlSelfRef.__PVT__id_translator_snp_empty = vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__id_translator_snp_empty;
    vlSelfRef.__PVT__id_translator_hs_pending_txn_req 
        = vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__id_translator_hs_pending_txn;
    vlSelfRef.__PVT__id_translator_req_empty = vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__id_translator_req_empty;
    vlSelfRef.__PVT__id_translator_req_snp_empty = 
        ((IData)(vlSelfRef.__PVT__id_translator_req_empty) 
         & (IData)(vlSelfRef.__PVT__id_translator_snp_empty));
}

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__2(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__tx_rsp_v 
        = vlSelfRef.__PVT__tx_rsp_v;
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__tx_snp_v 
        = vlSelfRef.__PVT__tx_snp_v;
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
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__tx_rsp_dbid_from_hn 
        = vlSelfRef.__PVT__tx_rsp_dbid_from_hn;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__tx_rsp_opcode 
        = vlSelfRef.__PVT__tx_rsp_opcode;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__tx_rsp_txnid_from_hn 
        = vlSelfRef.__PVT__tx_rsp_txnid_from_hn;
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__tx_snp_txnid_from_hn 
        = vlSelfRef.__PVT__tx_snp_txnid_from_hn;
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__tx_snp_opcode 
        = vlSelfRef.__PVT__tx_snp_opcode;
    vlSelfRef.__PVT__tx_dat_dbid_to_rn = vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__tx_dat_dbid_to_rn;
}

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__3(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__3\n"); );
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
    vlSelfRef.__PVT__tx_snp_txnid_to_rn = vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__tx_snp_txnid_to_rn;
    vlSelfRef.__PVT__tx_rsp_dbid_to_rn = vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__tx_rsp_dbid_to_rn;
}

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__5(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__5\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__9(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__9\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__10(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__10\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__11(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__11\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__12(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__12\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__0(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__id_translator_full_snp = vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__id_translator_full;
    vlSelfRef.__PVT__id_translator_full_req = vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__id_translator_full;
    vlSelfRef.__PVT__id_translator_hs_pending_txn_snp 
        = vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__id_translator_hs_pending_txn;
    vlSelfRef.__PVT__id_translator_snp_empty = vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__id_translator_snp_empty;
    vlSelfRef.__PVT__id_translator_hs_pending_txn_req 
        = vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__id_translator_hs_pending_txn;
    vlSelfRef.__PVT__id_translator_req_empty = vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__id_translator_req_empty;
    vlSelfRef.__PVT__id_translator_req_snp_empty = 
        ((IData)(vlSelfRef.__PVT__id_translator_req_empty) 
         & (IData)(vlSelfRef.__PVT__id_translator_snp_empty));
}

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__2(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__tx_rsp_v 
        = vlSelfRef.__PVT__tx_rsp_v;
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__tx_snp_v 
        = vlSelfRef.__PVT__tx_snp_v;
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
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__tx_rsp_dbid_from_hn 
        = vlSelfRef.__PVT__tx_rsp_dbid_from_hn;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__tx_rsp_opcode 
        = vlSelfRef.__PVT__tx_rsp_opcode;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__tx_rsp_txnid_from_hn 
        = vlSelfRef.__PVT__tx_rsp_txnid_from_hn;
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__tx_snp_txnid_from_hn 
        = vlSelfRef.__PVT__tx_snp_txnid_from_hn;
    vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__tx_snp_opcode 
        = vlSelfRef.__PVT__tx_snp_opcode;
    vlSelfRef.__PVT__tx_dat_dbid_to_rn = vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__tx_dat_dbid_to_rn;
}

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__3(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__3\n"); );
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
    vlSelfRef.__PVT__tx_snp_txnid_to_rn = vlSelf->__PVT__i_sig_id_translator_rn_snp->__PVT__tx_snp_txnid_to_rn;
    vlSelfRef.__PVT__tx_rsp_dbid_to_rn = vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__tx_rsp_dbid_to_rn;
}

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__5(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__5\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__9(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__9\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__10(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__10\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__11(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__11\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__12(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__12\n"); );
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
