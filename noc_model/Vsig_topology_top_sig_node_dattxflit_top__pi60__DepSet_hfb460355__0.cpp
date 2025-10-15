// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_fifo_synchclk_flop__pi69.h"
#include "Vsig_topology_top_sig_node_dattxflit_top__pi60.h"

extern const VlWide<22>/*703:0*/ Vsig_topology_top__ConstPool__CONST_h93abe68d_0;

VL_INLINE_OPT void Vsig_topology_top_sig_node_dattxflit_top__pi60___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__0(Vsig_topology_top_sig_node_dattxflit_top__pi60* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_dattxflit_top__pi60___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<22>/*703:0*/ __Vtemp_1;
    // Body
    vlSelfRef.__PVT__store_fifo_full = vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_full;
    vlSelfRef.__PVT__empty_flit_store_fifo = vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_empty;
    VL_ASSIGN_W(686,vlSelfRef.__PVT__readdata_storefifo, vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rddata);
    VL_SEL_WWII(680, 686, __Vtemp_1, vlSelfRef.__PVT__readdata_storefifo, 0U, 680);
    VL_AND_W(22, vlSelfRef.__PVT__readdata_storefifo_s, Vsig_topology_top__ConstPool__CONST_h93abe68d_0, __Vtemp_1);
    vlSelfRef.__PVT__tu_tag = VL_CONCAT_III(20,4,16, 
                                            (0xfU & 
                                             VL_SEL_IWII(680, vlSelfRef.__PVT__readdata_storefifo_s, 0x63U, 4)), 
                                            (0xffffU 
                                             & VL_SEL_IWII(680, vlSelfRef.__PVT__readdata_storefifo_s, 0x53U, 16)));
    vlSelfRef.__PVT__IC_TraceTag = (1U & VL_BITSEL_IWII(680, vlSelfRef.__PVT__readdata_storefifo_s, 0x67U));
    VL_ASSIGNSEL_WI(83,26,0U, vlSelfRef.__PVT__IC_TXFLIT_hdr, 
                    VL_CONCAT_III(26,11,15, (0x7ffU 
                                             & VL_SEL_IWII(680, vlSelfRef.__PVT__readdata_storefifo_s, 0xfU, 11)), 
                                  VL_CONCAT_III(15,11,4, 
                                                (0x7ffU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__readdata_storefifo_s, 4U, 11)), 
                                                (0xfU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__readdata_storefifo_s, 0U, 4)))));
    VL_ASSIGNSEL_WI(83,23,0x1aU, vlSelfRef.__PVT__IC_TXFLIT_hdr, 
                    VL_CONCAT_III(23,11,12, (0x7ffU 
                                             & VL_SEL_IWII(680, vlSelfRef.__PVT__readdata_storefifo_s, 0x26U, 11)), 
                                  (0xfffU & VL_SEL_IWII(680, vlSelfRef.__PVT__readdata_storefifo_s, 0x1aU, 12))));
    VL_ASSIGNSEL_WI(83,9,0x31U, vlSelfRef.__PVT__IC_TXFLIT_hdr, 
                    VL_CONCAT_III(9,3,6, (7U & VL_SEL_IWII(680, vlSelfRef.__PVT__readdata_storefifo_s, 0x37U, 3)), 
                                  VL_CONCAT_III(6,2,4, 
                                                (3U 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__readdata_storefifo_s, 0x35U, 2)), 
                                                (0xfU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__readdata_storefifo_s, 0x31U, 4)))));
    VL_ASSIGNSEL_WI(83,19,0x3aU, vlSelfRef.__PVT__IC_TXFLIT_hdr, 
                    VL_CONCAT_III(19,12,7, (0xfffU 
                                            & VL_SEL_IWII(680, vlSelfRef.__PVT__readdata_storefifo_s, 0x41U, 12)), 
                                  VL_CONCAT_III(7,3,4, 
                                                (7U 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__readdata_storefifo_s, 0x3eU, 3)), 
                                                (0xfU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__readdata_storefifo_s, 0x3aU, 4)))));
    VL_ASSIGNSEL_WI(83,6,0x4dU, vlSelfRef.__PVT__IC_TXFLIT_hdr, 
                    VL_CONCAT_III(6,2,4, (3U & VL_SEL_IWII(680, vlSelfRef.__PVT__readdata_storefifo_s, 0x51U, 2)), 
                                  VL_CONCAT_III(4,2,2, 
                                                (3U 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__readdata_storefifo_s, 0x4fU, 2)), 
                                                (3U 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__readdata_storefifo_s, 0x4dU, 2)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_dattxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__3(Vsig_topology_top_sig_node_dattxflit_top__pi60* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_dattxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<22>/*703:0*/ __Vtemp_1;
    // Body
    VL_CONCAT_WIW(686,6,680, vlSelfRef.__PVT__write_data_fifo, 
                  (0x3fU & VL_SEL_IWII(686, vlSelfRef.__PVT__TX_DATFLIT_mux, 0x2a8U, 6)), vlSelfRef.__PVT__flit_from_id_translator);
    VL_ASSIGN_W(686,vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wrdata, vlSelfRef.__PVT__write_data_fifo);
    VL_SEL_WWII(680, 686, __Vtemp_1, vlSelfRef.__PVT__write_data_fifo, 0U, 680);
    VL_AND_W(22, vlSelfRef.__PVT__write_data_fifo_s, Vsig_topology_top__ConstPool__CONST_h93abe68d_0, __Vtemp_1);
    vlSelfRef.__PVT__tu_tag_bypass = VL_CONCAT_III(20,4,16, 
                                                   (0xfU 
                                                    & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo_s, 0x63U, 4)), 
                                                   (0xffffU 
                                                    & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo_s, 0x53U, 16)));
    VL_ASSIGNSEL_WI(83,26,0U, vlSelfRef.__PVT__IC_TXFLIT_hdr_bypass, 
                    VL_CONCAT_III(26,11,15, (0x7ffU 
                                             & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo_s, 0xfU, 11)), 
                                  VL_CONCAT_III(15,11,4, 
                                                (0x7ffU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo_s, 4U, 11)), 
                                                (0xfU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo_s, 0U, 4)))));
    VL_ASSIGNSEL_WI(83,23,0x1aU, vlSelfRef.__PVT__IC_TXFLIT_hdr_bypass, 
                    VL_CONCAT_III(23,11,12, (0x7ffU 
                                             & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo_s, 0x26U, 11)), 
                                  (0xfffU & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo_s, 0x1aU, 12))));
    VL_ASSIGNSEL_WI(83,9,0x31U, vlSelfRef.__PVT__IC_TXFLIT_hdr_bypass, 
                    VL_CONCAT_III(9,3,6, (7U & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo_s, 0x37U, 3)), 
                                  VL_CONCAT_III(6,2,4, 
                                                (3U 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo_s, 0x35U, 2)), 
                                                (0xfU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo_s, 0x31U, 4)))));
    VL_ASSIGNSEL_WI(83,19,0x3aU, vlSelfRef.__PVT__IC_TXFLIT_hdr_bypass, 
                    VL_CONCAT_III(19,12,7, (0xfffU 
                                            & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo_s, 0x41U, 12)), 
                                  VL_CONCAT_III(7,3,4, 
                                                (7U 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo_s, 0x3eU, 3)), 
                                                (0xfU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo_s, 0x3aU, 4)))));
    VL_ASSIGNSEL_WI(83,6,0x4dU, vlSelfRef.__PVT__IC_TXFLIT_hdr_bypass, 
                    VL_CONCAT_III(6,2,4, (3U & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo_s, 0x51U, 2)), 
                                  VL_CONCAT_III(4,2,2, 
                                                (3U 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo_s, 0x4fU, 2)), 
                                                (3U 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo_s, 0x4dU, 2)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_dattxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__4(Vsig_topology_top_sig_node_dattxflit_top__pi60* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_dattxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rden_storefifo = ((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                                       & (IData)(vlSelfRef.__PVT__porthas_credits));
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_storefifo;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_dattxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__5(Vsig_topology_top_sig_node_dattxflit_top__pi60* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_dattxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rden_storefifo_bypass = (((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                                               & (IData)(vlSelfRef.__PVT__TX_DATFLITV_mux)) 
                                              & (IData)(vlSelfRef.__PVT__porthas_credits));
    vlSelfRef.__PVT__opened_fiforoom = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                        | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelfRef.__PVT__wren_flit_store_fifo = ((IData)(vlSelfRef.__PVT__TX_DATFLITV_mux) 
                                             & (~ (IData)(vlSelfRef.__PVT__rden_storefifo_bypass)));
    vlSelfRef.__PVT__TX_DATFLITV = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                    | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_flit_store_fifo;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_dattxflit_top__pi60___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__0(Vsig_topology_top_sig_node_dattxflit_top__pi60* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_dattxflit_top__pi60___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<22>/*703:0*/ __Vtemp_1;
    // Body
    vlSelfRef.__PVT__store_fifo_full = vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_full;
    vlSelfRef.__PVT__empty_flit_store_fifo = vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_empty;
    VL_ASSIGN_W(686,vlSelfRef.__PVT__readdata_storefifo, vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rddata);
    VL_SEL_WWII(680, 686, __Vtemp_1, vlSelfRef.__PVT__readdata_storefifo, 0U, 680);
    VL_AND_W(22, vlSelfRef.__PVT__readdata_storefifo_s, Vsig_topology_top__ConstPool__CONST_h93abe68d_0, __Vtemp_1);
    vlSelfRef.__PVT__tu_tag = VL_CONCAT_III(20,4,16, 
                                            (0xfU & 
                                             VL_SEL_IWII(680, vlSelfRef.__PVT__readdata_storefifo_s, 0x63U, 4)), 
                                            (0xffffU 
                                             & VL_SEL_IWII(680, vlSelfRef.__PVT__readdata_storefifo_s, 0x53U, 16)));
    vlSelfRef.__PVT__IC_TraceTag = (1U & VL_BITSEL_IWII(680, vlSelfRef.__PVT__readdata_storefifo_s, 0x67U));
    VL_ASSIGNSEL_WI(83,26,0U, vlSelfRef.__PVT__IC_TXFLIT_hdr, 
                    VL_CONCAT_III(26,11,15, (0x7ffU 
                                             & VL_SEL_IWII(680, vlSelfRef.__PVT__readdata_storefifo_s, 0xfU, 11)), 
                                  VL_CONCAT_III(15,11,4, 
                                                (0x7ffU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__readdata_storefifo_s, 4U, 11)), 
                                                (0xfU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__readdata_storefifo_s, 0U, 4)))));
    VL_ASSIGNSEL_WI(83,23,0x1aU, vlSelfRef.__PVT__IC_TXFLIT_hdr, 
                    VL_CONCAT_III(23,11,12, (0x7ffU 
                                             & VL_SEL_IWII(680, vlSelfRef.__PVT__readdata_storefifo_s, 0x26U, 11)), 
                                  (0xfffU & VL_SEL_IWII(680, vlSelfRef.__PVT__readdata_storefifo_s, 0x1aU, 12))));
    VL_ASSIGNSEL_WI(83,9,0x31U, vlSelfRef.__PVT__IC_TXFLIT_hdr, 
                    VL_CONCAT_III(9,3,6, (7U & VL_SEL_IWII(680, vlSelfRef.__PVT__readdata_storefifo_s, 0x37U, 3)), 
                                  VL_CONCAT_III(6,2,4, 
                                                (3U 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__readdata_storefifo_s, 0x35U, 2)), 
                                                (0xfU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__readdata_storefifo_s, 0x31U, 4)))));
    VL_ASSIGNSEL_WI(83,19,0x3aU, vlSelfRef.__PVT__IC_TXFLIT_hdr, 
                    VL_CONCAT_III(19,12,7, (0xfffU 
                                            & VL_SEL_IWII(680, vlSelfRef.__PVT__readdata_storefifo_s, 0x41U, 12)), 
                                  VL_CONCAT_III(7,3,4, 
                                                (7U 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__readdata_storefifo_s, 0x3eU, 3)), 
                                                (0xfU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__readdata_storefifo_s, 0x3aU, 4)))));
    VL_ASSIGNSEL_WI(83,6,0x4dU, vlSelfRef.__PVT__IC_TXFLIT_hdr, 
                    VL_CONCAT_III(6,2,4, (3U & VL_SEL_IWII(680, vlSelfRef.__PVT__readdata_storefifo_s, 0x51U, 2)), 
                                  VL_CONCAT_III(4,2,2, 
                                                (3U 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__readdata_storefifo_s, 0x4fU, 2)), 
                                                (3U 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__readdata_storefifo_s, 0x4dU, 2)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_dattxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__3(Vsig_topology_top_sig_node_dattxflit_top__pi60* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_dattxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<22>/*703:0*/ __Vtemp_1;
    // Body
    VL_CONCAT_WIW(686,6,680, vlSelfRef.__PVT__write_data_fifo, 
                  (0x3fU & VL_SEL_IWII(686, vlSelfRef.__PVT__TX_DATFLIT_mux, 0x2a8U, 6)), vlSelfRef.__PVT__flit_from_id_translator);
    VL_ASSIGN_W(686,vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wrdata, vlSelfRef.__PVT__write_data_fifo);
    VL_SEL_WWII(680, 686, __Vtemp_1, vlSelfRef.__PVT__write_data_fifo, 0U, 680);
    VL_AND_W(22, vlSelfRef.__PVT__write_data_fifo_s, Vsig_topology_top__ConstPool__CONST_h93abe68d_0, __Vtemp_1);
    vlSelfRef.__PVT__tu_tag_bypass = VL_CONCAT_III(20,4,16, 
                                                   (0xfU 
                                                    & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo_s, 0x63U, 4)), 
                                                   (0xffffU 
                                                    & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo_s, 0x53U, 16)));
    VL_ASSIGNSEL_WI(83,26,0U, vlSelfRef.__PVT__IC_TXFLIT_hdr_bypass, 
                    VL_CONCAT_III(26,11,15, (0x7ffU 
                                             & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo_s, 0xfU, 11)), 
                                  VL_CONCAT_III(15,11,4, 
                                                (0x7ffU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo_s, 4U, 11)), 
                                                (0xfU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo_s, 0U, 4)))));
    VL_ASSIGNSEL_WI(83,23,0x1aU, vlSelfRef.__PVT__IC_TXFLIT_hdr_bypass, 
                    VL_CONCAT_III(23,11,12, (0x7ffU 
                                             & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo_s, 0x26U, 11)), 
                                  (0xfffU & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo_s, 0x1aU, 12))));
    VL_ASSIGNSEL_WI(83,9,0x31U, vlSelfRef.__PVT__IC_TXFLIT_hdr_bypass, 
                    VL_CONCAT_III(9,3,6, (7U & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo_s, 0x37U, 3)), 
                                  VL_CONCAT_III(6,2,4, 
                                                (3U 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo_s, 0x35U, 2)), 
                                                (0xfU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo_s, 0x31U, 4)))));
    VL_ASSIGNSEL_WI(83,19,0x3aU, vlSelfRef.__PVT__IC_TXFLIT_hdr_bypass, 
                    VL_CONCAT_III(19,12,7, (0xfffU 
                                            & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo_s, 0x41U, 12)), 
                                  VL_CONCAT_III(7,3,4, 
                                                (7U 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo_s, 0x3eU, 3)), 
                                                (0xfU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo_s, 0x3aU, 4)))));
    VL_ASSIGNSEL_WI(83,6,0x4dU, vlSelfRef.__PVT__IC_TXFLIT_hdr_bypass, 
                    VL_CONCAT_III(6,2,4, (3U & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo_s, 0x51U, 2)), 
                                  VL_CONCAT_III(4,2,2, 
                                                (3U 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo_s, 0x4fU, 2)), 
                                                (3U 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo_s, 0x4dU, 2)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_dattxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__4(Vsig_topology_top_sig_node_dattxflit_top__pi60* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_dattxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rden_storefifo = ((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                                       & (IData)(vlSelfRef.__PVT__porthas_credits));
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_storefifo;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_dattxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__5(Vsig_topology_top_sig_node_dattxflit_top__pi60* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_dattxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rden_storefifo_bypass = (((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                                               & (IData)(vlSelfRef.__PVT__TX_DATFLITV_mux)) 
                                              & (IData)(vlSelfRef.__PVT__porthas_credits));
    vlSelfRef.__PVT__opened_fiforoom = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                        | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelfRef.__PVT__wren_flit_store_fifo = ((IData)(vlSelfRef.__PVT__TX_DATFLITV_mux) 
                                             & (~ (IData)(vlSelfRef.__PVT__rden_storefifo_bypass)));
    vlSelfRef.__PVT__TX_DATFLITV = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                    | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_flit_store_fifo;
}
