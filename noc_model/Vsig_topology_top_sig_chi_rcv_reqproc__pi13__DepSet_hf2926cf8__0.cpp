// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_chi_rcv_reqproc__pi13.h"

VL_INLINE_OPT void Vsig_topology_top_sig_chi_rcv_reqproc__pi13___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__0(Vsig_topology_top_sig_chi_rcv_reqproc__pi13* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_reqproc__pi13___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__reqflit_fifo_0.__PVT__rstb 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__sig_chi_crdt_update_req.__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__sig_chi_crdt_update_req.__PVT__cc_clk 
        = vlSelfRef.__PVT__cc_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_rcv_reqproc__pi13___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__1(Vsig_topology_top_sig_chi_rcv_reqproc__pi13* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_reqproc__pi13___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__reqflit_fifo_0.__PVT__fifo_clk 
        = vlSelfRef.__PVT__cc_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_rcv_reqproc__pi13___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__1(Vsig_topology_top_sig_chi_rcv_reqproc__pi13* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_reqproc__pi13___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__sig_chi_crdt_update_req.__PVT__send_working_update 
        = vlSelfRef.__PVT__send_reqcrdt_update;
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_rcv_reqproc__pi13___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__2(Vsig_topology_top_sig_chi_rcv_reqproc__pi13* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_reqproc__pi13___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__drive_xLCRDV_req = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__sig_chi_crdt_update_req.__PVT__drive_xLCRDV;
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__0(Vsig_topology_top_sig_chi_rcv_reqproc__pi13* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__empty_reqfifo = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__reqflit_fifo_0.__PVT__fifo_empty;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__rddata_reqfifo, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__reqflit_fifo_0.__PVT__fifo_rddata);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__rddata_reqfifo_s, vlSelfRef.__PVT__rddata_reqfifo);
    vlSelfRef.__PVT__rddata_is_atom = (((((((((((((
                                                   (((((0x28U 
                                                        == 
                                                        (0x7fU 
                                                         & VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqfifo_s, 0x3eU, 7))) 
                                                       | (0x29U 
                                                          == 
                                                          (0x7fU 
                                                           & VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqfifo_s, 0x3eU, 7)))) 
                                                      | (0x2aU 
                                                         == 
                                                         (0x7fU 
                                                          & VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqfifo_s, 0x3eU, 7)))) 
                                                     | (0x2bU 
                                                        == 
                                                        (0x7fU 
                                                         & VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqfifo_s, 0x3eU, 7)))) 
                                                    | (0x2cU 
                                                       == 
                                                       (0x7fU 
                                                        & VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqfifo_s, 0x3eU, 7)))) 
                                                   | (0x2dU 
                                                      == 
                                                      (0x7fU 
                                                       & VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqfifo_s, 0x3eU, 7)))) 
                                                  | (0x2eU 
                                                     == 
                                                     (0x7fU 
                                                      & VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqfifo_s, 0x3eU, 7)))) 
                                                 | (0x2fU 
                                                    == 
                                                    (0x7fU 
                                                     & VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqfifo_s, 0x3eU, 7)))) 
                                                | (0x30U 
                                                   == 
                                                   (0x7fU 
                                                    & VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqfifo_s, 0x3eU, 7)))) 
                                               | (0x31U 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqfifo_s, 0x3eU, 7)))) 
                                              | (0x32U 
                                                 == 
                                                 (0x7fU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqfifo_s, 0x3eU, 7)))) 
                                             | (0x33U 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqfifo_s, 0x3eU, 7)))) 
                                            | (0x34U 
                                               == (0x7fU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqfifo_s, 0x3eU, 7)))) 
                                           | (0x35U 
                                              == (0x7fU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqfifo_s, 0x3eU, 7)))) 
                                          | (0x36U 
                                             == (0x7fU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqfifo_s, 0x3eU, 7)))) 
                                         | (0x37U == 
                                            (0x7fU 
                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqfifo_s, 0x3eU, 7)))) 
                                        | (0x38U == 
                                           (0x7fU & 
                                            VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqfifo_s, 0x3eU, 7)))) 
                                       | (0x39U == 
                                          (0x7fU & 
                                           VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqfifo_s, 0x3eU, 7))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__2(Vsig_topology_top_sig_chi_rcv_reqproc__pi13* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__sig_chi_crdt_update_req.__PVT__enable_init_update 
        = vlSelfRef.__PVT__enable_init_update;
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__3(Vsig_topology_top_sig_chi_rcv_reqproc__pi13* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__reqflit_fifo_0.__PVT__fifo_clk 
        = vlSelfRef.__PVT__cc_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__0(Vsig_topology_top_sig_chi_rcv_reqproc__pi13* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rden_reqfifo = 0U;
    if ((1U & ((((~ (IData)(vlSelfRef.__PVT__empty_reqfifo)) 
                 & (~ (IData)(vlSelfRef.__PVT__fifofull_reqcmdq))) 
                & (~ (IData)(vlSelfRef.__PVT__placeholder_state_c))) 
               & (~ (IData)(vlSelfRef.__PVT__rddata_is_atom))))) {
        vlSelfRef.__PVT__rden_reqfifo = 1U;
    } else if ((((IData)(vlSelfRef.__PVT__placeholder_state_c) 
                 & (~ (IData)(vlSelfRef.__PVT__empty_reqfifo))) 
                & (~ (IData)(vlSelfRef.__PVT__fifofull_reqcmdq)))) {
        vlSelfRef.__PVT__rden_reqfifo = 1U;
    }
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__reqflit_fifo_0.__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_reqfifo;
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__6(Vsig_topology_top_sig_chi_rcv_reqproc__pi13* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_CONST_W_1X(151,vlSelfRef.__PVT__reqcmd_muxed,0x00000000);
    VL_COND_WIWW(151, vlSelfRef.__PVT__reqcmd_muxed, (IData)(vlSelfRef.__PVT__empty_reqfifo), vlSelfRef.__PVT__ic_RX_REQFLIT, vlSelfRef.__PVT__rddata_reqfifo);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__reqcmd_muxed_s, vlSelfRef.__PVT__reqcmd_muxed);
    vlSelfRef.__PVT__reqis_wrcmo_snp = (((((0x54U == 
                                            (0x7fU 
                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7))) 
                                           | (0x64U 
                                              == (0x7fU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                          | (0x59U 
                                             == (0x7fU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                         | (0x58U == 
                                            (0x7fU 
                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                        | (0x5cU == 
                                           (0x7fU & 
                                            VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7))));
    vlSelfRef.__PVT__reqis_atomtxn = ((((((((((((((
                                                   ((((0x28U 
                                                       == 
                                                       (0x7fU 
                                                        & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7))) 
                                                      | (0x29U 
                                                         == 
                                                         (0x7fU 
                                                          & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                                     | (0x2aU 
                                                        == 
                                                        (0x7fU 
                                                         & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                                    | (0x2bU 
                                                       == 
                                                       (0x7fU 
                                                        & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                                   | (0x2cU 
                                                      == 
                                                      (0x7fU 
                                                       & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                                  | (0x2dU 
                                                     == 
                                                     (0x7fU 
                                                      & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                                 | (0x2eU 
                                                    == 
                                                    (0x7fU 
                                                     & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                                | (0x2fU 
                                                   == 
                                                   (0x7fU 
                                                    & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                               | (0x30U 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                              | (0x31U 
                                                 == 
                                                 (0x7fU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                             | (0x32U 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                            | (0x33U 
                                               == (0x7fU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                           | (0x34U 
                                              == (0x7fU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                          | (0x35U 
                                             == (0x7fU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                         | (0x36U == 
                                            (0x7fU 
                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                        | (0x37U == 
                                           (0x7fU & 
                                            VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                       | (0x38U == 
                                          (0x7fU & 
                                           VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                      | (0x39U == (0x7fU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7))));
    vlSelfRef.__PVT__reqis_wrcmo_nonsnp = ((((0x51U 
                                              == (0x7fU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7))) 
                                             | (0x50U 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                            | (0x61U 
                                               == (0x7fU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                           | (0x60U 
                                              == (0x7fU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7))));
    vlSelfRef.__PVT__reqis_rd_nonsnpable = (4U == (0x7fU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)));
    vlSelfRef.__PVT__reqis_wr_nonsnpable = (((0x1cU 
                                              == (0x7fU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7))) 
                                             | (0x1dU 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                            | (0x44U 
                                               == (0x7fU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7))));
    vlSelfRef.__PVT__wren_reqfifo = 0U;
    if (((IData)(vlSelfRef.__PVT__reqis_atomtxn) & (IData)(vlSelfRef.__PVT__ic_RX_REQFLITV))) {
        vlSelfRef.__PVT__wren_reqfifo = 1U;
    } else if (((~ (IData)(vlSelfRef.__PVT__empty_reqfifo)) 
                & (IData)(vlSelfRef.__PVT__ic_RX_REQFLITV))) {
        vlSelfRef.__PVT__wren_reqfifo = 1U;
    }
    vlSelfRef.__PVT__reqis_wrcmo = ((IData)(vlSelfRef.__PVT__reqis_wrcmo_snp) 
                                    | (IData)(vlSelfRef.__PVT__reqis_wrcmo_nonsnp));
    vlSelfRef.__PVT__reqis_non_snpable = (((IData)(vlSelfRef.__PVT__reqis_rd_nonsnpable) 
                                           | (IData)(vlSelfRef.__PVT__reqis_wr_nonsnpable)) 
                                          | (IData)(vlSelfRef.__PVT__reqis_wrcmo_nonsnp));
    VL_CONST_W_1X(151,vlSelfRef.__PVT__wrdata_reqfifo,0x00000000);
    if (vlSelfRef.__PVT__wren_reqfifo) {
        VL_ASSIGN_W(151,vlSelfRef.__PVT__wrdata_reqfifo, vlSelfRef.__PVT__ic_RX_REQFLIT);
    }
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__reqflit_fifo_0.__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_reqfifo;
    VL_ASSIGN_W(151,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__reqflit_fifo_0.__PVT__fifo_wrdata, vlSelfRef.__PVT__wrdata_reqfifo);
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__13(Vsig_topology_top_sig_chi_rcv_reqproc__pi13* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__13\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__sig_chi_crdt_update_req.__PVT__send_working_update 
        = vlSelfRef.__PVT__send_reqcrdt_update;
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__14(Vsig_topology_top_sig_chi_rcv_reqproc__pi13* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__14\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__drive_xLCRDV_req = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__sig_chi_crdt_update_req.__PVT__drive_xLCRDV;
}
