// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_fifo_synchclk_flop__pi68.h"
#include "Vsig_topology_top_sig_node_rsptxflit_top.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_rsptxflit_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_rsptxflit_top_0__0(Vsig_topology_top_sig_node_rsptxflit_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rsptxflit_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_rsptxflit_top_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__empty_flit_store_fifo = vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_empty;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__readdata_storefifo, vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rddata);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rsptxflit_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_rsptxflit_top_0__4(Vsig_topology_top_sig_node_rsptxflit_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rsptxflit_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_rsptxflit_top_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(73,vlSelfRef.__PVT__write_data_fifo, vlSelfRef.__PVT__flit_from_id_translator);
    VL_ASSIGN_W(73,vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wrdata, vlSelfRef.__PVT__write_data_fifo);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rsptxflit_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_rsptxflit_top_0__5(Vsig_topology_top_sig_node_rsptxflit_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rsptxflit_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_rsptxflit_top_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rden_storefifo = ((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                                       & (IData)(vlSelfRef.__PVT__porthas_credits));
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_storefifo;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rsptxflit_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_rsptxflit_top_0__6(Vsig_topology_top_sig_node_rsptxflit_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rsptxflit_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_rsptxflit_top_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rden_storefifo_bypass = (((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                                               & (IData)(vlSelfRef.__PVT__flitv_out_mux)) 
                                              & (IData)(vlSelfRef.__PVT__porthas_credits));
    vlSelfRef.__PVT__opened_fiforoom = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                        | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelfRef.__PVT__wren_flit_store_fifo = ((IData)(vlSelfRef.__PVT__flitv_out_mux) 
                                             & (~ (IData)(vlSelfRef.__PVT__rden_storefifo_bypass)));
    vlSelfRef.__PVT__flitv_out = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                  | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_flit_store_fifo;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rsptxflit_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_rsptxflit_top_0__0(Vsig_topology_top_sig_node_rsptxflit_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rsptxflit_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_rsptxflit_top_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__empty_flit_store_fifo = vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_empty;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__readdata_storefifo, vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rddata);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rsptxflit_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_rsptxflit_top_0__4(Vsig_topology_top_sig_node_rsptxflit_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rsptxflit_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_rsptxflit_top_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(73,vlSelfRef.__PVT__write_data_fifo, vlSelfRef.__PVT__flit_from_id_translator);
    VL_ASSIGN_W(73,vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wrdata, vlSelfRef.__PVT__write_data_fifo);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rsptxflit_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_rsptxflit_top_0__5(Vsig_topology_top_sig_node_rsptxflit_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rsptxflit_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_rsptxflit_top_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rden_storefifo = ((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                                       & (IData)(vlSelfRef.__PVT__porthas_credits));
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_storefifo;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rsptxflit_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_rsptxflit_top_0__6(Vsig_topology_top_sig_node_rsptxflit_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rsptxflit_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_rsptxflit_top_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rden_storefifo_bypass = (((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                                               & (IData)(vlSelfRef.__PVT__flitv_out_mux)) 
                                              & (IData)(vlSelfRef.__PVT__porthas_credits));
    vlSelfRef.__PVT__opened_fiforoom = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                        | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelfRef.__PVT__wren_flit_store_fifo = ((IData)(vlSelfRef.__PVT__flitv_out_mux) 
                                             & (~ (IData)(vlSelfRef.__PVT__rden_storefifo_bypass)));
    vlSelfRef.__PVT__flitv_out = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                  | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_flit_store_fifo;
}
