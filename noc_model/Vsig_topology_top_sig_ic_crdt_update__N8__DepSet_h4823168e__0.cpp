// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_ic_crdt_update__N8.h"

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_update__N8___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_snpproc_0__sig_ic_crdt_update_0__0(Vsig_topology_top_sig_ic_crdt_update__N8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_ic_crdt_update__N8___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_snpproc_0__sig_ic_crdt_update_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_init_update = ((IData)(vlSelfRef.__PVT__req_init_update) 
                                        & (~ (IData)(vlSelfRef.__PVT__send_working_update)));
    vlSelfRef.__PVT__drive_xLCRDV = ((IData)(vlSelfRef.__PVT__enable_init_update) 
                                     & ((IData)(vlSelfRef.__PVT__send_working_update) 
                                        | (IData)(vlSelfRef.__PVT__req_init_update)));
    vlSelfRef.__PVT__init_crdt_ctr_nxt = vlSelfRef.__PVT__init_crdt_ctr;
    if (((IData)(vlSelfRef.__PVT__enable_init_update) 
         & (IData)(vlSelfRef.__PVT__gnt_init_update))) {
        vlSelfRef.__PVT__init_crdt_ctr_nxt = (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__init_crdt_ctr)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_update__N8___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_snpproc_0__sig_ic_crdt_update_0__0(Vsig_topology_top_sig_ic_crdt_update__N8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_ic_crdt_update__N8___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_snpproc_0__sig_ic_crdt_update_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__init_crdt_ctr = vlSelfRef.__PVT__init_crdt_ctr;
    vlSelfRef.__Vdly__init_crdt_ctr = ((IData)(vlSelfRef.__PVT__rstb_clk)
                                        ? (IData)(vlSelfRef.__PVT__init_crdt_ctr_nxt)
                                        : 0U);
    vlSelfRef.__PVT__init_crdt_ctr = vlSelfRef.__Vdly__init_crdt_ctr;
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_snpproc_0__sig_ic_crdt_update_0__0(Vsig_topology_top_sig_ic_crdt_update__N8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_ic_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_snpproc_0__sig_ic_crdt_update_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__req_init_update = ((IData)(vlSelfRef.__PVT__enable_init_update) 
                                        & (8U != (IData)(vlSelfRef.__PVT__init_crdt_ctr)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_snpproc_0__sig_ic_crdt_update_0__1(Vsig_topology_top_sig_ic_crdt_update__N8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_ic_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_snpproc_0__sig_ic_crdt_update_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_init_update = ((IData)(vlSelfRef.__PVT__req_init_update) 
                                        & (~ (IData)(vlSelfRef.__PVT__send_working_update)));
    vlSelfRef.__PVT__drive_xLCRDV = ((IData)(vlSelfRef.__PVT__enable_init_update) 
                                     & ((IData)(vlSelfRef.__PVT__send_working_update) 
                                        | (IData)(vlSelfRef.__PVT__req_init_update)));
    vlSelfRef.__PVT__init_crdt_ctr_nxt = vlSelfRef.__PVT__init_crdt_ctr;
    if (((IData)(vlSelfRef.__PVT__enable_init_update) 
         & (IData)(vlSelfRef.__PVT__gnt_init_update))) {
        vlSelfRef.__PVT__init_crdt_ctr_nxt = (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__init_crdt_ctr)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_update__N8___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_ic_crdt_update_0__0(Vsig_topology_top_sig_ic_crdt_update__N8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_ic_crdt_update__N8___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_ic_crdt_update_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_init_update = ((IData)(vlSelfRef.__PVT__req_init_update) 
                                        & (~ (IData)(vlSelfRef.__PVT__send_working_update)));
    vlSelfRef.__PVT__drive_xLCRDV = ((IData)(vlSelfRef.__PVT__enable_init_update) 
                                     & ((IData)(vlSelfRef.__PVT__send_working_update) 
                                        | (IData)(vlSelfRef.__PVT__req_init_update)));
    vlSelfRef.__PVT__init_crdt_ctr_nxt = vlSelfRef.__PVT__init_crdt_ctr;
    if (((IData)(vlSelfRef.__PVT__enable_init_update) 
         & (IData)(vlSelfRef.__PVT__gnt_init_update))) {
        vlSelfRef.__PVT__init_crdt_ctr_nxt = (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__init_crdt_ctr)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_update__N8___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_ic_crdt_update_0__0(Vsig_topology_top_sig_ic_crdt_update__N8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_ic_crdt_update__N8___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_ic_crdt_update_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__init_crdt_ctr = vlSelfRef.__PVT__init_crdt_ctr;
    vlSelfRef.__Vdly__init_crdt_ctr = ((IData)(vlSelfRef.__PVT__rstb_clk)
                                        ? (IData)(vlSelfRef.__PVT__init_crdt_ctr_nxt)
                                        : 0U);
    vlSelfRef.__PVT__init_crdt_ctr = vlSelfRef.__Vdly__init_crdt_ctr;
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_ic_crdt_update_0__0(Vsig_topology_top_sig_ic_crdt_update__N8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_ic_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_ic_crdt_update_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__req_init_update = ((IData)(vlSelfRef.__PVT__enable_init_update) 
                                        & (8U != (IData)(vlSelfRef.__PVT__init_crdt_ctr)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_ic_crdt_update_0__1(Vsig_topology_top_sig_ic_crdt_update__N8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_ic_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_ic_crdt_update_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_init_update = ((IData)(vlSelfRef.__PVT__req_init_update) 
                                        & (~ (IData)(vlSelfRef.__PVT__send_working_update)));
    vlSelfRef.__PVT__drive_xLCRDV = ((IData)(vlSelfRef.__PVT__enable_init_update) 
                                     & ((IData)(vlSelfRef.__PVT__send_working_update) 
                                        | (IData)(vlSelfRef.__PVT__req_init_update)));
    vlSelfRef.__PVT__init_crdt_ctr_nxt = vlSelfRef.__PVT__init_crdt_ctr;
    if (((IData)(vlSelfRef.__PVT__enable_init_update) 
         & (IData)(vlSelfRef.__PVT__gnt_init_update))) {
        vlSelfRef.__PVT__init_crdt_ctr_nxt = (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__init_crdt_ctr)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_update__N8___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_ic_crdt_update_0__0(Vsig_topology_top_sig_ic_crdt_update__N8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_ic_crdt_update__N8___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_ic_crdt_update_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_init_update = ((IData)(vlSelfRef.__PVT__req_init_update) 
                                        & (~ (IData)(vlSelfRef.__PVT__send_working_update)));
    vlSelfRef.__PVT__drive_xLCRDV = ((IData)(vlSelfRef.__PVT__enable_init_update) 
                                     & ((IData)(vlSelfRef.__PVT__send_working_update) 
                                        | (IData)(vlSelfRef.__PVT__req_init_update)));
    vlSelfRef.__PVT__init_crdt_ctr_nxt = vlSelfRef.__PVT__init_crdt_ctr;
    if (((IData)(vlSelfRef.__PVT__enable_init_update) 
         & (IData)(vlSelfRef.__PVT__gnt_init_update))) {
        vlSelfRef.__PVT__init_crdt_ctr_nxt = (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__init_crdt_ctr)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_update__N8___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_ic_crdt_update_0__0(Vsig_topology_top_sig_ic_crdt_update__N8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_ic_crdt_update__N8___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_ic_crdt_update_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__init_crdt_ctr = vlSelfRef.__PVT__init_crdt_ctr;
    vlSelfRef.__Vdly__init_crdt_ctr = ((IData)(vlSelfRef.__PVT__rstb_clk)
                                        ? (IData)(vlSelfRef.__PVT__init_crdt_ctr_nxt)
                                        : 0U);
    vlSelfRef.__PVT__init_crdt_ctr = vlSelfRef.__Vdly__init_crdt_ctr;
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_ic_crdt_update_0__0(Vsig_topology_top_sig_ic_crdt_update__N8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_ic_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_ic_crdt_update_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__req_init_update = ((IData)(vlSelfRef.__PVT__enable_init_update) 
                                        & (8U != (IData)(vlSelfRef.__PVT__init_crdt_ctr)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_ic_crdt_update_0__1(Vsig_topology_top_sig_ic_crdt_update__N8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_ic_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_ic_crdt_update_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_init_update = ((IData)(vlSelfRef.__PVT__req_init_update) 
                                        & (~ (IData)(vlSelfRef.__PVT__send_working_update)));
    vlSelfRef.__PVT__drive_xLCRDV = ((IData)(vlSelfRef.__PVT__enable_init_update) 
                                     & ((IData)(vlSelfRef.__PVT__send_working_update) 
                                        | (IData)(vlSelfRef.__PVT__req_init_update)));
    vlSelfRef.__PVT__init_crdt_ctr_nxt = vlSelfRef.__PVT__init_crdt_ctr;
    if (((IData)(vlSelfRef.__PVT__enable_init_update) 
         & (IData)(vlSelfRef.__PVT__gnt_init_update))) {
        vlSelfRef.__PVT__init_crdt_ctr_nxt = (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__init_crdt_ctr)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_update__N8___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_update_dat__0(Vsig_topology_top_sig_ic_crdt_update__N8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_ic_crdt_update__N8___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_update_dat__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__init_crdt_ctr = vlSelfRef.__PVT__init_crdt_ctr;
    vlSelfRef.__Vdly__init_crdt_ctr = ((IData)(vlSelfRef.__PVT__rstb_clk)
                                        ? (IData)(vlSelfRef.__PVT__init_crdt_ctr_nxt)
                                        : 0U);
    vlSelfRef.__PVT__init_crdt_ctr = vlSelfRef.__Vdly__init_crdt_ctr;
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_update_dat__0(Vsig_topology_top_sig_ic_crdt_update__N8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_ic_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_update_dat__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__req_init_update = ((IData)(vlSelfRef.__PVT__enable_init_update) 
                                        & (8U != (IData)(vlSelfRef.__PVT__init_crdt_ctr)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_update_dat__1(Vsig_topology_top_sig_ic_crdt_update__N8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_ic_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_update_dat__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__drive_xLCRDV = ((IData)(vlSelfRef.__PVT__enable_init_update) 
                                     & ((IData)(vlSelfRef.__PVT__send_working_update) 
                                        | (IData)(vlSelfRef.__PVT__req_init_update)));
    vlSelfRef.__PVT__gnt_init_update = ((IData)(vlSelfRef.__PVT__req_init_update) 
                                        & (~ (IData)(vlSelfRef.__PVT__send_working_update)));
    vlSelfRef.__PVT__init_crdt_ctr_nxt = vlSelfRef.__PVT__init_crdt_ctr;
    if (((IData)(vlSelfRef.__PVT__enable_init_update) 
         & (IData)(vlSelfRef.__PVT__gnt_init_update))) {
        vlSelfRef.__PVT__init_crdt_ctr_nxt = (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__init_crdt_ctr)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_update__N8___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_update_rsp__0(Vsig_topology_top_sig_ic_crdt_update__N8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_ic_crdt_update__N8___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_update_rsp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__init_crdt_ctr = vlSelfRef.__PVT__init_crdt_ctr;
    vlSelfRef.__Vdly__init_crdt_ctr = ((IData)(vlSelfRef.__PVT__rstb_clk)
                                        ? (IData)(vlSelfRef.__PVT__init_crdt_ctr_nxt)
                                        : 0U);
    vlSelfRef.__PVT__init_crdt_ctr = vlSelfRef.__Vdly__init_crdt_ctr;
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_update_rsp__0(Vsig_topology_top_sig_ic_crdt_update__N8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_ic_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_update_rsp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__req_init_update = ((IData)(vlSelfRef.__PVT__enable_init_update) 
                                        & (8U != (IData)(vlSelfRef.__PVT__init_crdt_ctr)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_update_rsp__1(Vsig_topology_top_sig_ic_crdt_update__N8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_ic_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_update_rsp__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__drive_xLCRDV = ((IData)(vlSelfRef.__PVT__enable_init_update) 
                                     & ((IData)(vlSelfRef.__PVT__send_working_update) 
                                        | (IData)(vlSelfRef.__PVT__req_init_update)));
    vlSelfRef.__PVT__gnt_init_update = ((IData)(vlSelfRef.__PVT__req_init_update) 
                                        & (~ (IData)(vlSelfRef.__PVT__send_working_update)));
    vlSelfRef.__PVT__init_crdt_ctr_nxt = vlSelfRef.__PVT__init_crdt_ctr;
    if (((IData)(vlSelfRef.__PVT__enable_init_update) 
         & (IData)(vlSelfRef.__PVT__gnt_init_update))) {
        vlSelfRef.__PVT__init_crdt_ctr_nxt = (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__init_crdt_ctr)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_update__N8___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_ic_crdt_update_0__0(Vsig_topology_top_sig_ic_crdt_update__N8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_ic_crdt_update__N8___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_ic_crdt_update_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_init_update = ((IData)(vlSelfRef.__PVT__req_init_update) 
                                        & (~ (IData)(vlSelfRef.__PVT__send_working_update)));
    vlSelfRef.__PVT__drive_xLCRDV = ((IData)(vlSelfRef.__PVT__enable_init_update) 
                                     & ((IData)(vlSelfRef.__PVT__send_working_update) 
                                        | (IData)(vlSelfRef.__PVT__req_init_update)));
    vlSelfRef.__PVT__init_crdt_ctr_nxt = vlSelfRef.__PVT__init_crdt_ctr;
    if (((IData)(vlSelfRef.__PVT__enable_init_update) 
         & (IData)(vlSelfRef.__PVT__gnt_init_update))) {
        vlSelfRef.__PVT__init_crdt_ctr_nxt = (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__init_crdt_ctr)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_update__N8___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_ic_crdt_update_0__0(Vsig_topology_top_sig_ic_crdt_update__N8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_ic_crdt_update__N8___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_ic_crdt_update_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__init_crdt_ctr = vlSelfRef.__PVT__init_crdt_ctr;
    vlSelfRef.__Vdly__init_crdt_ctr = ((IData)(vlSelfRef.__PVT__rstb_clk)
                                        ? (IData)(vlSelfRef.__PVT__init_crdt_ctr_nxt)
                                        : 0U);
    vlSelfRef.__PVT__init_crdt_ctr = vlSelfRef.__Vdly__init_crdt_ctr;
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_ic_crdt_update_0__0(Vsig_topology_top_sig_ic_crdt_update__N8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_ic_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_ic_crdt_update_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__req_init_update = ((IData)(vlSelfRef.__PVT__enable_init_update) 
                                        & (8U != (IData)(vlSelfRef.__PVT__init_crdt_ctr)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_ic_crdt_update_0__1(Vsig_topology_top_sig_ic_crdt_update__N8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_ic_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_ic_crdt_update_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_init_update = ((IData)(vlSelfRef.__PVT__req_init_update) 
                                        & (~ (IData)(vlSelfRef.__PVT__send_working_update)));
    vlSelfRef.__PVT__drive_xLCRDV = ((IData)(vlSelfRef.__PVT__enable_init_update) 
                                     & ((IData)(vlSelfRef.__PVT__send_working_update) 
                                        | (IData)(vlSelfRef.__PVT__req_init_update)));
    vlSelfRef.__PVT__init_crdt_ctr_nxt = vlSelfRef.__PVT__init_crdt_ctr;
    if (((IData)(vlSelfRef.__PVT__enable_init_update) 
         & (IData)(vlSelfRef.__PVT__gnt_init_update))) {
        vlSelfRef.__PVT__init_crdt_ctr_nxt = (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__init_crdt_ctr)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_update__N8___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_ic_crdt_update_0__0(Vsig_topology_top_sig_ic_crdt_update__N8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_ic_crdt_update__N8___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_ic_crdt_update_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_init_update = ((IData)(vlSelfRef.__PVT__req_init_update) 
                                        & (~ (IData)(vlSelfRef.__PVT__send_working_update)));
    vlSelfRef.__PVT__drive_xLCRDV = ((IData)(vlSelfRef.__PVT__enable_init_update) 
                                     & ((IData)(vlSelfRef.__PVT__send_working_update) 
                                        | (IData)(vlSelfRef.__PVT__req_init_update)));
    vlSelfRef.__PVT__init_crdt_ctr_nxt = vlSelfRef.__PVT__init_crdt_ctr;
    if (((IData)(vlSelfRef.__PVT__enable_init_update) 
         & (IData)(vlSelfRef.__PVT__gnt_init_update))) {
        vlSelfRef.__PVT__init_crdt_ctr_nxt = (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__init_crdt_ctr)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_update__N8___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_ic_crdt_update_0__0(Vsig_topology_top_sig_ic_crdt_update__N8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_ic_crdt_update__N8___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_ic_crdt_update_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__init_crdt_ctr = vlSelfRef.__PVT__init_crdt_ctr;
    vlSelfRef.__Vdly__init_crdt_ctr = ((IData)(vlSelfRef.__PVT__rstb_clk)
                                        ? (IData)(vlSelfRef.__PVT__init_crdt_ctr_nxt)
                                        : 0U);
    vlSelfRef.__PVT__init_crdt_ctr = vlSelfRef.__Vdly__init_crdt_ctr;
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_ic_crdt_update_0__0(Vsig_topology_top_sig_ic_crdt_update__N8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_ic_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_ic_crdt_update_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__req_init_update = ((IData)(vlSelfRef.__PVT__enable_init_update) 
                                        & (8U != (IData)(vlSelfRef.__PVT__init_crdt_ctr)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_ic_crdt_update_0__1(Vsig_topology_top_sig_ic_crdt_update__N8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_ic_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_ic_crdt_update_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_init_update = ((IData)(vlSelfRef.__PVT__req_init_update) 
                                        & (~ (IData)(vlSelfRef.__PVT__send_working_update)));
    vlSelfRef.__PVT__drive_xLCRDV = ((IData)(vlSelfRef.__PVT__enable_init_update) 
                                     & ((IData)(vlSelfRef.__PVT__send_working_update) 
                                        | (IData)(vlSelfRef.__PVT__req_init_update)));
    vlSelfRef.__PVT__init_crdt_ctr_nxt = vlSelfRef.__PVT__init_crdt_ctr;
    if (((IData)(vlSelfRef.__PVT__enable_init_update) 
         & (IData)(vlSelfRef.__PVT__gnt_init_update))) {
        vlSelfRef.__PVT__init_crdt_ctr_nxt = (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__init_crdt_ctr)));
    }
}
