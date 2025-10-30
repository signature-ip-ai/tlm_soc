// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top___024root.h"

void Vsig_topology_top___024root___ico_sequent__TOP__0(Vsig_topology_top___024root* vlSelf);
void Vsig_topology_top___024root___ico_sequent__TOP__1(Vsig_topology_top___024root* vlSelf);
void Vsig_topology_top___024root___ico_sequent__TOP__2(Vsig_topology_top___024root* vlSelf);
void Vsig_topology_top___024root___ico_sequent__TOP__3(Vsig_topology_top___024root* vlSelf);
void Vsig_topology_top___024root___ico_sequent__TOP__4(Vsig_topology_top___024root* vlSelf);
void Vsig_topology_top___024root___ico_sequent__TOP__5(Vsig_topology_top___024root* vlSelf);
void Vsig_topology_top___024root___ico_sequent__TOP__6(Vsig_topology_top___024root* vlSelf);
void Vsig_topology_top___024root___ico_sequent__TOP__7(Vsig_topology_top___024root* vlSelf);
void Vsig_topology_top___024root___ico_sequent__TOP__8(Vsig_topology_top___024root* vlSelf);
void Vsig_topology_top___024root___ico_sequent__TOP__9(Vsig_topology_top___024root* vlSelf);
void Vsig_topology_top___024root___ico_sequent__TOP__10(Vsig_topology_top___024root* vlSelf);
void Vsig_topology_top___024root___ico_sequent__TOP__11(Vsig_topology_top___024root* vlSelf);
void Vsig_topology_top___024root___ico_sequent__TOP__12(Vsig_topology_top___024root* vlSelf);
void Vsig_topology_top___024root___ico_sequent__TOP__13(Vsig_topology_top___024root* vlSelf);
void Vsig_topology_top___024root___ico_sequent__TOP__14(Vsig_topology_top___024root* vlSelf);
void Vsig_topology_top___024root___ico_sequent__TOP__15(Vsig_topology_top___024root* vlSelf);
void Vsig_topology_top___024root___ico_sequent__TOP__16(Vsig_topology_top___024root* vlSelf);
void Vsig_topology_top___024root___ico_sequent__TOP__17(Vsig_topology_top___024root* vlSelf);

void Vsig_topology_top___024root___eval_ico(Vsig_topology_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsig_topology_top___024root___eval_ico\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vsig_topology_top___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        Vsig_topology_top___024root___ico_sequent__TOP__1(vlSelf);
        Vsig_topology_top___024root___ico_sequent__TOP__2(vlSelf);
        Vsig_topology_top___024root___ico_sequent__TOP__3(vlSelf);
        Vsig_topology_top___024root___ico_sequent__TOP__4(vlSelf);
        Vsig_topology_top___024root___ico_sequent__TOP__5(vlSelf);
        Vsig_topology_top___024root___ico_sequent__TOP__6(vlSelf);
        Vsig_topology_top___024root___ico_sequent__TOP__7(vlSelf);
        Vsig_topology_top___024root___ico_sequent__TOP__8(vlSelf);
        Vsig_topology_top___024root___ico_sequent__TOP__9(vlSelf);
        Vsig_topology_top___024root___ico_sequent__TOP__10(vlSelf);
        Vsig_topology_top___024root___ico_sequent__TOP__11(vlSelf);
        Vsig_topology_top___024root___ico_sequent__TOP__12(vlSelf);
        Vsig_topology_top___024root___ico_sequent__TOP__13(vlSelf);
        Vsig_topology_top___024root___ico_sequent__TOP__14(vlSelf);
        Vsig_topology_top___024root___ico_sequent__TOP__15(vlSelf);
        Vsig_topology_top___024root___ico_sequent__TOP__16(vlSelf);
        Vsig_topology_top___024root___ico_sequent__TOP__17(vlSelf);
    }
}

extern const VlUnpacked<CData/*1:0*/, 128> Vsig_topology_top__ConstPool__TABLE_h6c4a75f7_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsig_topology_top__ConstPool__TABLE_hf914798b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsig_topology_top__ConstPool__TABLE_hcd1786dd_0;

