// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_ic_crdt_recv.h"

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_ic_crdt_recv_req__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_ic_crdt_recv_req__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__available_credits = vlSelfRef.__PVT__available_credits;
    vlSelfRef.__Vdly__available_credits = ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                            ? ((IData)(vlSelfRef.__PVT__i_in_timeout_or_recovery)
                                                ? 0U
                                                : (IData)(vlSelfRef.__PVT__available_credits_nxt))
                                            : 0U);
    vlSelfRef.__PVT__available_credits = vlSelfRef.__Vdly__available_credits;
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_ic_crdt_recv_req__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_ic_crdt_recv_req__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_credits_nxt = vlSelfRef.__PVT__available_credits;
    if (((IData)(vlSelfRef.__PVT__rcvd_crdt) & (~ (IData)(vlSelfRef.__PVT__consumed_crdt)))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__available_credits)));
    } else if (((~ (IData)(vlSelfRef.__PVT__rcvd_crdt)) 
                & (IData)(vlSelfRef.__PVT__consumed_crdt))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(vlSelfRef.__PVT__available_credits) 
                                                     - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_ic_crdt_recv_rsp__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_ic_crdt_recv_rsp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_credits_nxt = vlSelfRef.__PVT__available_credits;
    if (((IData)(vlSelfRef.__PVT__rcvd_crdt) & (~ (IData)(vlSelfRef.__PVT__consumed_crdt)))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__available_credits)));
    } else if (((~ (IData)(vlSelfRef.__PVT__rcvd_crdt)) 
                & (IData)(vlSelfRef.__PVT__consumed_crdt))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(vlSelfRef.__PVT__available_credits) 
                                                     - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_ic_crdt_recv_rsp__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_ic_crdt_recv_rsp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__available_credits = vlSelfRef.__PVT__available_credits;
    vlSelfRef.__Vdly__available_credits = ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                            ? ((IData)(vlSelfRef.__PVT__i_in_timeout_or_recovery)
                                                ? 0U
                                                : (IData)(vlSelfRef.__PVT__available_credits_nxt))
                                            : 0U);
    vlSelfRef.__PVT__available_credits = vlSelfRef.__Vdly__available_credits;
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_ic_crdt_recv_rsp__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_ic_crdt_recv_rsp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_credits_nxt = vlSelfRef.__PVT__available_credits;
    if (((IData)(vlSelfRef.__PVT__rcvd_crdt) & (~ (IData)(vlSelfRef.__PVT__consumed_crdt)))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__available_credits)));
    } else if (((~ (IData)(vlSelfRef.__PVT__rcvd_crdt)) 
                & (IData)(vlSelfRef.__PVT__consumed_crdt))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(vlSelfRef.__PVT__available_credits) 
                                                     - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_ic_crdt_recv_dat__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_ic_crdt_recv_dat__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__available_credits = vlSelfRef.__PVT__available_credits;
    vlSelfRef.__Vdly__available_credits = ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                            ? ((IData)(vlSelfRef.__PVT__i_in_timeout_or_recovery)
                                                ? 0U
                                                : (IData)(vlSelfRef.__PVT__available_credits_nxt))
                                            : 0U);
    vlSelfRef.__PVT__available_credits = vlSelfRef.__Vdly__available_credits;
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_ic_crdt_recv_dat__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_ic_crdt_recv_dat__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_credits_nxt = vlSelfRef.__PVT__available_credits;
    if (((IData)(vlSelfRef.__PVT__rcvd_crdt) & (~ (IData)(vlSelfRef.__PVT__consumed_crdt)))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__available_credits)));
    } else if (((~ (IData)(vlSelfRef.__PVT__rcvd_crdt)) 
                & (IData)(vlSelfRef.__PVT__consumed_crdt))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(vlSelfRef.__PVT__available_credits) 
                                                     - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_recv_dat__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_recv_dat__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_credits_nxt = vlSelfRef.__PVT__available_credits;
    if (((IData)(vlSelfRef.__PVT__rcvd_crdt) & (~ (IData)(vlSelfRef.__PVT__consumed_crdt)))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__available_credits)));
    } else if (((~ (IData)(vlSelfRef.__PVT__rcvd_crdt)) 
                & (IData)(vlSelfRef.__PVT__consumed_crdt))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(vlSelfRef.__PVT__available_credits) 
                                                     - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_recv_dat__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_recv_dat__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__available_credits = vlSelfRef.__PVT__available_credits;
    vlSelfRef.__Vdly__available_credits = ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                            ? ((IData)(vlSelfRef.__PVT__i_in_timeout_or_recovery)
                                                ? 0U
                                                : (IData)(vlSelfRef.__PVT__available_credits_nxt))
                                            : 0U);
    vlSelfRef.__PVT__available_credits = vlSelfRef.__Vdly__available_credits;
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_recv_dat__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_recv_dat__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_credits_nxt = vlSelfRef.__PVT__available_credits;
    if (((IData)(vlSelfRef.__PVT__rcvd_crdt) & (~ (IData)(vlSelfRef.__PVT__consumed_crdt)))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__available_credits)));
    } else if (((~ (IData)(vlSelfRef.__PVT__rcvd_crdt)) 
                & (IData)(vlSelfRef.__PVT__consumed_crdt))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(vlSelfRef.__PVT__available_credits) 
                                                     - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_recv_req__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_recv_req__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_credits_nxt = vlSelfRef.__PVT__available_credits;
    if (((IData)(vlSelfRef.__PVT__rcvd_crdt) & (~ (IData)(vlSelfRef.__PVT__consumed_crdt)))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__available_credits)));
    } else if (((~ (IData)(vlSelfRef.__PVT__rcvd_crdt)) 
                & (IData)(vlSelfRef.__PVT__consumed_crdt))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(vlSelfRef.__PVT__available_credits) 
                                                     - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_recv_req__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_recv_req__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__available_credits = vlSelfRef.__PVT__available_credits;
    vlSelfRef.__Vdly__available_credits = ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                            ? ((IData)(vlSelfRef.__PVT__i_in_timeout_or_recovery)
                                                ? 0U
                                                : (IData)(vlSelfRef.__PVT__available_credits_nxt))
                                            : 0U);
    vlSelfRef.__PVT__available_credits = vlSelfRef.__Vdly__available_credits;
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_recv_req__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__sig_ic_crdt_recv_req__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_credits_nxt = vlSelfRef.__PVT__available_credits;
    if (((IData)(vlSelfRef.__PVT__rcvd_crdt) & (~ (IData)(vlSelfRef.__PVT__consumed_crdt)))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__available_credits)));
    } else if (((~ (IData)(vlSelfRef.__PVT__rcvd_crdt)) 
                & (IData)(vlSelfRef.__PVT__consumed_crdt))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(vlSelfRef.__PVT__available_credits) 
                                                     - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__sig_ic_crdt_recv_rsp__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__sig_ic_crdt_recv_rsp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__available_credits = vlSelfRef.__PVT__available_credits;
    vlSelfRef.__Vdly__available_credits = ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                            ? ((IData)(vlSelfRef.__PVT__i_in_timeout_or_recovery)
                                                ? 0U
                                                : (IData)(vlSelfRef.__PVT__available_credits_nxt))
                                            : 0U);
    vlSelfRef.__PVT__available_credits = vlSelfRef.__Vdly__available_credits;
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__sig_ic_crdt_recv_rsp__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__sig_ic_crdt_recv_rsp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_credits_nxt = vlSelfRef.__PVT__available_credits;
    if (((IData)(vlSelfRef.__PVT__rcvd_crdt) & (~ (IData)(vlSelfRef.__PVT__consumed_crdt)))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__available_credits)));
    } else if (((~ (IData)(vlSelfRef.__PVT__rcvd_crdt)) 
                & (IData)(vlSelfRef.__PVT__consumed_crdt))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(vlSelfRef.__PVT__available_credits) 
                                                     - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__sig_ic_crdt_recv_dat__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__sig_ic_crdt_recv_dat__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__available_credits = vlSelfRef.__PVT__available_credits;
    vlSelfRef.__Vdly__available_credits = ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                            ? ((IData)(vlSelfRef.__PVT__i_in_timeout_or_recovery)
                                                ? 0U
                                                : (IData)(vlSelfRef.__PVT__available_credits_nxt))
                                            : 0U);
    vlSelfRef.__PVT__available_credits = vlSelfRef.__Vdly__available_credits;
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__sig_ic_crdt_recv_dat__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__sig_ic_crdt_recv_dat__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_credits_nxt = vlSelfRef.__PVT__available_credits;
    if (((IData)(vlSelfRef.__PVT__rcvd_crdt) & (~ (IData)(vlSelfRef.__PVT__consumed_crdt)))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__available_credits)));
    } else if (((~ (IData)(vlSelfRef.__PVT__rcvd_crdt)) 
                & (IData)(vlSelfRef.__PVT__consumed_crdt))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(vlSelfRef.__PVT__available_credits) 
                                                     - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_credits_nxt = vlSelfRef.__PVT__available_credits;
    if (((IData)(vlSelfRef.__PVT__rcvd_crdt) & (~ (IData)(vlSelfRef.__PVT__consumed_crdt)))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__available_credits)));
    } else if (((~ (IData)(vlSelfRef.__PVT__rcvd_crdt)) 
                & (IData)(vlSelfRef.__PVT__consumed_crdt))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(vlSelfRef.__PVT__available_credits) 
                                                     - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_credits_nxt = vlSelfRef.__PVT__available_credits;
    if (((IData)(vlSelfRef.__PVT__rcvd_crdt) & (~ (IData)(vlSelfRef.__PVT__consumed_crdt)))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__available_credits)));
    } else if (((~ (IData)(vlSelfRef.__PVT__rcvd_crdt)) 
                & (IData)(vlSelfRef.__PVT__consumed_crdt))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(vlSelfRef.__PVT__available_credits) 
                                                     - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__available_credits = vlSelfRef.__PVT__available_credits;
    vlSelfRef.__Vdly__available_credits = ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                            ? ((IData)(vlSelfRef.__PVT__i_in_timeout_or_recovery)
                                                ? 0U
                                                : (IData)(vlSelfRef.__PVT__available_credits_nxt))
                                            : 0U);
    vlSelfRef.__PVT__available_credits = vlSelfRef.__Vdly__available_credits;
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_credits_nxt = vlSelfRef.__PVT__available_credits;
    if (((IData)(vlSelfRef.__PVT__rcvd_crdt) & (~ (IData)(vlSelfRef.__PVT__consumed_crdt)))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__available_credits)));
    } else if (((~ (IData)(vlSelfRef.__PVT__rcvd_crdt)) 
                & (IData)(vlSelfRef.__PVT__consumed_crdt))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(vlSelfRef.__PVT__available_credits) 
                                                     - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_credits_nxt = vlSelfRef.__PVT__available_credits;
    if (((IData)(vlSelfRef.__PVT__rcvd_crdt) & (~ (IData)(vlSelfRef.__PVT__consumed_crdt)))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__available_credits)));
    } else if (((~ (IData)(vlSelfRef.__PVT__rcvd_crdt)) 
                & (IData)(vlSelfRef.__PVT__consumed_crdt))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(vlSelfRef.__PVT__available_credits) 
                                                     - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_credits_nxt = vlSelfRef.__PVT__available_credits;
    if (((IData)(vlSelfRef.__PVT__rcvd_crdt) & (~ (IData)(vlSelfRef.__PVT__consumed_crdt)))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__available_credits)));
    } else if (((~ (IData)(vlSelfRef.__PVT__rcvd_crdt)) 
                & (IData)(vlSelfRef.__PVT__consumed_crdt))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(vlSelfRef.__PVT__available_credits) 
                                                     - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__available_credits = vlSelfRef.__PVT__available_credits;
    vlSelfRef.__Vdly__available_credits = ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                            ? ((IData)(vlSelfRef.__PVT__i_in_timeout_or_recovery)
                                                ? 0U
                                                : (IData)(vlSelfRef.__PVT__available_credits_nxt))
                                            : 0U);
    vlSelfRef.__PVT__available_credits = vlSelfRef.__Vdly__available_credits;
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_credits_nxt = vlSelfRef.__PVT__available_credits;
    if (((IData)(vlSelfRef.__PVT__rcvd_crdt) & (~ (IData)(vlSelfRef.__PVT__consumed_crdt)))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__available_credits)));
    } else if (((~ (IData)(vlSelfRef.__PVT__rcvd_crdt)) 
                & (IData)(vlSelfRef.__PVT__consumed_crdt))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(vlSelfRef.__PVT__available_credits) 
                                                     - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_credits_nxt = vlSelfRef.__PVT__available_credits;
    if (((IData)(vlSelfRef.__PVT__rcvd_crdt) & (~ (IData)(vlSelfRef.__PVT__consumed_crdt)))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__available_credits)));
    } else if (((~ (IData)(vlSelfRef.__PVT__rcvd_crdt)) 
                & (IData)(vlSelfRef.__PVT__consumed_crdt))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(vlSelfRef.__PVT__available_credits) 
                                                     - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_credits_nxt = vlSelfRef.__PVT__available_credits;
    if (((IData)(vlSelfRef.__PVT__rcvd_crdt) & (~ (IData)(vlSelfRef.__PVT__consumed_crdt)))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__available_credits)));
    } else if (((~ (IData)(vlSelfRef.__PVT__rcvd_crdt)) 
                & (IData)(vlSelfRef.__PVT__consumed_crdt))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(vlSelfRef.__PVT__available_credits) 
                                                     - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__available_credits = vlSelfRef.__PVT__available_credits;
    vlSelfRef.__Vdly__available_credits = ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                            ? ((IData)(vlSelfRef.__PVT__i_in_timeout_or_recovery)
                                                ? 0U
                                                : (IData)(vlSelfRef.__PVT__available_credits_nxt))
                                            : 0U);
    vlSelfRef.__PVT__available_credits = vlSelfRef.__Vdly__available_credits;
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_credits_nxt = vlSelfRef.__PVT__available_credits;
    if (((IData)(vlSelfRef.__PVT__rcvd_crdt) & (~ (IData)(vlSelfRef.__PVT__consumed_crdt)))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__available_credits)));
    } else if (((~ (IData)(vlSelfRef.__PVT__rcvd_crdt)) 
                & (IData)(vlSelfRef.__PVT__consumed_crdt))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(vlSelfRef.__PVT__available_credits) 
                                                     - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_credits_nxt = vlSelfRef.__PVT__available_credits;
    if (((IData)(vlSelfRef.__PVT__rcvd_crdt) & (~ (IData)(vlSelfRef.__PVT__consumed_crdt)))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__available_credits)));
    } else if (((~ (IData)(vlSelfRef.__PVT__rcvd_crdt)) 
                & (IData)(vlSelfRef.__PVT__consumed_crdt))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(vlSelfRef.__PVT__available_credits) 
                                                     - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_credits_nxt = vlSelfRef.__PVT__available_credits;
    if (((IData)(vlSelfRef.__PVT__rcvd_crdt) & (~ (IData)(vlSelfRef.__PVT__consumed_crdt)))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__available_credits)));
    } else if (((~ (IData)(vlSelfRef.__PVT__rcvd_crdt)) 
                & (IData)(vlSelfRef.__PVT__consumed_crdt))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(vlSelfRef.__PVT__available_credits) 
                                                     - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__available_credits = vlSelfRef.__PVT__available_credits;
    vlSelfRef.__Vdly__available_credits = ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                            ? ((IData)(vlSelfRef.__PVT__i_in_timeout_or_recovery)
                                                ? 0U
                                                : (IData)(vlSelfRef.__PVT__available_credits_nxt))
                                            : 0U);
    vlSelfRef.__PVT__available_credits = vlSelfRef.__Vdly__available_credits;
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_credits_nxt = vlSelfRef.__PVT__available_credits;
    if (((IData)(vlSelfRef.__PVT__rcvd_crdt) & (~ (IData)(vlSelfRef.__PVT__consumed_crdt)))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__available_credits)));
    } else if (((~ (IData)(vlSelfRef.__PVT__rcvd_crdt)) 
                & (IData)(vlSelfRef.__PVT__consumed_crdt))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(vlSelfRef.__PVT__available_credits) 
                                                     - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_credits_nxt = vlSelfRef.__PVT__available_credits;
    if (((IData)(vlSelfRef.__PVT__rcvd_crdt) & (~ (IData)(vlSelfRef.__PVT__consumed_crdt)))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__available_credits)));
    } else if (((~ (IData)(vlSelfRef.__PVT__rcvd_crdt)) 
                & (IData)(vlSelfRef.__PVT__consumed_crdt))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(vlSelfRef.__PVT__available_credits) 
                                                     - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_credits_nxt = vlSelfRef.__PVT__available_credits;
    if (((IData)(vlSelfRef.__PVT__rcvd_crdt) & (~ (IData)(vlSelfRef.__PVT__consumed_crdt)))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__available_credits)));
    } else if (((~ (IData)(vlSelfRef.__PVT__rcvd_crdt)) 
                & (IData)(vlSelfRef.__PVT__consumed_crdt))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(vlSelfRef.__PVT__available_credits) 
                                                     - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__available_credits = vlSelfRef.__PVT__available_credits;
    vlSelfRef.__Vdly__available_credits = ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                            ? ((IData)(vlSelfRef.__PVT__i_in_timeout_or_recovery)
                                                ? 0U
                                                : (IData)(vlSelfRef.__PVT__available_credits_nxt))
                                            : 0U);
    vlSelfRef.__PVT__available_credits = vlSelfRef.__Vdly__available_credits;
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_credits_nxt = vlSelfRef.__PVT__available_credits;
    if (((IData)(vlSelfRef.__PVT__rcvd_crdt) & (~ (IData)(vlSelfRef.__PVT__consumed_crdt)))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__available_credits)));
    } else if (((~ (IData)(vlSelfRef.__PVT__rcvd_crdt)) 
                & (IData)(vlSelfRef.__PVT__consumed_crdt))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(vlSelfRef.__PVT__available_credits) 
                                                     - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_credits_nxt = vlSelfRef.__PVT__available_credits;
    if (((IData)(vlSelfRef.__PVT__rcvd_crdt) & (~ (IData)(vlSelfRef.__PVT__consumed_crdt)))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__available_credits)));
    } else if (((~ (IData)(vlSelfRef.__PVT__rcvd_crdt)) 
                & (IData)(vlSelfRef.__PVT__consumed_crdt))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(vlSelfRef.__PVT__available_credits) 
                                                     - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_credits_nxt = vlSelfRef.__PVT__available_credits;
    if (((IData)(vlSelfRef.__PVT__rcvd_crdt) & (~ (IData)(vlSelfRef.__PVT__consumed_crdt)))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__available_credits)));
    } else if (((~ (IData)(vlSelfRef.__PVT__rcvd_crdt)) 
                & (IData)(vlSelfRef.__PVT__consumed_crdt))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(vlSelfRef.__PVT__available_credits) 
                                                     - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__available_credits = vlSelfRef.__PVT__available_credits;
    vlSelfRef.__Vdly__available_credits = ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                            ? ((IData)(vlSelfRef.__PVT__i_in_timeout_or_recovery)
                                                ? 0U
                                                : (IData)(vlSelfRef.__PVT__available_credits_nxt))
                                            : 0U);
    vlSelfRef.__PVT__available_credits = vlSelfRef.__Vdly__available_credits;
}

VL_INLINE_OPT void Vsig_topology_top_sig_ic_crdt_recv___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat__0(Vsig_topology_top_sig_ic_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_ic_crdt_recv___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_credits_nxt = vlSelfRef.__PVT__available_credits;
    if (((IData)(vlSelfRef.__PVT__rcvd_crdt) & (~ (IData)(vlSelfRef.__PVT__consumed_crdt)))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__available_credits)));
    } else if (((~ (IData)(vlSelfRef.__PVT__rcvd_crdt)) 
                & (IData)(vlSelfRef.__PVT__consumed_crdt))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(vlSelfRef.__PVT__available_credits) 
                                                     - (IData)(1U)));
    }
}
