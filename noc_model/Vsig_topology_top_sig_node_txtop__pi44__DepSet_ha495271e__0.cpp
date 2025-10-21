// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_node_rsptxflit_top.h"
#include "Vsig_topology_top_sig_node_txtop__pi44.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi44___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__3(Vsig_topology_top_sig_node_txtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi44___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_rsp_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi44___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__2(Vsig_topology_top_sig_node_txtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi44___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rsp_empty_flit_store_fifo = vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__empty_flit_store_fifo;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi44___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__10(Vsig_topology_top_sig_node_txtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi44___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(73,vlSelfRef.__PVT__rsp_flit_to_id_translator, vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__flit_to_id_translator);
    vlSelfRef.__PVT__rsp_flitv_to_id_translator = vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__flitv_to_id_translator;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi44___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__5(Vsig_topology_top_sig_node_txtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi44___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__port_can_send_flit_rsp = (((IData)(vlSelfRef.__PVT__porthas_credits_rsp) 
                                                & (IData)(vlSelfRef.__PVT__xmtr_cansend_flits)) 
                                               | (IData)(vlSelfRef.__PVT__timeout_or_recovery_mode));
    vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__porthas_credits 
        = vlSelfRef.__PVT__port_can_send_flit_rsp;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi44___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__15(Vsig_topology_top_sig_node_txtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi44___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__15\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(73,vlSelfRef.__PVT__TX_RSPFLIT_ptcl, vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__flit_out);
    VL_ASSIGN_W(73,vlSelfRef.__PVT__TX_RSPFLIT_ptcl_s, vlSelfRef.__PVT__TX_RSPFLIT_ptcl);
    vlSelfRef.__PVT__opcode_rsp_or_lcrdt = (0x1fU & 
                                            ((IData)(vlSelfRef.__PVT__TX_RSPFLITV_ptcl)
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__TX_RSPFLIT_ptcl_s, 0x26U, 5)
                                              : 0U));
    vlSelfRef.__PVT__txnid_rsp_or_lcrdt = (0xfffU & 
                                           ((IData)(vlSelfRef.__PVT__TX_RSPFLITV_ptcl)
                                             ? VL_SEL_IWII(73, vlSelfRef.__PVT__TX_RSPFLIT_ptcl_s, 0x1aU, 12)
                                             : 0U));
    VL_ASSIGNSEL_WI(73,26,0U, vlSelfRef.__PVT__TX_RSPFLIT_nxt, 
                    VL_CONCAT_III(26,11,15, (0x7ffU 
                                             & VL_SEL_IWII(73, vlSelfRef.__PVT__TX_RSPFLIT_ptcl_s, 0xfU, 11)), 
                                  VL_CONCAT_III(15,11,4, 
                                                (0x7ffU 
                                                 & VL_SEL_IWII(73, vlSelfRef.__PVT__TX_RSPFLIT_ptcl_s, 4U, 11)), 
                                                (0xfU 
                                                 & VL_SEL_IWII(73, vlSelfRef.__PVT__TX_RSPFLIT_ptcl_s, 0U, 4)))));
    VL_ASSIGNSEL_WI(73,12,0x1aU, vlSelfRef.__PVT__TX_RSPFLIT_nxt, vlSelfRef.__PVT__txnid_rsp_or_lcrdt);
    VL_ASSIGNSEL_WI(73,16,0x26U, vlSelfRef.__PVT__TX_RSPFLIT_nxt, 
                    VL_CONCAT_III(16,6,10, VL_CONCAT_III(6,3,3, 
                                                         (7U 
                                                          & VL_SEL_IWII(73, vlSelfRef.__PVT__TX_RSPFLIT_ptcl_s, 0x33U, 3)), 
                                                         (7U 
                                                          & VL_SEL_IWII(73, vlSelfRef.__PVT__TX_RSPFLIT_ptcl_s, 0x30U, 3))), 
                                  VL_CONCAT_III(10,3,7, 
                                                (7U 
                                                 & VL_SEL_IWII(73, vlSelfRef.__PVT__TX_RSPFLIT_ptcl_s, 0x2dU, 3)), 
                                                VL_CONCAT_III(7,2,5, 
                                                              (3U 
                                                               & VL_SEL_IWII(73, vlSelfRef.__PVT__TX_RSPFLIT_ptcl_s, 0x2bU, 2)), (IData)(vlSelfRef.__PVT__opcode_rsp_or_lcrdt)))));
    VL_ASSIGNSEL_WI(73,12,0x36U, vlSelfRef.__PVT__TX_RSPFLIT_nxt, 
                    (0xfffU & VL_SEL_IWII(73, vlSelfRef.__PVT__TX_RSPFLIT_ptcl_s, 0x36U, 12)));
    VL_ASSIGNSEL_WI(73,7,0x42U, vlSelfRef.__PVT__TX_RSPFLIT_nxt, 
                    VL_CONCAT_III(7,1,6, (1U & VL_BITSEL_IWII(73, vlSelfRef.__PVT__TX_RSPFLIT_ptcl_s, 0x48U)), 
                                  VL_CONCAT_III(6,2,4, 
                                                (3U 
                                                 & VL_SEL_IWII(73, vlSelfRef.__PVT__TX_RSPFLIT_ptcl_s, 0x46U, 2)), 
                                                (0xfU 
                                                 & VL_SEL_IWII(73, vlSelfRef.__PVT__TX_RSPFLIT_ptcl_s, 0x42U, 4)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi44___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__21(Vsig_topology_top_sig_node_txtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi44___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__21\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_rsp_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi44___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__22(Vsig_topology_top_sig_node_txtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi44___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__22\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_rsp_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi44___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__3(Vsig_topology_top_sig_node_txtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi44___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_rsp_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi44___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__2(Vsig_topology_top_sig_node_txtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi44___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rsp_empty_flit_store_fifo = vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__empty_flit_store_fifo;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi44___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__8(Vsig_topology_top_sig_node_txtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi44___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(73,vlSelfRef.__PVT__rsp_flit_to_id_translator, vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__flit_to_id_translator);
    vlSelfRef.__PVT__rsp_flitv_to_id_translator = vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__flitv_to_id_translator;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi44___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__4(Vsig_topology_top_sig_node_txtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi44___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__port_can_send_flit_rsp = (((IData)(vlSelfRef.__PVT__porthas_credits_rsp) 
                                                & (IData)(vlSelfRef.__PVT__xmtr_cansend_flits)) 
                                               | (IData)(vlSelfRef.__PVT__timeout_or_recovery_mode));
    vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__porthas_credits 
        = vlSelfRef.__PVT__port_can_send_flit_rsp;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi44___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__13(Vsig_topology_top_sig_node_txtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi44___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__13\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(73,vlSelfRef.__PVT__TX_RSPFLIT_ptcl, vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__flit_out);
    VL_ASSIGN_W(73,vlSelfRef.__PVT__TX_RSPFLIT_ptcl_s, vlSelfRef.__PVT__TX_RSPFLIT_ptcl);
    vlSelfRef.__PVT__opcode_rsp_or_lcrdt = (0x1fU & 
                                            ((IData)(vlSelfRef.__PVT__TX_RSPFLITV_ptcl)
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__TX_RSPFLIT_ptcl_s, 0x26U, 5)
                                              : 0U));
    vlSelfRef.__PVT__txnid_rsp_or_lcrdt = (0xfffU & 
                                           ((IData)(vlSelfRef.__PVT__TX_RSPFLITV_ptcl)
                                             ? VL_SEL_IWII(73, vlSelfRef.__PVT__TX_RSPFLIT_ptcl_s, 0x1aU, 12)
                                             : 0U));
    VL_ASSIGNSEL_WI(73,26,0U, vlSelfRef.__PVT__TX_RSPFLIT_nxt, 
                    VL_CONCAT_III(26,11,15, (0x7ffU 
                                             & VL_SEL_IWII(73, vlSelfRef.__PVT__TX_RSPFLIT_ptcl_s, 0xfU, 11)), 
                                  VL_CONCAT_III(15,11,4, 
                                                (0x7ffU 
                                                 & VL_SEL_IWII(73, vlSelfRef.__PVT__TX_RSPFLIT_ptcl_s, 4U, 11)), 
                                                (0xfU 
                                                 & VL_SEL_IWII(73, vlSelfRef.__PVT__TX_RSPFLIT_ptcl_s, 0U, 4)))));
    VL_ASSIGNSEL_WI(73,12,0x1aU, vlSelfRef.__PVT__TX_RSPFLIT_nxt, vlSelfRef.__PVT__txnid_rsp_or_lcrdt);
    VL_ASSIGNSEL_WI(73,16,0x26U, vlSelfRef.__PVT__TX_RSPFLIT_nxt, 
                    VL_CONCAT_III(16,6,10, VL_CONCAT_III(6,3,3, 
                                                         (7U 
                                                          & VL_SEL_IWII(73, vlSelfRef.__PVT__TX_RSPFLIT_ptcl_s, 0x33U, 3)), 
                                                         (7U 
                                                          & VL_SEL_IWII(73, vlSelfRef.__PVT__TX_RSPFLIT_ptcl_s, 0x30U, 3))), 
                                  VL_CONCAT_III(10,3,7, 
                                                (7U 
                                                 & VL_SEL_IWII(73, vlSelfRef.__PVT__TX_RSPFLIT_ptcl_s, 0x2dU, 3)), 
                                                VL_CONCAT_III(7,2,5, 
                                                              (3U 
                                                               & VL_SEL_IWII(73, vlSelfRef.__PVT__TX_RSPFLIT_ptcl_s, 0x2bU, 2)), (IData)(vlSelfRef.__PVT__opcode_rsp_or_lcrdt)))));
    VL_ASSIGNSEL_WI(73,12,0x36U, vlSelfRef.__PVT__TX_RSPFLIT_nxt, 
                    (0xfffU & VL_SEL_IWII(73, vlSelfRef.__PVT__TX_RSPFLIT_ptcl_s, 0x36U, 12)));
    VL_ASSIGNSEL_WI(73,7,0x42U, vlSelfRef.__PVT__TX_RSPFLIT_nxt, 
                    VL_CONCAT_III(7,1,6, (1U & VL_BITSEL_IWII(73, vlSelfRef.__PVT__TX_RSPFLIT_ptcl_s, 0x48U)), 
                                  VL_CONCAT_III(6,2,4, 
                                                (3U 
                                                 & VL_SEL_IWII(73, vlSelfRef.__PVT__TX_RSPFLIT_ptcl_s, 0x46U, 2)), 
                                                (0xfU 
                                                 & VL_SEL_IWII(73, vlSelfRef.__PVT__TX_RSPFLIT_ptcl_s, 0x42U, 4)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi44___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__19(Vsig_topology_top_sig_node_txtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi44___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__19\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_rsp_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi44___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__20(Vsig_topology_top_sig_node_txtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi44___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__20\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_rsp_vc1);
}
