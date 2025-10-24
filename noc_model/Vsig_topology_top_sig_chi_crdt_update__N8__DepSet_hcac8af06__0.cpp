// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_chi_crdt_update__N8.h"

VL_INLINE_OPT void Vsig_topology_top_sig_chi_crdt_update__N8___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__sig_chi_crdt_update_req__0(Vsig_topology_top_sig_chi_crdt_update__N8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_chi_crdt_update__N8___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__sig_chi_crdt_update_req__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_chi_crdt_update__N8___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__sig_chi_crdt_update_req__0(Vsig_topology_top_sig_chi_crdt_update__N8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_chi_crdt_update__N8___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__sig_chi_crdt_update_req__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__init_update_ctr = vlSelfRef.__PVT__init_update_ctr;
    vlSelfRef.__Vdly__init_crdt_ctr = vlSelfRef.__PVT__init_crdt_ctr;
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        vlSelfRef.__Vdly__init_crdt_ctr = vlSelfRef.__PVT__init_crdt_ctr_nxt;
        vlSelfRef.__Vdly__init_update_ctr = vlSelfRef.__PVT__init_update_ctr_nxt;
    } else {
        vlSelfRef.__Vdly__init_crdt_ctr = 0U;
        vlSelfRef.__Vdly__init_update_ctr = 0U;
    }
    vlSelfRef.__PVT__init_update_ctr = vlSelfRef.__Vdly__init_update_ctr;
    vlSelfRef.__PVT__init_crdt_ctr = vlSelfRef.__Vdly__init_crdt_ctr;
    vlSelfRef.__PVT__init_update_ctr_nxt = (0xfU & 
                                            VL_SEL_IIII(32, 
                                                        ((0xfU 
                                                          != (IData)(vlSelfRef.__PVT__init_update_ctr))
                                                          ? 
                                                         ((IData)(1U) 
                                                          + 
                                                          VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__init_update_ctr)))
                                                          : 
                                                         VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__init_update_ctr))), 0U, 4));
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__sig_chi_crdt_update_req__0(Vsig_topology_top_sig_chi_crdt_update__N8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_chi_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__sig_chi_crdt_update_req__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__req_init_update = ((IData)(vlSelfRef.__PVT__enable_init_update) 
                                        & (8U != (IData)(vlSelfRef.__PVT__init_crdt_ctr)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__sig_chi_crdt_update_req__1(Vsig_topology_top_sig_chi_crdt_update__N8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_chi_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__sig_chi_crdt_update_req__1\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_chi_crdt_update__N8___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__sig_chi_crdt_update_datproc__0(Vsig_topology_top_sig_chi_crdt_update__N8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_chi_crdt_update__N8___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__sig_chi_crdt_update_datproc__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__init_update_ctr = vlSelfRef.__PVT__init_update_ctr;
    vlSelfRef.__Vdly__init_crdt_ctr = vlSelfRef.__PVT__init_crdt_ctr;
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        vlSelfRef.__Vdly__init_crdt_ctr = vlSelfRef.__PVT__init_crdt_ctr_nxt;
        vlSelfRef.__Vdly__init_update_ctr = vlSelfRef.__PVT__init_update_ctr_nxt;
    } else {
        vlSelfRef.__Vdly__init_crdt_ctr = 0U;
        vlSelfRef.__Vdly__init_update_ctr = 0U;
    }
    vlSelfRef.__PVT__init_update_ctr = vlSelfRef.__Vdly__init_update_ctr;
    vlSelfRef.__PVT__init_crdt_ctr = vlSelfRef.__Vdly__init_crdt_ctr;
    vlSelfRef.__PVT__init_update_ctr_nxt = (0xfU & 
                                            VL_SEL_IIII(32, 
                                                        ((0xfU 
                                                          != (IData)(vlSelfRef.__PVT__init_update_ctr))
                                                          ? 
                                                         ((IData)(1U) 
                                                          + 
                                                          VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__init_update_ctr)))
                                                          : 
                                                         VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__init_update_ctr))), 0U, 4));
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__sig_chi_crdt_update_datproc__0(Vsig_topology_top_sig_chi_crdt_update__N8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_chi_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__sig_chi_crdt_update_datproc__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__req_init_update = ((IData)(vlSelfRef.__PVT__enable_init_update) 
                                        & (8U != (IData)(vlSelfRef.__PVT__init_crdt_ctr)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__sig_chi_crdt_update_datproc__1(Vsig_topology_top_sig_chi_crdt_update__N8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_chi_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__sig_chi_crdt_update_datproc__1\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_chi_crdt_update__N8___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_respproc_0__sig_crdt_update_resp__0(Vsig_topology_top_sig_chi_crdt_update__N8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_chi_crdt_update__N8___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_respproc_0__sig_crdt_update_resp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__init_update_ctr = vlSelfRef.__PVT__init_update_ctr;
    vlSelfRef.__Vdly__init_crdt_ctr = vlSelfRef.__PVT__init_crdt_ctr;
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        vlSelfRef.__Vdly__init_crdt_ctr = vlSelfRef.__PVT__init_crdt_ctr_nxt;
        vlSelfRef.__Vdly__init_update_ctr = vlSelfRef.__PVT__init_update_ctr_nxt;
    } else {
        vlSelfRef.__Vdly__init_crdt_ctr = 0U;
        vlSelfRef.__Vdly__init_update_ctr = 0U;
    }
    vlSelfRef.__PVT__init_update_ctr = vlSelfRef.__Vdly__init_update_ctr;
    vlSelfRef.__PVT__init_crdt_ctr = vlSelfRef.__Vdly__init_crdt_ctr;
    vlSelfRef.__PVT__init_update_ctr_nxt = (0xfU & 
                                            VL_SEL_IIII(32, 
                                                        ((0xfU 
                                                          != (IData)(vlSelfRef.__PVT__init_update_ctr))
                                                          ? 
                                                         ((IData)(1U) 
                                                          + 
                                                          VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__init_update_ctr)))
                                                          : 
                                                         VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__init_update_ctr))), 0U, 4));
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_respproc_0__sig_crdt_update_resp__0(Vsig_topology_top_sig_chi_crdt_update__N8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_chi_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_respproc_0__sig_crdt_update_resp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__req_init_update = ((IData)(vlSelfRef.__PVT__enable_init_update) 
                                        & (8U != (IData)(vlSelfRef.__PVT__init_crdt_ctr)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_respproc_0__sig_crdt_update_resp__1(Vsig_topology_top_sig_chi_crdt_update__N8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_chi_crdt_update__N8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_respproc_0__sig_crdt_update_resp__1\n"); );
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
