// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_node_dattxflit_top__pi59.h"
#include "Vsig_topology_top_sig_node_rsptxflit_top.h"
#include "Vsig_topology_top_sig_node_snptxflit_top__pi58.h"
#include "Vsig_topology_top_sig_node_txtop__pi43.h"

VL_ATTR_COLD void Vsig_topology_top_sig_node_txtop__pi43___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__4(Vsig_topology_top_sig_node_txtop__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi43___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_req_vc0);
    VL_ASSIGN_W(151,vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__flit_from_id_translator, vlSelfRef.__PVT__snpreq_flit_from_id_translator);
    VL_ASSIGN_W(73,vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__flit_from_id_translator, vlSelfRef.__PVT__rsp_flit_from_id_translator);
    VL_ASSIGN_W(680,vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__flit_from_id_translator, vlSelfRef.__PVT__dat_flit_from_id_translator);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_txtop__pi43___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__5(Vsig_topology_top_sig_node_txtop__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi43___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<16>/*511:0*/ __Vtemp_1;
    VlWide<18>/*575:0*/ __Vtemp_2;
    // Body
    VL_ASSIGN_W(73,vlSelfRef.__PVT__TX_RSPFLIT_ptcl, vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__flit_out);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__TX_DATFLIT_ptcl, vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__TX_DATFLIT);
    vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_gclk;
    vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_gclk;
    vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_gclk;
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__sysco_is_disabled 
        = vlSelfRef.__PVT__sysco_is_disabled;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__TX_RSPFLIT_ptcl_s, vlSelfRef.__PVT__TX_RSPFLIT_ptcl);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, vlSelfRef.__PVT__TX_DATFLIT_ptcl);
    vlSelfRef.__PVT__opcode_rsp_or_lcrdt = (0x1fU & 
                                            ((IData)(vlSelfRef.__PVT__TX_RSPFLITV_ptcl)
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__TX_RSPFLIT_ptcl_s, 0x26U, 5)
                                              : 0U));
    vlSelfRef.__PVT__txnid_rsp_or_lcrdt = (0xfffU & 
                                           ((IData)(vlSelfRef.__PVT__TX_RSPFLITV_ptcl)
                                             ? VL_SEL_IWII(73, vlSelfRef.__PVT__TX_RSPFLIT_ptcl_s, 0x1aU, 12)
                                             : 0U));
    vlSelfRef.__PVT__opcode_dat_or_lcrdt = (0xfU & 
                                            ((IData)(vlSelfRef.__PVT__TX_DATFLITV_ptcl)
                                              ? VL_SEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0x31U, 4)
                                              : 0U));
    vlSelfRef.__PVT__txnid_dat_or_lcrdt = (0xfffU & 
                                           ((IData)(vlSelfRef.__PVT__TX_DATFLITV_ptcl)
                                             ? VL_SEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0x1aU, 12)
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

VL_ATTR_COLD void Vsig_topology_top_sig_node_txtop__pi43___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__4(Vsig_topology_top_sig_node_txtop__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi43___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<16>/*511:0*/ __Vtemp_5;
    VlWide<18>/*575:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<5>/*159:0*/ __Vtemp_10;
    // Body
    VL_ASSIGN_W(73,vlSelfRef.__PVT__TX_RSPFLIT_ptcl, vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__flit_out);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__TX_DATFLIT_ptcl, vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__TX_DATFLIT);
    VL_ASSIGN_W(152,vlSelfRef.__PVT__TX_SNPFLIT_ptcl, vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__flit_out);
    VL_ASSIGN_W(1610,vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_req_vc0);
    VL_ASSIGN_W(73,vlSelfRef.__PVT__TX_RSPFLIT_ptcl_s, vlSelfRef.__PVT__TX_RSPFLIT_ptcl);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, vlSelfRef.__PVT__TX_DATFLIT_ptcl);
    VL_CONST_W_5X(160,__Vtemp_1,0x007fffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(151, 152, __Vtemp_2, vlSelfRef.__PVT__TX_SNPFLIT_ptcl, 0U, 151);
    VL_AND_W(5, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, __Vtemp_1, __Vtemp_2);
    VL_CONST_W_4X(128,__Vtemp_3,0x007fffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(119, 152, __Vtemp_4, vlSelfRef.__PVT__TX_SNPFLIT_ptcl, 0U, 119);
    VL_AND_W(4, vlSelfRef.__PVT__TX_SNPFLIT_ptcl_s, __Vtemp_3, __Vtemp_4);
    vlSelfRef.__PVT__opcode_rsp_or_lcrdt = (0x1fU & 
                                            ((IData)(vlSelfRef.__PVT__TX_RSPFLITV_ptcl)
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__TX_RSPFLIT_ptcl_s, 0x26U, 5)
                                              : 0U));
    vlSelfRef.__PVT__txnid_rsp_or_lcrdt = (0xfffU & 
                                           ((IData)(vlSelfRef.__PVT__TX_RSPFLITV_ptcl)
                                             ? VL_SEL_IWII(73, vlSelfRef.__PVT__TX_RSPFLIT_ptcl_s, 0x1aU, 12)
                                             : 0U));
    vlSelfRef.__PVT__opcode_dat_or_lcrdt = (0xfU & 
                                            ((IData)(vlSelfRef.__PVT__TX_DATFLITV_ptcl)
                                              ? VL_SEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0x31U, 4)
                                              : 0U));
    vlSelfRef.__PVT__txnid_dat_or_lcrdt = (0xfffU & 
                                           ((IData)(vlSelfRef.__PVT__TX_DATFLITV_ptcl)
                                             ? VL_SEL_IWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0x1aU, 12)
                                             : 0U));
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
    VL_SEL_WWII(512, 680, __Vtemp_5, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0xa8U, 512);
    VL_CONCAT_WWQ(576,512,64, __Vtemp_6, __Vtemp_5, 
                  VL_SEL_QWII(680, vlSelfRef.__PVT__TX_DATFLIT_ptcl_s, 0x68U, 64));
    VL_ASSIGNSEL_WW(680,576,0x68U, vlSelfRef.__PVT__TX_DATFLIT_nxt, __Vtemp_6);
    VL_CONCAT_WQQ(108,53,55, __Vtemp_7, VL_CONCAT_QIQ(53,2,51, 
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
    VL_EXTEND_WW(151,108, __Vtemp_8, __Vtemp_7);
    VL_CONCAT_WQQ(124,62,62, __Vtemp_9, VL_CONCAT_QQI(62,52,10, 
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
    VL_CONCAT_WIW(151,27,124, __Vtemp_10, VL_CONCAT_III(27,14,13, 
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
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__TX_REQFLIT_ptcl_s, 0x7cU))))))), __Vtemp_9);
    VL_COND_WIWW(151, vlSelfRef.__PVT__TX_SNPFLIT_nxt, (IData)(vlSelfRef.__PVT__portis_RN_or_SN), __Vtemp_8, __Vtemp_10);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_txtop__pi43___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__5(Vsig_topology_top_sig_node_txtop__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi43___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_gclk;
    vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_gclk;
    vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_gclk;
}
