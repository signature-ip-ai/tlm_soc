// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_fifo_synchclk_flop__pi68.h"
#include "Vsig_topology_top_sig_node_snptxflit_top__pi60.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_snptxflit_top__pi60___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__0(Vsig_topology_top_sig_node_snptxflit_top__pi60* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_snptxflit_top__pi60___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__empty_flit_store_fifo = vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_empty;
    VL_ASSIGN_W(152,vlSelfRef.__PVT__readdata_storefifo, vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rddata);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_snptxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__6(Vsig_topology_top_sig_node_snptxflit_top__pi60* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_snptxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rden_storefifo = ((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                                       & (IData)(vlSelfRef.__PVT__porthas_credits));
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_storefifo;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_snptxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__8(Vsig_topology_top_sig_node_snptxflit_top__pi60* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_snptxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rden_storefifo_bypass = ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                                                & (IData)(vlSelfRef.__PVT__flitv_out_mux)) 
                                               & (IData)(vlSelfRef.__PVT__porthas_credits)) 
                                              & (~ 
                                                 ((IData)(vlSelfRef.__PVT__portis_RN_or_SN) 
                                                  & (IData)(vlSelfRef.__PVT__sysco_is_disabled))));
    vlSelfRef.__PVT__wren_flit_store_fifo = (((IData)(vlSelfRef.__PVT__flitv_out_mux) 
                                              & (~ (IData)(vlSelfRef.__PVT__wren_snprsp_flit_fifo))) 
                                             & (~ (IData)(vlSelfRef.__PVT__rden_storefifo_bypass)));
    vlSelfRef.__PVT__flitv_out = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                  | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_flit_store_fifo;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_snptxflit_top__pi60___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__0(Vsig_topology_top_sig_node_snptxflit_top__pi60* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_snptxflit_top__pi60___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__empty_flit_store_fifo = vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_empty;
    VL_ASSIGN_W(152,vlSelfRef.__PVT__readdata_storefifo, vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rddata);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_snptxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__6(Vsig_topology_top_sig_node_snptxflit_top__pi60* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_snptxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rden_storefifo = ((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                                       & (IData)(vlSelfRef.__PVT__porthas_credits));
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_storefifo;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_snptxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__8(Vsig_topology_top_sig_node_snptxflit_top__pi60* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_snptxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rden_storefifo_bypass = ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                                                & (IData)(vlSelfRef.__PVT__flitv_out_mux)) 
                                               & (IData)(vlSelfRef.__PVT__porthas_credits)) 
                                              & (~ 
                                                 ((IData)(vlSelfRef.__PVT__portis_RN_or_SN) 
                                                  & (IData)(vlSelfRef.__PVT__sysco_is_disabled))));
    vlSelfRef.__PVT__wren_flit_store_fifo = (((IData)(vlSelfRef.__PVT__flitv_out_mux) 
                                              & (~ (IData)(vlSelfRef.__PVT__wren_snprsp_flit_fifo))) 
                                             & (~ (IData)(vlSelfRef.__PVT__rden_storefifo_bypass)));
    vlSelfRef.__PVT__flitv_out = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                  | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_flit_store_fifo;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_snptxflit_top__pi60___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__0(Vsig_topology_top_sig_node_snptxflit_top__pi60* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_snptxflit_top__pi60___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__empty_flit_store_fifo = vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_empty;
    VL_ASSIGN_W(152,vlSelfRef.__PVT__readdata_storefifo, vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rddata);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_snptxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__6(Vsig_topology_top_sig_node_snptxflit_top__pi60* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_snptxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rden_storefifo = ((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                                       & (IData)(vlSelfRef.__PVT__porthas_credits));
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_storefifo;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_snptxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__7(Vsig_topology_top_sig_node_snptxflit_top__pi60* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_snptxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rden_storefifo_bypass = ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                                                & (IData)(vlSelfRef.__PVT__flitv_out_mux)) 
                                               & (IData)(vlSelfRef.__PVT__porthas_credits)) 
                                              & (~ 
                                                 ((IData)(vlSelfRef.__PVT__portis_RN_or_SN) 
                                                  & (IData)(vlSelfRef.__PVT__sysco_is_disabled))));
    vlSelfRef.__PVT__wren_flit_store_fifo = (((IData)(vlSelfRef.__PVT__flitv_out_mux) 
                                              & (~ (IData)(vlSelfRef.__PVT__wren_snprsp_flit_fifo))) 
                                             & (~ (IData)(vlSelfRef.__PVT__rden_storefifo_bypass)));
    vlSelfRef.__PVT__flitv_out = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                  | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_flit_store_fifo;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_snptxflit_top__pi60___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__0(Vsig_topology_top_sig_node_snptxflit_top__pi60* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_snptxflit_top__pi60___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__empty_flit_store_fifo = vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_empty;
    VL_ASSIGN_W(152,vlSelfRef.__PVT__readdata_storefifo, vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rddata);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_snptxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__6(Vsig_topology_top_sig_node_snptxflit_top__pi60* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_snptxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rden_storefifo = ((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                                       & (IData)(vlSelfRef.__PVT__porthas_credits));
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_storefifo;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_snptxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__7(Vsig_topology_top_sig_node_snptxflit_top__pi60* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_snptxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rden_storefifo_bypass = ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                                                & (IData)(vlSelfRef.__PVT__flitv_out_mux)) 
                                               & (IData)(vlSelfRef.__PVT__porthas_credits)) 
                                              & (~ 
                                                 ((IData)(vlSelfRef.__PVT__portis_RN_or_SN) 
                                                  & (IData)(vlSelfRef.__PVT__sysco_is_disabled))));
    vlSelfRef.__PVT__wren_flit_store_fifo = (((IData)(vlSelfRef.__PVT__flitv_out_mux) 
                                              & (~ (IData)(vlSelfRef.__PVT__wren_snprsp_flit_fifo))) 
                                             & (~ (IData)(vlSelfRef.__PVT__rden_storefifo_bypass)));
    vlSelfRef.__PVT__flitv_out = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                  | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_flit_store_fifo;
}
