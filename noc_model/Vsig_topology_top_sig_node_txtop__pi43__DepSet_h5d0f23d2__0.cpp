// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_node_dattxflit_top__pi59.h"
#include "Vsig_topology_top_sig_node_txtop__pi43.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi43___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__4(Vsig_topology_top_sig_node_txtop__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi43___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_dat_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi43___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__4(Vsig_topology_top_sig_node_txtop__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi43___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dat_empty_flit_store_fifo = vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__empty_flit_store_fifo;
    vlSelfRef.__PVT__o_dat_empty_flit_store_fifo = vlSelfRef.__PVT__dat_empty_flit_store_fifo;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi43___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__9(Vsig_topology_top_sig_node_txtop__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi43___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__PVT__dat_flit_to_id_translator, vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__flit_to_id_translator);
    vlSelfRef.__PVT__dat_flitv_to_id_translator = vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__flitv_to_id_translator;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__6(Vsig_topology_top_sig_node_txtop__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__port_can_send_flit_dat = (((IData)(vlSelfRef.__PVT__porthas_credits_dat) 
                                                & (IData)(vlSelfRef.__PVT__xmtr_cansend_flits)) 
                                               | (IData)(vlSelfRef.__PVT__timeout_or_recovery_mode));
    vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__porthas_credits 
        = vlSelfRef.__PVT__port_can_send_flit_dat;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__16(Vsig_topology_top_sig_node_txtop__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__16\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<16>/*511:0*/ __Vtemp_1;
    VlWide<18>/*575:0*/ __Vtemp_2;
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__PVT__TX_DATFLIT_ptcl, vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__TX_DATFLIT);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, vlSelfRef.__PVT__TX_DATFLIT_ptcl);
    vlSelfRef.__PVT__opcode_dat_or_lcrdt = (0xfU & 
                                            ((IData)(vlSelfRef.__PVT__TX_DATFLITV_ptcl)
                                              ? VL_SEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0x31U, 4)
                                              : 0U));
    vlSelfRef.__PVT__txnid_dat_or_lcrdt = (0xfffU & 
                                           ((IData)(vlSelfRef.__PVT__TX_DATFLITV_ptcl)
                                             ? VL_SEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0x1aU, 12)
                                             : 0U));
    VL_ASSIGNSEL_WI(680,26,0U, vlSelfRef.__PVT__TX_DATFLIT_nxt, 
                    VL_CONCAT_III(26,11,15, (0x7ffU 
                                             & VL_SEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0xfU, 11)), 
                                  VL_CONCAT_III(15,11,4, 
                                                (0x7ffU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 4U, 11)), 
                                                (0xfU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0U, 4)))));
    VL_ASSIGNSEL_WI(680,23,0x1aU, vlSelfRef.__PVT__TX_DATFLIT_nxt, 
                    VL_CONCAT_III(23,11,12, (0x7ffU 
                                             & VL_SEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0x26U, 11)), (IData)(vlSelfRef.__PVT__txnid_dat_or_lcrdt)));
    VL_ASSIGNSEL_WI(680,9,0x31U, vlSelfRef.__PVT__TX_DATFLIT_nxt, 
                    VL_CONCAT_III(9,3,6, (7U & VL_SEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0x37U, 3)), 
                                  VL_CONCAT_III(6,2,4, 
                                                (3U 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0x35U, 2)), (IData)(vlSelfRef.__PVT__opcode_dat_or_lcrdt))));
    VL_ASSIGNSEL_WI(680,19,0x3aU, vlSelfRef.__PVT__TX_DATFLIT_nxt, 
                    VL_CONCAT_III(19,12,7, (0xfffU 
                                            & VL_SEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0x41U, 12)), 
                                  VL_CONCAT_III(7,3,4, 
                                                (7U 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0x3eU, 3)), 
                                                (0xfU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0x3aU, 4)))));
    VL_ASSIGNSEL_WI(680,6,0x4dU, vlSelfRef.__PVT__TX_DATFLIT_nxt, 
                    VL_CONCAT_III(6,2,4, (3U & VL_SEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0x51U, 2)), 
                                  VL_CONCAT_III(4,2,2, 
                                                (3U 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0x4fU, 2)), 
                                                (3U 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0x4dU, 2)))));
    VL_ASSIGNSEL_WI(680,21,0x53U, vlSelfRef.__PVT__TX_DATFLIT_nxt, 
                    VL_CONCAT_III(21,1,20, (1U & VL_BITSEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0x67U)), 
                                  VL_CONCAT_III(20,4,16, 
                                                (0xfU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0x63U, 4)), 
                                                (0xffffU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0x53U, 16)))));
    VL_SEL_WWII(512, 680, __Vtemp_1, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0xa8U, 512);
    VL_CONCAT_WWQ(576,512,64, __Vtemp_2, __Vtemp_1, 
                  VL_SEL_QWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0x68U, 64));
    VL_ASSIGNSEL_WW(680,576,0x68U, vlSelfRef.__PVT__TX_DATFLIT_nxt, __Vtemp_2);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__23(Vsig_topology_top_sig_node_txtop__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__23\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_dat_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__24(Vsig_topology_top_sig_node_txtop__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__24\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_dat_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi43___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__4(Vsig_topology_top_sig_node_txtop__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi43___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_dat_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi43___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__4(Vsig_topology_top_sig_node_txtop__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi43___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dat_empty_flit_store_fifo = vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__empty_flit_store_fifo;
    vlSelfRef.__PVT__o_dat_empty_flit_store_fifo = vlSelfRef.__PVT__dat_empty_flit_store_fifo;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi43___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__9(Vsig_topology_top_sig_node_txtop__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi43___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__PVT__dat_flit_to_id_translator, vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__flit_to_id_translator);
    vlSelfRef.__PVT__dat_flitv_to_id_translator = vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__flitv_to_id_translator;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__5(Vsig_topology_top_sig_node_txtop__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__port_can_send_flit_dat = (((IData)(vlSelfRef.__PVT__porthas_credits_dat) 
                                                & (IData)(vlSelfRef.__PVT__xmtr_cansend_flits)) 
                                               | (IData)(vlSelfRef.__PVT__timeout_or_recovery_mode));
    vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__porthas_credits 
        = vlSelfRef.__PVT__port_can_send_flit_dat;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__14(Vsig_topology_top_sig_node_txtop__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__14\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<16>/*511:0*/ __Vtemp_1;
    VlWide<18>/*575:0*/ __Vtemp_2;
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__PVT__TX_DATFLIT_ptcl, vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__TX_DATFLIT);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, vlSelfRef.__PVT__TX_DATFLIT_ptcl);
    vlSelfRef.__PVT__opcode_dat_or_lcrdt = (0xfU & 
                                            ((IData)(vlSelfRef.__PVT__TX_DATFLITV_ptcl)
                                              ? VL_SEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0x31U, 4)
                                              : 0U));
    vlSelfRef.__PVT__txnid_dat_or_lcrdt = (0xfffU & 
                                           ((IData)(vlSelfRef.__PVT__TX_DATFLITV_ptcl)
                                             ? VL_SEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0x1aU, 12)
                                             : 0U));
    VL_ASSIGNSEL_WI(680,26,0U, vlSelfRef.__PVT__TX_DATFLIT_nxt, 
                    VL_CONCAT_III(26,11,15, (0x7ffU 
                                             & VL_SEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0xfU, 11)), 
                                  VL_CONCAT_III(15,11,4, 
                                                (0x7ffU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 4U, 11)), 
                                                (0xfU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0U, 4)))));
    VL_ASSIGNSEL_WI(680,23,0x1aU, vlSelfRef.__PVT__TX_DATFLIT_nxt, 
                    VL_CONCAT_III(23,11,12, (0x7ffU 
                                             & VL_SEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0x26U, 11)), (IData)(vlSelfRef.__PVT__txnid_dat_or_lcrdt)));
    VL_ASSIGNSEL_WI(680,9,0x31U, vlSelfRef.__PVT__TX_DATFLIT_nxt, 
                    VL_CONCAT_III(9,3,6, (7U & VL_SEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0x37U, 3)), 
                                  VL_CONCAT_III(6,2,4, 
                                                (3U 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0x35U, 2)), (IData)(vlSelfRef.__PVT__opcode_dat_or_lcrdt))));
    VL_ASSIGNSEL_WI(680,19,0x3aU, vlSelfRef.__PVT__TX_DATFLIT_nxt, 
                    VL_CONCAT_III(19,12,7, (0xfffU 
                                            & VL_SEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0x41U, 12)), 
                                  VL_CONCAT_III(7,3,4, 
                                                (7U 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0x3eU, 3)), 
                                                (0xfU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0x3aU, 4)))));
    VL_ASSIGNSEL_WI(680,6,0x4dU, vlSelfRef.__PVT__TX_DATFLIT_nxt, 
                    VL_CONCAT_III(6,2,4, (3U & VL_SEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0x51U, 2)), 
                                  VL_CONCAT_III(4,2,2, 
                                                (3U 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0x4fU, 2)), 
                                                (3U 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0x4dU, 2)))));
    VL_ASSIGNSEL_WI(680,21,0x53U, vlSelfRef.__PVT__TX_DATFLIT_nxt, 
                    VL_CONCAT_III(21,1,20, (1U & VL_BITSEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0x67U)), 
                                  VL_CONCAT_III(20,4,16, 
                                                (0xfU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0x63U, 4)), 
                                                (0xffffU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0x53U, 16)))));
    VL_SEL_WWII(512, 680, __Vtemp_1, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0xa8U, 512);
    VL_CONCAT_WWQ(576,512,64, __Vtemp_2, __Vtemp_1, 
                  VL_SEL_QWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0x68U, 64));
    VL_ASSIGNSEL_WW(680,576,0x68U, vlSelfRef.__PVT__TX_DATFLIT_nxt, __Vtemp_2);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__21(Vsig_topology_top_sig_node_txtop__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__21\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_dat_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__22(Vsig_topology_top_sig_node_txtop__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__22\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_dat_vc1);
}
