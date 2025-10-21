// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48.h"

VL_INLINE_OPT void Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_cc_rx_rspproc_vc0__2(Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_cc_rx_rspproc_vc0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__xmtstate = vlSelfRef.__PVT__xmtstate;
    VL_ASSIGN_W(73,vlSelfRef.__Vdly__read_data_fifo_stored, vlSelfRef.__PVT__read_data_fifo_stored);
    if (vlSelfRef.__PVT__rstb_ic_clk) {
        vlSelfRef.__Vdly__xmtstate = vlSelfRef.__PVT__xmtstate_nxt;
        VL_ASSIGN_W(73,vlSelfRef.__Vdly__read_data_fifo_stored, vlSelfRef.__PVT__read_data_fifo_stored_nxt);
    } else {
        vlSelfRef.__Vdly__xmtstate = 0U;
        VL_CONST_W_1X(73,vlSelfRef.__Vdly__read_data_fifo_stored,0x00000000);
    }
    vlSelfRef.__PVT__xmtstate = vlSelfRef.__Vdly__xmtstate;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__read_data_fifo_stored, vlSelfRef.__Vdly__read_data_fifo_stored);
    VL_ASSIGN_W(73,vlSelfRef.__PVT__flit_out_pl, vlSelfRef.__PVT__read_data_fifo_stored);
    VL_ASSIGN_W(73,vlSelfRef.__PVT__read_data_fifo_stored_s, vlSelfRef.__PVT__read_data_fifo_stored);
    VL_CONCAT_WIW(79,6,73, vlSelfRef.__PVT__flit_out, (IData)(vlSelfRef.__PVT__flit_out_meta), vlSelfRef.__PVT__flit_out_pl);
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_cc_rx_rspproc_vc1__2(Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_cc_rx_rspproc_vc1__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__xmtstate = vlSelfRef.__PVT__xmtstate;
    VL_ASSIGN_W(73,vlSelfRef.__Vdly__read_data_fifo_stored, vlSelfRef.__PVT__read_data_fifo_stored);
    if (vlSelfRef.__PVT__rstb_ic_clk) {
        vlSelfRef.__Vdly__xmtstate = vlSelfRef.__PVT__xmtstate_nxt;
        VL_ASSIGN_W(73,vlSelfRef.__Vdly__read_data_fifo_stored, vlSelfRef.__PVT__read_data_fifo_stored_nxt);
    } else {
        vlSelfRef.__Vdly__xmtstate = 0U;
        VL_CONST_W_1X(73,vlSelfRef.__Vdly__read_data_fifo_stored,0x00000000);
    }
    vlSelfRef.__PVT__xmtstate = vlSelfRef.__Vdly__xmtstate;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__read_data_fifo_stored, vlSelfRef.__Vdly__read_data_fifo_stored);
    VL_ASSIGN_W(73,vlSelfRef.__PVT__flit_out_pl, vlSelfRef.__PVT__read_data_fifo_stored);
    VL_ASSIGN_W(73,vlSelfRef.__PVT__read_data_fifo_stored_s, vlSelfRef.__PVT__read_data_fifo_stored);
    VL_CONCAT_WIW(79,6,73, vlSelfRef.__PVT__flit_out, (IData)(vlSelfRef.__PVT__flit_out_meta), vlSelfRef.__PVT__flit_out_pl);
}