VL_INLINE_OPT void Vsig_topology_top___024root___ico_sequent__TOP__0(Vsig_topology_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsig_topology_top___024root___ico_sequent__TOP__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx34;
    __Vtableidx34 = 0;
    CData/*6:0*/ __Vtableidx49;
    __Vtableidx49 = 0;
    // Body
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_rstb_ic_clk, vlSelfRef.cl0_rstb_ic_clk);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__PCLK_prog, vlSelfRef.PCLK_prog);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__PRESETn_prog, vlSelfRef.PRESETn_prog);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__qp_clk, vlSelfRef.qp_clk);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__qp_rstb, vlSelfRef.qp_rstb);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_cc_intfrx_clk, vlSelfRef.cl0_cc_intfrx_clk);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_cc_rstb_intfrx_clk, vlSelfRef.cl0_cc_rstb_intfrx_clk);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_TX_LINKACTIVEACK, vlSelfRef.cl0_p1_TX_LINKACTIVEACK);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_RX_LINKACTIVEREQ, vlSelfRef.cl0_p1_RX_LINKACTIVEREQ);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_RXSACTIVE, vlSelfRef.cl0_p1_RXSACTIVE);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_TX_LINKACTIVEACK, vlSelfRef.cl0_p0_TX_LINKACTIVEACK);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_RX_LINKACTIVEREQ, vlSelfRef.cl0_p0_RX_LINKACTIVEREQ);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_RXSACTIVE, vlSelfRef.cl0_p0_RXSACTIVE);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p3_RX_LINKACTIVEREQ, vlSelfRef.cl0_p3_RX_LINKACTIVEREQ);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p3_TX_LINKACTIVEACK, vlSelfRef.cl0_p3_TX_LINKACTIVEACK);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p3_RXSACTIVE, vlSelfRef.cl0_p3_RXSACTIVE);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__qreqn, vlSelfRef.qreqn);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__pstate, vlSelfRef.pstate);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__preq, vlSelfRef.preq);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p3_RX_RSPFLITPEND, vlSelfRef.cl0_p3_RX_RSPFLITPEND);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p3_RX_DATFLITPEND, vlSelfRef.cl0_p3_RX_DATFLITPEND);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_rstb_intfrx_clk, vlSelfRef.cl0_p1_rstb_intfrx_clk);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_rstb_intfrx_clk, vlSelfRef.cl0_p0_rstb_intfrx_clk);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p3_rstb_intfrx_clk, vlSelfRef.cl0_p3_rstb_intfrx_clk);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_RX_REQFLITPEND, vlSelfRef.cl0_p1_RX_REQFLITPEND);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_RX_RSPFLITPEND, vlSelfRef.cl0_p1_RX_RSPFLITPEND);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_RX_DATFLITPEND, vlSelfRef.cl0_p1_RX_DATFLITPEND);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_TX_SNPLCRDV, vlSelfRef.cl0_p1_TX_SNPLCRDV);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_TX_RSPLCRDV, vlSelfRef.cl0_p1_TX_RSPLCRDV);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_TX_DATLCRDV, vlSelfRef.cl0_p1_TX_DATLCRDV);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_RX_REQFLITPEND, vlSelfRef.cl0_p0_RX_REQFLITPEND);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_RX_RSPFLITPEND, vlSelfRef.cl0_p0_RX_RSPFLITPEND);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_RX_DATFLITPEND, vlSelfRef.cl0_p0_RX_DATFLITPEND);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_TX_SNPLCRDV, vlSelfRef.cl0_p0_TX_SNPLCRDV);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_TX_RSPLCRDV, vlSelfRef.cl0_p0_TX_RSPLCRDV);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_TX_DATLCRDV, vlSelfRef.cl0_p0_TX_DATLCRDV);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p3_TX_REQLCRDV, vlSelfRef.cl0_p3_TX_REQLCRDV);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p3_TX_DATLCRDV, vlSelfRef.cl0_p3_TX_DATLCRDV);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_intfrx_clk, vlSelfRef.cl0_p1_intfrx_clk);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_intfrx_clk, vlSelfRef.cl0_p0_intfrx_clk);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p3_intfrx_clk, vlSelfRef.cl0_p3_intfrx_clk);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_ic_clk, vlSelfRef.cl0_ic_clk);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_SYSCOREQ, vlSelfRef.cl0_p1_SYSCOREQ);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_SYSCOREQ, vlSelfRef.cl0_p0_SYSCOREQ);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__PSEL_prog, vlSelfRef.PSEL_prog);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__PENABLE_prog, vlSelfRef.PENABLE_prog);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__PWRITE_prog, vlSelfRef.PWRITE_prog);
    VL_ASSIGN_ISI(32,vlSelfRef.__Vcellinp__sig_topology_top__PADDR_prog, vlSelfRef.PADDR_prog);
    VL_ASSIGN_ISI(32,vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog, vlSelfRef.PWDATA_prog);
    VL_ASSIGN_ISI(4,vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog, vlSelfRef.PSTRB_prog);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_RX_REQFLITV, vlSelfRef.cl0_p1_RX_REQFLITV);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_RX_REQFLITV, vlSelfRef.cl0_p0_RX_REQFLITV);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_RX_DATFLITV, vlSelfRef.cl0_p1_RX_DATFLITV);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_RX_DATFLITV, vlSelfRef.cl0_p0_RX_DATFLITV);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p3_RX_DATFLITV, vlSelfRef.cl0_p3_RX_DATFLITV);
    VL_ASSIGN_WSW(680,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_RX_DATFLIT, vlSelfRef.cl0_p1_RX_DATFLIT);
    VL_ASSIGN_WSW(680,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_RX_DATFLIT, vlSelfRef.cl0_p0_RX_DATFLIT);
    VL_ASSIGN_WSW(680,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p3_RX_DATFLIT, vlSelfRef.cl0_p3_RX_DATFLIT);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p3_RX_RSPFLITV, vlSelfRef.cl0_p3_RX_RSPFLITV);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_RX_RSPFLITV, vlSelfRef.cl0_p1_RX_RSPFLITV);
    VL_ASSIGN_ISI(1,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_RX_RSPFLITV, vlSelfRef.cl0_p0_RX_RSPFLITV);
    VL_ASSIGN_WSW(73,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p3_RX_RSPFLIT, vlSelfRef.cl0_p3_RX_RSPFLIT);
    VL_ASSIGN_WSW(73,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_RX_RSPFLIT, vlSelfRef.cl0_p1_RX_RSPFLIT);
    VL_ASSIGN_WSW(73,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_RX_RSPFLIT, vlSelfRef.cl0_p0_RX_RSPFLIT);
    VL_ASSIGN_WSW(151,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_RX_REQFLIT, vlSelfRef.cl0_p1_RX_REQFLIT);
    VL_ASSIGN_WSW(151,vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_RX_REQFLIT, vlSelfRef.cl0_p0_RX_REQFLIT);
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p3_rx_activate_clk 
        = ((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p3_RX_DATFLITPEND) 
           | (IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p3_RX_RSPFLITPEND));
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__rst_n_pp_intfc_clk 
        = (((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p3_rstb_intfrx_clk) 
            << 3U) | (((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_rstb_intfrx_clk) 
                       << 1U) | (IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_rstb_intfrx_clk)));
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_rx_activate_clk 
        = ((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_RX_REQFLITPEND) 
           | ((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_RX_DATFLITPEND) 
              | (IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_RX_RSPFLITPEND)));
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp__DOT__available_credits_nxt 
        = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__available_credits_rsp;
    if (((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_TX_RSPLCRDV) 
         & (~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__consumed_crdt_rsp)))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp__DOT__available_credits_nxt 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__available_credits_rsp)));
    } else if (((~ (IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_TX_RSPLCRDV)) 
                & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__consumed_crdt_rsp))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp__DOT__available_credits_nxt 
            = (0xfU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__available_credits_rsp) 
                       - (IData)(1U)));
    }
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat__DOT__available_credits_nxt 
        = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__available_credits_dat;
    if (((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_TX_DATLCRDV) 
         & (~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__consumed_crdt_dat)))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat__DOT__available_credits_nxt 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__available_credits_dat)));
    } else if (((~ (IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_TX_DATLCRDV)) 
                & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__consumed_crdt_dat))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat__DOT__available_credits_nxt 
            = (0xfU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__available_credits_dat) 
                       - (IData)(1U)));
    }
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_rx_activate_clk 
        = ((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_RX_REQFLITPEND) 
           | ((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_RX_DATFLITPEND) 
              | (IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_RX_RSPFLITPEND)));
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp__DOT__available_credits_nxt 
        = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__available_credits_rsp;
    if (((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_TX_RSPLCRDV) 
         & (~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__consumed_crdt_rsp)))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp__DOT__available_credits_nxt 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__available_credits_rsp)));
    } else if (((~ (IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_TX_RSPLCRDV)) 
                & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__consumed_crdt_rsp))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp__DOT__available_credits_nxt 
            = (0xfU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__available_credits_rsp) 
                       - (IData)(1U)));
    }
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat__DOT__available_credits_nxt 
        = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__available_credits_dat;
    if (((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_TX_DATLCRDV) 
         & (~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__consumed_crdt_dat)))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat__DOT__available_credits_nxt 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__available_credits_dat)));
    } else if (((~ (IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_TX_DATLCRDV)) 
                & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__consumed_crdt_dat))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat__DOT__available_credits_nxt 
            = (0xfU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__available_credits_dat) 
                       - (IData)(1U)));
    }
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp__DOT__available_credits_nxt 
        = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__available_credits_snp;
    if (((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p3_TX_REQLCRDV) 
         & (~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__consumed_crdt_snp)))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp__DOT__available_credits_nxt 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__available_credits_snp)));
    } else if (((~ (IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p3_TX_REQLCRDV)) 
                & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__consumed_crdt_snp))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp__DOT__available_credits_nxt 
            = (0xfU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__available_credits_snp) 
                       - (IData)(1U)));
    }
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat__DOT__available_credits_nxt 
        = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__available_credits_dat;
    if (((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p3_TX_DATLCRDV) 
         & (~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__consumed_crdt_dat)))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat__DOT__available_credits_nxt 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__available_credits_dat)));
    } else if (((~ (IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p3_TX_DATLCRDV)) 
                & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__consumed_crdt_dat))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat__DOT__available_credits_nxt 
            = (0xfU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__available_credits_dat) 
                       - (IData)(1U)));
    }
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__pp_intfc_clk 
        = (((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p3_intfrx_clk) 
            << 3U) | (((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_intfrx_clk) 
                       << 1U) | (IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_intfrx_clk)));
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__pp_rx_intfc_gclk 
        = ((((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p3_intfrx_clk) 
             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_intfc_clk__DOT__final_cg_enable_n)) 
            << 3U) | ((((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_intfrx_clk) 
                        & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_intfc_clk__DOT__final_cg_enable_n)) 
                       << 1U) | ((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_intfrx_clk) 
                                 & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_rx_intfc_clk__DOT__final_cg_enable_n))));
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__pp_tx_intfc_gclk 
        = ((((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p3_intfrx_clk) 
             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_intfc_clk__DOT__final_cg_enable_n)) 
            << 3U) | ((((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_intfrx_clk) 
                        & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_intfc_clk__DOT__final_cg_enable_n)) 
                       << 1U) | ((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_intfrx_clk) 
                                 & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_tx_intfc_clk__DOT__final_cg_enable_n))));
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_ic_gclk 
        = ((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_ic_clk) 
           & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__inst_cg_cc_ic_clk__DOT__final_cg_enable_n));
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT____Vcellinp__sig_node_porttop_rn_p1__rx_ic_gclk 
        = ((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_ic_clk) 
           & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_ic_clk__DOT__final_cg_enable_n));
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT____Vcellinp__sig_node_porttop_rn_p1__tx_ic_gclk 
        = ((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_ic_clk) 
           & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_ic_clk__DOT__final_cg_enable_n));
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT____Vcellinp__sig_node_porttop_rn_p0__rx_ic_gclk 
        = ((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_ic_clk) 
           & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_rx_ic_clk__DOT__final_cg_enable_n));
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT____Vcellinp__sig_node_porttop_rn_p0__tx_ic_gclk 
        = ((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_ic_clk) 
           & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_tx_ic_clk__DOT__final_cg_enable_n));
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT____Vcellinp__sig_node_porttop_sn_p3__rx_ic_gclk 
        = ((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_ic_clk) 
           & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_ic_clk__DOT__final_cg_enable_n));
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT____Vcellinp__sig_node_porttop_sn_p3__tx_ic_gclk 
        = ((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_ic_clk) 
           & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_ic_clk__DOT__final_cg_enable_n));
    __Vtableidx34 = (((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__inst_sync_syscoh__DOT____Vcellout__gen_double_synchronizer_param_dw__BRA__1__KET____DOT__i_sig_double_synchronizer__sig_dest) 
                        << 6U) | ((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_SYSCOREQ) 
                                  << 5U)) | (((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__valid_buffer)) 
                                              << 4U) 
                                             | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__inst_sync_syscoh__DOT____Vcellout__gen_double_synchronizer_param_dw__BRA__0__KET____DOT__i_sig_double_synchronizer__sig_dest) 
                                                << 3U))) 
                     | (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__syscoack_to_pl) 
                         << 2U) | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__coh_state)));
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__coh_state_nxt 
        = Vsig_topology_top__ConstPool__TABLE_h6c4a75f7_0
        [__Vtableidx34];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__syscoack_nxt 
        = Vsig_topology_top__ConstPool__TABLE_hf914798b_0
        [__Vtableidx34];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__sysco_is_disabled 
        = Vsig_topology_top__ConstPool__TABLE_hcd1786dd_0
        [__Vtableidx34];
    __Vtableidx49 = (((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__inst_sync_syscoh__DOT____Vcellout__gen_double_synchronizer_param_dw__BRA__1__KET____DOT__i_sig_double_synchronizer__sig_dest) 
                        << 6U) | ((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_SYSCOREQ) 
                                  << 5U)) | (((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__valid_buffer)) 
                                              << 4U) 
                                             | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__inst_sync_syscoh__DOT____Vcellout__gen_double_synchronizer_param_dw__BRA__0__KET____DOT__i_sig_double_synchronizer__sig_dest) 
                                                << 3U))) 
                     | (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__syscoack_to_pl) 
                         << 2U) | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__coh_state)));
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__coh_state_nxt 
        = Vsig_topology_top__ConstPool__TABLE_h6c4a75f7_0
        [__Vtableidx49];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__syscoack_nxt 
        = Vsig_topology_top__ConstPool__TABLE_hf914798b_0
        [__Vtableidx49];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__sysco_is_disabled 
        = Vsig_topology_top__ConstPool__TABLE_hcd1786dd_0
        [__Vtableidx49];
    vlSelfRef.sig_topology_top__DOT__i_sig_apb_prog__DOT__apb_st_nxt 
        = vlSelfRef.sig_topology_top__DOT__i_sig_apb_prog__DOT__apb_st;
    if ((4U & (IData)(vlSelfRef.sig_topology_top__DOT__i_sig_apb_prog__DOT__apb_st))) {
        if ((1U & (~ ((IData)(vlSelfRef.sig_topology_top__DOT__i_sig_apb_prog__DOT__apb_st) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.sig_topology_top__DOT__i_sig_apb_prog__DOT__apb_st)))) {
                vlSelfRef.sig_topology_top__DOT__i_sig_apb_prog__DOT__apb_st_nxt = 1U;
            }
        }
    } else if ((2U & (IData)(vlSelfRef.sig_topology_top__DOT__i_sig_apb_prog__DOT__apb_st))) {
        if ((1U & (IData)(vlSelfRef.sig_topology_top__DOT__i_sig_apb_prog__DOT__apb_st))) {
            if (vlSelfRef.sig_topology_top__DOT__reg_rddata_valid_prog) {
                vlSelfRef.sig_topology_top__DOT__i_sig_apb_prog__DOT__apb_st_nxt = 4U;
            }
        } else {
            vlSelfRef.sig_topology_top__DOT__i_sig_apb_prog__DOT__apb_st_nxt = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.sig_topology_top__DOT__i_sig_apb_prog__DOT__apb_st))) {
        if (vlSelfRef.__Vcellinp__sig_topology_top__PSEL_prog) {
            if (vlSelfRef.__Vcellinp__sig_topology_top__PENABLE_prog) {
                vlSelfRef.sig_topology_top__DOT__i_sig_apb_prog__DOT__apb_st_nxt 
                    = ((IData)(vlSelfRef.__Vcellinp__sig_topology_top__PWRITE_prog)
                        ? 2U : 3U);
            }
        } else {
            vlSelfRef.sig_topology_top__DOT__i_sig_apb_prog__DOT__apb_st_nxt = 0U;
        }
    } else if (vlSelfRef.__Vcellinp__sig_topology_top__PSEL_prog) {
        vlSelfRef.sig_topology_top__DOT__i_sig_apb_prog__DOT__apb_st_nxt = 1U;
    }
    vlSelfRef.sig_topology_top__DOT__reg_wren_prog = 0U;
    vlSelfRef.sig_topology_top__DOT__reg_rden_prog = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.sig_topology_top__DOT__i_sig_apb_prog__DOT__apb_st) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.sig_topology_top__DOT__i_sig_apb_prog__DOT__apb_st) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.sig_topology_top__DOT__i_sig_apb_prog__DOT__apb_st))) {
                if (vlSelfRef.__Vcellinp__sig_topology_top__PSEL_prog) {
                    if (vlSelfRef.__Vcellinp__sig_topology_top__PENABLE_prog) {
                        if (vlSelfRef.__Vcellinp__sig_topology_top__PWRITE_prog) {
                            vlSelfRef.sig_topology_top__DOT__reg_wren_prog = 1U;
                        }
                    }
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.sig_topology_top__DOT__i_sig_apb_prog__DOT__apb_st))) {
            if ((1U & (IData)(vlSelfRef.sig_topology_top__DOT__i_sig_apb_prog__DOT__apb_st))) {
                if ((1U & (~ (IData)(vlSelfRef.sig_topology_top__DOT__reg_rddata_valid_prog)))) {
                    vlSelfRef.sig_topology_top__DOT__reg_rden_prog = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.sig_topology_top__DOT__i_sig_apb_prog__DOT__apb_st))) {
            if (vlSelfRef.__Vcellinp__sig_topology_top__PSEL_prog) {
                if (vlSelfRef.__Vcellinp__sig_topology_top__PENABLE_prog) {
                    if ((1U & (~ (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PWRITE_prog)))) {
                        vlSelfRef.sig_topology_top__DOT__reg_rden_prog = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_0__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_0__DOT__data_stored;
    if ((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_0__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_0__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_0__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_0__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_0__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_0__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_0__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_0__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_0__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_0__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_1__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_1__DOT__data_stored;
    if ((2U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_1__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_1__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_1__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_1__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_1__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_1__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_1__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_1__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_1__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_1__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_2__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_2__DOT__data_stored;
    if ((4U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_2__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_2__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_2__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_2__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_2__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_2__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_2__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_2__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_2__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_2__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_3__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_3__DOT__data_stored;
    if ((8U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_3__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_3__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_3__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_3__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_3__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_3__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_3__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_3__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_3__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_3__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_4__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_4__DOT__data_stored;
    if ((0x10U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_4__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_4__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_4__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_4__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_4__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_4__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_4__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_4__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_4__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_4__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_5__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_5__DOT__data_stored;
    if ((0x20U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_5__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_5__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_5__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_5__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_5__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_5__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_5__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_5__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_5__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_5__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_6__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_6__DOT__data_stored;
    if ((0x40U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_6__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_6__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_6__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_6__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_6__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_6__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_6__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_6__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_6__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_6__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_7__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_7__DOT__data_stored;
    if ((0x80U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_7__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_7__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_7__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_7__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_7__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_7__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_7__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_7__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_7__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_7__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_8__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_8__DOT__data_stored;
    if ((0x100U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_8__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_8__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_8__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_8__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_8__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_8__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_8__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_8__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_8__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_8__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_9__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_9__DOT__data_stored;
    if ((0x200U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_9__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_9__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_9__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_9__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_9__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_9__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_9__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_9__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_9__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_9__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_10__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_10__DOT__data_stored;
    if ((0x400U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_10__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_10__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_10__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_10__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_10__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_10__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_10__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_10__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_10__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_10__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_11__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_11__DOT__data_stored;
    if ((0x800U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_11__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_11__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_11__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_11__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_11__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_11__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_11__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_11__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_11__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_11__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_12__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_12__DOT__data_stored;
    if ((0x1000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_12__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_12__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_12__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_12__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_12__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_12__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_12__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_12__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_12__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_12__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_13__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_13__DOT__data_stored;
    if ((0x2000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_13__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_13__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_13__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_13__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_13__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_13__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_13__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_13__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_13__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_13__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_14__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_14__DOT__data_stored;
    if ((0x4000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_14__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_14__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_14__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_14__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_14__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_14__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_14__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_14__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_14__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_14__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_15__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_15__DOT__data_stored;
    if ((0x8000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_15__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_15__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_15__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_15__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_15__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_15__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_15__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_15__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_15__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_15__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_16__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_16__DOT__data_stored;
    if ((0x10000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_16__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_16__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_16__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_16__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_16__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_16__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_16__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_16__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_16__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_16__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_17__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_17__DOT__data_stored;
    if ((0x20000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_17__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_17__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_17__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_17__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_17__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_17__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_17__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_17__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_17__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_17__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_18__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_18__DOT__data_stored;
    if ((0x40000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_18__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_18__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_18__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_18__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_18__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_18__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_18__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_18__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_18__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_18__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_19__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_19__DOT__data_stored;
    if ((0x80000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_19__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_19__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_19__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_19__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_19__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_19__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_19__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_19__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_19__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_19__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_20__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_20__DOT__data_stored;
    if ((0x100000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_20__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_20__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_20__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_20__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_20__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_20__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_20__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_20__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_20__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_20__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_21__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_21__DOT__data_stored;
    if ((0x200000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_21__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_21__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_21__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_21__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_21__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_21__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_21__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_21__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_21__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_21__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_22__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_22__DOT__data_stored;
    if ((0x400000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_22__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_22__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_22__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_22__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_22__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_22__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_22__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_22__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_22__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_22__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_23__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_23__DOT__data_stored;
    if ((0x800000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_23__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_23__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_23__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_23__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_23__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_23__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_23__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_23__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_23__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_23__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_24__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_24__DOT__data_stored;
    if ((0x1000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_24__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_24__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_24__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_24__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_24__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_24__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_24__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_24__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_24__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_24__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_25__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_25__DOT__data_stored;
    if ((0x2000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_25__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_25__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_25__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_25__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_25__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_25__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_25__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_25__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_25__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_25__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_26__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_26__DOT__data_stored;
    if ((0x4000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_26__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_26__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_26__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_26__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_26__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_26__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_26__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_26__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_26__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_26__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_27__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_27__DOT__data_stored;
    if ((0x8000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_27__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_27__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_27__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_27__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_27__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_27__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_27__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_27__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_27__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_27__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_28__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_28__DOT__data_stored;
    if ((0x10000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_28__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_28__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_28__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_28__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_28__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_28__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_28__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_28__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_28__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_28__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_29__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_29__DOT__data_stored;
    if ((0x20000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_29__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_29__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_29__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_29__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_29__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_29__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_29__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_29__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_29__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_29__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_30__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_30__DOT__data_stored;
    if ((0x40000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_30__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_30__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_30__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_30__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_30__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_30__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_30__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_30__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_30__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_30__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_31__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_31__DOT__data_stored;
    if ((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
         >> 0x1fU)) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_31__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_31__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_31__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_31__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_31__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_31__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_31__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_31__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_31__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_31__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_32__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_32__DOT__data_stored;
    if ((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_32__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_32__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_32__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_32__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_32__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_32__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_32__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_32__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_32__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_32__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_33__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_33__DOT__data_stored;
    if ((2U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_33__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_33__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_33__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_33__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_33__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_33__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_33__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_33__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_33__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_33__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_34__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_34__DOT__data_stored;
    if ((4U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_34__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_34__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_34__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_34__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_34__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_34__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_34__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_34__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_34__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_34__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_35__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_35__DOT__data_stored;
    if ((8U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_35__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_35__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_35__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_35__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_35__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_35__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_35__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_35__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_35__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_35__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_36__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_36__DOT__data_stored;
    if ((0x10U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_36__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_36__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_36__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_36__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_36__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_36__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_36__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_36__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_36__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_36__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_37__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_37__DOT__data_stored;
    if ((0x20U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_37__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_37__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_37__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_37__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_37__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_37__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_37__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_37__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_37__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_37__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_38__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_38__DOT__data_stored;
    if ((0x40U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_38__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_38__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_38__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_38__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_38__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_38__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_38__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_38__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_38__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_38__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_39__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_39__DOT__data_stored;
    if ((0x80U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_39__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_39__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_39__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_39__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_39__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_39__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_39__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_39__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_39__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_39__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_40__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_40__DOT__data_stored;
    if ((0x100U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_40__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_40__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_40__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_40__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_40__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_40__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_40__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_40__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_40__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_40__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_41__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_41__DOT__data_stored;
    if ((0x200U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_41__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_41__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_41__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_41__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_41__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_41__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_41__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_41__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_41__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_41__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_42__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_42__DOT__data_stored;
    if ((0x400U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_42__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_42__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_42__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_42__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_42__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_42__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_42__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_42__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_42__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_42__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_43__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_43__DOT__data_stored;
    if ((0x800U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_43__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_43__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_43__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_43__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_43__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_43__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_43__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_43__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_43__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_43__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_44__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_44__DOT__data_stored;
    if ((0x1000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_44__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_44__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_44__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_44__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_44__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_44__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_44__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_44__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_44__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_44__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_45__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_45__DOT__data_stored;
    if ((0x2000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_45__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_45__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_45__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_45__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_45__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_45__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_45__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_45__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_45__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_45__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_46__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_46__DOT__data_stored;
    if ((0x4000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_46__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_46__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_46__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_46__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_46__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_46__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_46__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_46__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_46__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_46__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_47__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_47__DOT__data_stored;
    if ((0x8000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_47__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_47__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_47__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_47__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_47__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_47__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_47__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_47__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_47__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_47__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_48__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_48__DOT__data_stored;
    if ((0x10000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_48__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_48__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_48__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_48__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_48__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_48__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_48__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_48__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_48__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_48__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_49__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_49__DOT__data_stored;
    if ((0x20000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_49__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_49__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_49__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_49__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_49__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_49__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_49__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_49__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_49__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_49__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_50__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_50__DOT__data_stored;
    if ((0x40000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_50__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_50__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_50__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_50__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_50__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_50__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_50__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_50__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_50__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_50__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_51__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_51__DOT__data_stored;
    if ((0x80000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_51__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_51__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_51__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_51__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_51__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_51__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_51__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_51__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_51__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_51__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_52__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_52__DOT__data_stored;
    if ((0x100000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_52__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_52__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_52__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_52__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_52__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_52__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_52__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_52__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_52__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_52__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_53__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_53__DOT__data_stored;
    if ((0x200000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_53__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_53__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_53__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_53__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_53__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_53__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_53__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_53__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_53__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_53__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_54__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_54__DOT__data_stored;
    if ((0x400000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_54__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_54__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_54__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_54__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_54__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_54__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_54__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_54__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_54__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_54__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_55__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_55__DOT__data_stored;
    if ((0x800000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_55__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_55__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_55__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_55__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_55__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_55__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_55__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_55__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_55__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_55__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_56__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_56__DOT__data_stored;
    if ((0x1000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_56__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_56__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_56__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_56__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_56__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_56__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_56__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_56__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_56__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_56__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_57__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_57__DOT__data_stored;
    if ((0x2000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_57__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_57__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_57__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_57__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_57__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_57__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_57__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_57__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_57__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_57__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_58__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_58__DOT__data_stored;
    if ((0x4000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_58__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_58__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_58__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_58__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_58__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_58__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_58__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_58__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_58__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_58__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_59__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_59__DOT__data_stored;
    if ((0x8000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_59__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_59__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_59__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_59__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_59__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_59__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_59__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_59__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_59__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_59__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_60__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_60__DOT__data_stored;
    if ((0x10000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_60__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_60__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_60__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_60__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_60__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_60__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_60__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_60__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_60__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_60__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_61__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_61__DOT__data_stored;
    if ((0x20000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_61__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_61__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_61__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_61__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_61__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_61__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_61__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_61__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_61__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_61__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_62__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_62__DOT__data_stored;
    if ((0x40000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_62__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_62__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_62__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_62__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_62__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_62__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_62__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_62__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_62__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_62__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_63__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_63__DOT__data_stored;
    if ((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
         >> 0x1fU)) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_63__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_63__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_63__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_63__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_63__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_63__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_63__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_63__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_63__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_63__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_64__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_64__DOT__data_stored;
    if ((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_64__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_64__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_64__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_64__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_64__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_64__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_64__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_64__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_64__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_64__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_65__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_65__DOT__data_stored;
    if ((2U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_65__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_65__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_65__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_65__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_65__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_65__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_65__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_65__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_65__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_65__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_66__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_66__DOT__data_stored;
    if ((4U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_66__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_66__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_66__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_66__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_66__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_66__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_66__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_66__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_66__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_66__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_67__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_67__DOT__data_stored;
    if ((8U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_67__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_67__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_67__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_67__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_67__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_67__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_67__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_67__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_67__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_67__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_68__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_68__DOT__data_stored;
    if ((0x10U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_68__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_68__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_68__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_68__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_68__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_68__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_68__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_68__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_68__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_68__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_69__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_69__DOT__data_stored;
    if ((0x20U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_69__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_69__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_69__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_69__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_69__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_69__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_69__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_69__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_69__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_69__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_70__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_70__DOT__data_stored;
    if ((0x40U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_70__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_70__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_70__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_70__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_70__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_70__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_70__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_70__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_70__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_70__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_71__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_71__DOT__data_stored;
    if ((0x80U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_71__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_71__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_71__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_71__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_71__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_71__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_71__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_71__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_71__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_71__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_72__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_72__DOT__data_stored;
    if ((0x100U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_72__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_72__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_72__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_72__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_72__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_72__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_72__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_72__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_72__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_72__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_73__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_73__DOT__data_stored;
    if ((0x200U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_73__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_73__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_73__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_73__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_73__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_73__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_73__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_73__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_73__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_73__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_74__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_74__DOT__data_stored;
    if ((0x400U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_74__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_74__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_74__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_74__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_74__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_74__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_74__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_74__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_74__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_74__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_75__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_75__DOT__data_stored;
    if ((0x800U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_75__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_75__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_75__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_75__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_75__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_75__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_75__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_75__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_75__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_75__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_76__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_76__DOT__data_stored;
    if ((0x1000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_76__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_76__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_76__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_76__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_76__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_76__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_76__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_76__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_76__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_76__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_77__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_77__DOT__data_stored;
    if ((0x2000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_77__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_77__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_77__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_77__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_77__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_77__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_77__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_77__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_77__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_77__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_78__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_78__DOT__data_stored;
    if ((0x4000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_78__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_78__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_78__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_78__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_78__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_78__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_78__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_78__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_78__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_78__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_79__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_79__DOT__data_stored;
    if ((0x8000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_79__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_79__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_79__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_79__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_79__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_79__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_79__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_79__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_79__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_79__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_80__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_80__DOT__data_stored;
    if ((0x10000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_80__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_80__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_80__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_80__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_80__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_80__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_80__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_80__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_80__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_80__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_81__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_81__DOT__data_stored;
    if ((0x20000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_81__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_81__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_81__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_81__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_81__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_81__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_81__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_81__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_81__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_81__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_82__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_82__DOT__data_stored;
    if ((0x40000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_82__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_82__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_82__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_82__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_82__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_82__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_82__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_82__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_82__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_82__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_83__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_83__DOT__data_stored;
    if ((0x80000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_83__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_83__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_83__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_83__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_83__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_83__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_83__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_83__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_83__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_83__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_84__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_84__DOT__data_stored;
    if ((0x100000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_84__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_84__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_84__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_84__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_84__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_84__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_84__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_84__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_84__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_84__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_85__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_85__DOT__data_stored;
    if ((0x200000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_85__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_85__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_85__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_85__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_85__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_85__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_85__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_85__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_85__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_85__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_86__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_86__DOT__data_stored;
    if ((0x400000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_86__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_86__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_86__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_86__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_86__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_86__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_86__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_86__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_86__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_86__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_87__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_87__DOT__data_stored;
    if ((0x800000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_87__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_87__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_87__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_87__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_87__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_87__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_87__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_87__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_87__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_87__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_88__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_88__DOT__data_stored;
    if ((0x1000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_88__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_88__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_88__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_88__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_88__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_88__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_88__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_88__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_88__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_88__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_89__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_89__DOT__data_stored;
    if ((0x2000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_89__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_89__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_89__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_89__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_89__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_89__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_89__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_89__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_89__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_89__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_90__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_90__DOT__data_stored;
    if ((0x4000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_90__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_90__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_90__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_90__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_90__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_90__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_90__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_90__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_90__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_90__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_91__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_91__DOT__data_stored;
    if ((0x8000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_91__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_91__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_91__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_91__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_91__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_91__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_91__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_91__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_91__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_91__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_92__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_92__DOT__data_stored;
    if ((0x10000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_92__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_92__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_92__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_92__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_92__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_92__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_92__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_92__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_92__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_92__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_93__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_93__DOT__data_stored;
    if ((0x20000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_93__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_93__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_93__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_93__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_93__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_93__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_93__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_93__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_93__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_93__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_94__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_94__DOT__data_stored;
    if ((0x40000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_94__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_94__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_94__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_94__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_94__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_94__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_94__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_94__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_94__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_94__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_95__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_95__DOT__data_stored;
    if ((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
         >> 0x1fU)) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_95__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_95__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_95__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_95__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_95__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_95__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_95__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_95__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_95__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_95__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_96__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_96__DOT__data_stored;
    if ((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_96__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_96__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_96__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_96__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_96__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_96__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_96__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_96__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_96__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_96__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_97__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_97__DOT__data_stored;
    if ((2U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_97__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_97__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_97__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_97__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_97__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_97__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_97__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_97__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_97__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_97__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_98__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_98__DOT__data_stored;
    if ((4U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_98__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_98__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_98__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_98__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_98__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_98__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_98__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_98__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_98__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_98__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_99__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_99__DOT__data_stored;
    if ((8U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_99__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_99__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_99__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_99__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_99__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_99__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_99__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_99__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_99__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_99__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_100__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_100__DOT__data_stored;
    if ((0x10U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_100__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_100__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_100__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_100__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_100__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_100__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_100__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_100__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_100__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_100__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_101__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_101__DOT__data_stored;
    if ((0x20U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_101__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_101__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_101__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_101__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_101__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_101__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_101__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_101__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_101__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_101__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_102__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_102__DOT__data_stored;
    if ((0x40U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_102__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_102__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_102__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_102__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_102__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_102__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_102__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_102__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_102__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_102__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_103__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_103__DOT__data_stored;
    if ((0x80U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_103__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_103__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_103__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_103__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_103__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_103__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_103__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_103__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_103__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_103__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_104__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_104__DOT__data_stored;
    if ((0x100U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_104__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_104__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_104__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_104__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_104__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_104__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_104__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_104__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_104__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_104__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_105__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_105__DOT__data_stored;
    if ((0x200U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_105__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_105__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_105__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_105__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_105__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_105__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_105__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_105__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_105__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_105__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_106__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_106__DOT__data_stored;
    if ((0x400U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_106__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_106__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_106__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_106__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_106__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_106__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_106__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_106__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_106__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_106__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_107__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_107__DOT__data_stored;
    if ((0x800U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_107__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_107__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_107__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_107__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_107__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_107__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_107__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_107__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_107__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_107__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_108__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_108__DOT__data_stored;
    if ((0x1000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_108__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_108__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_108__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_108__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_108__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_108__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_108__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_108__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_108__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_108__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_109__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_109__DOT__data_stored;
    if ((0x2000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_109__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_109__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_109__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_109__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_109__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_109__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_109__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_109__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_109__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_109__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_110__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_110__DOT__data_stored;
    if ((0x4000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_110__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_110__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_110__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_110__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_110__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_110__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_110__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_110__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_110__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_110__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_111__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_111__DOT__data_stored;
    if ((0x8000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_111__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_111__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_111__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_111__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_111__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_111__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_111__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_111__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_111__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_111__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_112__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_112__DOT__data_stored;
    if ((0x10000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_112__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_112__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_112__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_112__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_112__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_112__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_112__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_112__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_112__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_112__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_113__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_113__DOT__data_stored;
    if ((0x20000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_113__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_113__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_113__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_113__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_113__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_113__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_113__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_113__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_113__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_113__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_114__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_114__DOT__data_stored;
    if ((0x40000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_114__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_114__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_114__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_114__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_114__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_114__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_114__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_114__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_114__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_114__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_115__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_115__DOT__data_stored;
    if ((0x80000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_115__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_115__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_115__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_115__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_115__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_115__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_115__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_115__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_115__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_115__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_116__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_116__DOT__data_stored;
    if ((0x100000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_116__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_116__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_116__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_116__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_116__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_116__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_116__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_116__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_116__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_116__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_117__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_117__DOT__data_stored;
    if ((0x200000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_117__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_117__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_117__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_117__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_117__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_117__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_117__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_117__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_117__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_117__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_118__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_118__DOT__data_stored;
    if ((0x400000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_118__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_118__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_118__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_118__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_118__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_118__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_118__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_118__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_118__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_118__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_119__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_119__DOT__data_stored;
    if ((0x800000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_119__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_119__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_119__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_119__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_119__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_119__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_119__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_119__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_119__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_119__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_120__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_120__DOT__data_stored;
    if ((0x1000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_120__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_120__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_120__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_120__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_120__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_120__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_120__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_120__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_120__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_120__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_121__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_121__DOT__data_stored;
    if ((0x2000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_121__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_121__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_121__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_121__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_121__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_121__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_121__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_121__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_121__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_121__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_122__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_122__DOT__data_stored;
    if ((0x4000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_122__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_122__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_122__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_122__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_122__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_122__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_122__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_122__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_122__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_122__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_123__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_123__DOT__data_stored;
    if ((0x8000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_123__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_123__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_123__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_123__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_123__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_123__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_123__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_123__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_123__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_123__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_124__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_124__DOT__data_stored;
    if ((0x10000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_124__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_124__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_124__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_124__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_124__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_124__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_124__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_124__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_124__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_124__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_125__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_125__DOT__data_stored;
    if ((0x20000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_125__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_125__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_125__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_125__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_125__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_125__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_125__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_125__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_125__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_125__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_126__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_126__DOT__data_stored;
    if ((0x40000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_126__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_126__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_126__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_126__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_126__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_126__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_126__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_126__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_126__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_126__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_127__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_127__DOT__data_stored;
    if ((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
         >> 0x1fU)) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_127__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_127__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_127__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_127__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_127__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_127__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_127__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_127__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_127__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_127__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_128__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_128__DOT__data_stored;
    if ((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_128__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_128__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_128__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_128__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_128__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_128__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_128__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_128__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_128__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_128__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_129__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_129__DOT__data_stored;
    if ((2U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_129__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_129__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_129__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_129__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_129__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_129__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_129__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_129__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_129__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_129__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_130__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_130__DOT__data_stored;
    if ((4U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_130__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_130__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_130__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_130__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_130__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_130__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_130__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_130__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_130__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_130__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_131__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_131__DOT__data_stored;
    if ((8U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_131__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_131__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_131__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_131__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_131__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_131__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_131__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_131__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_131__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_131__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_132__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_132__DOT__data_stored;
    if ((0x10U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_132__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_132__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_132__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_132__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_132__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_132__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_132__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_132__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_132__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_132__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_133__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_133__DOT__data_stored;
    if ((0x20U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_133__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_133__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_133__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_133__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_133__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_133__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_133__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_133__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_133__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_133__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_134__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_134__DOT__data_stored;
    if ((0x40U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_134__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_134__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_134__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_134__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_134__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_134__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_134__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_134__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_134__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_134__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_135__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_135__DOT__data_stored;
    if ((0x80U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_135__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_135__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_135__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_135__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_135__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_135__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_135__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_135__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_135__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_135__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_136__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_136__DOT__data_stored;
    if ((0x100U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_136__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_136__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_136__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_136__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_136__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_136__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_136__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_136__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_136__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_136__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_137__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_137__DOT__data_stored;
    if ((0x200U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_137__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_137__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_137__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_137__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_137__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_137__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_137__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_137__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_137__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_137__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_138__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_138__DOT__data_stored;
    if ((0x400U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_138__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_138__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_138__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_138__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_138__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_138__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_138__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_138__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_138__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_138__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_139__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_139__DOT__data_stored;
    if ((0x800U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_139__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_139__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_139__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_139__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_139__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_139__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_139__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_139__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_139__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_139__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_140__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_140__DOT__data_stored;
    if ((0x1000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_140__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_140__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_140__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_140__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_140__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_140__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_140__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_140__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_140__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_140__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_141__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_141__DOT__data_stored;
    if ((0x2000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_141__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_141__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_141__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_141__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_141__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_141__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_141__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_141__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_141__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_141__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_142__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_142__DOT__data_stored;
    if ((0x4000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_142__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_142__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_142__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_142__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_142__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_142__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_142__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_142__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_142__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_142__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_143__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_143__DOT__data_stored;
    if ((0x8000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_143__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_143__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_143__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_143__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_143__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_143__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_143__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_143__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_143__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_143__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_144__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_144__DOT__data_stored;
    if ((0x10000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_144__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_144__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_144__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_144__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_144__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_144__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_144__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_144__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_144__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_144__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_145__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_145__DOT__data_stored;
    if ((0x20000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_145__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_145__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_145__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_145__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_145__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_145__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_145__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_145__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_145__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_145__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_146__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_146__DOT__data_stored;
    if ((0x40000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_146__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_146__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_146__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_146__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_146__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_146__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_146__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_146__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_146__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_146__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_147__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_147__DOT__data_stored;
    if ((0x80000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_147__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_147__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_147__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_147__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_147__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_147__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_147__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_147__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_147__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_147__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_148__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_148__DOT__data_stored;
    if ((0x100000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_148__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_148__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_148__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_148__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_148__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_148__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_148__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_148__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_148__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_148__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_149__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_149__DOT__data_stored;
    if ((0x200000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_149__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_149__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_149__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_149__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_149__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_149__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_149__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_149__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_149__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_149__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_150__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_150__DOT__data_stored;
    if ((0x400000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_150__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_150__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_150__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_150__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_150__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_150__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_150__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_150__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_150__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_150__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_151__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_151__DOT__data_stored;
    if ((0x800000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_151__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_151__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_151__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_151__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_151__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_151__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_151__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_151__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_151__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_151__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_152__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_152__DOT__data_stored;
    if ((0x1000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_152__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_152__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_152__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_152__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_152__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_152__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_152__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_152__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_152__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_152__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_153__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_153__DOT__data_stored;
    if ((0x2000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_153__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_153__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_153__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_153__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_153__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_153__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_153__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_153__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_153__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_153__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_154__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_154__DOT__data_stored;
    if ((0x4000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_154__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_154__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_154__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_154__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_154__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_154__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_154__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_154__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_154__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_154__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_155__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_155__DOT__data_stored;
    if ((0x8000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_155__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_155__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_155__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_155__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_155__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_155__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_155__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_155__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_155__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_155__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_156__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_156__DOT__data_stored;
    if ((0x10000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_156__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_156__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_156__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_156__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_156__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_156__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_156__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_156__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_156__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_156__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_157__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_157__DOT__data_stored;
    if ((0x20000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_157__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_157__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_157__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_157__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_157__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_157__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_157__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_157__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_157__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_157__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_158__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_158__DOT__data_stored;
    if ((0x40000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_158__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_158__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_158__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_158__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_158__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_158__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_158__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_158__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_158__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_158__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_159__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_159__DOT__data_stored;
    if ((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
         >> 0x1fU)) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_159__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_159__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_159__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_159__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_159__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_159__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_159__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_159__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_159__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_159__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_160__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_160__DOT__data_stored;
    if ((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_160__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_160__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_160__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_160__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_160__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_160__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_160__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_160__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_160__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_160__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_161__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_161__DOT__data_stored;
    if ((2U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_161__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_161__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_161__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_161__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_161__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_161__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_161__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_161__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_161__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_161__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_162__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_162__DOT__data_stored;
    if ((4U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_162__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_162__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_162__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_162__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_162__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_162__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_162__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_162__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_162__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_162__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_163__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_163__DOT__data_stored;
    if ((8U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_163__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_163__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_163__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_163__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_163__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_163__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_163__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_163__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_163__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_163__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_164__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_164__DOT__data_stored;
    if ((0x10U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_164__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_164__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_164__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_164__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_164__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_164__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_164__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_164__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_164__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_164__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_165__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_165__DOT__data_stored;
    if ((0x20U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_165__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_165__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_165__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_165__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_165__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_165__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_165__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_165__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_165__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_165__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_166__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_166__DOT__data_stored;
    if ((0x40U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_166__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_166__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_166__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_166__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_166__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_166__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_166__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_166__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_166__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_166__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_167__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_167__DOT__data_stored;
    if ((0x80U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_167__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_167__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_167__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_167__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_167__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_167__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_167__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_167__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_167__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_167__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_168__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_168__DOT__data_stored;
    if ((0x100U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_168__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_168__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_168__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_168__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_168__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_168__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_168__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_168__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_168__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_168__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_169__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_169__DOT__data_stored;
    if ((0x200U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_169__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_169__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_169__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_169__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_169__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_169__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_169__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_169__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_169__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_169__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_170__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_170__DOT__data_stored;
    if ((0x400U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_170__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_170__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_170__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_170__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_170__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_170__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_170__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_170__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_170__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_170__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_171__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_171__DOT__data_stored;
    if ((0x800U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_171__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_171__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_171__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_171__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_171__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_171__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_171__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_171__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_171__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_171__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_172__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_172__DOT__data_stored;
    if ((0x1000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_172__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_172__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_172__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_172__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_172__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_172__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_172__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_172__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_172__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_172__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_173__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_173__DOT__data_stored;
    if ((0x2000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_173__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_173__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_173__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_173__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_173__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_173__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_173__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_173__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_173__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_173__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_174__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_174__DOT__data_stored;
    if ((0x4000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_174__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_174__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_174__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_174__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_174__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_174__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_174__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_174__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_174__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_174__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_175__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_175__DOT__data_stored;
    if ((0x8000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_175__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_175__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_175__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_175__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_175__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_175__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_175__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_175__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_175__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_175__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_176__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_176__DOT__data_stored;
    if ((0x10000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_176__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_176__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_176__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_176__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_176__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_176__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_176__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_176__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_176__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_176__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_177__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_177__DOT__data_stored;
    if ((0x20000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_177__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_177__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_177__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_177__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_177__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_177__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_177__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_177__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_177__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_177__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_178__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_178__DOT__data_stored;
    if ((0x40000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_178__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_178__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_178__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_178__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_178__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_178__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_178__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_178__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_178__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_178__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_179__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_179__DOT__data_stored;
    if ((0x80000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_179__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_179__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_179__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_179__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_179__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_179__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_179__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_179__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_179__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_179__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_180__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_180__DOT__data_stored;
    if ((0x100000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_180__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_180__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_180__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_180__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_180__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_180__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_180__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_180__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_180__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_180__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_181__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_181__DOT__data_stored;
    if ((0x200000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_181__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_181__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_181__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_181__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_181__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_181__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_181__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_181__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_181__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_181__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_182__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_182__DOT__data_stored;
    if ((0x400000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_182__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_182__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_182__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_182__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_182__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_182__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_182__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_182__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_182__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_182__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_183__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_183__DOT__data_stored;
    if ((0x800000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_183__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_183__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_183__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_183__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_183__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_183__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_183__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_183__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_183__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_183__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_184__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_184__DOT__data_stored;
    if ((0x1000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_184__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_184__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_184__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_184__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_184__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_184__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_184__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_184__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_184__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_184__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_185__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_185__DOT__data_stored;
    if ((0x2000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_185__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_185__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_185__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_185__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_185__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_185__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_185__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_185__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_185__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_185__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_186__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_186__DOT__data_stored;
    if ((0x4000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_186__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_186__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_186__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_186__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_186__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_186__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_186__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_186__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_186__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_186__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_187__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_187__DOT__data_stored;
    if ((0x8000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_187__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_187__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_187__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_187__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_187__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_187__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_187__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_187__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_187__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_187__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_188__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_188__DOT__data_stored;
    if ((0x10000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_188__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_188__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_188__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_188__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_188__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_188__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_188__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_188__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_188__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_188__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_189__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_189__DOT__data_stored;
    if ((0x20000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_189__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_189__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_189__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_189__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_189__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_189__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_189__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_189__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_189__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_189__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_190__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_190__DOT__data_stored;
    if ((0x40000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_190__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_190__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_190__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_190__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_190__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_190__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_190__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_190__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_190__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_190__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_191__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_191__DOT__data_stored;
    if ((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
         >> 0x1fU)) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_191__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_191__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_191__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_191__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_191__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_191__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_191__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_191__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_191__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_191__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_192__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_192__DOT__data_stored;
    if ((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_192__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_192__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_192__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_192__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_192__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_192__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_192__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_192__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_192__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_192__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_193__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_193__DOT__data_stored;
    if ((2U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_193__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_193__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_193__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_193__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_193__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_193__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_193__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_193__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_193__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_193__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_194__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_194__DOT__data_stored;
    if ((4U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_194__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_194__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_194__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_194__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_194__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_194__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_194__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_194__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_194__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_194__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_195__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_195__DOT__data_stored;
    if ((8U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_195__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_195__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_195__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_195__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_195__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_195__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_195__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_195__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_195__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_195__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_196__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_196__DOT__data_stored;
    if ((0x10U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_196__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_196__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_196__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_196__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_196__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_196__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_196__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_196__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_196__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_196__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_197__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_197__DOT__data_stored;
    if ((0x20U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_197__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_197__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_197__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_197__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_197__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_197__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_197__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_197__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_197__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_197__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_198__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_198__DOT__data_stored;
    if ((0x40U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_198__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_198__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_198__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_198__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_198__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_198__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_198__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_198__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_198__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_198__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_199__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_199__DOT__data_stored;
    if ((0x80U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_199__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_199__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_199__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_199__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_199__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_199__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_199__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_199__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_199__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_199__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_200__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_200__DOT__data_stored;
    if ((0x100U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_200__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_200__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_200__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_200__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_200__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_200__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_200__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_200__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_200__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_200__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_201__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_201__DOT__data_stored;
    if ((0x200U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_201__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_201__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_201__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_201__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_201__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_201__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_201__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_201__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_201__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_201__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_202__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_202__DOT__data_stored;
    if ((0x400U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_202__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_202__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_202__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_202__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_202__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_202__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_202__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_202__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_202__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_202__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_203__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_203__DOT__data_stored;
    if ((0x800U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_203__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_203__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_203__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_203__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_203__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_203__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_203__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_203__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_203__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_203__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_204__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_204__DOT__data_stored;
    if ((0x1000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_204__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_204__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_204__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_204__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_204__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_204__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_204__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_204__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_204__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_204__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_205__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_205__DOT__data_stored;
    if ((0x2000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_205__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_205__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_205__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_205__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_205__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_205__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_205__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_205__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_205__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_205__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_206__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_206__DOT__data_stored;
    if ((0x4000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_206__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_206__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_206__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_206__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_206__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_206__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_206__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_206__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_206__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_206__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_207__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_207__DOT__data_stored;
    if ((0x8000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_207__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_207__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_207__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_207__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_207__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_207__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_207__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_207__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_207__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_207__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_208__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_208__DOT__data_stored;
    if ((0x10000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_208__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_208__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_208__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_208__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_208__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_208__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_208__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_208__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_208__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_208__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_209__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_209__DOT__data_stored;
    if ((0x20000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_209__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_209__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_209__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_209__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_209__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_209__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_209__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_209__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_209__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_209__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_210__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_210__DOT__data_stored;
    if ((0x40000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_210__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_210__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_210__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_210__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_210__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_210__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_210__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_210__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_210__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_210__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_211__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_211__DOT__data_stored;
    if ((0x80000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_211__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_211__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_211__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_211__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_211__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_211__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_211__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_211__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_211__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_211__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_212__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_212__DOT__data_stored;
    if ((0x100000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_212__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_212__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_212__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_212__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_212__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_212__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_212__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_212__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_212__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_212__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_213__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_213__DOT__data_stored;
    if ((0x200000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_213__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_213__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_213__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_213__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_213__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_213__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_213__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_213__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_213__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_213__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_214__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_214__DOT__data_stored;
    if ((0x400000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_214__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_214__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_214__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_214__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_214__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_214__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_214__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_214__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_214__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_214__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_215__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_215__DOT__data_stored;
    if ((0x800000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_215__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_215__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_215__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_215__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_215__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_215__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_215__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_215__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_215__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_215__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_216__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_216__DOT__data_stored;
    if ((0x1000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_216__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_216__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_216__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_216__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_216__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_216__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_216__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_216__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_216__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_216__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_217__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_217__DOT__data_stored;
    if ((0x2000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_217__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_217__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_217__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_217__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_217__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_217__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_217__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_217__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_217__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_217__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_218__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_218__DOT__data_stored;
    if ((0x4000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_218__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_218__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_218__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_218__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_218__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_218__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_218__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_218__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_218__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_218__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_219__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_219__DOT__data_stored;
    if ((0x8000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_219__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_219__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_219__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_219__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_219__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_219__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_219__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_219__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_219__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_219__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_220__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_220__DOT__data_stored;
    if ((0x10000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_220__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_220__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_220__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_220__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_220__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_220__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_220__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_220__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_220__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_220__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_221__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_221__DOT__data_stored;
    if ((0x20000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_221__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_221__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_221__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_221__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_221__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_221__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_221__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_221__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_221__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_221__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_222__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_222__DOT__data_stored;
    if ((0x40000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_222__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_222__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_222__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_222__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_222__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_222__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_222__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_222__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_222__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_222__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_223__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_223__DOT__data_stored;
    if ((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
         >> 0x1fU)) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_223__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_223__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_223__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_223__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_223__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_223__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_223__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_223__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_223__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_223__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_224__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_224__DOT__data_stored;
    if ((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_224__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_224__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_224__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_224__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_224__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_224__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_224__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_224__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_224__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_224__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_225__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_225__DOT__data_stored;
    if ((2U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_225__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_225__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_225__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_225__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_225__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_225__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_225__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_225__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_225__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_225__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_226__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_226__DOT__data_stored;
    if ((4U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_226__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_226__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_226__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_226__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_226__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_226__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_226__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_226__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_226__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_226__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_227__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_227__DOT__data_stored;
    if ((8U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_227__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_227__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_227__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_227__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_227__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_227__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_227__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_227__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_227__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_227__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_228__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_228__DOT__data_stored;
    if ((0x10U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_228__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_228__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_228__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_228__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_228__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_228__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_228__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_228__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_228__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_228__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_229__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_229__DOT__data_stored;
    if ((0x20U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_229__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_229__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_229__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_229__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_229__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_229__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_229__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_229__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_229__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_229__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_230__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_230__DOT__data_stored;
    if ((0x40U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_230__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_230__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_230__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_230__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_230__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_230__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_230__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_230__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_230__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_230__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_231__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_231__DOT__data_stored;
    if ((0x80U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_231__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_231__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_231__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_231__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_231__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_231__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_231__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_231__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_231__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_231__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_232__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_232__DOT__data_stored;
    if ((0x100U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_232__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_232__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_232__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_232__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_232__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_232__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_232__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_232__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_232__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_232__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_233__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_233__DOT__data_stored;
    if ((0x200U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_233__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_233__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_233__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_233__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_233__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_233__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_233__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_233__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_233__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_233__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_234__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_234__DOT__data_stored;
    if ((0x400U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_234__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_234__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_234__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_234__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_234__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_234__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_234__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_234__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_234__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_234__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_235__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_235__DOT__data_stored;
    if ((0x800U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_235__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_235__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_235__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_235__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_235__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_235__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_235__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_235__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_235__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_235__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_236__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_236__DOT__data_stored;
    if ((0x1000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_236__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_236__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_236__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_236__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_236__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_236__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_236__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_236__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_236__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_236__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_237__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_237__DOT__data_stored;
    if ((0x2000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_237__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_237__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_237__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_237__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_237__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_237__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_237__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_237__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_237__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_237__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_238__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_238__DOT__data_stored;
    if ((0x4000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_238__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_238__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_238__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_238__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_238__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_238__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_238__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_238__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_238__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_238__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_239__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_239__DOT__data_stored;
    if ((0x8000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_239__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_239__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_239__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_239__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_239__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_239__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_239__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_239__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_239__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_239__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_240__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_240__DOT__data_stored;
    if ((0x10000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_240__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_240__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_240__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_240__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_240__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_240__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_240__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_240__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_240__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_240__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_241__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_241__DOT__data_stored;
    if ((0x20000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_241__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_241__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_241__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_241__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_241__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_241__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_241__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_241__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_241__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_241__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_242__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_242__DOT__data_stored;
    if ((0x40000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_242__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_242__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_242__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_242__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_242__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_242__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_242__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_242__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_242__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_242__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_243__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_243__DOT__data_stored;
    if ((0x80000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_243__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_243__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_243__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_243__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_243__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_243__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_243__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_243__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_243__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_243__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_244__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_244__DOT__data_stored;
    if ((0x100000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_244__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_244__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_244__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_244__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_244__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_244__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_244__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_244__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_244__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_244__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_245__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_245__DOT__data_stored;
    if ((0x200000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_245__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_245__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_245__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_245__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_245__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_245__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_245__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_245__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_245__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_245__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_246__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_246__DOT__data_stored;
    if ((0x400000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_246__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_246__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_246__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_246__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_246__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_246__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_246__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_246__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_246__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_246__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_247__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_247__DOT__data_stored;
    if ((0x800000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_247__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_247__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_247__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_247__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_247__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_247__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_247__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_247__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_247__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_247__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_248__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_248__DOT__data_stored;
    if ((0x1000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_248__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_248__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_248__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_248__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_248__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_248__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_248__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_248__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_248__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_248__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_249__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_249__DOT__data_stored;
    if ((0x2000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_249__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_249__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_249__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_249__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_249__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_249__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_249__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_249__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_249__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_249__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_250__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_250__DOT__data_stored;
    if ((0x4000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_250__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_250__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_250__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_250__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_250__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_250__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_250__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_250__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_250__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_250__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_251__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_251__DOT__data_stored;
    if ((0x8000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_251__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_251__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_251__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_251__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_251__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_251__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_251__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_251__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_251__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_251__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_252__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_252__DOT__data_stored;
    if ((0x10000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_252__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_252__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_252__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_252__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_252__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_252__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_252__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_252__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_252__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_252__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_253__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_253__DOT__data_stored;
    if ((0x20000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_253__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_253__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_253__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_253__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_253__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_253__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_253__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_253__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_253__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_253__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_254__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_254__DOT__data_stored;
    if ((0x40000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_254__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_254__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_254__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_254__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_254__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_254__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_254__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_254__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_254__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_254__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_255__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_255__DOT__data_stored;
    if ((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
         >> 0x1fU)) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_255__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_255__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_255__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_255__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_255__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_255__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_255__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_255__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_255__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_255__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_256__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_256__DOT__data_stored;
    if ((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[8U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_256__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_256__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_256__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_256__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_256__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_256__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_256__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_256__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_256__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_256__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_0__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_0__DOT__data_stored;
    if ((2U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[8U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_0__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_0__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_0__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_0__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_0__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_0__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_0__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_0__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_0__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_0__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_1__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_1__DOT__data_stored;
    if ((4U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[8U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_1__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_1__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_1__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_1__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_1__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_1__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_1__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_1__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_1__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_1__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_2__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_2__DOT__data_stored;
    if ((8U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[8U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_2__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_2__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_2__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_2__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_2__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_2__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_2__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_2__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_2__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_2__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_3__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_3__DOT__data_stored;
    if ((0x10U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[8U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_3__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_3__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_3__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_3__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_3__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_3__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_3__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_3__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_3__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_3__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_4__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_4__DOT__data_stored;
    if ((0x20U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[8U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_4__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_4__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_4__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_4__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_4__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_4__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_4__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_4__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_4__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_4__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_5__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_5__DOT__data_stored;
    if ((0x40U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[8U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_5__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_5__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_5__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_5__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_5__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_5__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_5__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_5__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_5__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_5__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_6__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_6__DOT__data_stored;
    if ((0x80U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[8U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_6__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_6__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_6__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_6__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_6__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_6__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_6__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_6__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_6__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_6__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_7__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_7__DOT__data_stored;
    if ((0x100U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[8U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_7__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_7__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_7__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_7__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_7__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_7__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_7__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_7__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_7__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_7__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_8__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_8__DOT__data_stored;
    if ((0x200U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[8U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_8__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_8__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_8__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_8__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_8__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_8__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_8__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_8__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_8__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_8__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_9__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_9__DOT__data_stored;
    if ((0x400U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[8U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_9__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_9__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_9__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_9__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_9__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_9__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_9__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_9__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_9__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_9__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_10__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_10__DOT__data_stored;
    if ((0x800U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[8U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_10__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_10__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_10__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_10__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_10__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_10__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_10__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_10__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_10__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_10__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_11__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_11__DOT__data_stored;
    if ((0x1000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[8U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_11__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_11__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_11__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_11__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_11__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_11__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_11__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_11__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_11__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_11__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_12__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_12__DOT__data_stored;
    if ((0x2000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[8U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_12__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_12__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_12__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_12__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_12__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_12__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_12__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_12__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_12__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_12__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_13__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_13__DOT__data_stored;
    if ((0x4000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[8U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_13__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_13__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_13__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_13__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_13__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_13__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_13__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_13__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_13__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_13__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_14__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_14__DOT__data_stored;
    if ((0x8000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[8U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_14__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_14__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_14__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_14__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_14__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_14__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_14__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_14__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_14__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_14__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_15__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_15__DOT__data_stored;
    if ((0x10000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[8U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_15__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_15__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_15__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_15__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_15__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_15__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_15__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_15__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_15__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_15__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_16__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_16__DOT__data_stored;
    if ((0x20000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[8U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_16__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_16__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_16__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_16__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_16__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_16__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_16__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_16__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_16__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_16__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_17__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_17__DOT__data_stored;
    if ((0x40000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[8U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_17__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_17__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_17__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_17__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_17__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_17__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_17__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_17__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_17__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_17__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_18__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_18__DOT__data_stored;
    if ((0x80000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[8U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_18__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_18__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_18__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_18__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_18__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_18__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_18__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_18__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_18__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_18__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_19__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_19__DOT__data_stored;
    if ((0x100000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[8U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_19__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_19__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_19__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_19__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_19__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_19__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_19__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_19__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_19__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_19__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_20__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_20__DOT__data_stored;
    if ((0x200000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[8U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_20__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_20__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_20__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_20__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_20__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_20__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_20__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_20__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_20__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_20__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_21__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_21__DOT__data_stored;
    if ((0x400000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[8U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_21__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_21__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_21__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_21__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_21__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_21__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_21__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_21__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_21__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_21__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_22__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_22__DOT__data_stored;
    if ((0x800000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[8U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_22__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_22__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_22__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_22__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_22__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_22__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_22__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_22__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_22__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_22__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_23__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_23__DOT__data_stored;
    if ((0x1000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[8U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_23__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_23__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_23__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_23__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_23__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_23__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_23__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_23__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_23__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_23__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_24__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_24__DOT__data_stored;
    if ((0x2000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[8U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_24__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_24__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_24__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_24__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_24__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_24__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_24__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_24__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_24__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_24__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_25__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_25__DOT__data_stored;
    if ((0x4000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[8U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_25__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_25__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_25__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_25__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_25__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_25__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_25__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_25__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_25__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_25__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_26__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_26__DOT__data_stored;
    if ((0x8000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[8U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_26__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_26__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_26__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_26__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_26__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_26__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_26__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_26__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_26__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_26__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_27__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_27__DOT__data_stored;
    if ((0x10000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[8U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_27__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_27__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_27__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_27__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_27__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_27__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_27__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_27__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_27__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_27__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_28__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_28__DOT__data_stored;
    if ((0x20000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[8U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_28__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_28__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_28__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_28__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_28__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_28__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_28__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_28__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_28__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_28__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_29__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_29__DOT__data_stored;
    if ((0x40000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[8U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_29__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_29__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_29__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_29__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_29__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_29__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_29__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_29__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_29__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_29__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_30__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_30__DOT__data_stored;
    if ((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[8U] 
         >> 0x1fU)) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_30__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_30__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_30__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_30__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_30__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_30__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_30__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_30__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_30__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_30__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_31__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_31__DOT__data_stored;
    if ((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[9U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_31__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_31__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_31__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_31__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_31__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_31__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_31__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_31__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_31__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_31__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_32__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_32__DOT__data_stored;
    if ((2U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[9U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_32__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_32__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_32__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_32__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_32__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_32__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_32__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_32__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_32__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_32__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_33__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_33__DOT__data_stored;
    if ((4U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[9U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_33__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_33__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_33__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_33__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_33__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_33__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_33__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_33__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_33__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_33__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_34__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_34__DOT__data_stored;
    if ((8U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[9U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_34__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_34__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_34__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_34__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_34__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_34__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_34__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_34__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_34__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_34__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_35__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_35__DOT__data_stored;
    if ((0x10U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[9U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_35__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_35__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_35__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_35__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_35__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_35__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_35__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_35__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_35__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_35__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_36__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_36__DOT__data_stored;
    if ((0x20U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[9U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_36__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_36__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_36__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_36__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_36__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_36__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_36__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_36__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_36__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_36__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_37__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_37__DOT__data_stored;
    if ((0x40U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[9U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_37__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_37__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_37__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_37__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_37__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_37__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_37__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_37__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_37__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_37__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_38__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_38__DOT__data_stored;
    if ((0x80U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[9U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_38__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_38__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_38__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_38__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_38__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_38__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_38__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_38__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_38__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_38__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_39__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_39__DOT__data_stored;
    if ((0x100U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[9U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_39__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_39__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_39__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_39__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_39__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_39__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_39__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_39__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_39__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_39__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_40__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_40__DOT__data_stored;
    if ((0x200U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[9U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_40__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_40__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_40__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_40__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_40__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_40__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_40__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_40__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_40__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_40__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_41__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_41__DOT__data_stored;
    if ((0x400U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[9U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_41__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_41__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_41__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_41__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_41__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_41__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_41__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_41__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_41__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_41__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_42__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_42__DOT__data_stored;
    if ((0x800U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[9U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_42__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_42__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_42__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_42__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_42__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_42__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_42__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_42__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_42__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_42__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_43__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_43__DOT__data_stored;
    if ((0x1000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[9U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_43__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_43__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_43__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_43__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_43__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_43__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_43__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_43__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_43__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_43__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_44__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_44__DOT__data_stored;
    if ((0x2000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[9U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_44__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_44__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_44__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_44__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_44__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_44__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_44__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_44__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_44__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_44__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_45__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_45__DOT__data_stored;
    if ((0x4000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[9U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_45__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_45__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_45__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_45__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_45__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_45__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_45__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_45__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_45__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_45__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_46__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_46__DOT__data_stored;
    if ((0x8000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[9U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_46__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_46__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_46__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_46__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_46__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_46__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_46__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_46__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_46__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_46__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_47__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_47__DOT__data_stored;
    if ((0x10000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[9U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_47__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_47__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_47__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_47__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_47__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_47__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_47__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_47__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_47__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_47__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_48__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_48__DOT__data_stored;
    if ((0x20000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[9U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_48__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_48__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_48__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_48__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_48__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_48__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_48__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_48__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_48__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_48__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_49__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_49__DOT__data_stored;
    if ((0x40000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[9U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_49__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_49__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_49__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_49__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_49__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_49__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_49__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_49__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_49__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_49__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_50__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_50__DOT__data_stored;
    if ((0x80000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[9U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_50__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_50__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_50__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_50__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_50__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_50__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_50__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_50__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_50__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_50__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_51__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_51__DOT__data_stored;
    if ((0x100000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[9U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_51__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_51__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_51__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_51__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_51__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_51__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_51__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_51__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_51__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_51__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_52__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_52__DOT__data_stored;
    if ((0x200000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[9U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_52__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_52__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_52__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_52__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_52__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_52__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_52__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_52__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_52__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_52__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_53__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_53__DOT__data_stored;
    if ((0x400000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[9U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_53__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_53__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_53__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_53__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_53__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_53__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_53__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_53__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_53__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_53__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_54__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_54__DOT__data_stored;
    if ((0x800000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[9U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_54__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_54__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_54__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_54__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_54__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_54__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_54__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_54__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_54__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_54__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_55__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_55__DOT__data_stored;
    if ((0x1000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[9U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_55__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_55__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_55__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_55__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_55__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_55__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_55__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_55__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_55__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_55__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_56__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_56__DOT__data_stored;
    if ((0x2000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[9U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_56__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_56__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_56__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_56__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_56__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_56__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_56__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_56__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_56__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_56__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_57__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_57__DOT__data_stored;
    if ((0x4000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[9U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_57__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_57__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_57__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_57__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_57__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_57__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_57__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_57__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_57__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_57__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_58__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_58__DOT__data_stored;
    if ((0x8000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[9U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_58__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_58__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_58__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_58__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_58__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_58__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_58__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_58__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_58__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_58__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_59__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_59__DOT__data_stored;
    if ((0x10000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[9U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_59__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_59__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_59__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_59__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_59__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_59__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_59__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_59__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_59__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_59__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_60__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_60__DOT__data_stored;
    if ((0x20000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[9U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_60__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_60__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_60__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_60__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_60__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_60__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_60__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_60__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_60__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_60__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_61__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_61__DOT__data_stored;
    if ((0x40000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[9U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_61__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_61__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_61__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_61__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_61__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_61__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_61__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_61__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_61__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_61__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_62__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_62__DOT__data_stored;
    if ((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[9U] 
         >> 0x1fU)) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_62__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_62__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_62__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_62__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_62__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_62__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_62__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_62__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_62__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_62__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_63__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_63__DOT__data_stored;
    if ((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0xaU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_63__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_63__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_63__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_63__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_63__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_63__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_63__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_63__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_63__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_63__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_64__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_64__DOT__data_stored;
    if ((2U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0xaU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_64__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_64__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_64__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_64__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_64__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_64__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_64__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_64__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_64__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_64__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_65__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_65__DOT__data_stored;
    if ((4U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0xaU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_65__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_65__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_65__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_65__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_65__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_65__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_65__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_65__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_65__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_65__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_66__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_66__DOT__data_stored;
    if ((8U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0xaU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_66__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_66__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_66__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_66__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_66__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_66__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_66__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_66__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_66__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_all_hn_f_config_66__DOT__data_stored;
    }
}
