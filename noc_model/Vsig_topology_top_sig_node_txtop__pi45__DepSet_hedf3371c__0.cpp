// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_node_snptxflit_top__pi60.h"
#include "Vsig_topology_top_sig_node_txtop__pi45.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__1(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__rden_snprsp_flit_fifo 
        = vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__0(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_req_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__2(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__rden_snprsp_flit_fifo 
        = vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__3(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__snpreq_empty_flit_store_fifo = vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__empty_flit_store_fifo;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__5(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__empty_snprsp_flit_fifo_tx_snp 
        = vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__empty_snprsp_flit_fifo;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp, vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__rddata_snprsp_flit_fifo);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__8(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(151,vlSelfRef.__PVT__snpreq_flit_to_id_translator, vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__flit_to_id_translator);
    vlSelfRef.__PVT__snpreq_flitv_to_id_translator 
        = vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__flitv_to_id_translator;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__4(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_req_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__7(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__port_can_send_flit_req = (((IData)(vlSelfRef.__PVT__porthas_credits_snp) 
                                                & (IData)(vlSelfRef.__PVT__xmtr_cansend_flits)) 
                                               | (IData)(vlSelfRef.__PVT__i_in_timeout_mode));
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__porthas_credits 
        = vlSelfRef.__PVT__port_can_send_flit_req;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__8(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__sysco_is_disabled 
        = vlSelfRef.__PVT__sysco_is_disabled;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__17(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__17\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_8;
    // Body
    VL_ASSIGN_W(152,vlSelfRef.__PVT__TX_SNPFLIT_ptcl, vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__flit_out);
    VL_CONST_W_5X(160,__Vtemp_1,0x007fffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(151, 152, __Vtemp_2, vlSelfRef.__PVT__TX_SNPFLIT_ptcl, 0U, 151);
    VL_AND_W(5, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, __Vtemp_1, __Vtemp_2);
    VL_CONST_W_4X(128,__Vtemp_3,0x007fffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(119, 152, __Vtemp_4, vlSelfRef.__PVT__TX_SNPFLIT_ptcl, 0U, 119);
    VL_AND_W(4, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, __Vtemp_3, __Vtemp_4);
    vlSelfRef.__PVT__opcode_req_or_lcrdt = (0x7fU & 
                                            ((IData)(vlSelfRef.__PVT__TX_SNPFLITV_ptcl)
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x3eU, 7)
                                              : 0U));
    vlSelfRef.__PVT__txnid_req_or_lcrdt = (0xfffU & 
                                           ((IData)(vlSelfRef.__PVT__TX_SNPFLITV_ptcl)
                                             ? VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x1aU, 12)
                                             : 0U));
    vlSelfRef.__PVT__opcode_snp_or_lcrdt = (0x1fU & 
                                            ((IData)(vlSelfRef.__PVT__TX_SNPFLITV_ptcl)
                                              ? VL_SEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0x32U, 5)
                                              : 0U));
    vlSelfRef.__PVT__txnid_snp_or_lcrdt = (0xfffU & 
                                           ((IData)(vlSelfRef.__PVT__TX_SNPFLITV_ptcl)
                                             ? VL_SEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0xfU, 12)
                                             : 0U));
    VL_CONCAT_WQQ(108,53,55, __Vtemp_5, VL_CONCAT_QIQ(53,2,51, 
                                                      VL_CONCAT_III(2,1,1, 
                                                                    (1U 
                                                                     & VL_BITSEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0x6bU)), 
                                                                    (1U 
                                                                     & VL_BITSEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0x6aU))), 
                                                      VL_CONCAT_QIQ(51,1,50, 
                                                                    (1U 
                                                                     & VL_BITSEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0x69U)), 
                                                                    VL_CONCAT_QIQ(50,1,49, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0x68U)), 
                                                                                (0x1ffffffffffffULL 
                                                                                & VL_SEL_QWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0x37U, 49))))), 
                  VL_CONCAT_QII(55,28,27, VL_CONCAT_III(28,5,23, (IData)(vlSelfRef.__PVT__opcode_snp_or_lcrdt), 
                                                        VL_CONCAT_III(23,12,11, 
                                                                      (0xfffU 
                                                                       & VL_SEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0x26U, 12)), 
                                                                      (0x7ffU 
                                                                       & VL_SEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0x1bU, 11)))), 
                                VL_CONCAT_III(27,12,15, (IData)(vlSelfRef.__PVT__txnid_snp_or_lcrdt), 
                                              VL_CONCAT_III(15,11,4, 
                                                            (0x7ffU 
                                                             & VL_SEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 4U, 11)), 
                                                            (0xfU 
                                                             & VL_SEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0U, 4))))));
    VL_EXTEND_WW(151,108, __Vtemp_6, __Vtemp_5);
    VL_CONCAT_WQQ(124,62,62, __Vtemp_7, VL_CONCAT_QQI(62,52,10, 
                                                      (0xfffffffffffffULL 
                                                       & VL_SEL_QWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x48U, 52)), 
                                                      VL_CONCAT_III(10,3,7, 
                                                                    (7U 
                                                                     & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x45U, 3)), (IData)(vlSelfRef.__PVT__opcode_req_or_lcrdt))), 
                  VL_CONCAT_QIQ(62,24,38, VL_CONCAT_III(24,12,12, 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x32U, 12)), 
                                                        VL_CONCAT_III(12,1,11, 
                                                                      (1U 
                                                                       & VL_BITSEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x31U)), 
                                                                      (0x7ffU 
                                                                       & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x26U, 11)))), 
                                VL_CONCAT_QII(38,12,26, (IData)(vlSelfRef.__PVT__txnid_req_or_lcrdt), 
                                              VL_CONCAT_III(26,11,15, 
                                                            (0x7ffU 
                                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0xfU, 11)), 
                                                            VL_CONCAT_III(15,11,4, 
                                                                          (0x7ffU 
                                                                           & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 4U, 11)), 
                                                                          (0xfU 
                                                                           & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0U, 4)))))));
    VL_CONCAT_WIW(151,27,124, __Vtemp_8, VL_CONCAT_III(27,14,13, 
                                                       VL_CONCAT_III(14,5,9, 
                                                                     VL_CONCAT_III(5,3,2, 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x96U)), 
                                                                                (3U 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x94U, 2))), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x93U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x92U)))), 
                                                                     VL_CONCAT_III(9,8,1, 
                                                                                (0xffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x8aU, 8)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x89U)))), 
                                                       VL_CONCAT_III(13,4,9, 
                                                                     (0xfU 
                                                                      & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x85U, 4)), 
                                                                     VL_CONCAT_III(9,4,5, 
                                                                                (0xfU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x81U, 4)), 
                                                                                VL_CONCAT_III(5,3,2, 
                                                                                VL_CONCAT_III(3,2,1, 
                                                                                (3U 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x7fU, 2)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x7eU))), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x7dU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x7cU))))))), __Vtemp_7);
    VL_COND_WIWW(151, vlSelfRef.__PVT__TX_SNPFLIT_nxt, (IData)(vlSelfRef.__PVT__portis_RN_or_SN), __Vtemp_6, __Vtemp_8);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__18(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__18\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_req_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__20(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__20\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__rden_snprsp_flit_fifo 
        = vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__1(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__rden_snprsp_flit_fifo 
        = vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__0(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_req_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__2(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__rden_snprsp_flit_fifo 
        = vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__3(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__snpreq_empty_flit_store_fifo = vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__empty_flit_store_fifo;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__5(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__empty_snprsp_flit_fifo_tx_snp 
        = vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__empty_snprsp_flit_fifo;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp, vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__rddata_snprsp_flit_fifo);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__8(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(151,vlSelfRef.__PVT__snpreq_flit_to_id_translator, vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__flit_to_id_translator);
    vlSelfRef.__PVT__snpreq_flitv_to_id_translator 
        = vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__flitv_to_id_translator;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__4(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_req_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__7(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__port_can_send_flit_req = (((IData)(vlSelfRef.__PVT__porthas_credits_snp) 
                                                & (IData)(vlSelfRef.__PVT__xmtr_cansend_flits)) 
                                               | (IData)(vlSelfRef.__PVT__i_in_timeout_mode));
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__porthas_credits 
        = vlSelfRef.__PVT__port_can_send_flit_req;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__8(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__sysco_is_disabled 
        = vlSelfRef.__PVT__sysco_is_disabled;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__17(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__17\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_8;
    // Body
    VL_ASSIGN_W(152,vlSelfRef.__PVT__TX_SNPFLIT_ptcl, vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__flit_out);
    VL_CONST_W_5X(160,__Vtemp_1,0x007fffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(151, 152, __Vtemp_2, vlSelfRef.__PVT__TX_SNPFLIT_ptcl, 0U, 151);
    VL_AND_W(5, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, __Vtemp_1, __Vtemp_2);
    VL_CONST_W_4X(128,__Vtemp_3,0x007fffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(119, 152, __Vtemp_4, vlSelfRef.__PVT__TX_SNPFLIT_ptcl, 0U, 119);
    VL_AND_W(4, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, __Vtemp_3, __Vtemp_4);
    vlSelfRef.__PVT__opcode_req_or_lcrdt = (0x7fU & 
                                            ((IData)(vlSelfRef.__PVT__TX_SNPFLITV_ptcl)
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x3eU, 7)
                                              : 0U));
    vlSelfRef.__PVT__txnid_req_or_lcrdt = (0xfffU & 
                                           ((IData)(vlSelfRef.__PVT__TX_SNPFLITV_ptcl)
                                             ? VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x1aU, 12)
                                             : 0U));
    vlSelfRef.__PVT__opcode_snp_or_lcrdt = (0x1fU & 
                                            ((IData)(vlSelfRef.__PVT__TX_SNPFLITV_ptcl)
                                              ? VL_SEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0x32U, 5)
                                              : 0U));
    vlSelfRef.__PVT__txnid_snp_or_lcrdt = (0xfffU & 
                                           ((IData)(vlSelfRef.__PVT__TX_SNPFLITV_ptcl)
                                             ? VL_SEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0xfU, 12)
                                             : 0U));
    VL_CONCAT_WQQ(108,53,55, __Vtemp_5, VL_CONCAT_QIQ(53,2,51, 
                                                      VL_CONCAT_III(2,1,1, 
                                                                    (1U 
                                                                     & VL_BITSEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0x6bU)), 
                                                                    (1U 
                                                                     & VL_BITSEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0x6aU))), 
                                                      VL_CONCAT_QIQ(51,1,50, 
                                                                    (1U 
                                                                     & VL_BITSEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0x69U)), 
                                                                    VL_CONCAT_QIQ(50,1,49, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0x68U)), 
                                                                                (0x1ffffffffffffULL 
                                                                                & VL_SEL_QWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0x37U, 49))))), 
                  VL_CONCAT_QII(55,28,27, VL_CONCAT_III(28,5,23, (IData)(vlSelfRef.__PVT__opcode_snp_or_lcrdt), 
                                                        VL_CONCAT_III(23,12,11, 
                                                                      (0xfffU 
                                                                       & VL_SEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0x26U, 12)), 
                                                                      (0x7ffU 
                                                                       & VL_SEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0x1bU, 11)))), 
                                VL_CONCAT_III(27,12,15, (IData)(vlSelfRef.__PVT__txnid_snp_or_lcrdt), 
                                              VL_CONCAT_III(15,11,4, 
                                                            (0x7ffU 
                                                             & VL_SEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 4U, 11)), 
                                                            (0xfU 
                                                             & VL_SEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0U, 4))))));
    VL_EXTEND_WW(151,108, __Vtemp_6, __Vtemp_5);
    VL_CONCAT_WQQ(124,62,62, __Vtemp_7, VL_CONCAT_QQI(62,52,10, 
                                                      (0xfffffffffffffULL 
                                                       & VL_SEL_QWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x48U, 52)), 
                                                      VL_CONCAT_III(10,3,7, 
                                                                    (7U 
                                                                     & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x45U, 3)), (IData)(vlSelfRef.__PVT__opcode_req_or_lcrdt))), 
                  VL_CONCAT_QIQ(62,24,38, VL_CONCAT_III(24,12,12, 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x32U, 12)), 
                                                        VL_CONCAT_III(12,1,11, 
                                                                      (1U 
                                                                       & VL_BITSEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x31U)), 
                                                                      (0x7ffU 
                                                                       & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x26U, 11)))), 
                                VL_CONCAT_QII(38,12,26, (IData)(vlSelfRef.__PVT__txnid_req_or_lcrdt), 
                                              VL_CONCAT_III(26,11,15, 
                                                            (0x7ffU 
                                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0xfU, 11)), 
                                                            VL_CONCAT_III(15,11,4, 
                                                                          (0x7ffU 
                                                                           & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 4U, 11)), 
                                                                          (0xfU 
                                                                           & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0U, 4)))))));
    VL_CONCAT_WIW(151,27,124, __Vtemp_8, VL_CONCAT_III(27,14,13, 
                                                       VL_CONCAT_III(14,5,9, 
                                                                     VL_CONCAT_III(5,3,2, 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x96U)), 
                                                                                (3U 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x94U, 2))), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x93U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x92U)))), 
                                                                     VL_CONCAT_III(9,8,1, 
                                                                                (0xffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x8aU, 8)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x89U)))), 
                                                       VL_CONCAT_III(13,4,9, 
                                                                     (0xfU 
                                                                      & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x85U, 4)), 
                                                                     VL_CONCAT_III(9,4,5, 
                                                                                (0xfU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x81U, 4)), 
                                                                                VL_CONCAT_III(5,3,2, 
                                                                                VL_CONCAT_III(3,2,1, 
                                                                                (3U 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x7fU, 2)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x7eU))), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x7dU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x7cU))))))), __Vtemp_7);
    VL_COND_WIWW(151, vlSelfRef.__PVT__TX_SNPFLIT_nxt, (IData)(vlSelfRef.__PVT__portis_RN_or_SN), __Vtemp_6, __Vtemp_8);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__18(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__18\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_req_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__20(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__20\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__rden_snprsp_flit_fifo 
        = vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__1(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__rden_snprsp_flit_fifo 
        = vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__0(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_req_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__2(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__rden_snprsp_flit_fifo 
        = vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__3(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__snpreq_empty_flit_store_fifo = vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__empty_flit_store_fifo;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__6(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__empty_snprsp_flit_fifo_tx_snp 
        = vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__empty_snprsp_flit_fifo;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp, vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__rddata_snprsp_flit_fifo);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__10(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(151,vlSelfRef.__PVT__snpreq_flit_to_id_translator, vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__flit_to_id_translator);
    vlSelfRef.__PVT__snpreq_flitv_to_id_translator 
        = vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__flitv_to_id_translator;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__3(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_req_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__6(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__port_can_send_flit_req = (((IData)(vlSelfRef.__PVT__porthas_credits_snp) 
                                                & (IData)(vlSelfRef.__PVT__xmtr_cansend_flits)) 
                                               | (IData)(vlSelfRef.__PVT__i_in_timeout_mode));
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__porthas_credits 
        = vlSelfRef.__PVT__port_can_send_flit_req;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__15(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__15\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_8;
    // Body
    VL_ASSIGN_W(152,vlSelfRef.__PVT__TX_SNPFLIT_ptcl, vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__flit_out);
    VL_CONST_W_5X(160,__Vtemp_1,0x007fffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(151, 152, __Vtemp_2, vlSelfRef.__PVT__TX_SNPFLIT_ptcl, 0U, 151);
    VL_AND_W(5, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, __Vtemp_1, __Vtemp_2);
    VL_CONST_W_4X(128,__Vtemp_3,0x007fffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(119, 152, __Vtemp_4, vlSelfRef.__PVT__TX_SNPFLIT_ptcl, 0U, 119);
    VL_AND_W(4, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, __Vtemp_3, __Vtemp_4);
    vlSelfRef.__PVT__opcode_req_or_lcrdt = (0x7fU & 
                                            ((IData)(vlSelfRef.__PVT__TX_SNPFLITV_ptcl)
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x3eU, 7)
                                              : 0U));
    vlSelfRef.__PVT__txnid_req_or_lcrdt = (0xfffU & 
                                           ((IData)(vlSelfRef.__PVT__TX_SNPFLITV_ptcl)
                                             ? VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x1aU, 12)
                                             : 0U));
    vlSelfRef.__PVT__opcode_snp_or_lcrdt = (0x1fU & 
                                            ((IData)(vlSelfRef.__PVT__TX_SNPFLITV_ptcl)
                                              ? VL_SEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0x32U, 5)
                                              : 0U));
    vlSelfRef.__PVT__txnid_snp_or_lcrdt = (0xfffU & 
                                           ((IData)(vlSelfRef.__PVT__TX_SNPFLITV_ptcl)
                                             ? VL_SEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0xfU, 12)
                                             : 0U));
    VL_CONCAT_WQQ(108,53,55, __Vtemp_5, VL_CONCAT_QIQ(53,2,51, 
                                                      VL_CONCAT_III(2,1,1, 
                                                                    (1U 
                                                                     & VL_BITSEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0x6bU)), 
                                                                    (1U 
                                                                     & VL_BITSEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0x6aU))), 
                                                      VL_CONCAT_QIQ(51,1,50, 
                                                                    (1U 
                                                                     & VL_BITSEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0x69U)), 
                                                                    VL_CONCAT_QIQ(50,1,49, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0x68U)), 
                                                                                (0x1ffffffffffffULL 
                                                                                & VL_SEL_QWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0x37U, 49))))), 
                  VL_CONCAT_QII(55,28,27, VL_CONCAT_III(28,5,23, (IData)(vlSelfRef.__PVT__opcode_snp_or_lcrdt), 
                                                        VL_CONCAT_III(23,12,11, 
                                                                      (0xfffU 
                                                                       & VL_SEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0x26U, 12)), 
                                                                      (0x7ffU 
                                                                       & VL_SEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0x1bU, 11)))), 
                                VL_CONCAT_III(27,12,15, (IData)(vlSelfRef.__PVT__txnid_snp_or_lcrdt), 
                                              VL_CONCAT_III(15,11,4, 
                                                            (0x7ffU 
                                                             & VL_SEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 4U, 11)), 
                                                            (0xfU 
                                                             & VL_SEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0U, 4))))));
    VL_EXTEND_WW(151,108, __Vtemp_6, __Vtemp_5);
    VL_CONCAT_WQQ(124,62,62, __Vtemp_7, VL_CONCAT_QQI(62,52,10, 
                                                      (0xfffffffffffffULL 
                                                       & VL_SEL_QWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x48U, 52)), 
                                                      VL_CONCAT_III(10,3,7, 
                                                                    (7U 
                                                                     & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x45U, 3)), (IData)(vlSelfRef.__PVT__opcode_req_or_lcrdt))), 
                  VL_CONCAT_QIQ(62,24,38, VL_CONCAT_III(24,12,12, 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x32U, 12)), 
                                                        VL_CONCAT_III(12,1,11, 
                                                                      (1U 
                                                                       & VL_BITSEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x31U)), 
                                                                      (0x7ffU 
                                                                       & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x26U, 11)))), 
                                VL_CONCAT_QII(38,12,26, (IData)(vlSelfRef.__PVT__txnid_req_or_lcrdt), 
                                              VL_CONCAT_III(26,11,15, 
                                                            (0x7ffU 
                                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0xfU, 11)), 
                                                            VL_CONCAT_III(15,11,4, 
                                                                          (0x7ffU 
                                                                           & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 4U, 11)), 
                                                                          (0xfU 
                                                                           & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0U, 4)))))));
    VL_CONCAT_WIW(151,27,124, __Vtemp_8, VL_CONCAT_III(27,14,13, 
                                                       VL_CONCAT_III(14,5,9, 
                                                                     VL_CONCAT_III(5,3,2, 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x96U)), 
                                                                                (3U 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x94U, 2))), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x93U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x92U)))), 
                                                                     VL_CONCAT_III(9,8,1, 
                                                                                (0xffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x8aU, 8)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x89U)))), 
                                                       VL_CONCAT_III(13,4,9, 
                                                                     (0xfU 
                                                                      & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x85U, 4)), 
                                                                     VL_CONCAT_III(9,4,5, 
                                                                                (0xfU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x81U, 4)), 
                                                                                VL_CONCAT_III(5,3,2, 
                                                                                VL_CONCAT_III(3,2,1, 
                                                                                (3U 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x7fU, 2)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x7eU))), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x7dU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x7cU))))))), __Vtemp_7);
    VL_COND_WIWW(151, vlSelfRef.__PVT__TX_SNPFLIT_nxt, (IData)(vlSelfRef.__PVT__portis_RN_or_SN), __Vtemp_6, __Vtemp_8);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__17(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__17\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_req_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__18(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__18\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__rden_snprsp_flit_fifo 
        = vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__1(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__rden_snprsp_flit_fifo 
        = vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__0(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_req_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__2(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__rden_snprsp_flit_fifo 
        = vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__3(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__snpreq_empty_flit_store_fifo = vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__empty_flit_store_fifo;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__6(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__empty_snprsp_flit_fifo_tx_snp 
        = vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__empty_snprsp_flit_fifo;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp, vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__rddata_snprsp_flit_fifo);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__10(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(151,vlSelfRef.__PVT__snpreq_flit_to_id_translator, vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__flit_to_id_translator);
    vlSelfRef.__PVT__snpreq_flitv_to_id_translator 
        = vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__flitv_to_id_translator;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__3(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_req_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__6(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__port_can_send_flit_req = (((IData)(vlSelfRef.__PVT__porthas_credits_snp) 
                                                & (IData)(vlSelfRef.__PVT__xmtr_cansend_flits)) 
                                               | (IData)(vlSelfRef.__PVT__i_in_timeout_mode));
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__porthas_credits 
        = vlSelfRef.__PVT__port_can_send_flit_req;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__15(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__15\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_8;
    // Body
    VL_ASSIGN_W(152,vlSelfRef.__PVT__TX_SNPFLIT_ptcl, vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__flit_out);
    VL_CONST_W_5X(160,__Vtemp_1,0x007fffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(151, 152, __Vtemp_2, vlSelfRef.__PVT__TX_SNPFLIT_ptcl, 0U, 151);
    VL_AND_W(5, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, __Vtemp_1, __Vtemp_2);
    VL_CONST_W_4X(128,__Vtemp_3,0x007fffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(119, 152, __Vtemp_4, vlSelfRef.__PVT__TX_SNPFLIT_ptcl, 0U, 119);
    VL_AND_W(4, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, __Vtemp_3, __Vtemp_4);
    vlSelfRef.__PVT__opcode_req_or_lcrdt = (0x7fU & 
                                            ((IData)(vlSelfRef.__PVT__TX_SNPFLITV_ptcl)
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x3eU, 7)
                                              : 0U));
    vlSelfRef.__PVT__txnid_req_or_lcrdt = (0xfffU & 
                                           ((IData)(vlSelfRef.__PVT__TX_SNPFLITV_ptcl)
                                             ? VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x1aU, 12)
                                             : 0U));
    vlSelfRef.__PVT__opcode_snp_or_lcrdt = (0x1fU & 
                                            ((IData)(vlSelfRef.__PVT__TX_SNPFLITV_ptcl)
                                              ? VL_SEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0x32U, 5)
                                              : 0U));
    vlSelfRef.__PVT__txnid_snp_or_lcrdt = (0xfffU & 
                                           ((IData)(vlSelfRef.__PVT__TX_SNPFLITV_ptcl)
                                             ? VL_SEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0xfU, 12)
                                             : 0U));
    VL_CONCAT_WQQ(108,53,55, __Vtemp_5, VL_CONCAT_QIQ(53,2,51, 
                                                      VL_CONCAT_III(2,1,1, 
                                                                    (1U 
                                                                     & VL_BITSEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0x6bU)), 
                                                                    (1U 
                                                                     & VL_BITSEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0x6aU))), 
                                                      VL_CONCAT_QIQ(51,1,50, 
                                                                    (1U 
                                                                     & VL_BITSEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0x69U)), 
                                                                    VL_CONCAT_QIQ(50,1,49, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0x68U)), 
                                                                                (0x1ffffffffffffULL 
                                                                                & VL_SEL_QWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0x37U, 49))))), 
                  VL_CONCAT_QII(55,28,27, VL_CONCAT_III(28,5,23, (IData)(vlSelfRef.__PVT__opcode_snp_or_lcrdt), 
                                                        VL_CONCAT_III(23,12,11, 
                                                                      (0xfffU 
                                                                       & VL_SEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0x26U, 12)), 
                                                                      (0x7ffU 
                                                                       & VL_SEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0x1bU, 11)))), 
                                VL_CONCAT_III(27,12,15, (IData)(vlSelfRef.__PVT__txnid_snp_or_lcrdt), 
                                              VL_CONCAT_III(15,11,4, 
                                                            (0x7ffU 
                                                             & VL_SEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 4U, 11)), 
                                                            (0xfU 
                                                             & VL_SEL_IWII(119, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, 0U, 4))))));
    VL_EXTEND_WW(151,108, __Vtemp_6, __Vtemp_5);
    VL_CONCAT_WQQ(124,62,62, __Vtemp_7, VL_CONCAT_QQI(62,52,10, 
                                                      (0xfffffffffffffULL 
                                                       & VL_SEL_QWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x48U, 52)), 
                                                      VL_CONCAT_III(10,3,7, 
                                                                    (7U 
                                                                     & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x45U, 3)), (IData)(vlSelfRef.__PVT__opcode_req_or_lcrdt))), 
                  VL_CONCAT_QIQ(62,24,38, VL_CONCAT_III(24,12,12, 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x32U, 12)), 
                                                        VL_CONCAT_III(12,1,11, 
                                                                      (1U 
                                                                       & VL_BITSEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x31U)), 
                                                                      (0x7ffU 
                                                                       & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x26U, 11)))), 
                                VL_CONCAT_QII(38,12,26, (IData)(vlSelfRef.__PVT__txnid_req_or_lcrdt), 
                                              VL_CONCAT_III(26,11,15, 
                                                            (0x7ffU 
                                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0xfU, 11)), 
                                                            VL_CONCAT_III(15,11,4, 
                                                                          (0x7ffU 
                                                                           & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 4U, 11)), 
                                                                          (0xfU 
                                                                           & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0U, 4)))))));
    VL_CONCAT_WIW(151,27,124, __Vtemp_8, VL_CONCAT_III(27,14,13, 
                                                       VL_CONCAT_III(14,5,9, 
                                                                     VL_CONCAT_III(5,3,2, 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x96U)), 
                                                                                (3U 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x94U, 2))), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x93U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x92U)))), 
                                                                     VL_CONCAT_III(9,8,1, 
                                                                                (0xffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x8aU, 8)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x89U)))), 
                                                       VL_CONCAT_III(13,4,9, 
                                                                     (0xfU 
                                                                      & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x85U, 4)), 
                                                                     VL_CONCAT_III(9,4,5, 
                                                                                (0xfU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x81U, 4)), 
                                                                                VL_CONCAT_III(5,3,2, 
                                                                                VL_CONCAT_III(3,2,1, 
                                                                                (3U 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x7fU, 2)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x7eU))), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x7dU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x7cU))))))), __Vtemp_7);
    VL_COND_WIWW(151, vlSelfRef.__PVT__TX_SNPFLIT_nxt, (IData)(vlSelfRef.__PVT__portis_RN_or_SN), __Vtemp_6, __Vtemp_8);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__17(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__17\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_req_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__18(Vsig_topology_top_sig_node_txtop__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi45___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__18\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__rden_snprsp_flit_fifo 
        = vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp;
}
