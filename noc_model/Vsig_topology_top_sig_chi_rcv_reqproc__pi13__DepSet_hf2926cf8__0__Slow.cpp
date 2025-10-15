// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_chi_rcv_reqproc__pi13.h"

VL_ATTR_COLD void Vsig_topology_top_sig_chi_rcv_reqproc__pi13___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__0(Vsig_topology_top_sig_chi_rcv_reqproc__pi13* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_reqproc__pi13___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__empty_reqfifo = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__reqflit_fifo_0.__PVT__fifo_empty;
    vlSelfRef.__PVT__ucie_sliced_base_addresses[0U] 
        = (0xfU & VL_SEL_IIII(28, vlSelfRef.__PVT__i_ucie_base_addresses
                              [0U], 0x18U, 4));
    vlSelfRef.__PVT__ucie_sliced_base_addresses[1U] 
        = (0xfU & VL_SEL_IIII(28, vlSelfRef.__PVT__i_ucie_base_addresses
                              [1U], 0x18U, 4));
    vlSelfRef.__PVT__ucie_sliced_base_addresses[2U] 
        = (0xfU & VL_SEL_IIII(28, vlSelfRef.__PVT__i_ucie_base_addresses
                              [2U], 0x18U, 4));
    vlSelfRef.__PVT__ucie_sliced_base_addresses[3U] 
        = (0xfU & VL_SEL_IIII(28, vlSelfRef.__PVT__i_ucie_base_addresses
                              [3U], 0x18U, 4));
    vlSelfRef.__PVT__ucie_sliced_base_addresses[4U] 
        = (0xfU & VL_SEL_IIII(28, vlSelfRef.__PVT__i_ucie_base_addresses
                              [4U], 0x18U, 4));
    vlSelfRef.__PVT__ucie_sliced_base_addresses[5U] 
        = (0xfU & VL_SEL_IIII(28, vlSelfRef.__PVT__i_ucie_base_addresses
                              [5U], 0x18U, 4));
    vlSelfRef.__PVT__ucie_sliced_base_addresses[6U] 
        = (0xfU & VL_SEL_IIII(28, vlSelfRef.__PVT__i_ucie_base_addresses
                              [6U], 0x18U, 4));
    vlSelfRef.__PVT__ucie_sliced_base_addresses[7U] 
        = (0xfU & VL_SEL_IIII(28, vlSelfRef.__PVT__i_ucie_base_addresses
                              [7U], 0x18U, 4));
    vlSelfRef.__PVT__ucie_sliced_base_addresses[8U] 
        = (0xfU & VL_SEL_IIII(28, vlSelfRef.__PVT__i_ucie_base_addresses
                              [8U], 0x18U, 4));
    vlSelfRef.__PVT__ucie_sliced_base_addresses[9U] 
        = (0xfU & VL_SEL_IIII(28, vlSelfRef.__PVT__i_ucie_base_addresses
                              [9U], 0x18U, 4));
    vlSelfRef.__PVT__ucie_sliced_base_addresses[0xaU] 
        = (0xfU & VL_SEL_IIII(28, vlSelfRef.__PVT__i_ucie_base_addresses
                              [0xaU], 0x18U, 4));
    vlSelfRef.__PVT__ucie_sliced_base_addresses[0xbU] 
        = (0xfU & VL_SEL_IIII(28, vlSelfRef.__PVT__i_ucie_base_addresses
                              [0xbU], 0x18U, 4));
    vlSelfRef.__PVT__ucie_sliced_base_addresses[0xcU] 
        = (0xfU & VL_SEL_IIII(28, vlSelfRef.__PVT__i_ucie_base_addresses
                              [0xcU], 0x18U, 4));
    vlSelfRef.__PVT__ucie_sliced_base_addresses[0xdU] 
        = (0xfU & VL_SEL_IIII(28, vlSelfRef.__PVT__i_ucie_base_addresses
                              [0xdU], 0x18U, 4));
    vlSelfRef.__PVT__ucie_sliced_base_addresses[0xeU] 
        = (0xfU & VL_SEL_IIII(28, vlSelfRef.__PVT__i_ucie_base_addresses
                              [0xeU], 0x18U, 4));
    vlSelfRef.__PVT__ucie_sliced_base_addresses[0xfU] 
        = (0xfU & VL_SEL_IIII(28, vlSelfRef.__PVT__i_ucie_base_addresses
                              [0xfU], 0x18U, 4));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__ucie_sam_activated, 
                    (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                                         [0U], 0x1cU)));
    vlSelfRef.__PVT__ucie_sliced_limit_addresses[0U] 
        = (0xfU & VL_SEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                              [0U], 0x18U, 4));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__ucie_sam_activated, 
                    (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                                         [1U], 0x1cU)));
    vlSelfRef.__PVT__ucie_sliced_limit_addresses[1U] 
        = (0xfU & VL_SEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                              [1U], 0x18U, 4));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__ucie_sam_activated, 
                    (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                                         [2U], 0x1cU)));
    vlSelfRef.__PVT__ucie_sliced_limit_addresses[2U] 
        = (0xfU & VL_SEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                              [2U], 0x18U, 4));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__ucie_sam_activated, 
                    (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                                         [3U], 0x1cU)));
    vlSelfRef.__PVT__ucie_sliced_limit_addresses[3U] 
        = (0xfU & VL_SEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                              [3U], 0x18U, 4));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__ucie_sam_activated, 
                    (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                                         [4U], 0x1cU)));
    vlSelfRef.__PVT__ucie_sliced_limit_addresses[4U] 
        = (0xfU & VL_SEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                              [4U], 0x18U, 4));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__ucie_sam_activated, 
                    (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                                         [5U], 0x1cU)));
    vlSelfRef.__PVT__ucie_sliced_limit_addresses[5U] 
        = (0xfU & VL_SEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                              [5U], 0x18U, 4));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_sam_activated, 
                    (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                                         [6U], 0x1cU)));
    vlSelfRef.__PVT__ucie_sliced_limit_addresses[6U] 
        = (0xfU & VL_SEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                              [6U], 0x18U, 4));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__ucie_sam_activated, 
                    (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                                         [7U], 0x1cU)));
    vlSelfRef.__PVT__ucie_sliced_limit_addresses[7U] 
        = (0xfU & VL_SEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                              [7U], 0x18U, 4));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__ucie_sam_activated, 
                    (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                                         [8U], 0x1cU)));
    vlSelfRef.__PVT__ucie_sliced_limit_addresses[8U] 
        = (0xfU & VL_SEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                              [8U], 0x18U, 4));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__ucie_sam_activated, 
                    (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                                         [9U], 0x1cU)));
    vlSelfRef.__PVT__ucie_sliced_limit_addresses[9U] 
        = (0xfU & VL_SEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                              [9U], 0x18U, 4));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_sam_activated, 
                    (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                                         [0xaU], 0x1cU)));
    vlSelfRef.__PVT__ucie_sliced_limit_addresses[0xaU] 
        = (0xfU & VL_SEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                              [0xaU], 0x18U, 4));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__ucie_sam_activated, 
                    (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                                         [0xbU], 0x1cU)));
    vlSelfRef.__PVT__ucie_sliced_limit_addresses[0xbU] 
        = (0xfU & VL_SEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                              [0xbU], 0x18U, 4));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__ucie_sam_activated, 
                    (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                                         [0xcU], 0x1cU)));
    vlSelfRef.__PVT__ucie_sliced_limit_addresses[0xcU] 
        = (0xfU & VL_SEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                              [0xcU], 0x18U, 4));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__ucie_sam_activated, 
                    (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                                         [0xdU], 0x1cU)));
    vlSelfRef.__PVT__ucie_sliced_limit_addresses[0xdU] 
        = (0xfU & VL_SEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                              [0xdU], 0x18U, 4));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__ucie_sam_activated, 
                    (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                                         [0xeU], 0x1cU)));
    vlSelfRef.__PVT__ucie_sliced_limit_addresses[0xeU] 
        = (0xfU & VL_SEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                              [0xeU], 0x18U, 4));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__ucie_sam_activated, 
                    (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                                         [0xfU], 0x1cU)));
    vlSelfRef.__PVT__ucie_sliced_limit_addresses[0xfU] 
        = (0xfU & VL_SEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                              [0xfU], 0x18U, 4));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__sig_chi_crdt_update_req.__PVT__enable_init_update 
        = vlSelfRef.__PVT__enable_init_update;
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

