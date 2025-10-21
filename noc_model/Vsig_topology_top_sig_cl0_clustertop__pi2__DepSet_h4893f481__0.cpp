// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_cl0_clustertop__pi2.h"

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__0(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__cc_rstb_intfrx_clk 
        = vlSelfRef.__PVT__cc_rstb_intfrx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__cc_intfrx_clk 
        = vlSelfRef.__PVT__cc_intfrx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_ic_RXSACTIVE 
        = vlSelfRef.__PVT__p3_RXSACTIVE;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_TX_LINKACTIVEACK 
        = vlSelfRef.__PVT__p3_TX_LINKACTIVEACK;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_RX_LINKACTIVEREQ 
        = vlSelfRef.__PVT__p3_RX_LINKACTIVEREQ;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_RX_LINKACTIVEREQ 
        = vlSelfRef.__PVT__p1_RX_LINKACTIVEREQ;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_TX_LINKACTIVEACK 
        = vlSelfRef.__PVT__p1_TX_LINKACTIVEACK;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_ic_RXSACTIVE 
        = vlSelfRef.__PVT__p1_RXSACTIVE;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_TX_DATLCRDV 
        = vlSelfRef.__PVT__p3_TX_DATLCRDV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_TX_REQLCRDV 
        = vlSelfRef.__PVT__p3_TX_REQLCRDV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_TX_DATLCRDV 
        = vlSelfRef.__PVT__p1_TX_DATLCRDV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_TX_RSPLCRDV 
        = vlSelfRef.__PVT__p1_TX_RSPLCRDV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_TX_SNPLCRDV 
        = vlSelfRef.__PVT__p1_TX_SNPLCRDV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_rstb_intfrx_clk 
        = vlSelfRef.__PVT__p3_rstb_intfrx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_rstb_intfrx_clk 
        = vlSelfRef.__PVT__p1_rstb_intfrx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_intfrx_clk 
        = vlSelfRef.__PVT__p3_intfrx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_intfrx_clk 
        = vlSelfRef.__PVT__p1_intfrx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__i_csr_reset_n 
        = vlSelfRef.__PVT__i_csr_reset_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__i_csr_clk 
        = vlSelfRef.__PVT__i_csr_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_syscoreq 
        = vlSelfRef.__PVT__p1_SYSCOREQ;
    VL_ASSIGN_W(680,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_RX_DATFLIT, vlSelfRef.__PVT__p1_RX_DATFLIT);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_RX_DATFLITV 
        = vlSelfRef.__PVT__p1_RX_DATFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_RX_DATFLITPEND 
        = vlSelfRef.__PVT__p1_RX_DATFLITPEND;
    VL_ASSIGN_W(73,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_RX_RSPFLIT, vlSelfRef.__PVT__p1_RX_RSPFLIT);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_RX_RSPFLITV 
        = vlSelfRef.__PVT__p1_RX_RSPFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_RX_RSPFLITPEND 
        = vlSelfRef.__PVT__p1_RX_RSPFLITPEND;
    VL_ASSIGN_W(151,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_RX_REQFLIT, vlSelfRef.__PVT__p1_RX_REQFLIT);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_RX_REQFLITV 
        = vlSelfRef.__PVT__p1_RX_REQFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_RX_REQFLITPEND 
        = vlSelfRef.__PVT__p1_RX_REQFLITPEND;
    VL_ASSIGN_W(680,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_RX_DATFLIT, vlSelfRef.__PVT__p3_RX_DATFLIT);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_RX_DATFLITV 
        = vlSelfRef.__PVT__p3_RX_DATFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_RX_DATFLITPEND 
        = vlSelfRef.__PVT__p3_RX_DATFLITPEND;
    VL_ASSIGN_W(73,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_RX_RSPFLIT, vlSelfRef.__PVT__p3_RX_RSPFLIT);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_RX_RSPFLITV 
        = vlSelfRef.__PVT__p3_RX_RSPFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_RX_RSPFLITPEND 
        = vlSelfRef.__PVT__p3_RX_RSPFLITPEND;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__1(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__i_clus_csr_address 
        = vlSelfRef.__PVT__i_clus_csr_address;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__i_clus_csr_wstrb 
        = vlSelfRef.__PVT__i_clus_csr_wstrb;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__i_clus_csr_wdata 
        = vlSelfRef.__PVT__i_clus_csr_wdata;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__2(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__i_wren_csr_top_or_clus 
        = vlSelfRef.__PVT__i_wren_csr_top_or_clus;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__i_rden_csr_top_or_clus 
        = vlSelfRef.__PVT__i_rden_csr_top_or_clus;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__3(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p1_SYSCOACK = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_syscoack;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__0(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p3_RX_DATLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_RX_DATLCRDV;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__1(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p3_RX_RSPLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_RX_RSPLCRDV;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__2(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p1_RX_DATLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_RX_DATLCRDV;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__3(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p1_RX_RSPLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_RX_RSPLCRDV;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__4(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p1_RX_REQLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_RX_REQLCRDV;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__5(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p3_TXSACTIVE = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_ic_TXSACTIVE;
    vlSelfRef.__PVT__p3_TX_LINKACTIVEREQ = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_TX_LINKACTIVEREQ;
    vlSelfRef.__PVT__p3_RX_LINKACTIVEACK = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_RX_LINKACTIVEACK;
    vlSelfRef.__PVT__p3_TX_REQFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_TX_REQFLITPEND;
    vlSelfRef.__PVT__p3_TX_REQFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_TX_REQFLITV;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__p3_TX_REQFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_TX_REQFLIT);
    vlSelfRef.__PVT__p3_TX_DATFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_TX_DATFLITPEND;
    vlSelfRef.__PVT__p3_TX_DATFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_TX_DATFLITV;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__p3_TX_DATFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_TX_DATFLIT);
}

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__6(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p1_TX_LINKACTIVEREQ = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_TX_LINKACTIVEREQ;
    vlSelfRef.__PVT__p1_RX_LINKACTIVEACK = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_RX_LINKACTIVEACK;
    vlSelfRef.__PVT__p1_TXSACTIVE = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_ic_TXSACTIVE;
    vlSelfRef.__PVT__p1_TX_DATFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_TX_DATFLITPEND;
    vlSelfRef.__PVT__p1_TX_DATFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_TX_DATFLITV;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__p1_TX_DATFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_TX_DATFLIT);
    vlSelfRef.__PVT__p1_TX_RSPFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_TX_RSPFLITPEND;
    vlSelfRef.__PVT__p1_TX_RSPFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_TX_RSPFLITV;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__p1_TX_RSPFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_TX_RSPFLIT);
    vlSelfRef.__PVT__p1_TX_SNPFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_TX_SNPFLITPEND;
    vlSelfRef.__PVT__p1_TX_SNPFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_TX_SNPFLITV;
    VL_ASSIGN_W(108,vlSelfRef.__PVT__p1_TX_SNPFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_TX_SNPFLIT);
}

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__0(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p1_RX_DATLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_RX_DATLCRDV;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__1(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p1_RX_RSPLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_RX_RSPLCRDV;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__2(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p1_RX_REQLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_RX_REQLCRDV;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__3(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p3_RX_DATLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_RX_DATLCRDV;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__4(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p3_RX_RSPLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_RX_RSPLCRDV;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__0(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p1_TX_LINKACTIVEREQ = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_TX_LINKACTIVEREQ;
    vlSelfRef.__PVT__p1_RX_LINKACTIVEACK = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_RX_LINKACTIVEACK;
    vlSelfRef.__PVT__p1_TXSACTIVE = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_ic_TXSACTIVE;
    vlSelfRef.__PVT__p1_TX_DATFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_TX_DATFLITPEND;
    vlSelfRef.__PVT__p1_TX_DATFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_TX_DATFLITV;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__p1_TX_DATFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_TX_DATFLIT);
    vlSelfRef.__PVT__p1_TX_RSPFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_TX_RSPFLITPEND;
    vlSelfRef.__PVT__p1_TX_RSPFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_TX_RSPFLITV;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__p1_TX_RSPFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_TX_RSPFLIT);
    vlSelfRef.__PVT__p1_TX_SNPFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_TX_SNPFLITPEND;
    vlSelfRef.__PVT__p1_TX_SNPFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_TX_SNPFLITV;
    VL_ASSIGN_W(108,vlSelfRef.__PVT__p1_TX_SNPFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_TX_SNPFLIT);
}

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__1(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p3_TXSACTIVE = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_ic_TXSACTIVE;
    vlSelfRef.__PVT__p3_TX_LINKACTIVEREQ = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_TX_LINKACTIVEREQ;
    vlSelfRef.__PVT__p3_RX_LINKACTIVEACK = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_RX_LINKACTIVEACK;
    vlSelfRef.__PVT__p3_TX_REQFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_TX_REQFLITPEND;
    vlSelfRef.__PVT__p3_TX_REQFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_TX_REQFLITV;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__p3_TX_REQFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_TX_REQFLIT);
    vlSelfRef.__PVT__p3_TX_DATFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_TX_DATFLITPEND;
    vlSelfRef.__PVT__p3_TX_DATFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_TX_DATFLITV;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__p3_TX_DATFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_TX_DATFLIT);
}

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__0(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__all_cache_init_complete 
        = vlSelfRef.__PVT__all_cache_init_complete;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__1(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cache_init_complete = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__cache_init_complete;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__2(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cc_is_inactive = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__cc_is_inactive;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__3(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rd_csr_clus = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__o_rd_csr_clus;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__4(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p1_SYSCOACK = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_syscoack;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__5(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__noc_is_inactive 
        = vlSelfRef.__PVT__noc_is_inactive;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__0(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__cm_homeaddr_base_all_hn_f 
        = vlSelfRef.__PVT__cm_homeaddr_base_all_hn_f;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__1(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__noncm_homeaddr_base_all_hn_f 
        = vlSelfRef.__PVT__noncm_homeaddr_base_all_hn_f;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__2(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__cm_homeaddr_limit_all_hn_f 
        = vlSelfRef.__PVT__cm_homeaddr_limit_all_hn_f;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__3(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__noncm_homeaddr_base_all_pm 
        = vlSelfRef.__PVT__noncm_homeaddr_base_all_pm;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__4(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__noncm_homeaddr_limit_all_hn_f 
        = vlSelfRef.__PVT__noncm_homeaddr_limit_all_hn_f;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__5(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__noncm_homeaddr_limit_all_pm 
        = vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__6(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__cm_homeaddr_base_all_pm 
        = vlSelfRef.__PVT__cm_homeaddr_base_all_pm;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__7(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__cm_homeaddr_limit_all_pm 
        = vlSelfRef.__PVT__cm_homeaddr_limit_all_pm;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__8(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(242,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__COH_nodeid_all_rn, vlSelfRef.__PVT__COH_nodeid_all_rn);
}

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__9(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__xy_coord_all_hn_f 
        = vlSelfRef.__PVT__xy_coord_all_hn_f;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__10(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__xy_coord_all_pm 
        = vlSelfRef.__PVT__xy_coord_all_pm;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__11(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__11\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__i_wren_csr_top_or_clus 
        = vlSelfRef.__PVT__i_wren_csr_top_or_clus;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__i_rden_csr_top_or_clus 
        = vlSelfRef.__PVT__i_rden_csr_top_or_clus;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__12(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__12\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p3_TXSACTIVE = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_ic_TXSACTIVE;
    vlSelfRef.__PVT__p3_TX_LINKACTIVEREQ = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_TX_LINKACTIVEREQ;
    vlSelfRef.__PVT__p3_RX_LINKACTIVEACK = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_RX_LINKACTIVEACK;
    vlSelfRef.__PVT__p3_TX_REQFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_TX_REQFLITPEND;
    vlSelfRef.__PVT__p3_TX_REQFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_TX_REQFLITV;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__p3_TX_REQFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_TX_REQFLIT);
    vlSelfRef.__PVT__p3_TX_DATFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_TX_DATFLITPEND;
    vlSelfRef.__PVT__p3_TX_DATFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_TX_DATFLITV;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__p3_TX_DATFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p3_TX_DATFLIT);
}

VL_INLINE_OPT void Vsig_topology_top_sig_cl0_clustertop__pi2___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__13(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__13\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p1_TX_LINKACTIVEREQ = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_TX_LINKACTIVEREQ;
    vlSelfRef.__PVT__p1_RX_LINKACTIVEACK = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_RX_LINKACTIVEACK;
    vlSelfRef.__PVT__p1_TXSACTIVE = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_ic_TXSACTIVE;
    vlSelfRef.__PVT__p1_TX_DATFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_TX_DATFLITPEND;
    vlSelfRef.__PVT__p1_TX_DATFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_TX_DATFLITV;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__p1_TX_DATFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_TX_DATFLIT);
    vlSelfRef.__PVT__p1_TX_RSPFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_TX_RSPFLITPEND;
    vlSelfRef.__PVT__p1_TX_RSPFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_TX_RSPFLITV;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__p1_TX_RSPFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_TX_RSPFLIT);
    vlSelfRef.__PVT__p1_TX_SNPFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_TX_SNPFLITPEND;
    vlSelfRef.__PVT__p1_TX_SNPFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_TX_SNPFLITV;
    VL_ASSIGN_W(108,vlSelfRef.__PVT__p1_TX_SNPFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore.__PVT__p1_TX_SNPFLIT);
}
