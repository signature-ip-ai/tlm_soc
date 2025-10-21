// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_slc_bypass__pi21.h"

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi21___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__20(Vsig_topology_top_sig_slc_bypass__pi21* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi21___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__20\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_CONCAT_WIW(154,3,151, vlSelfRef.__PVT__wrdata_reqflit_fifo, (IData)(vlSelfRef.__PVT__cc_reqflit_metadata), vlSelfRef.__PVT__cc_reqflit);
    VL_ASSIGN_W(154,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__reqflit_fifo_0.__PVT__fifo_wrdata, vlSelfRef.__PVT__wrdata_reqflit_fifo);
}

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi21___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__22(Vsig_topology_top_sig_slc_bypass__pi21* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi21___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__22\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_recv_req.__PVT__rcvd_crdt 
        = vlSelfRef.__PVT__ic_TX_REQLCRDV;
}

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi21___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__23(Vsig_topology_top_sig_slc_bypass__pi21* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi21___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__23\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_recv_dat.__PVT__rcvd_crdt 
        = vlSelfRef.__PVT__ic_TX_DATLCRDV;
}