VL_ATTR_COLD void Vsig_topology_top_sig_chi_rcv_reqproc__pi13___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__1(Vsig_topology_top_sig_chi_rcv_reqproc__pi13* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_reqproc__pi13___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__1\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_chi_rcv_reqproc__pi13___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__2(Vsig_topology_top_sig_chi_rcv_reqproc__pi13* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_reqproc__pi13___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(151,vlSelfRef.__PVT__ic_RX_REQFLIT_s, vlSelfRef.__PVT__ic_RX_REQFLIT);
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

VL_ATTR_COLD void Vsig_topology_top_sig_chi_rcv_reqproc__pi13___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__3(Vsig_topology_top_sig_chi_rcv_reqproc__pi13* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_reqproc__pi13___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__noncm_homeaddr_base_pm = VL_CONCAT_QII(56,28,28, 
                                                            (0xfffffffU 
                                                             & VL_SEL_IQII(56, vlSelfRef.__PVT__noncm_homeaddr_base_all_pm, 0x1cU, 28)), 
                                                            (0xfffffffU 
                                                             & VL_SEL_IQII(56, vlSelfRef.__PVT__noncm_homeaddr_base_all_pm, 0U, 28)));
    vlSelfRef.__PVT__noncm_activated_pm = VL_CONCAT_III(2,1,1, 
                                                        (1U 
                                                         & VL_BITSEL_IQII(58, vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm, 0x39U)), 
                                                        (1U 
                                                         & VL_BITSEL_IQII(58, vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm, 0x1cU)));
    VL_ASSIGNSEL_QI(58,29,0U, vlSelfRef.__PVT__noncm_homeaddr_limit_pm, 
                    (0x1fffffffU & ((IData)(1U) + VL_EXTEND_II(29,28, 
                                                               (0xfffffffU 
                                                                & VL_SEL_IQII(58, vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm, 0U, 28))))));
    VL_ASSIGNSEL_QI(58,29,0x1dU, vlSelfRef.__PVT__noncm_homeaddr_limit_pm, 
                    (0x1fffffffU & ((IData)(1U) + VL_EXTEND_II(29,28, 
                                                               (0xfffffffU 
                                                                & VL_SEL_IQII(58, vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm, 0x1dU, 28))))));
    vlSelfRef.__PVT__cm_homeaddr_base_pm = VL_CONCAT_QII(56,28,28, 
                                                         (0xfffffffU 
                                                          & VL_SEL_IQII(56, vlSelfRef.__PVT__cm_homeaddr_base_all_pm, 0x1cU, 28)), 
                                                         (0xfffffffU 
                                                          & VL_SEL_IQII(56, vlSelfRef.__PVT__cm_homeaddr_base_all_pm, 0U, 28)));
    vlSelfRef.__PVT__cm_activated_pm = VL_CONCAT_III(2,1,1, 
                                                     (1U 
                                                      & VL_BITSEL_IQII(58, vlSelfRef.__PVT__cm_homeaddr_limit_all_pm, 0x39U)), 
                                                     (1U 
                                                      & VL_BITSEL_IQII(58, vlSelfRef.__PVT__cm_homeaddr_limit_all_pm, 0x1cU)));
    VL_ASSIGNSEL_QI(58,29,0U, vlSelfRef.__PVT__cm_homeaddr_limit_pm, 
                    (0x1fffffffU & ((IData)(1U) + VL_EXTEND_II(29,28, 
                                                               (0xfffffffU 
                                                                & VL_SEL_IQII(58, vlSelfRef.__PVT__cm_homeaddr_limit_all_pm, 0U, 28))))));
    VL_ASSIGNSEL_QI(58,29,0x1dU, vlSelfRef.__PVT__cm_homeaddr_limit_pm, 
                    (0x1fffffffU & ((IData)(1U) + VL_EXTEND_II(29,28, 
                                                               (0xfffffffU 
                                                                & VL_SEL_IQII(58, vlSelfRef.__PVT__cm_homeaddr_limit_all_pm, 0x1dU, 28))))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__reqflit_fifo_0.__PVT__fifo_clk 
        = vlSelfRef.__PVT__cc_gclk;
    vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm 
        = VL_CONCAT_QII(56,28,28, (0xfffffffU & VL_SEL_IQII(56, vlSelfRef.__PVT__noncm_homeaddr_base_pm, 0x1cU, 28)), 
                        (0xfffffffU & VL_SEL_IQII(56, vlSelfRef.__PVT__noncm_homeaddr_base_pm, 0U, 28)));
    vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm 
        = VL_CONCAT_QII(58,29,29, (0x1fffffffU & VL_SEL_IQII(58, vlSelfRef.__PVT__noncm_homeaddr_limit_pm, 0x1dU, 29)), 
                        (0x1fffffffU & VL_SEL_IQII(58, vlSelfRef.__PVT__noncm_homeaddr_limit_pm, 0U, 29)));
    vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm = VL_CONCAT_QII(56,28,28, 
                                                                (0xfffffffU 
                                                                 & VL_SEL_IQII(56, vlSelfRef.__PVT__cm_homeaddr_base_pm, 0x1cU, 28)), 
                                                                (0xfffffffU 
                                                                 & VL_SEL_IQII(56, vlSelfRef.__PVT__cm_homeaddr_base_pm, 0U, 28)));
    vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm = 
        VL_CONCAT_QII(58,29,29, (0x1fffffffU & VL_SEL_IQII(58, vlSelfRef.__PVT__cm_homeaddr_limit_pm, 0x1dU, 29)), 
                      (0x1fffffffU & VL_SEL_IQII(58, vlSelfRef.__PVT__cm_homeaddr_limit_pm, 0U, 29)));
}

VL_ATTR_COLD void Vsig_topology_top_sig_chi_rcv_reqproc__pi13___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__1(Vsig_topology_top_sig_chi_rcv_reqproc__pi13* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_reqproc__pi13___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__sig_chi_crdt_update_req.__PVT__send_working_update 
        = vlSelfRef.__PVT__send_reqcrdt_update;
}

VL_ATTR_COLD void Vsig_topology_top_sig_chi_rcv_reqproc__pi13___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__2(Vsig_topology_top_sig_chi_rcv_reqproc__pi13* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_reqproc__pi13___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__drive_xLCRDV_req = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__sig_chi_crdt_update_req.__PVT__drive_xLCRDV;
}
