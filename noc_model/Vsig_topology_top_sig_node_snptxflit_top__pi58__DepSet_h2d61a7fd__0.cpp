// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_node_snptxflit_top__pi58.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_snptxflit_top__pi58___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__6(Vsig_topology_top_sig_node_snptxflit_top__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_snptxflit_top__pi58___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__6\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_node_snptxflit_top__pi58___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__2(Vsig_topology_top_sig_node_snptxflit_top__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_snptxflit_top__pi58___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__available_fiforoom = vlSelfRef.__PVT__available_fiforoom;
    vlSelfRef.__Vdly__available_fiforoom = ((IData)(vlSelfRef.__PVT__rstb_ic_clk)
                                             ? (IData)(vlSelfRef.__PVT__available_fiforoom_nxt)
                                             : 4U);
    vlSelfRef.__PVT__available_fiforoom = vlSelfRef.__Vdly__available_fiforoom;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_snptxflit_top__pi58___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__9(Vsig_topology_top_sig_node_snptxflit_top__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_snptxflit_top__pi58___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(152, vlSelfRef.__PVT__flit_out, (IData)(vlSelfRef.__PVT__rden_storefifo_bypass), vlSelfRef.__PVT__write_data_fifo_tx_snpreq, vlSelfRef.__PVT__readdata_storefifo);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_snptxflit_top__pi58___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__15(Vsig_topology_top_sig_node_snptxflit_top__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_snptxflit_top__pi58___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__15\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_node_snptxflit_top__pi58___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__6(Vsig_topology_top_sig_node_snptxflit_top__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_snptxflit_top__pi58___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__6\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_node_snptxflit_top__pi58___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__2(Vsig_topology_top_sig_node_snptxflit_top__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_snptxflit_top__pi58___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__available_fiforoom = vlSelfRef.__PVT__available_fiforoom;
    vlSelfRef.__Vdly__available_fiforoom = ((IData)(vlSelfRef.__PVT__rstb_ic_clk)
                                             ? (IData)(vlSelfRef.__PVT__available_fiforoom_nxt)
                                             : 4U);
    vlSelfRef.__PVT__available_fiforoom = vlSelfRef.__Vdly__available_fiforoom;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_snptxflit_top__pi58___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__8(Vsig_topology_top_sig_node_snptxflit_top__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_snptxflit_top__pi58___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(152, vlSelfRef.__PVT__flit_out, (IData)(vlSelfRef.__PVT__rden_storefifo_bypass), vlSelfRef.__PVT__write_data_fifo_tx_snpreq, vlSelfRef.__PVT__readdata_storefifo);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_snptxflit_top__pi58___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__14(Vsig_topology_top_sig_node_snptxflit_top__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_snptxflit_top__pi58___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__14\n"); );
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
