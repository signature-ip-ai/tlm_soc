// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_fifo_synchclk_flop__pi68.h"
#include "Vsig_topology_top_sig_fifo_synchclk_flop__pi69.h"
#include "Vsig_topology_top_sig_node_snptxflit_top__pi60.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_snptxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__5(Vsig_topology_top_sig_node_snptxflit_top__pi60* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_snptxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_6;
    VlWide<5>/*159:0*/ __Vtemp_7;
    // Body
    VL_CONST_W_4X(128,__Vtemp_1,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 151, __Vtemp_2, vlSelfRef.__PVT__flit_from_id_translator, 0U, 108);
    VL_AND_W(4, __Vtemp_3, __Vtemp_1, __Vtemp_2);
    VL_CONCAT_WIW(119,11,108, vlSelfRef.__PVT__snp_flit_out_mux_s, 
                  (0x7ffU & VL_SEL_IWII(161, vlSelfRef.__PVT__flit_out_mux, 0x6cU, 11)), __Vtemp_3);
    VL_CONST_W_1X(73,vlSelfRef.__PVT__snprsp_flit_s,0x00000000);
    VL_ASSIGNSEL_WI(73,26,0U, vlSelfRef.__PVT__snprsp_flit_s, 
                    VL_CONCAT_III(26,11,15, (0x7ffU 
                                             & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 4U, 11)), 
                                  VL_CONCAT_III(15,11,4, 
                                                (0x7ffU 
                                                 & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x6cU, 11)), 
                                                (0xfU 
                                                 & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0U, 4)))));
    VL_ASSIGNSEL_WI(73,17,0x1aU, vlSelfRef.__PVT__snprsp_flit_s, 
                    VL_CONCAT_III(17,5,12, 1U, (0xfffU 
                                                & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0xfU, 12))));
    VL_CONCAT_WIW(152,1,151, __Vtemp_4, (IData)(vlSelfRef.__PVT__flit_fromcc_req_or_snp), vlSelfRef.__PVT__flit_from_id_translator);
    VL_EXTEND_WQ(96,53, __Vtemp_5, VL_CONCAT_QIQ(53,2,51, 
                                                 VL_CONCAT_III(2,1,1, 
                                                               (1U 
                                                                & VL_BITSEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x6bU)), 
                                                               (1U 
                                                                & VL_BITSEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x6aU))), 
                                                 VL_CONCAT_QIQ(51,1,50, 
                                                               (1U 
                                                                & VL_BITSEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x69U)), 
                                                               VL_CONCAT_QIQ(50,1,49, 
                                                                             (1U 
                                                                              & VL_BITSEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x68U)), 
                                                                             (0x1ffffffffffffULL 
                                                                              & VL_SEL_QWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x37U, 49))))));
    VL_CONCAT_WWQ(151,96,55, __Vtemp_6, __Vtemp_5, 
                  VL_CONCAT_QII(55,28,27, VL_CONCAT_III(28,5,23, 
                                                        (0x1fU 
                                                         & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x32U, 5)), 
                                                        VL_CONCAT_III(23,12,11, 
                                                                      (0xfffU 
                                                                       & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x26U, 12)), 
                                                                      (0x7ffU 
                                                                       & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x1bU, 11)))), 
                                VL_CONCAT_III(27,12,15, 
                                              (0xfffU 
                                               & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0xfU, 12)), 
                                              VL_CONCAT_III(15,11,4, 
                                                            (0x7ffU 
                                                             & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x6cU, 11)), 
                                                            (0xfU 
                                                             & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0U, 4))))));
    VL_CONCAT_WIW(152,1,151, __Vtemp_7, (IData)(vlSelfRef.__PVT__flit_fromcc_req_or_snp), __Vtemp_6);
    VL_COND_WIWW(152, vlSelfRef.__PVT__write_data_fifo_tx_snpreq, (IData)(vlSelfRef.__PVT__flit_fromcc_req_or_snp), __Vtemp_4, __Vtemp_7);
    VL_ASSIGN_W(73,vlSelfRef.__PVT__wrdata_snprsp_flit_fifo, vlSelfRef.__PVT__snprsp_flit_s);
    VL_ASSIGN_W(152,vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wrdata, vlSelfRef.__PVT__write_data_fifo_tx_snpreq);
    VL_ASSIGN_W(73,vlSelf->__PVT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0->__PVT__fifo_wrdata, vlSelfRef.__PVT__wrdata_snprsp_flit_fifo);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_snptxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__5(Vsig_topology_top_sig_node_snptxflit_top__pi60* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_snptxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_6;
    VlWide<5>/*159:0*/ __Vtemp_7;
    // Body
    VL_CONST_W_4X(128,__Vtemp_1,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 151, __Vtemp_2, vlSelfRef.__PVT__flit_from_id_translator, 0U, 108);
    VL_AND_W(4, __Vtemp_3, __Vtemp_1, __Vtemp_2);
    VL_CONCAT_WIW(119,11,108, vlSelfRef.__PVT__snp_flit_out_mux_s, 
                  (0x7ffU & VL_SEL_IWII(161, vlSelfRef.__PVT__flit_out_mux, 0x6cU, 11)), __Vtemp_3);
    VL_CONST_W_1X(73,vlSelfRef.__PVT__snprsp_flit_s,0x00000000);
    VL_ASSIGNSEL_WI(73,26,0U, vlSelfRef.__PVT__snprsp_flit_s, 
                    VL_CONCAT_III(26,11,15, (0x7ffU 
                                             & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 4U, 11)), 
                                  VL_CONCAT_III(15,11,4, 
                                                (0x7ffU 
                                                 & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x6cU, 11)), 
                                                (0xfU 
                                                 & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0U, 4)))));
    VL_ASSIGNSEL_WI(73,17,0x1aU, vlSelfRef.__PVT__snprsp_flit_s, 
                    VL_CONCAT_III(17,5,12, 1U, (0xfffU 
                                                & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0xfU, 12))));
    VL_CONCAT_WIW(152,1,151, __Vtemp_4, (IData)(vlSelfRef.__PVT__flit_fromcc_req_or_snp), vlSelfRef.__PVT__flit_from_id_translator);
    VL_EXTEND_WQ(96,53, __Vtemp_5, VL_CONCAT_QIQ(53,2,51, 
                                                 VL_CONCAT_III(2,1,1, 
                                                               (1U 
                                                                & VL_BITSEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x6bU)), 
                                                               (1U 
                                                                & VL_BITSEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x6aU))), 
                                                 VL_CONCAT_QIQ(51,1,50, 
                                                               (1U 
                                                                & VL_BITSEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x69U)), 
                                                               VL_CONCAT_QIQ(50,1,49, 
                                                                             (1U 
                                                                              & VL_BITSEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x68U)), 
                                                                             (0x1ffffffffffffULL 
                                                                              & VL_SEL_QWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x37U, 49))))));
    VL_CONCAT_WWQ(151,96,55, __Vtemp_6, __Vtemp_5, 
                  VL_CONCAT_QII(55,28,27, VL_CONCAT_III(28,5,23, 
                                                        (0x1fU 
                                                         & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x32U, 5)), 
                                                        VL_CONCAT_III(23,12,11, 
                                                                      (0xfffU 
                                                                       & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x26U, 12)), 
                                                                      (0x7ffU 
                                                                       & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x1bU, 11)))), 
                                VL_CONCAT_III(27,12,15, 
                                              (0xfffU 
                                               & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0xfU, 12)), 
                                              VL_CONCAT_III(15,11,4, 
                                                            (0x7ffU 
                                                             & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x6cU, 11)), 
                                                            (0xfU 
                                                             & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0U, 4))))));
    VL_CONCAT_WIW(152,1,151, __Vtemp_7, (IData)(vlSelfRef.__PVT__flit_fromcc_req_or_snp), __Vtemp_6);
    VL_COND_WIWW(152, vlSelfRef.__PVT__write_data_fifo_tx_snpreq, (IData)(vlSelfRef.__PVT__flit_fromcc_req_or_snp), __Vtemp_4, __Vtemp_7);
    VL_ASSIGN_W(73,vlSelfRef.__PVT__wrdata_snprsp_flit_fifo, vlSelfRef.__PVT__snprsp_flit_s);
    VL_ASSIGN_W(152,vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wrdata, vlSelfRef.__PVT__write_data_fifo_tx_snpreq);
    VL_ASSIGN_W(73,vlSelf->__PVT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0->__PVT__fifo_wrdata, vlSelfRef.__PVT__wrdata_snprsp_flit_fifo);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_snptxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__5(Vsig_topology_top_sig_node_snptxflit_top__pi60* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_snptxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_6;
    VlWide<5>/*159:0*/ __Vtemp_7;
    // Body
    VL_CONST_W_4X(128,__Vtemp_1,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 151, __Vtemp_2, vlSelfRef.__PVT__flit_from_id_translator, 0U, 108);
    VL_AND_W(4, __Vtemp_3, __Vtemp_1, __Vtemp_2);
    VL_CONCAT_WIW(119,11,108, vlSelfRef.__PVT__snp_flit_out_mux_s, 
                  (0x7ffU & VL_SEL_IWII(161, vlSelfRef.__PVT__flit_out_mux, 0x6cU, 11)), __Vtemp_3);
    VL_CONST_W_1X(73,vlSelfRef.__PVT__snprsp_flit_s,0x00000000);
    VL_ASSIGNSEL_WI(73,26,0U, vlSelfRef.__PVT__snprsp_flit_s, 
                    VL_CONCAT_III(26,11,15, (0x7ffU 
                                             & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 4U, 11)), 
                                  VL_CONCAT_III(15,11,4, 
                                                (0x7ffU 
                                                 & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x6cU, 11)), 
                                                (0xfU 
                                                 & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0U, 4)))));
    VL_ASSIGNSEL_WI(73,17,0x1aU, vlSelfRef.__PVT__snprsp_flit_s, 
                    VL_CONCAT_III(17,5,12, 1U, (0xfffU 
                                                & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0xfU, 12))));
    VL_CONCAT_WIW(152,1,151, __Vtemp_4, (IData)(vlSelfRef.__PVT__flit_fromcc_req_or_snp), vlSelfRef.__PVT__flit_from_id_translator);
    VL_EXTEND_WQ(96,53, __Vtemp_5, VL_CONCAT_QIQ(53,2,51, 
                                                 VL_CONCAT_III(2,1,1, 
                                                               (1U 
                                                                & VL_BITSEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x6bU)), 
                                                               (1U 
                                                                & VL_BITSEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x6aU))), 
                                                 VL_CONCAT_QIQ(51,1,50, 
                                                               (1U 
                                                                & VL_BITSEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x69U)), 
                                                               VL_CONCAT_QIQ(50,1,49, 
                                                                             (1U 
                                                                              & VL_BITSEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x68U)), 
                                                                             (0x1ffffffffffffULL 
                                                                              & VL_SEL_QWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x37U, 49))))));
    VL_CONCAT_WWQ(151,96,55, __Vtemp_6, __Vtemp_5, 
                  VL_CONCAT_QII(55,28,27, VL_CONCAT_III(28,5,23, 
                                                        (0x1fU 
                                                         & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x32U, 5)), 
                                                        VL_CONCAT_III(23,12,11, 
                                                                      (0xfffU 
                                                                       & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x26U, 12)), 
                                                                      (0x7ffU 
                                                                       & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x1bU, 11)))), 
                                VL_CONCAT_III(27,12,15, 
                                              (0xfffU 
                                               & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0xfU, 12)), 
                                              VL_CONCAT_III(15,11,4, 
                                                            (0x7ffU 
                                                             & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x6cU, 11)), 
                                                            (0xfU 
                                                             & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0U, 4))))));
    VL_CONCAT_WIW(152,1,151, __Vtemp_7, (IData)(vlSelfRef.__PVT__flit_fromcc_req_or_snp), __Vtemp_6);
    VL_COND_WIWW(152, vlSelfRef.__PVT__write_data_fifo_tx_snpreq, (IData)(vlSelfRef.__PVT__flit_fromcc_req_or_snp), __Vtemp_4, __Vtemp_7);
    VL_ASSIGN_W(73,vlSelfRef.__PVT__wrdata_snprsp_flit_fifo, vlSelfRef.__PVT__snprsp_flit_s);
    VL_ASSIGN_W(152,vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wrdata, vlSelfRef.__PVT__write_data_fifo_tx_snpreq);
    VL_ASSIGN_W(73,vlSelf->__PVT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0->__PVT__fifo_wrdata, vlSelfRef.__PVT__wrdata_snprsp_flit_fifo);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_snptxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__5(Vsig_topology_top_sig_node_snptxflit_top__pi60* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_snptxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_6;
    VlWide<5>/*159:0*/ __Vtemp_7;
    // Body
    VL_CONST_W_4X(128,__Vtemp_1,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 151, __Vtemp_2, vlSelfRef.__PVT__flit_from_id_translator, 0U, 108);
    VL_AND_W(4, __Vtemp_3, __Vtemp_1, __Vtemp_2);
    VL_CONCAT_WIW(119,11,108, vlSelfRef.__PVT__snp_flit_out_mux_s, 
                  (0x7ffU & VL_SEL_IWII(161, vlSelfRef.__PVT__flit_out_mux, 0x6cU, 11)), __Vtemp_3);
    VL_CONST_W_1X(73,vlSelfRef.__PVT__snprsp_flit_s,0x00000000);
    VL_ASSIGNSEL_WI(73,26,0U, vlSelfRef.__PVT__snprsp_flit_s, 
                    VL_CONCAT_III(26,11,15, (0x7ffU 
                                             & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 4U, 11)), 
                                  VL_CONCAT_III(15,11,4, 
                                                (0x7ffU 
                                                 & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x6cU, 11)), 
                                                (0xfU 
                                                 & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0U, 4)))));
    VL_ASSIGNSEL_WI(73,17,0x1aU, vlSelfRef.__PVT__snprsp_flit_s, 
                    VL_CONCAT_III(17,5,12, 1U, (0xfffU 
                                                & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0xfU, 12))));
    VL_CONCAT_WIW(152,1,151, __Vtemp_4, (IData)(vlSelfRef.__PVT__flit_fromcc_req_or_snp), vlSelfRef.__PVT__flit_from_id_translator);
    VL_EXTEND_WQ(96,53, __Vtemp_5, VL_CONCAT_QIQ(53,2,51, 
                                                 VL_CONCAT_III(2,1,1, 
                                                               (1U 
                                                                & VL_BITSEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x6bU)), 
                                                               (1U 
                                                                & VL_BITSEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x6aU))), 
                                                 VL_CONCAT_QIQ(51,1,50, 
                                                               (1U 
                                                                & VL_BITSEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x69U)), 
                                                               VL_CONCAT_QIQ(50,1,49, 
                                                                             (1U 
                                                                              & VL_BITSEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x68U)), 
                                                                             (0x1ffffffffffffULL 
                                                                              & VL_SEL_QWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x37U, 49))))));
    VL_CONCAT_WWQ(151,96,55, __Vtemp_6, __Vtemp_5, 
                  VL_CONCAT_QII(55,28,27, VL_CONCAT_III(28,5,23, 
                                                        (0x1fU 
                                                         & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x32U, 5)), 
                                                        VL_CONCAT_III(23,12,11, 
                                                                      (0xfffU 
                                                                       & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x26U, 12)), 
                                                                      (0x7ffU 
                                                                       & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x1bU, 11)))), 
                                VL_CONCAT_III(27,12,15, 
                                              (0xfffU 
                                               & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0xfU, 12)), 
                                              VL_CONCAT_III(15,11,4, 
                                                            (0x7ffU 
                                                             & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0x6cU, 11)), 
                                                            (0xfU 
                                                             & VL_SEL_IWII(119, vlSelfRef.__PVT__snp_flit_out_mux_s, 0U, 4))))));
    VL_CONCAT_WIW(152,1,151, __Vtemp_7, (IData)(vlSelfRef.__PVT__flit_fromcc_req_or_snp), __Vtemp_6);
    VL_COND_WIWW(152, vlSelfRef.__PVT__write_data_fifo_tx_snpreq, (IData)(vlSelfRef.__PVT__flit_fromcc_req_or_snp), __Vtemp_4, __Vtemp_7);
    VL_ASSIGN_W(73,vlSelfRef.__PVT__wrdata_snprsp_flit_fifo, vlSelfRef.__PVT__snprsp_flit_s);
    VL_ASSIGN_W(152,vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wrdata, vlSelfRef.__PVT__write_data_fifo_tx_snpreq);
    VL_ASSIGN_W(73,vlSelf->__PVT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0->__PVT__fifo_wrdata, vlSelfRef.__PVT__wrdata_snprsp_flit_fifo);
}
