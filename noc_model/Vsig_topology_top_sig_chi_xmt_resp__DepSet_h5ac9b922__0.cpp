// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_chi_xmt_resp.h"

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_resp___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0__0(Vsig_topology_top_sig_chi_xmt_resp* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_resp___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0__sig_chi_crdt_recv_0.__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0__sig_chi_crdt_recv_0.__PVT__cc_clk 
        = vlSelfRef.__PVT__cc_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_resp___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0__0(Vsig_topology_top_sig_chi_xmt_resp* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_resp___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__req_all = VL_CONCAT_III(5,3,2, 
                                             VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__req_pcrd_grant), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__req_retry_ack), (IData)(vlSelfRef.__PVT__req_readreceipt))), 
                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__req_resp_compdata), (IData)(vlSelfRef.__PVT__req_resp_snpreq)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__grant_resp, 
                    ((IData)(vlSelfRef.__PVT__link_crdt_avlble) 
                     & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__req_all), 0U)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__grant_resp, 
                    (((IData)(vlSelfRef.__PVT__link_crdt_avlble) 
                      & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__req_all), 1U)) 
                     & (~ VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__req_all), 0U))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__grant_resp, 
                    (((IData)(vlSelfRef.__PVT__link_crdt_avlble) 
                      & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__req_all), 2U)) 
                     & (0U == (3U & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__req_all), 0U, 2)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__grant_resp, 
                    (((IData)(vlSelfRef.__PVT__link_crdt_avlble) 
                      & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__req_all), 3U)) 
                     & (0U == (7U & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__req_all), 0U, 3)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__grant_resp, 
                    (((IData)(vlSelfRef.__PVT__link_crdt_avlble) 
                      & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__req_all), 4U)) 
                     & (0U == (0xfU & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__req_all), 0U, 4)))));
    vlSelfRef.__PVT__ic_TX_RSPFLITV_nxt = (0U != (IData)(vlSelfRef.__PVT__grant_resp));
    vlSelfRef.__PVT__consumed_crdt = vlSelfRef.__PVT__ic_TX_RSPFLITV_nxt;
    vlSelfRef.__PVT__ic_TX_RSPFLITPEND = vlSelfRef.__PVT__ic_TX_RSPFLITV_nxt;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0__sig_chi_crdt_recv_0.__PVT__consumed_crdt 
        = vlSelfRef.__PVT__consumed_crdt;
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_resp___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0__0(Vsig_topology_top_sig_chi_xmt_resp* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_resp___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0__sig_chi_crdt_recv_0.__PVT__rcvd_crdt 
        = vlSelfRef.__PVT__ic_TX_RSPLCRDV;
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_resp___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0__1(Vsig_topology_top_sig_chi_xmt_resp* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_resp___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_credits = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0__sig_chi_crdt_recv_0.__PVT__available_credits;
    vlSelfRef.__PVT__link_crdt_avlble = (0U != (IData)(vlSelfRef.__PVT__available_credits));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__grant_resp, 
                    ((IData)(vlSelfRef.__PVT__link_crdt_avlble) 
                     & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__req_all), 0U)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__grant_resp, 
                    (((IData)(vlSelfRef.__PVT__link_crdt_avlble) 
                      & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__req_all), 1U)) 
                     & (~ VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__req_all), 0U))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__grant_resp, 
                    (((IData)(vlSelfRef.__PVT__link_crdt_avlble) 
                      & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__req_all), 2U)) 
                     & (0U == (3U & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__req_all), 0U, 2)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__grant_resp, 
                    (((IData)(vlSelfRef.__PVT__link_crdt_avlble) 
                      & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__req_all), 3U)) 
                     & (0U == (7U & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__req_all), 0U, 3)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__grant_resp, 
                    (((IData)(vlSelfRef.__PVT__link_crdt_avlble) 
                      & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__req_all), 4U)) 
                     & (0U == (0xfU & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__req_all), 0U, 4)))));
    vlSelfRef.__PVT__ic_TX_RSPFLITV_nxt = (0U != (IData)(vlSelfRef.__PVT__grant_resp));
    vlSelfRef.__PVT__consumed_crdt = vlSelfRef.__PVT__ic_TX_RSPFLITV_nxt;
    vlSelfRef.__PVT__ic_TX_RSPFLITPEND = vlSelfRef.__PVT__ic_TX_RSPFLITV_nxt;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0__sig_chi_crdt_recv_0.__PVT__consumed_crdt 
        = vlSelfRef.__PVT__consumed_crdt;
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_resp___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0__0(Vsig_topology_top_sig_chi_xmt_resp* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_resp___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0__sig_chi_crdt_recv_0.__PVT__rcvd_crdt 
        = vlSelfRef.__PVT__ic_TX_RSPLCRDV;
}
