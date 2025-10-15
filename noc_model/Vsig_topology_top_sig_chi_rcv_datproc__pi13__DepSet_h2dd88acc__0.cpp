// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_chi_rcv_datproc__pi13.h"

VL_INLINE_OPT void Vsig_topology_top_sig_chi_rcv_datproc__pi13___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__0(Vsig_topology_top_sig_chi_rcv_datproc__pi13* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_datproc__pi13___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ic_RX_DATLCRDV = vlSelfRef.__PVT__ic_RX_DATLCRDV;
    vlSelfRef.__Vdly__ic_RX_DATLCRDV = ((IData)(vlSelfRef.__PVT__rstb_cc_clk) 
                                        && (IData)(vlSelfRef.__PVT__drive_xLCRDV_data));
    vlSelfRef.__PVT__ic_RX_DATLCRDV = vlSelfRef.__Vdly__ic_RX_DATLCRDV;
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_rcv_datproc__pi13___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__0(Vsig_topology_top_sig_chi_rcv_datproc__pi13* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_datproc__pi13___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__porthas_datgnt_fromcc = (1U & 
                                              (~ (IData)(vlSelfRef.__PVT__l3_datvalid)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_rcv_datproc__pi13___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__1(Vsig_topology_top_sig_chi_rcv_datproc__pi13* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_datproc__pi13___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_fwdbit_cache = (1U & VL_BITSEL_IIII(13, (IData)(vlSelfRef.__PVT__l3_rddata_txnid), 0xcU));
    vlSelfRef.__PVT__data_txnid_cache = (0xfffU & VL_SEL_IIII(13, (IData)(vlSelfRef.__PVT__l3_rddata_txnid), 0U, 12));
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_rcv_datproc__pi13___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__3(Vsig_topology_top_sig_chi_rcv_datproc__pi13* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_datproc__pi13___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    VL_CONCAT_WQQ(109,54,55, __Vtemp_1, VL_CONCAT_QII(54,32,22, 
                                                      VL_CONCAT_III(32,1,31, (IData)(vlSelfRef.__PVT__data_fwdbit_cache), 
                                                                    VL_EXTEND_II(31,27, 
                                                                                VL_CONCAT_III(27,5,22, 
                                                                                VL_CONCAT_III(5,1,4, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x67U)), 
                                                                                (0xfU 
                                                                                & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x63U, 4))), 
                                                                                VL_CONCAT_III(22,16,6, 
                                                                                (0xffffU 
                                                                                & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x53U, 16)), 
                                                                                VL_CONCAT_III(6,2,4, 
                                                                                (3U 
                                                                                & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x51U, 2)), 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                (3U 
                                                                                & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x4fU, 2)), 
                                                                                (3U 
                                                                                & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x4dU, 2)))))))), 
                                                      VL_CONCAT_III(22,12,10, 
                                                                    (0xfffU 
                                                                     & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x41U, 12)), 
                                                                    VL_CONCAT_III(10,4,6, 
                                                                                VL_CONCAT_III(4,3,1, 
                                                                                (7U 
                                                                                & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x3eU, 3)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x3dU))), 
                                                                                VL_CONCAT_III(6,3,3, 
                                                                                (7U 
                                                                                & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x3aU, 3)), 
                                                                                (7U 
                                                                                & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x37U, 3)))))), 
                  VL_CONCAT_QIQ(55,17,38, VL_CONCAT_III(17,2,15, (IData)(vlSelfRef.__PVT__l3_rddata_resperr), 
                                                        VL_CONCAT_III(15,4,11, 
                                                                      (0xfU 
                                                                       & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x31U, 4)), 
                                                                      (0x7ffU 
                                                                       & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x26U, 11)))), 
                                VL_CONCAT_QII(38,12,26, (IData)(vlSelfRef.__PVT__data_txnid_cache), 
                                              VL_CONCAT_III(26,11,15, 
                                                            (0x7ffU 
                                                             & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0xfU, 11)), 
                                                            VL_CONCAT_III(15,11,4, 
                                                                          (0x7ffU 
                                                                           & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 4U, 11)), 
                                                                          (0xfU 
                                                                           & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0U, 4)))))));
    VL_CONCAT_WQQ(109,54,55, __Vtemp_2, VL_CONCAT_QII(54,32,22, 
                                                      VL_CONCAT_III(32,26,6, 
                                                                    VL_CONCAT_III(26,6,20, 
                                                                                VL_EXTEND_II(6,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x67U))), 
                                                                                VL_CONCAT_III(20,4,16, 
                                                                                (0xfU 
                                                                                & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x63U, 4)), 
                                                                                (0xffffU 
                                                                                & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x53U, 16)))), 
                                                                    VL_CONCAT_III(6,2,4, 
                                                                                (3U 
                                                                                & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x51U, 2)), 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                (3U 
                                                                                & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x4fU, 2)), 
                                                                                (3U 
                                                                                & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x4dU, 2))))), 
                                                      VL_CONCAT_III(22,12,10, 
                                                                    (0xfffU 
                                                                     & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x41U, 12)), 
                                                                    VL_CONCAT_III(10,4,6, 
                                                                                VL_CONCAT_III(4,3,1, 
                                                                                (7U 
                                                                                & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x3eU, 3)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x3dU))), 
                                                                                VL_CONCAT_III(6,3,3, 
                                                                                (7U 
                                                                                & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x3aU, 3)), 
                                                                                (7U 
                                                                                & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x37U, 3)))))), 
                  VL_CONCAT_QIQ(55,17,38, VL_CONCAT_III(17,2,15, 
                                                        (3U 
                                                         & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x35U, 2)), 
                                                        VL_CONCAT_III(15,4,11, 
                                                                      (0xfU 
                                                                       & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x31U, 4)), 
                                                                      (0x7ffU 
                                                                       & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x26U, 11)))), 
                                VL_CONCAT_QII(38,12,26, 
                                              (0xfffU 
                                               & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x1aU, 12)), 
                                              VL_CONCAT_III(26,11,15, 
                                                            (0x7ffU 
                                                             & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0xfU, 11)), 
                                                            VL_CONCAT_III(15,11,4, 
                                                                          (0x7ffU 
                                                                           & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 4U, 11)), 
                                                                          (0xfU 
                                                                           & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0U, 4)))))));
    VL_COND_WIWW(109, vlSelfRef.__PVT__wrdata_memrespcmdq, (IData)(vlSelfRef.__PVT__l3_datvalid), __Vtemp_1, __Vtemp_2);
}
