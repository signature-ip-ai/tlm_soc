// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_node_dattxflit_top__pi60.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_dattxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__6(Vsig_topology_top_sig_node_dattxflit_top__pi60* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_dattxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<16>/*511:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<6>/*191:0*/ __Vtemp_4;
    VlWide<22>/*703:0*/ __Vtemp_5;
    VlWide<16>/*511:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<4>/*127:0*/ __Vtemp_8;
    VlWide<6>/*191:0*/ __Vtemp_9;
    VlWide<22>/*703:0*/ __Vtemp_10;
    // Body
    VL_SEL_WWII(512, 680, __Vtemp_1, vlSelfRef.__PVT__write_data_fifo_s, 0xa8U, 512);
    VL_CONCAT_WQI(65,64,1, __Vtemp_2, VL_SEL_QWII(680, vlSelfRef.__PVT__write_data_fifo_s, 0x68U, 64), 
                  (1U & VL_BITSEL_IWII(680, vlSelfRef.__PVT__write_data_fifo_s, 0x67U)));
    VL_CONCAT_WIW(103,20,83, __Vtemp_3, vlSelfRef.__PVT__tu_tag_bypass, vlSelfRef.__PVT__IC_TXFLIT_hdr_bypass);
    VL_CONCAT_WWW(168,65,103, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    VL_CONCAT_WWW(680,512,168, __Vtemp_5, __Vtemp_1, __Vtemp_4);
    VL_SEL_WWII(512, 680, __Vtemp_6, vlSelfRef.__PVT__readdata_storefifo_s, 0xa8U, 512);
    VL_CONCAT_WQI(65,64,1, __Vtemp_7, VL_SEL_QWII(680, vlSelfRef.__PVT__readdata_storefifo_s, 0x68U, 64), (IData)(vlSelfRef.__PVT__IC_TraceTag));
    VL_CONCAT_WIW(103,20,83, __Vtemp_8, vlSelfRef.__PVT__tu_tag, vlSelfRef.__PVT__IC_TXFLIT_hdr);
    VL_CONCAT_WWW(168,65,103, __Vtemp_9, __Vtemp_7, __Vtemp_8);
    VL_CONCAT_WWW(680,512,168, __Vtemp_10, __Vtemp_6, __Vtemp_9);
    VL_COND_WIWW(680, vlSelfRef.__PVT__TX_DATFLIT, (IData)(vlSelfRef.__PVT__rden_storefifo_bypass), __Vtemp_5, __Vtemp_10);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_dattxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__12(Vsig_topology_top_sig_node_dattxflit_top__pi60* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_dattxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__12\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_fiforoom_nxt = vlSelfRef.__PVT__available_fiforoom;
    vlSelfRef.__PVT__available_fiforoom_nxt = (0x1fU 
                                               & ((2U 
                                                   == 
                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__consumed_fiforoom), (IData)(vlSelfRef.__PVT__opened_fiforoom)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__available_fiforoom) 
                                                   - (IData)(1U))
                                                   : 
                                                  ((1U 
                                                    == 
                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__consumed_fiforoom), (IData)(vlSelfRef.__PVT__opened_fiforoom)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__available_fiforoom))
                                                    : (IData)(vlSelfRef.__PVT__available_fiforoom))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_dattxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__6(Vsig_topology_top_sig_node_dattxflit_top__pi60* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_dattxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<16>/*511:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<6>/*191:0*/ __Vtemp_4;
    VlWide<22>/*703:0*/ __Vtemp_5;
    VlWide<16>/*511:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<4>/*127:0*/ __Vtemp_8;
    VlWide<6>/*191:0*/ __Vtemp_9;
    VlWide<22>/*703:0*/ __Vtemp_10;
    // Body
    VL_SEL_WWII(512, 680, __Vtemp_1, vlSelfRef.__PVT__write_data_fifo_s, 0xa8U, 512);
    VL_CONCAT_WQI(65,64,1, __Vtemp_2, VL_SEL_QWII(680, vlSelfRef.__PVT__write_data_fifo_s, 0x68U, 64), 
                  (1U & VL_BITSEL_IWII(680, vlSelfRef.__PVT__write_data_fifo_s, 0x67U)));
    VL_CONCAT_WIW(103,20,83, __Vtemp_3, vlSelfRef.__PVT__tu_tag_bypass, vlSelfRef.__PVT__IC_TXFLIT_hdr_bypass);
    VL_CONCAT_WWW(168,65,103, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    VL_CONCAT_WWW(680,512,168, __Vtemp_5, __Vtemp_1, __Vtemp_4);
    VL_SEL_WWII(512, 680, __Vtemp_6, vlSelfRef.__PVT__readdata_storefifo_s, 0xa8U, 512);
    VL_CONCAT_WQI(65,64,1, __Vtemp_7, VL_SEL_QWII(680, vlSelfRef.__PVT__readdata_storefifo_s, 0x68U, 64), (IData)(vlSelfRef.__PVT__IC_TraceTag));
    VL_CONCAT_WIW(103,20,83, __Vtemp_8, vlSelfRef.__PVT__tu_tag, vlSelfRef.__PVT__IC_TXFLIT_hdr);
    VL_CONCAT_WWW(168,65,103, __Vtemp_9, __Vtemp_7, __Vtemp_8);
    VL_CONCAT_WWW(680,512,168, __Vtemp_10, __Vtemp_6, __Vtemp_9);
    VL_COND_WIWW(680, vlSelfRef.__PVT__TX_DATFLIT, (IData)(vlSelfRef.__PVT__rden_storefifo_bypass), __Vtemp_5, __Vtemp_10);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_dattxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__12(Vsig_topology_top_sig_node_dattxflit_top__pi60* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_dattxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__12\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_fiforoom_nxt = vlSelfRef.__PVT__available_fiforoom;
    vlSelfRef.__PVT__available_fiforoom_nxt = (0x1fU 
                                               & ((2U 
                                                   == 
                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__consumed_fiforoom), (IData)(vlSelfRef.__PVT__opened_fiforoom)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__available_fiforoom) 
                                                   - (IData)(1U))
                                                   : 
                                                  ((1U 
                                                    == 
                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__consumed_fiforoom), (IData)(vlSelfRef.__PVT__opened_fiforoom)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__available_fiforoom))
                                                    : (IData)(vlSelfRef.__PVT__available_fiforoom))));
}
