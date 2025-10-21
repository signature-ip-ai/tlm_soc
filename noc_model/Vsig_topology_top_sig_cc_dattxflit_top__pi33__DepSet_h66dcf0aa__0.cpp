// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_cc_dattxflit_top__pi33.h"

VL_INLINE_OPT void Vsig_topology_top_sig_cc_dattxflit_top__pi33___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__0(Vsig_topology_top_sig_cc_dattxflit_top__pi33* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cc_dattxflit_top__pi33___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_txflit_mux_0.__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__flit_store_fifo_0.__PVT__rstb 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0.__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_dattxflit_top__pi33___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__1(Vsig_topology_top_sig_cc_dattxflit_top__pi33* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cc_dattxflit_top__pi33___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_txflit_mux_0.__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__flit_store_fifo_0.__PVT__fifo_clk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0.__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_dattxflit_top__pi33___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__0(Vsig_topology_top_sig_cc_dattxflit_top__pi33* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cc_dattxflit_top__pi33___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_txflit_mux_0.__PVT__valid_flit_vc0 
        = vlSelfRef.__PVT__valid_req_vec_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0.__PVT__end_req_vec_vc0 
        = vlSelfRef.__PVT__end_req_vec_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_txflit_mux_0.__PVT__valid_flit_vc1 
        = vlSelfRef.__PVT__valid_req_vec_vc1;
    vlSelfRef.__PVT__consumed_fiforoom = ((0U != (VL_EXTEND_II(32,10, (IData)(vlSelfRef.__PVT__gnt_vec_vc0)) 
                                                  & VL_EXTEND_II(32,10, (IData)(vlSelfRef.__PVT__valid_req_vec_vc0)))) 
                                          | (0U != 
                                             (VL_EXTEND_II(32,10, (IData)(vlSelfRef.__PVT__gnt_vec_vc1)) 
                                              & VL_EXTEND_II(32,10, (IData)(vlSelfRef.__PVT__valid_req_vec_vc1)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0.__PVT__end_req_vec_vc1 
        = vlSelfRef.__PVT__end_req_vec_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0.__PVT__req_vec_vc0 
        = vlSelfRef.__PVT__req_vec_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0.__PVT__req_vec_vc1 
        = vlSelfRef.__PVT__req_vec_vc1;
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

VL_INLINE_OPT void Vsig_topology_top_sig_cc_dattxflit_top__pi33___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__1(Vsig_topology_top_sig_cc_dattxflit_top__pi33* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cc_dattxflit_top__pi33___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_txflit_mux_0.__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_vc0);
    VL_ASSIGN_W(6860,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_txflit_mux_0.__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_dattxflit_top__pi33___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__0(Vsig_topology_top_sig_cc_dattxflit_top__pi33* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cc_dattxflit_top__pi33___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_vec_vc1 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0.__PVT__gnt_vec_vc1;
    vlSelfRef.__PVT__gnt_vec_vc0 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0.__PVT__gnt_vec_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_txflit_mux_0.__PVT__gnt_vec_vc1 
        = vlSelfRef.__PVT__gnt_vec_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_txflit_mux_0.__PVT__gnt_vec_vc0 
        = vlSelfRef.__PVT__gnt_vec_vc0;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_dattxflit_top__pi33___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__0(Vsig_topology_top_sig_cc_dattxflit_top__pi33* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cc_dattxflit_top__pi33___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_txflit_mux_0.__PVT__valid_flit_vc0 
        = vlSelfRef.__PVT__valid_req_vec_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0.__PVT__end_req_vec_vc0 
        = vlSelfRef.__PVT__end_req_vec_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_txflit_mux_0.__PVT__valid_flit_vc1 
        = vlSelfRef.__PVT__valid_req_vec_vc1;
    vlSelfRef.__PVT__consumed_fiforoom = ((0U != (VL_EXTEND_II(32,10, (IData)(vlSelfRef.__PVT__gnt_vec_vc0)) 
                                                  & VL_EXTEND_II(32,10, (IData)(vlSelfRef.__PVT__valid_req_vec_vc0)))) 
                                          | (0U != 
                                             (VL_EXTEND_II(32,10, (IData)(vlSelfRef.__PVT__gnt_vec_vc1)) 
                                              & VL_EXTEND_II(32,10, (IData)(vlSelfRef.__PVT__valid_req_vec_vc1)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0.__PVT__end_req_vec_vc1 
        = vlSelfRef.__PVT__end_req_vec_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0.__PVT__req_vec_vc0 
        = vlSelfRef.__PVT__req_vec_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0.__PVT__req_vec_vc1 
        = vlSelfRef.__PVT__req_vec_vc1;
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

VL_INLINE_OPT void Vsig_topology_top_sig_cc_dattxflit_top__pi33___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__1(Vsig_topology_top_sig_cc_dattxflit_top__pi33* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cc_dattxflit_top__pi33___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_txflit_mux_0.__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_vc0);
    VL_ASSIGN_W(6860,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_txflit_mux_0.__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_dattxflit_top__pi33___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__0(Vsig_topology_top_sig_cc_dattxflit_top__pi33* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cc_dattxflit_top__pi33___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__store_fifo_full = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__flit_store_fifo_0.__PVT__fifo_full;
    vlSelfRef.__PVT__empty_flit_store_fifo = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__flit_store_fifo_0.__PVT__fifo_empty;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__readdata_storefifo, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__flit_store_fifo_0.__PVT__fifo_rddata);
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_dattxflit_top__pi33___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__1(Vsig_topology_top_sig_cc_dattxflit_top__pi33* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cc_dattxflit_top__pi33___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__available_fiforoom = vlSelfRef.__PVT__available_fiforoom;
    vlSelfRef.__Vdly__available_fiforoom = ((IData)(vlSelfRef.__PVT__rstb_ic_clk)
                                             ? (IData)(vlSelfRef.__PVT__available_fiforoom_nxt)
                                             : 8U);
    vlSelfRef.__PVT__available_fiforoom = vlSelfRef.__Vdly__available_fiforoom;
    vlSelfRef.__PVT__flit_storefifo_has_space = (7U 
                                                 & VL_REPLICATE_IOI(1,
                                                                    (0U 
                                                                     != (IData)(vlSelfRef.__PVT__available_fiforoom)), 3U));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0.__PVT__vcx_has_credits 
        = vlSelfRef.__PVT__flit_storefifo_has_space;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_dattxflit_top__pi33___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__2(Vsig_topology_top_sig_cc_dattxflit_top__pi33* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cc_dattxflit_top__pi33___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_txflit_mux_0.__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__flit_store_fifo_0.__PVT__fifo_clk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0.__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
}

extern const VlWide<22>/*703:0*/ Vsig_topology_top__ConstPool__CONST_h93abe68d_0;

VL_INLINE_OPT void Vsig_topology_top_sig_cc_dattxflit_top__pi33___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__3(Vsig_topology_top_sig_cc_dattxflit_top__pi33* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cc_dattxflit_top__pi33___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<22>/*703:0*/ __Vtemp_1;
    // Body
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_mux, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_txflit_mux_0.__PVT__flit_out);
    vlSelfRef.__PVT__flitv_out_mux = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_txflit_mux_0.__PVT__flitv_out;
    VL_SEL_WWII(680, 686, __Vtemp_1, vlSelfRef.__PVT__flit_out_mux, 0U, 680);
    VL_AND_W(22, vlSelfRef.__PVT__write_data_fifo, Vsig_topology_top__ConstPool__CONST_h93abe68d_0, __Vtemp_1);
    VL_ASSIGN_W(680,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__flit_store_fifo_0.__PVT__fifo_wrdata, vlSelfRef.__PVT__write_data_fifo);
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_dattxflit_top__pi33___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__0(Vsig_topology_top_sig_cc_dattxflit_top__pi33* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cc_dattxflit_top__pi33___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_vec_vc1 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0.__PVT__gnt_vec_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_txflit_mux_0.__PVT__gnt_vec_vc1 
        = vlSelfRef.__PVT__gnt_vec_vc1;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_dattxflit_top__pi33___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__1(Vsig_topology_top_sig_cc_dattxflit_top__pi33* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cc_dattxflit_top__pi33___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_vec_vc0 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0.__PVT__gnt_vec_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_txflit_mux_0.__PVT__gnt_vec_vc0 
        = vlSelfRef.__PVT__gnt_vec_vc0;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_dattxflit_top__pi33___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__2(Vsig_topology_top_sig_cc_dattxflit_top__pi33* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cc_dattxflit_top__pi33___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rden_storefifo = (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                                        & (IData)(vlSelfRef.__PVT__porthas_credits)) 
                                       & (IData)(vlSelfRef.__PVT__porthas_datgnt_fromcc));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__flit_store_fifo_0.__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_storefifo;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_dattxflit_top__pi33___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__3(Vsig_topology_top_sig_cc_dattxflit_top__pi33* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cc_dattxflit_top__pi33___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rden_storefifo_bypass = ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                                                & (IData)(vlSelfRef.__PVT__flitv_out_mux)) 
                                               & (IData)(vlSelfRef.__PVT__porthas_credits)) 
                                              & (IData)(vlSelfRef.__PVT__porthas_datgnt_fromcc));
    vlSelfRef.__PVT__opened_fiforoom = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                        | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelfRef.__PVT__wren_flit_store_fifo = ((IData)(vlSelfRef.__PVT__flitv_out_mux) 
                                             & (~ (IData)(vlSelfRef.__PVT__rden_storefifo_bypass)));
    VL_COND_WIWW(680, vlSelfRef.__PVT__flit_out, (IData)(vlSelfRef.__PVT__rden_storefifo_bypass), vlSelfRef.__PVT__write_data_fifo, vlSelfRef.__PVT__readdata_storefifo);
    vlSelfRef.__PVT__flitv_out = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                  | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__flit_store_fifo_0.__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_flit_store_fifo;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_dattxflit_top__pi33___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__4(Vsig_topology_top_sig_cc_dattxflit_top__pi33* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cc_dattxflit_top__pi33___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_txflit_mux_0.__PVT__valid_flit_vc0 
        = vlSelfRef.__PVT__valid_req_vec_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0.__PVT__end_req_vec_vc0 
        = vlSelfRef.__PVT__end_req_vec_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0.__PVT__req_vec_vc0 
        = vlSelfRef.__PVT__req_vec_vc0;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_dattxflit_top__pi33___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__5(Vsig_topology_top_sig_cc_dattxflit_top__pi33* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cc_dattxflit_top__pi33___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_txflit_mux_0.__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_dattxflit_top__pi33___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__6(Vsig_topology_top_sig_cc_dattxflit_top__pi33* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cc_dattxflit_top__pi33___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_txflit_mux_0.__PVT__valid_flit_vc1 
        = vlSelfRef.__PVT__valid_req_vec_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0.__PVT__end_req_vec_vc1 
        = vlSelfRef.__PVT__end_req_vec_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0.__PVT__req_vec_vc1 
        = vlSelfRef.__PVT__req_vec_vc1;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_dattxflit_top__pi33___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__7(Vsig_topology_top_sig_cc_dattxflit_top__pi33* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cc_dattxflit_top__pi33___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_txflit_mux_0.__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_vc1);
}
