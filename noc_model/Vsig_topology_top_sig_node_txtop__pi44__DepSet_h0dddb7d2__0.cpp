// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_ic_crdt_recv.h"
#include "Vsig_topology_top_sig_node_rsptxflit_top.h"
#include "Vsig_topology_top_sig_node_txtop__pi44.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi44___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__12(Vsig_topology_top_sig_node_txtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi44___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__12\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TX_RSPFLITV_ptcl = vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__flitv_out;
    vlSelfRef.__PVT__TX_RSPFLITV_link = (((IData)(vlSelfRef.__PVT__return_linkcrdt) 
                                          & (~ (IData)(vlSelfRef.__PVT__TX_RSPFLITV_ptcl))) 
                                         & (0U != (IData)(vlSelfRef.__PVT__available_credits_rsp)));
    vlSelfRef.__PVT__TX_RSPFLITV_nxt = ((IData)(vlSelfRef.__PVT__TX_RSPFLITV_ptcl) 
                                        | (IData)(vlSelfRef.__PVT__TX_RSPFLITV_link));
    vlSelfRef.__PVT__consumed_crdt_rsp = vlSelfRef.__PVT__TX_RSPFLITV_nxt;
    vlSelfRef.__PVT__TX_RSPFLITPEND = vlSelfRef.__PVT__TX_RSPFLITV_nxt;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp->__PVT__consumed_crdt 
        = vlSelfRef.__PVT__consumed_crdt_rsp;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi44___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__10(Vsig_topology_top_sig_node_txtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi44___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TX_RSPFLITV_ptcl = vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__flitv_out;
    vlSelfRef.__PVT__TX_RSPFLITV_link = (((IData)(vlSelfRef.__PVT__return_linkcrdt) 
                                          & (~ (IData)(vlSelfRef.__PVT__TX_RSPFLITV_ptcl))) 
                                         & (0U != (IData)(vlSelfRef.__PVT__available_credits_rsp)));
    vlSelfRef.__PVT__TX_RSPFLITV_nxt = ((IData)(vlSelfRef.__PVT__TX_RSPFLITV_ptcl) 
                                        | (IData)(vlSelfRef.__PVT__TX_RSPFLITV_link));
    vlSelfRef.__PVT__consumed_crdt_rsp = vlSelfRef.__PVT__TX_RSPFLITV_nxt;
    vlSelfRef.__PVT__TX_RSPFLITPEND = vlSelfRef.__PVT__TX_RSPFLITV_nxt;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp->__PVT__consumed_crdt 
        = vlSelfRef.__PVT__consumed_crdt_rsp;
}
