// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_l3_rsptxflit_top__F3.h"

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rsptxflit_top__F3___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__sig_l3_rsptxflit_top_0__4(Vsig_topology_top_sig_l3_rsptxflit_top__F3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_l3_rsptxflit_top__F3___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__sig_l3_rsptxflit_top_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__consumed_fiforoom = ((0U != (IData)(vlSelfRef.__PVT__gnt_vec_vc0)) 
                                          | (0U != (IData)(vlSelfRef.__PVT__gnt_vec_vc1)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rsptxflit_top__F3___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__sig_l3_rsptxflit_top_0__5(Vsig_topology_top_sig_l3_rsptxflit_top__F3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_l3_rsptxflit_top__F3___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__sig_l3_rsptxflit_top_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_fiforoom_nxt = vlSelfRef.__PVT__available_fiforoom;
    if (((IData)(vlSelfRef.__PVT__consumed_fiforoom) 
         & (~ (IData)(vlSelfRef.__PVT__opened_fiforoom)))) {
        vlSelfRef.__PVT__available_fiforoom_nxt = (0x1fU 
                                                   & ((IData)(vlSelfRef.__PVT__available_fiforoom) 
                                                      - (IData)(1U)));
    } else if (((~ (IData)(vlSelfRef.__PVT__consumed_fiforoom)) 
                & (IData)(vlSelfRef.__PVT__opened_fiforoom))) {
        vlSelfRef.__PVT__available_fiforoom_nxt = (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__available_fiforoom)));
    }
}
