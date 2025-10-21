// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_cl0_clustercore__pi4.h"

extern const VlWide<51>/*1631:0*/ Vsig_topology_top__ConstPool__CONST_h38d8bfe5_0;
extern const VlWide<22>/*703:0*/ Vsig_topology_top__ConstPool__CONST_h1de318c0_0;

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc0_tx_hs.__PVT__req_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc0_tx_hs.__PVT__req_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc0_tx_hs.__PVT__req_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc1_tx_hs.__PVT__req_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc1_tx_hs.__PVT__req_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc1_tx_hs.__PVT__req_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc0_tx_hs.__PVT__end_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc0_tx_hs.__PVT__end_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc0_tx_hs.__PVT__end_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc1_tx_hs.__PVT__end_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc1_tx_hs.__PVT__end_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc1_tx_hs.__PVT__end_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc0_tx_hs.__PVT__vld_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc1_tx_hs.__PVT__vld_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc0_tx_hs.__PVT__vld_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc1_tx_hs.__PVT__vld_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc0_tx_hs.__PVT__vld_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc1_tx_hs.__PVT__vld_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc0_rx_hs.__PVT__gnt_recv = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc1_rx_hs.__PVT__gnt_recv = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc0_rx_hs.__PVT__gnt_recv = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc1_rx_hs.__PVT__gnt_recv = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc0_rx_hs.__PVT__gnt_recv = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc1_rx_hs.__PVT__gnt_recv = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc0_tx_hs.__PVT__req_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc0_tx_hs.__PVT__req_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc0_tx_hs.__PVT__req_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc1_tx_hs.__PVT__req_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc1_tx_hs.__PVT__req_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc1_tx_hs.__PVT__req_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc0_tx_hs.__PVT__end_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc0_tx_hs.__PVT__end_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc0_tx_hs.__PVT__end_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc1_tx_hs.__PVT__end_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc1_tx_hs.__PVT__end_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc1_tx_hs.__PVT__end_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc0_tx_hs.__PVT__vld_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc1_tx_hs.__PVT__vld_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc0_tx_hs.__PVT__vld_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc1_tx_hs.__PVT__vld_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc0_tx_hs.__PVT__vld_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc1_tx_hs.__PVT__vld_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc0_rx_hs.__PVT__gnt_recv = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc1_rx_hs.__PVT__gnt_recv = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc0_rx_hs.__PVT__gnt_recv = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc1_rx_hs.__PVT__gnt_recv = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc0_rx_hs.__PVT__gnt_recv = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc1_rx_hs.__PVT__gnt_recv = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc0_tx_hs.__PVT__req_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc0_tx_hs.__PVT__req_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc0_tx_hs.__PVT__req_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc1_tx_hs.__PVT__req_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc1_tx_hs.__PVT__req_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc1_tx_hs.__PVT__req_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc0_tx_hs.__PVT__end_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc0_tx_hs.__PVT__end_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc0_tx_hs.__PVT__end_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc1_tx_hs.__PVT__end_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc1_tx_hs.__PVT__end_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc1_tx_hs.__PVT__end_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc0_tx_hs.__PVT__vld_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc1_tx_hs.__PVT__vld_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc0_tx_hs.__PVT__vld_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc1_tx_hs.__PVT__vld_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc0_tx_hs.__PVT__vld_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc1_tx_hs.__PVT__vld_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc0_rx_hs.__PVT__gnt_recv = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc1_rx_hs.__PVT__gnt_recv = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc0_rx_hs.__PVT__gnt_recv = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc1_rx_hs.__PVT__gnt_recv = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc0_rx_hs.__PVT__gnt_recv = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc1_rx_hs.__PVT__gnt_recv = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc0_tx_hs.__PVT__req_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc0_tx_hs.__PVT__req_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc0_tx_hs.__PVT__req_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc1_tx_hs.__PVT__req_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc1_tx_hs.__PVT__req_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc1_tx_hs.__PVT__req_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc0_tx_hs.__PVT__end_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc0_tx_hs.__PVT__end_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc0_tx_hs.__PVT__end_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc1_tx_hs.__PVT__end_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc1_tx_hs.__PVT__end_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc1_tx_hs.__PVT__end_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc0_tx_hs.__PVT__vld_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc1_tx_hs.__PVT__vld_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc0_tx_hs.__PVT__vld_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc1_tx_hs.__PVT__vld_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc0_tx_hs.__PVT__vld_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc1_tx_hs.__PVT__vld_send = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc0_rx_hs.__PVT__gnt_recv = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc1_rx_hs.__PVT__gnt_recv = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc0_rx_hs.__PVT__gnt_recv = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc1_rx_hs.__PVT__gnt_recv = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc0_rx_hs.__PVT__gnt_recv = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc1_rx_hs.__PVT__gnt_recv = 0U;
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__ic_intfc_clk, 0U);
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__rst_n_ic_intfc_clk, 0U);
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__ic_exists, 0U);
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__ic_rx_is_inactive, 0U);
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__activate_ic_rx, 0U);
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__ic_tx_is_inactive, 0U);
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__activate_ic_tx, 0U);
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__ic_intfc_clk, 0U);
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__rst_n_ic_intfc_clk, 0U);
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__ic_exists, 0U);
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__ic_rx_is_inactive, 0U);
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__activate_ic_rx, 0U);
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__ic_tx_is_inactive, 0U);
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__activate_ic_tx, 0U);
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__ic_intfc_clk, 0U);
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__rst_n_ic_intfc_clk, 0U);
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__ic_exists, 0U);
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__ic_rx_is_inactive, 0U);
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__activate_ic_rx, 0U);
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__ic_tx_is_inactive, 0U);
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__activate_ic_tx, 0U);
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__ic_intfc_clk, 0U);
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__rst_n_ic_intfc_clk, 0U);
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__ic_exists, 0U);
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__ic_rx_is_inactive, 0U);
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__activate_ic_rx, 0U);
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__ic_tx_is_inactive, 0U);
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__activate_ic_tx, 0U);
    vlSelfRef.__PVT__pp_exists = 0xfU;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__myport_direction = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__ic_TX_DATLCRDV_VC1 = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__ic_TX_RSPLCRDV_VC1 = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__ic_TX_REQLCRDV_VC1 = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__ic_RX_DATFLIT_metadata = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__ic_RX_RSPFLIT_metadata = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__ic_RX_SNPFLIT_metadata = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__myproc_id = 4U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__rstb_L3clk = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__L3gclk = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__L3clk = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__myport_direction = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__porthas_rspgnt = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__porthas_datgnt = 0U;
    VL_ASSIGN_W(1610,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__flit_all_req_vc1, Vsig_topology_top__ConstPool__CONST_h38d8bfe5_0);
    VL_ASSIGN_W(1610,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__flit_all_req_vc0, Vsig_topology_top__ConstPool__CONST_h38d8bfe5_0);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__ic_TX_REQLCRDV_VC1 = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__ic_TX_REQLCRDV_VC0 = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__ic_RX_RSPFLIT_metadata = 0U;
    VL_CONST_W_1X(73,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__ic_RX_RSPFLIT,0x00000000);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__ic_RX_RSPFLITV = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__ic_RX_RSPFLITPEND = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__ic_TX_DATLCRDV_VC1 = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__ic_RX_DATFLIT_metadata = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__ic_TX_RSPLCRDV_VC1 = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__ic_RX_SNPFLIT_metadata = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__myproc_id = 5U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__ic_TX_REQLCRDV = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__myproc_id = 2U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__ic_TX_REQLCRDV = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__myproc_id = 3U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__reg_syscoh = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__syscoreq = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__ic_TX_RSPLCRDV = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__ic_TX_SNPLCRDV = 0U;
    VL_CONST_W_1X(151,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__ic_RX_REQFLIT,0x00000000);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__ic_RX_REQFLITV = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__ic_RX_REQFLITPEND = 0U;
    VL_CONST_W_1X(116,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__noncm_homeaddr_limit_all_pm,0x00000000);
    VL_CONST_W_1X(112,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__noncm_homeaddr_base_all_pm,0x00000000);
    VL_CONST_W_1X(116,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__cm_homeaddr_limit_all_pm,0x00000000);
    VL_CONST_W_1X(112,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__cm_homeaddr_base_all_pm,0x00000000);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__noncm_homeaddr_limit_all_hn_f = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__noncm_homeaddr_base_all_hn_f = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__cm_homeaddr_limit_all_hn_f = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__cm_homeaddr_base_all_hn_f = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__xy_coord_all_pm = 0ULL;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__xy_coord_all_hn_f = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__mn_node_id = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__myproc_id = 1U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__reg_syscoh = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__syscoreq = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__ic_TX_RSPLCRDV = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__ic_TX_SNPLCRDV = 0U;
    VL_CONST_W_1X(151,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__ic_RX_REQFLIT,0x00000000);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__ic_RX_REQFLITV = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__ic_RX_REQFLITPEND = 0U;
    VL_CONST_W_1X(116,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__noncm_homeaddr_limit_all_pm,0x00000000);
    VL_CONST_W_1X(112,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__noncm_homeaddr_base_all_pm,0x00000000);
    VL_CONST_W_1X(116,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__cm_homeaddr_limit_all_pm,0x00000000);
    VL_CONST_W_1X(112,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__cm_homeaddr_base_all_pm,0x00000000);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__noncm_homeaddr_limit_all_hn_f = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__noncm_homeaddr_base_all_hn_f = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__cm_homeaddr_limit_all_hn_f = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__cm_homeaddr_base_all_hn_f = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__xy_coord_all_pm = 0ULL;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__xy_coord_all_hn_f = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__mn_node_id = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__myproc_id = 0U;
    VL_CONST_W_1X(161,vlSelfRef.__PVT__icn_out_flit_reqf_vc0,0x00000000);
    VL_CONST_W_1X(79,vlSelfRef.__PVT__icn_out_flit_rspf_vc0,0x00000000);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__icn_out_flit_datf_vc0, Vsig_topology_top__ConstPool__CONST_h1de318c0_0);
    VL_CONST_W_1X(161,vlSelfRef.__PVT__icn_out_flit_reqf_vc1,0x00000000);
    VL_CONST_W_1X(79,vlSelfRef.__PVT__icn_out_flit_rspf_vc1,0x00000000);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__icn_out_flit_datf_vc1, Vsig_topology_top__ConstPool__CONST_h1de318c0_0);
    VL_CONST_W_1X(161,vlSelfRef.__PVT__ics_out_flit_reqf_vc0,0x00000000);
    VL_CONST_W_1X(79,vlSelfRef.__PVT__ics_out_flit_rspf_vc0,0x00000000);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__ics_out_flit_datf_vc0, Vsig_topology_top__ConstPool__CONST_h1de318c0_0);
    VL_CONST_W_1X(161,vlSelfRef.__PVT__ics_out_flit_reqf_vc1,0x00000000);
    VL_CONST_W_1X(79,vlSelfRef.__PVT__ics_out_flit_rspf_vc1,0x00000000);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__ics_out_flit_datf_vc1, Vsig_topology_top__ConstPool__CONST_h1de318c0_0);
    VL_CONST_W_1X(161,vlSelfRef.__PVT__icw_out_flit_reqf_vc0,0x00000000);
    VL_CONST_W_1X(79,vlSelfRef.__PVT__icw_out_flit_rspf_vc0,0x00000000);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__icw_out_flit_datf_vc0, Vsig_topology_top__ConstPool__CONST_h1de318c0_0);
    VL_CONST_W_1X(161,vlSelfRef.__PVT__icw_out_flit_reqf_vc1,0x00000000);
    VL_CONST_W_1X(79,vlSelfRef.__PVT__icw_out_flit_rspf_vc1,0x00000000);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__icw_out_flit_datf_vc1, Vsig_topology_top__ConstPool__CONST_h1de318c0_0);
    VL_CONST_W_1X(161,vlSelfRef.__PVT__ice_out_flit_reqf_vc0,0x00000000);
    VL_CONST_W_1X(79,vlSelfRef.__PVT__ice_out_flit_rspf_vc0,0x00000000);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__ice_out_flit_datf_vc0, Vsig_topology_top__ConstPool__CONST_h1de318c0_0);
    VL_CONST_W_1X(161,vlSelfRef.__PVT__ice_out_flit_reqf_vc1,0x00000000);
    VL_CONST_W_1X(79,vlSelfRef.__PVT__ice_out_flit_rspf_vc1,0x00000000);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__ice_out_flit_datf_vc1, Vsig_topology_top__ConstPool__CONST_h1de318c0_0);
    vlSelfRef.__PVT__cg_reg_ctrl_1 = 0xf0f0f1fU;
    vlSelfRef.__PVT__cg_reg_ctrl_2 = 0U;
    vlSelfRef.__PVT__cc_is_inactive_cg = 1U;
    vlSelfRef.__PVT__activate_cc = 0U;
    vlSelfRef.__PVT__cc_exists = 0U;
    vlSelfRef.__PVT__cg_cc_intfrx_clk = 0U;
    vlSelfRef.__PVT__cg_cc_rstb_intfrx_clk = 0U;
    VL_CONST_W_1X(79,vlSelfRef.__PVT__l3_out_flit_rspf_vc0,0x00000000);
    VL_CONST_W_1X(79,vlSelfRef.__PVT__l3_out_flit_rspf_vc1,0x00000000);
    vlSelfRef.__PVT__proc_port_reg_1_rx_is_inactive = 0U;
    vlSelfRef.__PVT__proc_port_reg_1_tx_is_inactive = 0U;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__0(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0.__PVT__i_rst_n_cc_intfc_clk 
        = vlSelfRef.__PVT__cg_cc_rstb_intfrx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0.__PVT__i_cc_intfc_clk 
        = vlSelfRef.__PVT__cg_cc_intfrx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0.__PVT__i_activate_cc 
        = vlSelfRef.__PVT__activate_cc_l3_or_mn;
    vlSelfRef.__PVT__cc_TX_DATFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__ic_TX_DATFLITPEND;
    vlSelfRef.__PVT__cc_TX_RSPFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__ic_TX_RSPFLITPEND;
    vlSelfRef.__PVT__cc_TX_REQFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__ic_TX_REQFLITPEND;
    vlSelfRef.__PVT__L3_RX_DATFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__ic_TX_DATFLITPEND;
    vlSelfRef.__PVT__L3_RX_RSPFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__ic_TX_RSPFLITPEND;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr.__PVT__i_proc_port_reg_1_tx_is_inactive 
        = vlSelfRef.__PVT__proc_port_reg_1_tx_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr.__PVT__i_proc_port_reg_1_rx_is_inactive 
        = vlSelfRef.__PVT__proc_port_reg_1_rx_is_inactive;
    vlSelfRef.__PVT__cc_intfc_gclk = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0.__PVT__o_cc_intfc_gclk;
    vlSelfRef.__PVT__slc_init_complete = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__slc_init_complete;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0.__PVT__i_cc_exists 
        = vlSelfRef.__PVT__cc_exists;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0.__PVT__i_activate_ic_tx 
        = vlSelfRef.__PVT__activate_ic_tx;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0.__PVT__i_activate_ic_rx 
        = vlSelfRef.__PVT__activate_ic_rx;
    vlSelfRef.__PVT__out_valid_flit_rspf_vc0 = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc0_tx_hs.__PVT__vld_send), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc0_tx_hs.__PVT__vld_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc0_tx_hs.__PVT__vld_send))), 
                                                                           VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc0_tx_hs.__PVT__vld_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_tx_hs.__PVT__vld_send))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc0_tx_hs.__PVT__vld_send), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_tx_hs.__PVT__vld_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc0_tx_hs.__PVT__vld_send))), 
                                                                           VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc0_tx_hs.__PVT__vld_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_tx_hs.__PVT__vld_send))));
    vlSelfRef.__PVT__out_valid_flit_rspf_vc1 = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc1_tx_hs.__PVT__vld_send), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc1_tx_hs.__PVT__vld_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc1_tx_hs.__PVT__vld_send))), 
                                                                           VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc1_tx_hs.__PVT__vld_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_tx_hs.__PVT__vld_send))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc1_tx_hs.__PVT__vld_send), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_tx_hs.__PVT__vld_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc1_tx_hs.__PVT__vld_send))), 
                                                                           VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc1_tx_hs.__PVT__vld_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_tx_hs.__PVT__vld_send))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0.__PVT__i_rst_n_ic_intfc_clk 
        = vlSelfRef.__PVT__rst_n_ic_intfc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0.__PVT__i_ic_intfc_clk 
        = vlSelfRef.__PVT__ic_intfc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0.__PVT__i_cc_is_inactive 
        = vlSelfRef.__PVT__cc_is_inactive_cg;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0.__PVT__i_ic_tx_is_inactive 
        = vlSelfRef.__PVT__ic_tx_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0.__PVT__i_ic_rx_is_inactive 
        = vlSelfRef.__PVT__ic_rx_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0.__PVT__i_cg_reg_ctrl_2 
        = vlSelfRef.__PVT__cg_reg_ctrl_2;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0.__PVT__i_cg_reg_ctrl_1 
        = vlSelfRef.__PVT__cg_reg_ctrl_1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0.__PVT__i_ic_exists 
        = vlSelfRef.__PVT__ic_exists;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0.__PVT__i_pp_exists 
        = vlSelfRef.__PVT__pp_exists;
    vlSelfRef.__PVT__o_rd_csr_clus = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr.__PVT__o_rd_data;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__ic_RX_DATFLITPEND 
        = vlSelfRef.__PVT__cc_TX_DATFLITPEND;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__ic_RX_RSPFLITPEND 
        = vlSelfRef.__PVT__cc_TX_RSPFLITPEND;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__ic_RX_REQFLITPEND 
        = vlSelfRef.__PVT__cc_TX_REQFLITPEND;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__L3_RX_DATFLITPEND 
        = vlSelfRef.__PVT__L3_RX_DATFLITPEND;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__L3_RX_RSPFLITPEND 
        = vlSelfRef.__PVT__L3_RX_RSPFLITPEND;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__tx_intfrx_gclk 
        = vlSelfRef.__PVT__cc_intfc_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__rx_intfrx_gclk 
        = vlSelfRef.__PVT__cc_intfc_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__tx_intfrx_gclk 
        = vlSelfRef.__PVT__cc_intfc_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__rx_intfrx_gclk 
        = vlSelfRef.__PVT__cc_intfc_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_rx_hs.__PVT__recv_vld 
        = vlSelfRef.__PVT__out_valid_flit_rspf_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc0_rx_hs.__PVT__recv_vld 
        = vlSelfRef.__PVT__out_valid_flit_rspf_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc0_rx_hs.__PVT__recv_vld 
        = vlSelfRef.__PVT__out_valid_flit_rspf_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_rx_hs.__PVT__recv_vld 
        = vlSelfRef.__PVT__out_valid_flit_rspf_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc0_rx_hs.__PVT__recv_vld 
        = vlSelfRef.__PVT__out_valid_flit_rspf_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_rx_hs.__PVT__recv_vld 
        = vlSelfRef.__PVT__out_valid_flit_rspf_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc0_rx_hs.__PVT__recv_vld 
        = vlSelfRef.__PVT__out_valid_flit_rspf_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc0_rx_hs.__PVT__recv_vld 
        = vlSelfRef.__PVT__out_valid_flit_rspf_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc0_rx_hs.__PVT__recv_vld 
        = vlSelfRef.__PVT__out_valid_flit_rspf_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc0_rx_hs.__PVT__recv_vld 
        = vlSelfRef.__PVT__out_valid_flit_rspf_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_rx_hs.__PVT__recv_vld 
        = vlSelfRef.__PVT__out_valid_flit_rspf_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc1_rx_hs.__PVT__recv_vld 
        = vlSelfRef.__PVT__out_valid_flit_rspf_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc1_rx_hs.__PVT__recv_vld 
        = vlSelfRef.__PVT__out_valid_flit_rspf_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_rx_hs.__PVT__recv_vld 
        = vlSelfRef.__PVT__out_valid_flit_rspf_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc1_rx_hs.__PVT__recv_vld 
        = vlSelfRef.__PVT__out_valid_flit_rspf_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_rx_hs.__PVT__recv_vld 
        = vlSelfRef.__PVT__out_valid_flit_rspf_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc1_rx_hs.__PVT__recv_vld 
        = vlSelfRef.__PVT__out_valid_flit_rspf_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc1_rx_hs.__PVT__recv_vld 
        = vlSelfRef.__PVT__out_valid_flit_rspf_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc1_rx_hs.__PVT__recv_vld 
        = vlSelfRef.__PVT__out_valid_flit_rspf_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc1_rx_hs.__PVT__recv_vld 
        = vlSelfRef.__PVT__out_valid_flit_rspf_vc1;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__1(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__PVT__cc_is_inactive = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__cc_is_inactive;
    vlSelfRef.__PVT__cc_TX_REQLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__ic_RX_REQLCRDV;
    vlSelfRef.__PVT__cc_TX_DATLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__ic_RX_DATLCRDV;
    vlSelfRef.__PVT__cc_TX_RSPLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__ic_RX_RSPLCRDV;
    vlSelfRef.__PVT__cc_RX_RSPFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__ic_TX_RSPFLITV;
    vlSelfRef.__PVT__cc_RX_DATFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__ic_TX_DATFLITV;
    vlSelfRef.__PVT__cc_RX_SNPFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__ic_TX_SNPFLITV;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__cc_RX_RSPFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__ic_TX_RSPFLIT);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__cc_RX_DATFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__ic_TX_DATFLIT);
    VL_ASSIGN_W(152,vlSelfRef.__Vcellout__sig_chi_cc_top_0__ic_TX_SNPFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__ic_TX_SNPFLIT);
    vlSelfRef.__PVT__dirc_init_complete = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__dirc_init_complete;
    vlSelfRef.__PVT__L3_TX_REQFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__L3_TX_REQFLITPEND;
    vlSelfRef.__PVT__L3_RX_RSPLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__L3_RX_RSPLCRDV;
    vlSelfRef.__PVT__L3_RX_DATLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__L3_RX_DATLCRDV;
    vlSelfRef.__PVT__L3_TX_DATFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__L3_TX_DATFLITPEND;
    vlSelfRef.__PVT__l3_wrdatabuf_hasroom = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__l3_wrdatabuf_hasroom;
    vlSelfRef.__PVT__l3reqflit_fifo_full = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__l3reqflit_fifo_full;
    vlSelfRef.__PVT__L3_TX_DATFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__L3_TX_DATFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__COH_RNF_Exist 
        = vlSelfRef.__PVT__COH_RNF_Exist;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__mn_node_id 
        = vlSelfRef.__PVT__mn_node_id;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__mn_node_id 
        = vlSelfRef.__PVT__mn_node_id;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__icx_exist 
        = vlSelfRef.__PVT__icx_txport_cfg;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__icx_exist 
        = vlSelfRef.__PVT__icx_txport_cfg;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__icx_exist 
        = vlSelfRef.__PVT__icx_txport_cfg;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__icx_exist 
        = vlSelfRef.__PVT__icx_txport_cfg;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__icx_exist 
        = vlSelfRef.__PVT__icx_txport_cfg;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__icx_exist 
        = vlSelfRef.__PVT__icx_txport_cfg;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__reg_cc_ctrl1 
        = vlSelfRef.__PVT__reg_cc_ctrl1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__mycluster_id 
        = vlSelfRef.__PVT__mycluster_id;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__mycluster_id 
        = vlSelfRef.__PVT__mycluster_id;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__mycluster_id 
        = vlSelfRef.__PVT__mycluster_id;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__mycluster_id 
        = vlSelfRef.__PVT__mycluster_id;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__mycluster_id 
        = vlSelfRef.__PVT__mycluster_id;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__mycluster_id 
        = vlSelfRef.__PVT__mycluster_id;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__mycluster_id 
        = vlSelfRef.__PVT__mycluster_id;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__mycluster_id 
        = vlSelfRef.__PVT__mycluster_id;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__reg_syscoh 
        = vlSelfRef.__PVT__p2_reg_syscoh;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__reg_syscoh 
        = vlSelfRef.__PVT__p3_reg_syscoh;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__ic_TX_REQLCRDV_VC0 
        = vlSelfRef.__PVT__cc_TX_REQLCRDV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__ic_TX_DATLCRDV_VC0 
        = vlSelfRef.__PVT__cc_TX_DATLCRDV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__ic_TX_RSPLCRDV_VC0 
        = vlSelfRef.__PVT__cc_TX_RSPLCRDV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__ic_RX_RSPFLITV 
        = vlSelfRef.__PVT__cc_RX_RSPFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__ic_RX_DATFLITV 
        = vlSelfRef.__PVT__cc_RX_DATFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__ic_RX_SNPFLITV 
        = vlSelfRef.__PVT__cc_RX_SNPFLITV;
    VL_ASSIGN_W(73,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__ic_RX_RSPFLIT, vlSelfRef.__PVT__cc_RX_RSPFLIT);
    VL_ASSIGN_W(680,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__ic_RX_DATFLIT, vlSelfRef.__PVT__cc_RX_DATFLIT);
    vlSelfRef.__PVT__cc_RX_SNPFLIT_snp_or_req_bit = 
        (1U & VL_BITSEL_IWII(152, vlSelfRef.__Vcellout__sig_chi_cc_top_0__ic_TX_SNPFLIT, 0x97U));
    VL_CONST_W_5X(160,__Vtemp_1,0x007fffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(151, 152, __Vtemp_2, vlSelfRef.__Vcellout__sig_chi_cc_top_0__ic_TX_SNPFLIT, 0U, 151);
    VL_AND_W(5, vlSelfRef.__PVT__cc_RX_SNPFLIT, __Vtemp_1, __Vtemp_2);
    vlSelfRef.__PVT__cache_init_complete = ((IData)(vlSelfRef.__PVT__dirc_init_complete) 
                                            & (IData)(vlSelfRef.__PVT__slc_init_complete));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__ic_RX_SNPFLITPEND 
        = vlSelfRef.__PVT__L3_TX_REQFLITPEND;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__ic_TX_RSPLCRDV_VC0 
        = vlSelfRef.__PVT__L3_RX_RSPLCRDV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__ic_TX_DATLCRDV_VC0 
        = vlSelfRef.__PVT__L3_RX_DATLCRDV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__ic_RX_DATFLITPEND 
        = vlSelfRef.__PVT__L3_TX_DATFLITPEND;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__l3_wrdatabuf_hasroom 
        = vlSelfRef.__PVT__l3_wrdatabuf_hasroom;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__l3reqflit_fifo_full 
        = vlSelfRef.__PVT__l3reqflit_fifo_full;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__ic_RX_DATFLITV 
        = vlSelfRef.__PVT__L3_TX_DATFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__ic_RX_SNPFLIT_snp_or_req_bit 
        = vlSelfRef.__PVT__cc_RX_SNPFLIT_snp_or_req_bit;
    VL_ASSIGN_W(151,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__ic_RX_SNPFLIT, vlSelfRef.__PVT__cc_RX_SNPFLIT);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__2(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__proc_port_reg_0_max_credits = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr.__PVT__o_proc_port_reg_0_max_credits;
    vlSelfRef.__PVT__coherency_ctlr_reg_0_inactive_threshold 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr.__PVT__o_coherency_ctlr_reg_0_inactive_threshold;
    vlSelfRef.__PVT__coherency_ctlr_reg_1_b2b_resp_wait 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr.__PVT__o_coherency_ctlr_reg_1_b2b_resp_wait;
    vlSelfRef.__PVT__node_port_timeout_clear_timeout_interrupt_vec 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr.__PVT__o_node_port_timeout_clear_timeout_interrupt_vec;
    vlSelfRef.__PVT__node_port_timeout_clear_recovery_interrupt_vec 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr.__PVT__o_node_port_timeout_clear_recovery_interrupt_vec;
    VL_ASSIGN_W(161,vlSelfRef.__PVT__cc_out_flit_reqf_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__flit_out_reqf_vc0);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__l3_out_flit_reqf_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__flit_out_reqf_vc0);
    vlSelfRef.__PVT__l3_wrbe = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__l3_wrbe;
    VL_ASSIGN_W(512,vlSelfRef.__PVT__l3_wrdata, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__l3_wrdata);
    vlSelfRef.__PVT__l3_drop_wrdata = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__l3_drop_wrdata;
    VL_ASSIGN_W(161,vlSelfRef.__PVT__p2_out_flit_reqf_vc1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__flit_out_reqf_vc1);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__p3_out_flit_reqf_vc1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__flit_out_reqf_vc1);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__cc_rstb_intfrx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__cc_rstb_intfrx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__intfrx_clk 
        = vlSelfRef.__PVT__cc_intfrx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__intfrx_clk 
        = vlSelfRef.__PVT__cc_intfrx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__ic_RXSACTIVE 
        = vlSelfRef.__PVT__p0_ic_RXSACTIVE;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__ic_TX_LINKACTIVEACK 
        = vlSelfRef.__PVT__p0_TX_LINKACTIVEACK;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__ic_RX_LINKACTIVEREQ 
        = vlSelfRef.__PVT__p0_RX_LINKACTIVEREQ;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__ic_RXSACTIVE 
        = vlSelfRef.__PVT__p1_ic_RXSACTIVE;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__ic_TX_LINKACTIVEACK 
        = vlSelfRef.__PVT__p1_TX_LINKACTIVEACK;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__ic_RX_LINKACTIVEREQ 
        = vlSelfRef.__PVT__p1_RX_LINKACTIVEREQ;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__ic_RX_LINKACTIVEREQ 
        = vlSelfRef.__PVT__p3_RX_LINKACTIVEREQ;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__ic_TX_LINKACTIVEACK 
        = vlSelfRef.__PVT__p3_TX_LINKACTIVEACK;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__ic_RX_LINKACTIVEREQ 
        = vlSelfRef.__PVT__p2_RX_LINKACTIVEREQ;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__ic_TX_LINKACTIVEACK 
        = vlSelfRef.__PVT__p2_TX_LINKACTIVEACK;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__ic_RXSACTIVE 
        = vlSelfRef.__PVT__p3_ic_RXSACTIVE;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__ic_RXSACTIVE 
        = vlSelfRef.__PVT__p2_ic_RXSACTIVE;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__ic_TX_DATLCRDV 
        = vlSelfRef.__PVT__p0_TX_DATLCRDV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__ic_TX_REQLCRDV 
        = vlSelfRef.__PVT__p0_TX_REQLCRDV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__ic_TX_DATLCRDV 
        = vlSelfRef.__PVT__p1_TX_DATLCRDV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__ic_TX_REQLCRDV 
        = vlSelfRef.__PVT__p1_TX_REQLCRDV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__ic_TX_DATLCRDV 
        = vlSelfRef.__PVT__p3_TX_DATLCRDV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__ic_TX_RSPLCRDV 
        = vlSelfRef.__PVT__p3_TX_RSPLCRDV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__ic_TX_SNPLCRDV 
        = vlSelfRef.__PVT__p3_TX_SNPLCRDV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__ic_TX_DATLCRDV 
        = vlSelfRef.__PVT__p2_TX_DATLCRDV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__ic_TX_RSPLCRDV 
        = vlSelfRef.__PVT__p2_TX_RSPLCRDV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__ic_TX_SNPLCRDV 
        = vlSelfRef.__PVT__p2_TX_SNPLCRDV;
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__rst_n_pp_intfc_clk, vlSelfRef.__PVT__p0_rstb_intfrx_clk);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__p0_rstb_intfrx_clk;
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__rst_n_pp_intfc_clk, vlSelfRef.__PVT__p1_rstb_intfrx_clk);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__p1_rstb_intfrx_clk;
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__rst_n_pp_intfc_clk, vlSelfRef.__PVT__p3_rstb_intfrx_clk);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__p3_rstb_intfrx_clk;
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__rst_n_pp_intfc_clk, vlSelfRef.__PVT__p2_rstb_intfrx_clk);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__p2_rstb_intfrx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__intfrx_clk 
        = vlSelfRef.__PVT__p0_intfrx_clk;
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__pp_intfc_clk, vlSelfRef.__PVT__p0_intfrx_clk);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__intfrx_clk 
        = vlSelfRef.__PVT__p1_intfrx_clk;
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__pp_intfc_clk, vlSelfRef.__PVT__p1_intfrx_clk);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__intfrx_clk 
        = vlSelfRef.__PVT__p3_intfrx_clk;
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__pp_intfc_clk, vlSelfRef.__PVT__p3_intfrx_clk);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__intfrx_clk 
        = vlSelfRef.__PVT__p2_intfrx_clk;
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__pp_intfc_clk, vlSelfRef.__PVT__p2_intfrx_clk);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0.__PVT__i_rst_n_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelfRef.__PVT__rstb_cc_clk = vlSelfRef.__PVT__rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelfRef.__PVT__cc_clk = vlSelfRef.__PVT__ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0.__PVT__i_ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr.__PVT__i_rst_n 
        = vlSelfRef.__PVT__i_csr_reset_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr.__PVT__i_clk 
        = vlSelfRef.__PVT__i_csr_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__syscoreq 
        = vlSelfRef.__PVT__p3_syscoreq;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__syscoreq 
        = vlSelfRef.__PVT__p2_syscoreq;
    VL_ASSIGN_W(680,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__ic_RX_DATFLIT, vlSelfRef.__PVT__p3_RX_DATFLIT);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__ic_RX_DATFLITV 
        = vlSelfRef.__PVT__p3_RX_DATFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__ic_RX_DATFLITPEND 
        = vlSelfRef.__PVT__p3_RX_DATFLITPEND;
    VL_ASSIGN_W(73,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__ic_RX_RSPFLIT, vlSelfRef.__PVT__p3_RX_RSPFLIT);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__ic_RX_RSPFLITV 
        = vlSelfRef.__PVT__p3_RX_RSPFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__ic_RX_RSPFLITPEND 
        = vlSelfRef.__PVT__p3_RX_RSPFLITPEND;
    VL_ASSIGN_W(680,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__ic_RX_DATFLIT, vlSelfRef.__PVT__p2_RX_DATFLIT);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__ic_RX_DATFLITV 
        = vlSelfRef.__PVT__p2_RX_DATFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__ic_RX_DATFLITPEND 
        = vlSelfRef.__PVT__p2_RX_DATFLITPEND;
    VL_ASSIGN_W(73,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__ic_RX_RSPFLIT, vlSelfRef.__PVT__p2_RX_RSPFLIT);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__ic_RX_RSPFLITV 
        = vlSelfRef.__PVT__p2_RX_RSPFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__ic_RX_RSPFLITPEND 
        = vlSelfRef.__PVT__p2_RX_RSPFLITPEND;
    VL_ASSIGN_W(151,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__ic_RX_REQFLIT, vlSelfRef.__PVT__p3_RX_REQFLIT);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__ic_RX_REQFLITV 
        = vlSelfRef.__PVT__p3_RX_REQFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__ic_RX_REQFLITPEND 
        = vlSelfRef.__PVT__p3_RX_REQFLITPEND;
    VL_ASSIGN_W(151,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__ic_RX_REQFLIT, vlSelfRef.__PVT__p2_RX_REQFLIT);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__ic_RX_REQFLITV 
        = vlSelfRef.__PVT__p2_RX_REQFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__ic_RX_REQFLITPEND 
        = vlSelfRef.__PVT__p2_RX_REQFLITPEND;
    VL_ASSIGN_W(680,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__ic_RX_DATFLIT, vlSelfRef.__PVT__p0_RX_DATFLIT);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__ic_RX_DATFLITV 
        = vlSelfRef.__PVT__p0_RX_DATFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__ic_RX_DATFLITPEND 
        = vlSelfRef.__PVT__p0_RX_DATFLITPEND;
    VL_ASSIGN_W(73,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__ic_RX_RSPFLIT, vlSelfRef.__PVT__p0_RX_RSPFLIT);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__ic_RX_RSPFLITV 
        = vlSelfRef.__PVT__p0_RX_RSPFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__ic_RX_RSPFLITPEND 
        = vlSelfRef.__PVT__p0_RX_RSPFLITPEND;
    VL_ASSIGN_W(680,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__ic_RX_DATFLIT, vlSelfRef.__PVT__p1_RX_DATFLIT);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__ic_RX_DATFLITV 
        = vlSelfRef.__PVT__p1_RX_DATFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__ic_RX_DATFLITPEND 
        = vlSelfRef.__PVT__p1_RX_DATFLITPEND;
    VL_ASSIGN_W(73,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__ic_RX_RSPFLIT, vlSelfRef.__PVT__p1_RX_RSPFLIT);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__ic_RX_RSPFLITV 
        = vlSelfRef.__PVT__p1_RX_RSPFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__ic_RX_RSPFLITPEND 
        = vlSelfRef.__PVT__p1_RX_RSPFLITPEND;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__cc_is_inactive 
        = vlSelfRef.__PVT__noc_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__cc_is_inactive 
        = vlSelfRef.__PVT__noc_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__cc_is_inactive 
        = vlSelfRef.__PVT__noc_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__cc_is_inactive 
        = vlSelfRef.__PVT__noc_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__all_cache_init_complete 
        = vlSelfRef.__PVT__all_cache_init_complete;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__all_cache_init_complete 
        = vlSelfRef.__PVT__all_cache_init_complete;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__all_cache_init_complete 
        = vlSelfRef.__PVT__all_cache_init_complete;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__all_cache_init_complete 
        = vlSelfRef.__PVT__all_cache_init_complete;
    VL_ASSIGN_W(161,vlSelfRef.__PVT__p1_out_flit_reqf_vc1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__flit_out_reqf_vc1);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__p0_out_flit_reqf_vc1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__flit_out_reqf_vc1);
    vlSelfRef.__Vcellinp__sig_node_porttop_rn_p2__i_clear_timeout_interrupt 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__node_port_timeout_clear_timeout_interrupt_vec), 2U));
    vlSelfRef.__Vcellinp__sig_node_porttop_rn_p3__i_clear_timeout_interrupt 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__node_port_timeout_clear_timeout_interrupt_vec), 3U));
    vlSelfRef.__Vcellinp__sig_node_porttop_sn_p1__i_clear_timeout_interrupt 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__node_port_timeout_clear_timeout_interrupt_vec), 1U));
    vlSelfRef.__Vcellinp__sig_node_porttop_sn_p0__i_clear_timeout_interrupt 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__node_port_timeout_clear_timeout_interrupt_vec), 0U));
    vlSelfRef.__Vcellinp__sig_node_porttop_rn_p2__i_clear_recovery_interrupt 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__node_port_timeout_clear_recovery_interrupt_vec), 2U));
    vlSelfRef.__Vcellinp__sig_node_porttop_rn_p3__i_clear_recovery_interrupt 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__node_port_timeout_clear_recovery_interrupt_vec), 3U));
    vlSelfRef.__Vcellinp__sig_node_porttop_sn_p1__i_clear_recovery_interrupt 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__node_port_timeout_clear_recovery_interrupt_vec), 1U));
    vlSelfRef.__Vcellinp__sig_node_porttop_sn_p0__i_clear_recovery_interrupt 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__node_port_timeout_clear_recovery_interrupt_vec), 0U));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__l3_wrbe 
        = vlSelfRef.__PVT__l3_wrbe;
    VL_ASSIGN_W(512,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__l3_wrdata, vlSelfRef.__PVT__l3_wrdata);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__l3_drop_wrdata 
        = vlSelfRef.__PVT__l3_drop_wrdata;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0.__PVT__i_rst_n_pp_intfc_clk 
        = vlSelfRef.__PVT__rst_n_pp_intfc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0.__PVT__i_pp_intfc_clk 
        = vlSelfRef.__PVT__pp_intfc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__cc_clk 
        = vlSelfRef.__PVT__cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__cc_clk 
        = vlSelfRef.__PVT__cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__i_clear_timeout_interrupt 
        = vlSelfRef.__Vcellinp__sig_node_porttop_rn_p2__i_clear_timeout_interrupt;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__i_clear_timeout_interrupt 
        = vlSelfRef.__Vcellinp__sig_node_porttop_rn_p3__i_clear_timeout_interrupt;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__i_clear_timeout_interrupt 
        = vlSelfRef.__Vcellinp__sig_node_porttop_sn_p1__i_clear_timeout_interrupt;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__i_clear_timeout_interrupt 
        = vlSelfRef.__Vcellinp__sig_node_porttop_sn_p0__i_clear_timeout_interrupt;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__i_clear_recovery_interrupt 
        = vlSelfRef.__Vcellinp__sig_node_porttop_rn_p2__i_clear_recovery_interrupt;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__i_clear_recovery_interrupt 
        = vlSelfRef.__Vcellinp__sig_node_porttop_rn_p3__i_clear_recovery_interrupt;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__i_clear_recovery_interrupt 
        = vlSelfRef.__Vcellinp__sig_node_porttop_sn_p1__i_clear_recovery_interrupt;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__i_clear_recovery_interrupt 
        = vlSelfRef.__Vcellinp__sig_node_porttop_sn_p0__i_clear_recovery_interrupt;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__3(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<11>/*351:0*/ __Vtemp_1;
    VlWide<16>/*511:0*/ __Vtemp_2;
    VlWide<21>/*671:0*/ __Vtemp_3;
    VlWide<11>/*351:0*/ __Vtemp_4;
    VlWide<16>/*511:0*/ __Vtemp_5;
    VlWide<21>/*671:0*/ __Vtemp_6;
    VlWide<11>/*351:0*/ __Vtemp_7;
    // Body
    vlSelfRef.__PVT__ic_rx_intfc_gclk = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0.__PVT__o_ic_rx_intfc_gclk;
    vlSelfRef.__PVT__ic_tx_intfc_gclk = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0.__PVT__o_ic_tx_intfc_gclk;
    VL_ASSIGN_W(79,vlSelfRef.__PVT__cc_out_flit_rspf_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__flit_out_rspf_vc0);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__cc_out_flit_rspf_vc1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__flit_out_rspf_vc1);
    vlSelfRef.__PVT__cc_TX_REQFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__ic_TX_REQFLITV;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__cc_TX_REQFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__ic_TX_REQFLIT);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__l3_out_flit_reqf_vc1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__flit_out_reqf_vc1);
    vlSelfRef.__PVT__L3_RX_RSPFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__ic_TX_RSPFLITV;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__L3_RX_RSPFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__ic_TX_RSPFLIT);
    vlSelfRef.__PVT__L3_RX_DATFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__ic_TX_DATFLITV;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__L3_RX_DATFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__ic_TX_DATFLIT);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__p0_out_flit_reqf_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__flit_out_reqf_vc0);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__p1_out_flit_reqf_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__flit_out_reqf_vc0);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__p3_out_flit_reqf_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__flit_out_reqf_vc0);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__p2_out_flit_reqf_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__flit_out_reqf_vc0);
    vlSelfRef.__PVT__dbid_from_l3 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__dbid_from_l3;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__ic_RX_REQFLITV 
        = vlSelfRef.__PVT__cc_TX_REQFLITV;
    VL_ASSIGN_W(151,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__ic_RX_REQFLIT, vlSelfRef.__PVT__cc_TX_REQFLIT);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__L3_RX_RSPFLITV 
        = vlSelfRef.__PVT__L3_RX_RSPFLITV;
    VL_ASSIGN_W(73,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__L3_RX_RSPFLIT, vlSelfRef.__PVT__L3_RX_RSPFLIT);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__L3_RX_DATFLITV 
        = vlSelfRef.__PVT__L3_RX_DATFLITV;
    VL_ASSIGN_W(680,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__L3_RX_DATFLIT, vlSelfRef.__PVT__L3_RX_DATFLIT);
    VL_CONCAT_WWW(322,161,161, __Vtemp_1, vlSelfRef.__PVT__l3_out_flit_reqf_vc0, vlSelfRef.__PVT__cc_out_flit_reqf_vc0);
    VL_CONCAT_WWW(483,161,322, __Vtemp_2, vlSelfRef.__PVT__p0_out_flit_reqf_vc0, __Vtemp_1);
    VL_CONCAT_WWW(644,161,483, __Vtemp_3, vlSelfRef.__PVT__p1_out_flit_reqf_vc0, __Vtemp_2);
    VL_ASSIGNSEL_WW(1610,644,0U, vlSelfRef.__PVT__cc_in_flit_all_req_vc0, __Vtemp_3);
    VL_CONCAT_WWW(322,161,161, __Vtemp_4, vlSelfRef.__PVT__p3_out_flit_reqf_vc0, vlSelfRef.__PVT__p2_out_flit_reqf_vc0);
    VL_CONCAT_WWW(483,161,322, __Vtemp_5, vlSelfRef.__PVT__icn_out_flit_reqf_vc0, __Vtemp_4);
    VL_CONCAT_WWW(644,161,483, __Vtemp_6, vlSelfRef.__PVT__ice_out_flit_reqf_vc0, __Vtemp_5);
    VL_ASSIGNSEL_WW(1610,644,0x284U, vlSelfRef.__PVT__cc_in_flit_all_req_vc0, __Vtemp_6);
    VL_CONCAT_WWW(322,161,161, __Vtemp_7, vlSelfRef.__PVT__icw_out_flit_reqf_vc0, vlSelfRef.__PVT__ics_out_flit_reqf_vc0);
    VL_ASSIGNSEL_WW(1610,322,0x508U, vlSelfRef.__PVT__cc_in_flit_all_req_vc0, __Vtemp_7);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__dbid_from_l3 
        = vlSelfRef.__PVT__dbid_from_l3;
    VL_ASSIGN_W(1610,vlSelfRef.__PVT__l3_in_flit_all_req_vc0, vlSelfRef.__PVT__cc_in_flit_all_req_vc0);
    VL_ASSIGN_W(1610,vlSelfRef.__PVT__icn_in_flit_all_req_vc0, vlSelfRef.__PVT__cc_in_flit_all_req_vc0);
    VL_ASSIGN_W(1610,vlSelfRef.__PVT__ice_in_flit_all_req_vc0, vlSelfRef.__PVT__cc_in_flit_all_req_vc0);
    VL_ASSIGN_W(1610,vlSelfRef.__PVT__ics_in_flit_all_req_vc0, vlSelfRef.__PVT__cc_in_flit_all_req_vc0);
    VL_ASSIGN_W(1610,vlSelfRef.__PVT__icw_in_flit_all_req_vc0, vlSelfRef.__PVT__cc_in_flit_all_req_vc0);
    VL_ASSIGN_W(1610,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__flit_all_req_vc0, vlSelfRef.__PVT__cc_in_flit_all_req_vc0);
    VL_ASSIGN_W(1610,vlSelfRef.__PVT__p0_in_flit_all_req_vc0, vlSelfRef.__PVT__cc_in_flit_all_req_vc0);
    VL_ASSIGN_W(1610,vlSelfRef.__PVT__p1_in_flit_all_req_vc0, vlSelfRef.__PVT__cc_in_flit_all_req_vc0);
    VL_ASSIGN_W(1610,vlSelfRef.__PVT__p2_in_flit_all_req_vc0, vlSelfRef.__PVT__cc_in_flit_all_req_vc0);
    VL_ASSIGN_W(1610,vlSelfRef.__PVT__p3_in_flit_all_req_vc0, vlSelfRef.__PVT__cc_in_flit_all_req_vc0);
    VL_ASSIGN_W(1610,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__flit_all_req_vc0, vlSelfRef.__PVT__p0_in_flit_all_req_vc0);
    VL_ASSIGN_W(1610,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__flit_all_req_vc0, vlSelfRef.__PVT__p1_in_flit_all_req_vc0);
    VL_ASSIGN_W(1610,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__flit_all_req_vc0, vlSelfRef.__PVT__p2_in_flit_all_req_vc0);
    VL_ASSIGN_W(1610,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__flit_all_req_vc0, vlSelfRef.__PVT__p3_in_flit_all_req_vc0);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__4(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr.__PVT__i_addr 
        = vlSelfRef.__PVT__i_clus_csr_address;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr.__PVT__i_strobe 
        = vlSelfRef.__PVT__i_clus_csr_wstrb;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr.__PVT__i_wr_data 
        = vlSelfRef.__PVT__i_clus_csr_wdata;
    vlSelfRef.__PVT__cm_homeaddr_base_all_hn_f_final 
        = vlSelfRef.__PVT__cm_homeaddr_base_all_hn_f;
    vlSelfRef.__PVT__noncm_homeaddr_base_all_hn_f_final 
        = vlSelfRef.__PVT__noncm_homeaddr_base_all_hn_f;
    vlSelfRef.__PVT__cm_homeaddr_limit_all_hn_f_final 
        = vlSelfRef.__PVT__cm_homeaddr_limit_all_hn_f;
    vlSelfRef.__PVT__noncm_homeaddr_limit_all_hn_f_final 
        = vlSelfRef.__PVT__noncm_homeaddr_limit_all_hn_f;
    vlSelfRef.__PVT__noncm_homeaddr_base_all_pm_final 
        = vlSelfRef.__PVT__noncm_homeaddr_base_all_pm;
    vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm_final 
        = vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm;
    vlSelfRef.__PVT__cm_homeaddr_base_all_pm_final 
        = vlSelfRef.__PVT__cm_homeaddr_base_all_pm;
    vlSelfRef.__PVT__cm_homeaddr_limit_all_pm_final 
        = vlSelfRef.__PVT__cm_homeaddr_limit_all_pm;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__xy_coord_all_hn_f 
        = vlSelfRef.__PVT__xy_coord_all_hn_f;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__xy_coord_all_hn_f 
        = vlSelfRef.__PVT__xy_coord_all_hn_f;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__xy_coord_all_pm 
        = vlSelfRef.__PVT__xy_coord_all_pm;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__xy_coord_all_pm 
        = vlSelfRef.__PVT__xy_coord_all_pm;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__xy_coord_all_pm 
        = vlSelfRef.__PVT__xy_coord_all_pm;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__xy_coord_all_pm 
        = vlSelfRef.__PVT__xy_coord_all_pm;
    VL_ASSIGN_W(242,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__COH_nodeid_all_rn, vlSelfRef.__PVT__COH_nodeid_all_rn);
    vlSelfRef.__PVT__cc_ic_gclk = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0.__PVT__o_cc_ic_gclk;
    vlSelfRef.__PVT__ic_rx_ic_gclk = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0.__PVT__o_ic_rx_ic_gclk;
    vlSelfRef.__PVT__ic_tx_ic_gclk = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0.__PVT__o_ic_tx_ic_gclk;
    vlSelfRef.__PVT__pp_rx_ic_gclk = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0.__PVT__o_pp_rx_ic_gclk;
    vlSelfRef.__PVT__pp_tx_ic_gclk = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0.__PVT__o_pp_tx_ic_gclk;
    vlSelfRef.__PVT__pp_tx_intfc_gclk = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0.__PVT__o_pp_tx_intfc_gclk;
    vlSelfRef.__PVT__pp_rx_intfc_gclk = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0.__PVT__o_pp_rx_intfc_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__cm_homeaddr_base_all_hn_f 
        = vlSelfRef.__PVT__cm_homeaddr_base_all_hn_f_final;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__cm_homeaddr_base_all_hn_f 
        = vlSelfRef.__PVT__cm_homeaddr_base_all_hn_f_final;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__noncm_homeaddr_base_all_hn_f 
        = vlSelfRef.__PVT__noncm_homeaddr_base_all_hn_f_final;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__noncm_homeaddr_base_all_hn_f 
        = vlSelfRef.__PVT__noncm_homeaddr_base_all_hn_f_final;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__cm_homeaddr_limit_all_hn_f 
        = vlSelfRef.__PVT__cm_homeaddr_limit_all_hn_f_final;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__cm_homeaddr_limit_all_hn_f 
        = vlSelfRef.__PVT__cm_homeaddr_limit_all_hn_f_final;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__noncm_homeaddr_limit_all_hn_f 
        = vlSelfRef.__PVT__noncm_homeaddr_limit_all_hn_f_final;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__noncm_homeaddr_limit_all_hn_f 
        = vlSelfRef.__PVT__noncm_homeaddr_limit_all_hn_f_final;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__noncm_homeaddr_base_all_pm 
        = vlSelfRef.__PVT__noncm_homeaddr_base_all_pm_final;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__noncm_homeaddr_base_all_pm 
        = vlSelfRef.__PVT__noncm_homeaddr_base_all_pm_final;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__noncm_homeaddr_base_all_pm 
        = vlSelfRef.__PVT__noncm_homeaddr_base_all_pm_final;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__noncm_homeaddr_limit_all_pm 
        = vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm_final;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__noncm_homeaddr_limit_all_pm 
        = vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm_final;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__noncm_homeaddr_limit_all_pm 
        = vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm_final;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__cm_homeaddr_base_all_pm 
        = vlSelfRef.__PVT__cm_homeaddr_base_all_pm_final;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__cm_homeaddr_base_all_pm 
        = vlSelfRef.__PVT__cm_homeaddr_base_all_pm_final;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__cm_homeaddr_base_all_pm 
        = vlSelfRef.__PVT__cm_homeaddr_base_all_pm_final;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__cm_homeaddr_base_all_pm 
        = vlSelfRef.__PVT__cm_homeaddr_base_all_pm_final;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__cm_homeaddr_limit_all_pm 
        = vlSelfRef.__PVT__cm_homeaddr_limit_all_pm_final;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__cm_homeaddr_limit_all_pm 
        = vlSelfRef.__PVT__cm_homeaddr_limit_all_pm_final;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__cm_homeaddr_limit_all_pm 
        = vlSelfRef.__PVT__cm_homeaddr_limit_all_pm_final;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__cm_homeaddr_limit_all_pm 
        = vlSelfRef.__PVT__cm_homeaddr_limit_all_pm_final;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__rx_ic_gclk 
        = vlSelfRef.__PVT__cc_ic_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__rx_ic_gclk 
        = vlSelfRef.__PVT__cc_ic_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__tx_ic_gclk 
        = vlSelfRef.__PVT__cc_ic_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__tx_ic_gclk 
        = vlSelfRef.__PVT__cc_ic_gclk;
    vlSelfRef.__PVT__cc_final_gclk = vlSelfRef.__PVT__cc_ic_gclk;
    vlSelfRef.__Vcellinp__sig_node_porttop_rn_p2__rx_ic_gclk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__pp_rx_ic_gclk), 2U));
    vlSelfRef.__Vcellinp__sig_node_porttop_rn_p3__rx_ic_gclk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__pp_rx_ic_gclk), 3U));
    vlSelfRef.__Vcellinp__sig_node_porttop_sn_p1__rx_ic_gclk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__pp_rx_ic_gclk), 1U));
    vlSelfRef.__Vcellinp__sig_node_porttop_sn_p0__rx_ic_gclk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__pp_rx_ic_gclk), 0U));
    vlSelfRef.__Vcellinp__sig_node_porttop_rn_p2__tx_ic_gclk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__pp_tx_ic_gclk), 2U));
    vlSelfRef.__Vcellinp__sig_node_porttop_rn_p3__tx_ic_gclk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__pp_tx_ic_gclk), 3U));
    vlSelfRef.__Vcellinp__sig_node_porttop_sn_p1__tx_ic_gclk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__pp_tx_ic_gclk), 1U));
    vlSelfRef.__Vcellinp__sig_node_porttop_sn_p0__tx_ic_gclk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__pp_tx_ic_gclk), 0U));
    vlSelfRef.__Vcellinp__sig_node_porttop_rn_p2__tx_intfrx_gclk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__pp_tx_intfc_gclk), 2U));
    vlSelfRef.__Vcellinp__sig_node_porttop_rn_p3__tx_intfrx_gclk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__pp_tx_intfc_gclk), 3U));
    vlSelfRef.__Vcellinp__sig_node_porttop_sn_p1__tx_intfrx_gclk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__pp_tx_intfc_gclk), 1U));
    vlSelfRef.__Vcellinp__sig_node_porttop_sn_p0__tx_intfrx_gclk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__pp_tx_intfc_gclk), 0U));
    vlSelfRef.__Vcellinp__sig_node_porttop_rn_p2__rx_intfrx_gclk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__pp_rx_intfc_gclk), 2U));
    vlSelfRef.__Vcellinp__sig_node_porttop_rn_p3__rx_intfrx_gclk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__pp_rx_intfc_gclk), 3U));
    vlSelfRef.__Vcellinp__sig_node_porttop_sn_p1__rx_intfrx_gclk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__pp_rx_intfc_gclk), 1U));
    vlSelfRef.__Vcellinp__sig_node_porttop_sn_p0__rx_intfrx_gclk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__pp_rx_intfc_gclk), 0U));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__cc_gclk 
        = vlSelfRef.__PVT__cc_final_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__cc_gclk 
        = vlSelfRef.__PVT__cc_final_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__rx_ic_gclk 
        = vlSelfRef.__Vcellinp__sig_node_porttop_rn_p2__rx_ic_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__rx_ic_gclk 
        = vlSelfRef.__Vcellinp__sig_node_porttop_rn_p3__rx_ic_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__rx_ic_gclk 
        = vlSelfRef.__Vcellinp__sig_node_porttop_sn_p1__rx_ic_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__rx_ic_gclk 
        = vlSelfRef.__Vcellinp__sig_node_porttop_sn_p0__rx_ic_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__tx_ic_gclk 
        = vlSelfRef.__Vcellinp__sig_node_porttop_rn_p2__tx_ic_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__tx_ic_gclk 
        = vlSelfRef.__Vcellinp__sig_node_porttop_rn_p3__tx_ic_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__tx_ic_gclk 
        = vlSelfRef.__Vcellinp__sig_node_porttop_sn_p1__tx_ic_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__tx_ic_gclk 
        = vlSelfRef.__Vcellinp__sig_node_porttop_sn_p0__tx_ic_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__tx_intfrx_gclk 
        = vlSelfRef.__Vcellinp__sig_node_porttop_rn_p2__tx_intfrx_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__tx_intfrx_gclk 
        = vlSelfRef.__Vcellinp__sig_node_porttop_rn_p3__tx_intfrx_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__tx_intfrx_gclk 
        = vlSelfRef.__Vcellinp__sig_node_porttop_sn_p1__tx_intfrx_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__tx_intfrx_gclk 
        = vlSelfRef.__Vcellinp__sig_node_porttop_sn_p0__tx_intfrx_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__rx_intfrx_gclk 
        = vlSelfRef.__Vcellinp__sig_node_porttop_rn_p2__rx_intfrx_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__rx_intfrx_gclk 
        = vlSelfRef.__Vcellinp__sig_node_porttop_rn_p3__rx_intfrx_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__rx_intfrx_gclk 
        = vlSelfRef.__Vcellinp__sig_node_porttop_sn_p1__rx_intfrx_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__rx_intfrx_gclk 
        = vlSelfRef.__Vcellinp__sig_node_porttop_sn_p0__rx_intfrx_gclk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__5(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__l3_rddata_resperr = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__compresperr_tocc;
    vlSelfRef.__PVT__l3_datvalid = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__compdata_valid;
    vlSelfRef.__PVT__l3_rddata_txnid = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__comptxnid_tocc;
    VL_ASSIGN_W(512,vlSelfRef.__PVT__l3_datflit, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__compdata_tocc);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__l3_rddata_resperr 
        = vlSelfRef.__PVT__l3_rddata_resperr;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__l3_datvalid 
        = vlSelfRef.__PVT__l3_datvalid;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__l3_rddata_txnid 
        = vlSelfRef.__PVT__l3_rddata_txnid;
    VL_ASSIGN_W(512,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__l3_datflit, vlSelfRef.__PVT__l3_datflit);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__6(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p3_syscoack = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__syscoack;
    vlSelfRef.__PVT__p2_syscoack = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__syscoack;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr.__PVT__i_wr_en 
        = vlSelfRef.__PVT__i_wren_csr_top_or_clus;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr.__PVT__i_rd_en 
        = vlSelfRef.__PVT__i_rden_csr_top_or_clus;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__7(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__porthas_datgnt_fromcc = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__porthas_datgnt_fromcc;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__porthas_datgnt 
        = vlSelfRef.__PVT__porthas_datgnt_fromcc;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__8(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__PVT__cc_TX_DATFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__ic_TX_DATFLIT);
    vlSelfRef.__PVT__cc_TX_DATFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__ic_TX_DATFLITV;
    VL_ASSIGN_W(680,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__ic_RX_DATFLIT, vlSelfRef.__PVT__cc_TX_DATFLIT);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__ic_RX_DATFLITV 
        = vlSelfRef.__PVT__cc_TX_DATFLITV;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__0(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cc_RX_RSPFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__ic_TX_RSPFLITPEND;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__ic_RX_RSPFLITPEND 
        = vlSelfRef.__PVT__cc_RX_RSPFLITPEND;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__1(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p0_RX_DATLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__ic_RX_DATLCRDV;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__2(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p0_RX_RSPLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__ic_RX_RSPLCRDV;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__3(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p1_RX_DATLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__ic_RX_DATLCRDV;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__4(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p1_RX_RSPLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__ic_RX_RSPLCRDV;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__5(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p3_RX_DATLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__ic_RX_DATLCRDV;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__6(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p3_RX_RSPLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__ic_RX_RSPLCRDV;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__7(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p3_RX_REQLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__ic_RX_REQLCRDV;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__8(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p2_RX_DATLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__ic_RX_DATLCRDV;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__9(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p2_RX_RSPLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__ic_RX_RSPLCRDV;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__10(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p2_RX_REQLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__ic_RX_REQLCRDV;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__11(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__11\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__out_gnt_vec_req_vc0[0U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc0_rx_hs.__PVT__gnt_recv), 0U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc0_rx_hs.__PVT__gnt_recv), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc0_rx_hs.__PVT__gnt_recv), 0U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc0_rx_hs.__PVT__gnt_recv), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_rx_hs.__PVT__gnt_recv), 0U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc0_rx_hs.__PVT__gnt_recv), 0U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc0_rx_hs.__PVT__gnt_recv), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc0_rx_hs.__PVT__gnt_recv), 0U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc0_rx_hs.__PVT__gnt_recv), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_rx_hs.__PVT__gnt_recv), 0U)))));
    vlSelfRef.__PVT__out_gnt_vec_req_vc0[1U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc0_rx_hs.__PVT__gnt_recv), 1U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc0_rx_hs.__PVT__gnt_recv), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc0_rx_hs.__PVT__gnt_recv), 1U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc0_rx_hs.__PVT__gnt_recv), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_rx_hs.__PVT__gnt_recv), 1U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc0_rx_hs.__PVT__gnt_recv), 1U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc0_rx_hs.__PVT__gnt_recv), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc0_rx_hs.__PVT__gnt_recv), 1U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc0_rx_hs.__PVT__gnt_recv), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_rx_hs.__PVT__gnt_recv), 1U)))));
    vlSelfRef.__PVT__out_gnt_vec_req_vc0[2U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc0_rx_hs.__PVT__gnt_recv), 2U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc0_rx_hs.__PVT__gnt_recv), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc0_rx_hs.__PVT__gnt_recv), 2U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc0_rx_hs.__PVT__gnt_recv), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_rx_hs.__PVT__gnt_recv), 2U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc0_rx_hs.__PVT__gnt_recv), 2U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc0_rx_hs.__PVT__gnt_recv), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc0_rx_hs.__PVT__gnt_recv), 2U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc0_rx_hs.__PVT__gnt_recv), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_rx_hs.__PVT__gnt_recv), 2U)))));
    vlSelfRef.__PVT__out_gnt_vec_req_vc0[3U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc0_rx_hs.__PVT__gnt_recv), 3U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc0_rx_hs.__PVT__gnt_recv), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc0_rx_hs.__PVT__gnt_recv), 3U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc0_rx_hs.__PVT__gnt_recv), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_rx_hs.__PVT__gnt_recv), 3U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc0_rx_hs.__PVT__gnt_recv), 3U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc0_rx_hs.__PVT__gnt_recv), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc0_rx_hs.__PVT__gnt_recv), 3U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc0_rx_hs.__PVT__gnt_recv), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_rx_hs.__PVT__gnt_recv), 3U)))));
    vlSelfRef.__PVT__out_gnt_vec_req_vc0[4U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc0_rx_hs.__PVT__gnt_recv), 4U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc0_rx_hs.__PVT__gnt_recv), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc0_rx_hs.__PVT__gnt_recv), 4U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc0_rx_hs.__PVT__gnt_recv), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_rx_hs.__PVT__gnt_recv), 4U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc0_rx_hs.__PVT__gnt_recv), 4U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc0_rx_hs.__PVT__gnt_recv), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc0_rx_hs.__PVT__gnt_recv), 4U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc0_rx_hs.__PVT__gnt_recv), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_rx_hs.__PVT__gnt_recv), 4U)))));
    vlSelfRef.__PVT__out_gnt_vec_req_vc0[5U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc0_rx_hs.__PVT__gnt_recv), 5U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc0_rx_hs.__PVT__gnt_recv), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc0_rx_hs.__PVT__gnt_recv), 5U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc0_rx_hs.__PVT__gnt_recv), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_rx_hs.__PVT__gnt_recv), 5U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc0_rx_hs.__PVT__gnt_recv), 5U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc0_rx_hs.__PVT__gnt_recv), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc0_rx_hs.__PVT__gnt_recv), 5U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc0_rx_hs.__PVT__gnt_recv), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_rx_hs.__PVT__gnt_recv), 5U)))));
    vlSelfRef.__PVT__out_gnt_vec_req_vc0[6U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc0_rx_hs.__PVT__gnt_recv), 6U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc0_rx_hs.__PVT__gnt_recv), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc0_rx_hs.__PVT__gnt_recv), 6U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc0_rx_hs.__PVT__gnt_recv), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_rx_hs.__PVT__gnt_recv), 6U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc0_rx_hs.__PVT__gnt_recv), 6U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc0_rx_hs.__PVT__gnt_recv), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc0_rx_hs.__PVT__gnt_recv), 6U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc0_rx_hs.__PVT__gnt_recv), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_rx_hs.__PVT__gnt_recv), 6U)))));
    vlSelfRef.__PVT__out_gnt_vec_req_vc0[7U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc0_rx_hs.__PVT__gnt_recv), 7U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc0_rx_hs.__PVT__gnt_recv), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc0_rx_hs.__PVT__gnt_recv), 7U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc0_rx_hs.__PVT__gnt_recv), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_rx_hs.__PVT__gnt_recv), 7U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc0_rx_hs.__PVT__gnt_recv), 7U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc0_rx_hs.__PVT__gnt_recv), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc0_rx_hs.__PVT__gnt_recv), 7U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc0_rx_hs.__PVT__gnt_recv), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_rx_hs.__PVT__gnt_recv), 7U)))));
    vlSelfRef.__PVT__out_gnt_vec_req_vc0[8U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc0_rx_hs.__PVT__gnt_recv), 8U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc0_rx_hs.__PVT__gnt_recv), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc0_rx_hs.__PVT__gnt_recv), 8U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc0_rx_hs.__PVT__gnt_recv), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_rx_hs.__PVT__gnt_recv), 8U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc0_rx_hs.__PVT__gnt_recv), 8U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc0_rx_hs.__PVT__gnt_recv), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc0_rx_hs.__PVT__gnt_recv), 8U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc0_rx_hs.__PVT__gnt_recv), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_rx_hs.__PVT__gnt_recv), 8U)))));
    vlSelfRef.__PVT__out_gnt_vec_req_vc0[9U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc0_rx_hs.__PVT__gnt_recv), 9U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc0_rx_hs.__PVT__gnt_recv), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc0_rx_hs.__PVT__gnt_recv), 9U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc0_rx_hs.__PVT__gnt_recv), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_rx_hs.__PVT__gnt_recv), 9U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc0_rx_hs.__PVT__gnt_recv), 9U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc0_rx_hs.__PVT__gnt_recv), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc0_rx_hs.__PVT__gnt_recv), 9U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc0_rx_hs.__PVT__gnt_recv), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_rx_hs.__PVT__gnt_recv), 9U)))));
    vlSelfRef.__PVT__out_gnt_vec_req_vc1[0U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc1_rx_hs.__PVT__gnt_recv), 0U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc1_rx_hs.__PVT__gnt_recv), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc1_rx_hs.__PVT__gnt_recv), 0U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc1_rx_hs.__PVT__gnt_recv), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc1_rx_hs.__PVT__gnt_recv), 0U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc1_rx_hs.__PVT__gnt_recv), 0U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc1_rx_hs.__PVT__gnt_recv), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc1_rx_hs.__PVT__gnt_recv), 0U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc1_rx_hs.__PVT__gnt_recv), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_rx_hs.__PVT__gnt_recv), 0U)))));
    vlSelfRef.__PVT__out_gnt_vec_req_vc1[1U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc1_rx_hs.__PVT__gnt_recv), 1U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc1_rx_hs.__PVT__gnt_recv), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc1_rx_hs.__PVT__gnt_recv), 1U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc1_rx_hs.__PVT__gnt_recv), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc1_rx_hs.__PVT__gnt_recv), 1U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc1_rx_hs.__PVT__gnt_recv), 1U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc1_rx_hs.__PVT__gnt_recv), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc1_rx_hs.__PVT__gnt_recv), 1U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc1_rx_hs.__PVT__gnt_recv), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_rx_hs.__PVT__gnt_recv), 1U)))));
    vlSelfRef.__PVT__out_gnt_vec_req_vc1[2U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc1_rx_hs.__PVT__gnt_recv), 2U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc1_rx_hs.__PVT__gnt_recv), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc1_rx_hs.__PVT__gnt_recv), 2U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc1_rx_hs.__PVT__gnt_recv), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc1_rx_hs.__PVT__gnt_recv), 2U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc1_rx_hs.__PVT__gnt_recv), 2U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc1_rx_hs.__PVT__gnt_recv), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc1_rx_hs.__PVT__gnt_recv), 2U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc1_rx_hs.__PVT__gnt_recv), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_rx_hs.__PVT__gnt_recv), 2U)))));
    vlSelfRef.__PVT__out_gnt_vec_req_vc1[3U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc1_rx_hs.__PVT__gnt_recv), 3U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc1_rx_hs.__PVT__gnt_recv), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc1_rx_hs.__PVT__gnt_recv), 3U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc1_rx_hs.__PVT__gnt_recv), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc1_rx_hs.__PVT__gnt_recv), 3U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc1_rx_hs.__PVT__gnt_recv), 3U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc1_rx_hs.__PVT__gnt_recv), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc1_rx_hs.__PVT__gnt_recv), 3U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc1_rx_hs.__PVT__gnt_recv), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_rx_hs.__PVT__gnt_recv), 3U)))));
    vlSelfRef.__PVT__out_gnt_vec_req_vc1[4U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc1_rx_hs.__PVT__gnt_recv), 4U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc1_rx_hs.__PVT__gnt_recv), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc1_rx_hs.__PVT__gnt_recv), 4U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc1_rx_hs.__PVT__gnt_recv), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc1_rx_hs.__PVT__gnt_recv), 4U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc1_rx_hs.__PVT__gnt_recv), 4U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc1_rx_hs.__PVT__gnt_recv), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc1_rx_hs.__PVT__gnt_recv), 4U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc1_rx_hs.__PVT__gnt_recv), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_rx_hs.__PVT__gnt_recv), 4U)))));
    vlSelfRef.__PVT__out_gnt_vec_req_vc1[5U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc1_rx_hs.__PVT__gnt_recv), 5U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc1_rx_hs.__PVT__gnt_recv), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc1_rx_hs.__PVT__gnt_recv), 5U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc1_rx_hs.__PVT__gnt_recv), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc1_rx_hs.__PVT__gnt_recv), 5U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc1_rx_hs.__PVT__gnt_recv), 5U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc1_rx_hs.__PVT__gnt_recv), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc1_rx_hs.__PVT__gnt_recv), 5U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc1_rx_hs.__PVT__gnt_recv), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_rx_hs.__PVT__gnt_recv), 5U)))));
    vlSelfRef.__PVT__out_gnt_vec_req_vc1[6U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc1_rx_hs.__PVT__gnt_recv), 6U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc1_rx_hs.__PVT__gnt_recv), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc1_rx_hs.__PVT__gnt_recv), 6U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc1_rx_hs.__PVT__gnt_recv), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc1_rx_hs.__PVT__gnt_recv), 6U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc1_rx_hs.__PVT__gnt_recv), 6U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc1_rx_hs.__PVT__gnt_recv), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc1_rx_hs.__PVT__gnt_recv), 6U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc1_rx_hs.__PVT__gnt_recv), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_rx_hs.__PVT__gnt_recv), 6U)))));
    vlSelfRef.__PVT__out_gnt_vec_req_vc1[7U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc1_rx_hs.__PVT__gnt_recv), 7U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc1_rx_hs.__PVT__gnt_recv), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc1_rx_hs.__PVT__gnt_recv), 7U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc1_rx_hs.__PVT__gnt_recv), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc1_rx_hs.__PVT__gnt_recv), 7U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc1_rx_hs.__PVT__gnt_recv), 7U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc1_rx_hs.__PVT__gnt_recv), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc1_rx_hs.__PVT__gnt_recv), 7U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc1_rx_hs.__PVT__gnt_recv), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_rx_hs.__PVT__gnt_recv), 7U)))));
    vlSelfRef.__PVT__out_gnt_vec_req_vc1[8U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc1_rx_hs.__PVT__gnt_recv), 8U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc1_rx_hs.__PVT__gnt_recv), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc1_rx_hs.__PVT__gnt_recv), 8U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc1_rx_hs.__PVT__gnt_recv), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc1_rx_hs.__PVT__gnt_recv), 8U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc1_rx_hs.__PVT__gnt_recv), 8U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc1_rx_hs.__PVT__gnt_recv), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc1_rx_hs.__PVT__gnt_recv), 8U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc1_rx_hs.__PVT__gnt_recv), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_rx_hs.__PVT__gnt_recv), 8U)))));
    vlSelfRef.__PVT__out_gnt_vec_req_vc1[9U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc1_rx_hs.__PVT__gnt_recv), 9U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc1_rx_hs.__PVT__gnt_recv), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc1_rx_hs.__PVT__gnt_recv), 9U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc1_rx_hs.__PVT__gnt_recv), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc1_rx_hs.__PVT__gnt_recv), 9U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc1_rx_hs.__PVT__gnt_recv), 9U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc1_rx_hs.__PVT__gnt_recv), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc1_rx_hs.__PVT__gnt_recv), 9U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc1_rx_hs.__PVT__gnt_recv), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_rx_hs.__PVT__gnt_recv), 9U)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc0_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,3,7, (7U & VL_SEL_IIII(10, 
                                                         vlSelfRef.__PVT__out_gnt_vec_req_vc0
                                                         [6U], 7U, 3)), 
                               VL_EXTEND_II(7,6, (0x3fU 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_req_vc0
                                                                [6U], 0U, 6)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc0_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,2,8, (3U & VL_SEL_IIII(10, 
                                                         vlSelfRef.__PVT__out_gnt_vec_req_vc0
                                                         [7U], 8U, 2)), 
                               VL_EXTEND_II(8,7, (0x7fU 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_req_vc0
                                                                [7U], 0U, 7)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc0_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,1,9, (1U & VL_BITSEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_gnt_vec_req_vc0
                                                            [8U], 9U)), 
                               VL_EXTEND_II(9,8, (0xffU 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_req_vc0
                                                                [8U], 0U, 8)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc0_tx_hs.__PVT__send_gnt 
        = (0U != (0x1ffU & VL_SEL_IIII(10, vlSelfRef.__PVT__out_gnt_vec_req_vc0
                                       [9U], 0U, 9)));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,9,1, (0x1ffU & VL_SEL_IIII(10, 
                                                             vlSelfRef.__PVT__out_gnt_vec_req_vc0
                                                             [0U], 1U, 9)), 0U));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc0_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,8,2, (0xffU & VL_SEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_gnt_vec_req_vc0
                                                            [1U], 2U, 8)), 
                               VL_EXTEND_II(2,1, (1U 
                                                  & VL_BITSEL_IIII(10, 
                                                                   vlSelfRef.__PVT__out_gnt_vec_req_vc0
                                                                   [1U], 0U)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc0_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,7,3, (0x7fU & VL_SEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_gnt_vec_req_vc0
                                                            [2U], 3U, 7)), 
                               VL_EXTEND_II(3,2, (3U 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_req_vc0
                                                                [2U], 0U, 2)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc0_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,6,4, (0x3fU & VL_SEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_gnt_vec_req_vc0
                                                            [3U], 4U, 6)), 
                               VL_EXTEND_II(4,3, (7U 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_req_vc0
                                                                [3U], 0U, 3)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc0_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,5,5, (0x1fU & VL_SEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_gnt_vec_req_vc0
                                                            [4U], 5U, 5)), 
                               VL_EXTEND_II(5,4, (0xfU 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_req_vc0
                                                                [4U], 0U, 4)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,4,6, (0xfU & VL_SEL_IIII(10, 
                                                           vlSelfRef.__PVT__out_gnt_vec_req_vc0
                                                           [5U], 6U, 4)), 
                               VL_EXTEND_II(6,5, (0x1fU 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_req_vc0
                                                                [5U], 0U, 5)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc1_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,7,3, (0x7fU & VL_SEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_gnt_vec_req_vc1
                                                            [2U], 3U, 7)), 
                               VL_EXTEND_II(3,2, (3U 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_req_vc1
                                                                [2U], 0U, 2)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc1_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,6,4, (0x3fU & VL_SEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_gnt_vec_req_vc1
                                                            [3U], 4U, 6)), 
                               VL_EXTEND_II(4,3, (7U 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_req_vc1
                                                                [3U], 0U, 3)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc1_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,5,5, (0x1fU & VL_SEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_gnt_vec_req_vc1
                                                            [4U], 5U, 5)), 
                               VL_EXTEND_II(5,4, (0xfU 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_req_vc1
                                                                [4U], 0U, 4)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc1_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,4,6, (0xfU & VL_SEL_IIII(10, 
                                                           vlSelfRef.__PVT__out_gnt_vec_req_vc1
                                                           [5U], 6U, 4)), 
                               VL_EXTEND_II(6,5, (0x1fU 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_req_vc1
                                                                [5U], 0U, 5)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc1_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,3,7, (7U & VL_SEL_IIII(10, 
                                                         vlSelfRef.__PVT__out_gnt_vec_req_vc1
                                                         [6U], 7U, 3)), 
                               VL_EXTEND_II(7,6, (0x3fU 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_req_vc1
                                                                [6U], 0U, 6)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc1_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,2,8, (3U & VL_SEL_IIII(10, 
                                                         vlSelfRef.__PVT__out_gnt_vec_req_vc1
                                                         [7U], 8U, 2)), 
                               VL_EXTEND_II(8,7, (0x7fU 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_req_vc1
                                                                [7U], 0U, 7)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc1_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,1,9, (1U & VL_BITSEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_gnt_vec_req_vc1
                                                            [8U], 9U)), 
                               VL_EXTEND_II(9,8, (0xffU 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_req_vc1
                                                                [8U], 0U, 8)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc1_tx_hs.__PVT__send_gnt 
        = (0U != (0x1ffU & VL_SEL_IIII(10, vlSelfRef.__PVT__out_gnt_vec_req_vc1
                                       [9U], 0U, 9)));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc1_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,8,2, (0xffU & VL_SEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_gnt_vec_req_vc1
                                                            [1U], 2U, 8)), 
                               VL_EXTEND_II(2,1, (1U 
                                                  & VL_BITSEL_IIII(10, 
                                                                   vlSelfRef.__PVT__out_gnt_vec_req_vc1
                                                                   [1U], 0U)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,9,1, (0x1ffU & VL_SEL_IIII(10, 
                                                             vlSelfRef.__PVT__out_gnt_vec_req_vc1
                                                             [0U], 1U, 9)), 0U));
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__12(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__12\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<11>/*351:0*/ __Vtemp_1;
    VlWide<16>/*511:0*/ __Vtemp_2;
    VlWide<21>/*671:0*/ __Vtemp_3;
    VlWide<11>/*351:0*/ __Vtemp_4;
    VlWide<16>/*511:0*/ __Vtemp_5;
    VlWide<21>/*671:0*/ __Vtemp_6;
    VlWide<11>/*351:0*/ __Vtemp_7;
    // Body
    VL_ASSIGN_W(161,vlSelfRef.__PVT__cc_out_flit_reqf_vc1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__flit_out_reqf_vc1);
    VL_CONCAT_WWW(322,161,161, __Vtemp_1, vlSelfRef.__PVT__l3_out_flit_reqf_vc1, vlSelfRef.__PVT__cc_out_flit_reqf_vc1);
    VL_CONCAT_WWW(483,161,322, __Vtemp_2, vlSelfRef.__PVT__p0_out_flit_reqf_vc1, __Vtemp_1);
    VL_CONCAT_WWW(644,161,483, __Vtemp_3, vlSelfRef.__PVT__p1_out_flit_reqf_vc1, __Vtemp_2);
    VL_ASSIGNSEL_WW(1610,644,0U, vlSelfRef.__PVT__cc_in_flit_all_req_vc1, __Vtemp_3);
    VL_CONCAT_WWW(322,161,161, __Vtemp_4, vlSelfRef.__PVT__p3_out_flit_reqf_vc1, vlSelfRef.__PVT__p2_out_flit_reqf_vc1);
    VL_CONCAT_WWW(483,161,322, __Vtemp_5, vlSelfRef.__PVT__icn_out_flit_reqf_vc1, __Vtemp_4);
    VL_CONCAT_WWW(644,161,483, __Vtemp_6, vlSelfRef.__PVT__ice_out_flit_reqf_vc1, __Vtemp_5);
    VL_ASSIGNSEL_WW(1610,644,0x284U, vlSelfRef.__PVT__cc_in_flit_all_req_vc1, __Vtemp_6);
    VL_CONCAT_WWW(322,161,161, __Vtemp_7, vlSelfRef.__PVT__icw_out_flit_reqf_vc1, vlSelfRef.__PVT__ics_out_flit_reqf_vc1);
    VL_ASSIGNSEL_WW(1610,322,0x508U, vlSelfRef.__PVT__cc_in_flit_all_req_vc1, __Vtemp_7);
    VL_ASSIGN_W(1610,vlSelfRef.__PVT__l3_in_flit_all_req_vc1, vlSelfRef.__PVT__cc_in_flit_all_req_vc1);
    VL_ASSIGN_W(1610,vlSelfRef.__PVT__icn_in_flit_all_req_vc1, vlSelfRef.__PVT__cc_in_flit_all_req_vc1);
    VL_ASSIGN_W(1610,vlSelfRef.__PVT__ice_in_flit_all_req_vc1, vlSelfRef.__PVT__cc_in_flit_all_req_vc1);
    VL_ASSIGN_W(1610,vlSelfRef.__PVT__ics_in_flit_all_req_vc1, vlSelfRef.__PVT__cc_in_flit_all_req_vc1);
    VL_ASSIGN_W(1610,vlSelfRef.__PVT__icw_in_flit_all_req_vc1, vlSelfRef.__PVT__cc_in_flit_all_req_vc1);
    VL_ASSIGN_W(1610,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__flit_all_req_vc1, vlSelfRef.__PVT__cc_in_flit_all_req_vc1);
    VL_ASSIGN_W(1610,vlSelfRef.__PVT__p0_in_flit_all_req_vc1, vlSelfRef.__PVT__cc_in_flit_all_req_vc1);
    VL_ASSIGN_W(1610,vlSelfRef.__PVT__p1_in_flit_all_req_vc1, vlSelfRef.__PVT__cc_in_flit_all_req_vc1);
    VL_ASSIGN_W(1610,vlSelfRef.__PVT__p2_in_flit_all_req_vc1, vlSelfRef.__PVT__cc_in_flit_all_req_vc1);
    VL_ASSIGN_W(1610,vlSelfRef.__PVT__p3_in_flit_all_req_vc1, vlSelfRef.__PVT__cc_in_flit_all_req_vc1);
    VL_ASSIGN_W(1610,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__flit_all_req_vc1, vlSelfRef.__PVT__p0_in_flit_all_req_vc1);
    VL_ASSIGN_W(1610,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__flit_all_req_vc1, vlSelfRef.__PVT__p1_in_flit_all_req_vc1);
    VL_ASSIGN_W(1610,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__flit_all_req_vc1, vlSelfRef.__PVT__p2_in_flit_all_req_vc1);
    VL_ASSIGN_W(1610,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__flit_all_req_vc1, vlSelfRef.__PVT__p3_in_flit_all_req_vc1);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__13(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__13\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cc_RX_SNPLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__ic_RX_SNPLCRDV_VC0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__ic_TX_SNPLCRDV 
        = vlSelfRef.__PVT__cc_RX_SNPLCRDV;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__14(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__14\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__out_gnt_vec_dat_vc1[0U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc1_rx_hs.__PVT__gnt_recv), 0U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc1_rx_hs.__PVT__gnt_recv), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc1_rx_hs.__PVT__gnt_recv), 0U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc1_rx_hs.__PVT__gnt_recv), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_rx_hs.__PVT__gnt_recv), 0U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc1_rx_hs.__PVT__gnt_recv), 0U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_rx_hs.__PVT__gnt_recv), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc1_rx_hs.__PVT__gnt_recv), 0U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc1_rx_hs.__PVT__gnt_recv), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_rx_hs.__PVT__gnt_recv), 0U)))));
    vlSelfRef.__PVT__out_gnt_vec_dat_vc1[1U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc1_rx_hs.__PVT__gnt_recv), 1U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc1_rx_hs.__PVT__gnt_recv), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc1_rx_hs.__PVT__gnt_recv), 1U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc1_rx_hs.__PVT__gnt_recv), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_rx_hs.__PVT__gnt_recv), 1U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc1_rx_hs.__PVT__gnt_recv), 1U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_rx_hs.__PVT__gnt_recv), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc1_rx_hs.__PVT__gnt_recv), 1U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc1_rx_hs.__PVT__gnt_recv), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_rx_hs.__PVT__gnt_recv), 1U)))));
    vlSelfRef.__PVT__out_gnt_vec_dat_vc1[2U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc1_rx_hs.__PVT__gnt_recv), 2U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc1_rx_hs.__PVT__gnt_recv), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc1_rx_hs.__PVT__gnt_recv), 2U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc1_rx_hs.__PVT__gnt_recv), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_rx_hs.__PVT__gnt_recv), 2U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc1_rx_hs.__PVT__gnt_recv), 2U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_rx_hs.__PVT__gnt_recv), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc1_rx_hs.__PVT__gnt_recv), 2U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc1_rx_hs.__PVT__gnt_recv), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_rx_hs.__PVT__gnt_recv), 2U)))));
    vlSelfRef.__PVT__out_gnt_vec_dat_vc1[3U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc1_rx_hs.__PVT__gnt_recv), 3U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc1_rx_hs.__PVT__gnt_recv), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc1_rx_hs.__PVT__gnt_recv), 3U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc1_rx_hs.__PVT__gnt_recv), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_rx_hs.__PVT__gnt_recv), 3U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc1_rx_hs.__PVT__gnt_recv), 3U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_rx_hs.__PVT__gnt_recv), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc1_rx_hs.__PVT__gnt_recv), 3U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc1_rx_hs.__PVT__gnt_recv), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_rx_hs.__PVT__gnt_recv), 3U)))));
    vlSelfRef.__PVT__out_gnt_vec_dat_vc1[4U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc1_rx_hs.__PVT__gnt_recv), 4U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc1_rx_hs.__PVT__gnt_recv), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc1_rx_hs.__PVT__gnt_recv), 4U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc1_rx_hs.__PVT__gnt_recv), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_rx_hs.__PVT__gnt_recv), 4U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc1_rx_hs.__PVT__gnt_recv), 4U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_rx_hs.__PVT__gnt_recv), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc1_rx_hs.__PVT__gnt_recv), 4U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc1_rx_hs.__PVT__gnt_recv), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_rx_hs.__PVT__gnt_recv), 4U)))));
    vlSelfRef.__PVT__out_gnt_vec_dat_vc1[5U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc1_rx_hs.__PVT__gnt_recv), 5U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc1_rx_hs.__PVT__gnt_recv), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc1_rx_hs.__PVT__gnt_recv), 5U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc1_rx_hs.__PVT__gnt_recv), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_rx_hs.__PVT__gnt_recv), 5U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc1_rx_hs.__PVT__gnt_recv), 5U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_rx_hs.__PVT__gnt_recv), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc1_rx_hs.__PVT__gnt_recv), 5U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc1_rx_hs.__PVT__gnt_recv), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_rx_hs.__PVT__gnt_recv), 5U)))));
    vlSelfRef.__PVT__out_gnt_vec_dat_vc1[6U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc1_rx_hs.__PVT__gnt_recv), 6U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc1_rx_hs.__PVT__gnt_recv), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc1_rx_hs.__PVT__gnt_recv), 6U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc1_rx_hs.__PVT__gnt_recv), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_rx_hs.__PVT__gnt_recv), 6U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc1_rx_hs.__PVT__gnt_recv), 6U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_rx_hs.__PVT__gnt_recv), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc1_rx_hs.__PVT__gnt_recv), 6U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc1_rx_hs.__PVT__gnt_recv), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_rx_hs.__PVT__gnt_recv), 6U)))));
    vlSelfRef.__PVT__out_gnt_vec_dat_vc1[7U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc1_rx_hs.__PVT__gnt_recv), 7U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc1_rx_hs.__PVT__gnt_recv), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc1_rx_hs.__PVT__gnt_recv), 7U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc1_rx_hs.__PVT__gnt_recv), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_rx_hs.__PVT__gnt_recv), 7U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc1_rx_hs.__PVT__gnt_recv), 7U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_rx_hs.__PVT__gnt_recv), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc1_rx_hs.__PVT__gnt_recv), 7U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc1_rx_hs.__PVT__gnt_recv), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_rx_hs.__PVT__gnt_recv), 7U)))));
    vlSelfRef.__PVT__out_gnt_vec_dat_vc1[8U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc1_rx_hs.__PVT__gnt_recv), 8U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc1_rx_hs.__PVT__gnt_recv), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc1_rx_hs.__PVT__gnt_recv), 8U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc1_rx_hs.__PVT__gnt_recv), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_rx_hs.__PVT__gnt_recv), 8U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc1_rx_hs.__PVT__gnt_recv), 8U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_rx_hs.__PVT__gnt_recv), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc1_rx_hs.__PVT__gnt_recv), 8U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc1_rx_hs.__PVT__gnt_recv), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_rx_hs.__PVT__gnt_recv), 8U)))));
    vlSelfRef.__PVT__out_gnt_vec_dat_vc1[9U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc1_rx_hs.__PVT__gnt_recv), 9U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc1_rx_hs.__PVT__gnt_recv), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc1_rx_hs.__PVT__gnt_recv), 9U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc1_rx_hs.__PVT__gnt_recv), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_rx_hs.__PVT__gnt_recv), 9U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc1_rx_hs.__PVT__gnt_recv), 9U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_rx_hs.__PVT__gnt_recv), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc1_rx_hs.__PVT__gnt_recv), 9U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc1_rx_hs.__PVT__gnt_recv), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_rx_hs.__PVT__gnt_recv), 9U)))));
    vlSelfRef.__PVT__out_gnt_vec_dat_vc0[0U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc0_rx_hs.__PVT__gnt_recv), 0U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc0_rx_hs.__PVT__gnt_recv), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc0_rx_hs.__PVT__gnt_recv), 0U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc0_rx_hs.__PVT__gnt_recv), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_rx_hs.__PVT__gnt_recv), 0U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc0_rx_hs.__PVT__gnt_recv), 0U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_rx_hs.__PVT__gnt_recv), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc0_rx_hs.__PVT__gnt_recv), 0U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc0_rx_hs.__PVT__gnt_recv), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_rx_hs.__PVT__gnt_recv), 0U)))));
    vlSelfRef.__PVT__out_gnt_vec_dat_vc0[1U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc0_rx_hs.__PVT__gnt_recv), 1U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc0_rx_hs.__PVT__gnt_recv), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc0_rx_hs.__PVT__gnt_recv), 1U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc0_rx_hs.__PVT__gnt_recv), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_rx_hs.__PVT__gnt_recv), 1U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc0_rx_hs.__PVT__gnt_recv), 1U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_rx_hs.__PVT__gnt_recv), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc0_rx_hs.__PVT__gnt_recv), 1U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc0_rx_hs.__PVT__gnt_recv), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_rx_hs.__PVT__gnt_recv), 1U)))));
    vlSelfRef.__PVT__out_gnt_vec_dat_vc0[2U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc0_rx_hs.__PVT__gnt_recv), 2U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc0_rx_hs.__PVT__gnt_recv), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc0_rx_hs.__PVT__gnt_recv), 2U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc0_rx_hs.__PVT__gnt_recv), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_rx_hs.__PVT__gnt_recv), 2U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc0_rx_hs.__PVT__gnt_recv), 2U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_rx_hs.__PVT__gnt_recv), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc0_rx_hs.__PVT__gnt_recv), 2U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc0_rx_hs.__PVT__gnt_recv), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_rx_hs.__PVT__gnt_recv), 2U)))));
    vlSelfRef.__PVT__out_gnt_vec_dat_vc0[3U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc0_rx_hs.__PVT__gnt_recv), 3U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc0_rx_hs.__PVT__gnt_recv), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc0_rx_hs.__PVT__gnt_recv), 3U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc0_rx_hs.__PVT__gnt_recv), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_rx_hs.__PVT__gnt_recv), 3U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc0_rx_hs.__PVT__gnt_recv), 3U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_rx_hs.__PVT__gnt_recv), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc0_rx_hs.__PVT__gnt_recv), 3U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc0_rx_hs.__PVT__gnt_recv), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_rx_hs.__PVT__gnt_recv), 3U)))));
    vlSelfRef.__PVT__out_gnt_vec_dat_vc0[4U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc0_rx_hs.__PVT__gnt_recv), 4U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc0_rx_hs.__PVT__gnt_recv), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc0_rx_hs.__PVT__gnt_recv), 4U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc0_rx_hs.__PVT__gnt_recv), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_rx_hs.__PVT__gnt_recv), 4U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc0_rx_hs.__PVT__gnt_recv), 4U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_rx_hs.__PVT__gnt_recv), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc0_rx_hs.__PVT__gnt_recv), 4U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc0_rx_hs.__PVT__gnt_recv), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_rx_hs.__PVT__gnt_recv), 4U)))));
    vlSelfRef.__PVT__out_gnt_vec_dat_vc0[5U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc0_rx_hs.__PVT__gnt_recv), 5U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc0_rx_hs.__PVT__gnt_recv), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc0_rx_hs.__PVT__gnt_recv), 5U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc0_rx_hs.__PVT__gnt_recv), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_rx_hs.__PVT__gnt_recv), 5U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc0_rx_hs.__PVT__gnt_recv), 5U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_rx_hs.__PVT__gnt_recv), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc0_rx_hs.__PVT__gnt_recv), 5U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc0_rx_hs.__PVT__gnt_recv), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_rx_hs.__PVT__gnt_recv), 5U)))));
    vlSelfRef.__PVT__out_gnt_vec_dat_vc0[6U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc0_rx_hs.__PVT__gnt_recv), 6U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc0_rx_hs.__PVT__gnt_recv), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc0_rx_hs.__PVT__gnt_recv), 6U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc0_rx_hs.__PVT__gnt_recv), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_rx_hs.__PVT__gnt_recv), 6U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc0_rx_hs.__PVT__gnt_recv), 6U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_rx_hs.__PVT__gnt_recv), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc0_rx_hs.__PVT__gnt_recv), 6U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc0_rx_hs.__PVT__gnt_recv), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_rx_hs.__PVT__gnt_recv), 6U)))));
    vlSelfRef.__PVT__out_gnt_vec_dat_vc0[7U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc0_rx_hs.__PVT__gnt_recv), 7U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc0_rx_hs.__PVT__gnt_recv), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc0_rx_hs.__PVT__gnt_recv), 7U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc0_rx_hs.__PVT__gnt_recv), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_rx_hs.__PVT__gnt_recv), 7U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc0_rx_hs.__PVT__gnt_recv), 7U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_rx_hs.__PVT__gnt_recv), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc0_rx_hs.__PVT__gnt_recv), 7U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc0_rx_hs.__PVT__gnt_recv), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_rx_hs.__PVT__gnt_recv), 7U)))));
    vlSelfRef.__PVT__out_gnt_vec_dat_vc0[8U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc0_rx_hs.__PVT__gnt_recv), 8U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc0_rx_hs.__PVT__gnt_recv), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc0_rx_hs.__PVT__gnt_recv), 8U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc0_rx_hs.__PVT__gnt_recv), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_rx_hs.__PVT__gnt_recv), 8U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc0_rx_hs.__PVT__gnt_recv), 8U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_rx_hs.__PVT__gnt_recv), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc0_rx_hs.__PVT__gnt_recv), 8U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc0_rx_hs.__PVT__gnt_recv), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_rx_hs.__PVT__gnt_recv), 8U)))));
    vlSelfRef.__PVT__out_gnt_vec_dat_vc0[9U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc0_rx_hs.__PVT__gnt_recv), 9U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc0_rx_hs.__PVT__gnt_recv), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc0_rx_hs.__PVT__gnt_recv), 9U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc0_rx_hs.__PVT__gnt_recv), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_rx_hs.__PVT__gnt_recv), 9U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc0_rx_hs.__PVT__gnt_recv), 9U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_rx_hs.__PVT__gnt_recv), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc0_rx_hs.__PVT__gnt_recv), 9U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc0_rx_hs.__PVT__gnt_recv), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_rx_hs.__PVT__gnt_recv), 9U)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc1_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,3,7, (7U & VL_SEL_IIII(10, 
                                                         vlSelfRef.__PVT__out_gnt_vec_dat_vc1
                                                         [6U], 7U, 3)), 
                               VL_EXTEND_II(7,6, (0x3fU 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_dat_vc1
                                                                [6U], 0U, 6)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc1_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,2,8, (3U & VL_SEL_IIII(10, 
                                                         vlSelfRef.__PVT__out_gnt_vec_dat_vc1
                                                         [7U], 8U, 2)), 
                               VL_EXTEND_II(8,7, (0x7fU 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_dat_vc1
                                                                [7U], 0U, 7)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc1_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,1,9, (1U & VL_BITSEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_gnt_vec_dat_vc1
                                                            [8U], 9U)), 
                               VL_EXTEND_II(9,8, (0xffU 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_dat_vc1
                                                                [8U], 0U, 8)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc1_tx_hs.__PVT__send_gnt 
        = (0U != (0x1ffU & VL_SEL_IIII(10, vlSelfRef.__PVT__out_gnt_vec_dat_vc1
                                       [9U], 0U, 9)));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc1_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,7,3, (0x7fU & VL_SEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_gnt_vec_dat_vc1
                                                            [2U], 3U, 7)), 
                               VL_EXTEND_II(3,2, (3U 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_dat_vc1
                                                                [2U], 0U, 2)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,6,4, (0x3fU & VL_SEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_gnt_vec_dat_vc1
                                                            [3U], 4U, 6)), 
                               VL_EXTEND_II(4,3, (7U 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_dat_vc1
                                                                [3U], 0U, 3)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc1_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,8,2, (0xffU & VL_SEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_gnt_vec_dat_vc1
                                                            [1U], 2U, 8)), 
                               VL_EXTEND_II(2,1, (1U 
                                                  & VL_BITSEL_IIII(10, 
                                                                   vlSelfRef.__PVT__out_gnt_vec_dat_vc1
                                                                   [1U], 0U)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,9,1, (0x1ffU & VL_SEL_IIII(10, 
                                                             vlSelfRef.__PVT__out_gnt_vec_dat_vc1
                                                             [0U], 1U, 9)), 0U));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc1_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,5,5, (0x1fU & VL_SEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_gnt_vec_dat_vc1
                                                            [4U], 5U, 5)), 
                               VL_EXTEND_II(5,4, (0xfU 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_dat_vc1
                                                                [4U], 0U, 4)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,4,6, (0xfU & VL_SEL_IIII(10, 
                                                           vlSelfRef.__PVT__out_gnt_vec_dat_vc1
                                                           [5U], 6U, 4)), 
                               VL_EXTEND_II(6,5, (0x1fU 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_dat_vc1
                                                                [5U], 0U, 5)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc0_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,3,7, (7U & VL_SEL_IIII(10, 
                                                         vlSelfRef.__PVT__out_gnt_vec_dat_vc0
                                                         [6U], 7U, 3)), 
                               VL_EXTEND_II(7,6, (0x3fU 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_dat_vc0
                                                                [6U], 0U, 6)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc0_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,2,8, (3U & VL_SEL_IIII(10, 
                                                         vlSelfRef.__PVT__out_gnt_vec_dat_vc0
                                                         [7U], 8U, 2)), 
                               VL_EXTEND_II(8,7, (0x7fU 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_dat_vc0
                                                                [7U], 0U, 7)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc0_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,1,9, (1U & VL_BITSEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_gnt_vec_dat_vc0
                                                            [8U], 9U)), 
                               VL_EXTEND_II(9,8, (0xffU 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_dat_vc0
                                                                [8U], 0U, 8)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc0_tx_hs.__PVT__send_gnt 
        = (0U != (0x1ffU & VL_SEL_IIII(10, vlSelfRef.__PVT__out_gnt_vec_dat_vc0
                                       [9U], 0U, 9)));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc0_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,7,3, (0x7fU & VL_SEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_gnt_vec_dat_vc0
                                                            [2U], 3U, 7)), 
                               VL_EXTEND_II(3,2, (3U 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_dat_vc0
                                                                [2U], 0U, 2)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,6,4, (0x3fU & VL_SEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_gnt_vec_dat_vc0
                                                            [3U], 4U, 6)), 
                               VL_EXTEND_II(4,3, (7U 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_dat_vc0
                                                                [3U], 0U, 3)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc0_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,8,2, (0xffU & VL_SEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_gnt_vec_dat_vc0
                                                            [1U], 2U, 8)), 
                               VL_EXTEND_II(2,1, (1U 
                                                  & VL_BITSEL_IIII(10, 
                                                                   vlSelfRef.__PVT__out_gnt_vec_dat_vc0
                                                                   [1U], 0U)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,9,1, (0x1ffU & VL_SEL_IIII(10, 
                                                             vlSelfRef.__PVT__out_gnt_vec_dat_vc0
                                                             [0U], 1U, 9)), 0U));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc0_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,5,5, (0x1fU & VL_SEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_gnt_vec_dat_vc0
                                                            [4U], 5U, 5)), 
                               VL_EXTEND_II(5,4, (0xfU 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_dat_vc0
                                                                [4U], 0U, 4)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,4,6, (0xfU & VL_SEL_IIII(10, 
                                                           vlSelfRef.__PVT__out_gnt_vec_dat_vc0
                                                           [5U], 6U, 4)), 
                               VL_EXTEND_II(6,5, (0x1fU 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_dat_vc0
                                                                [5U], 0U, 5)))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__15(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__15\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(686,vlSelfRef.__PVT__cc_out_flit_datf_vc1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__flit_out_datf_vc1);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__cc_out_flit_datf_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__flit_out_datf_vc0);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__16(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__16\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cc_RX_DATLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__ic_RX_DATLCRDV_VC0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__ic_TX_DATLCRDV 
        = vlSelfRef.__PVT__cc_RX_DATLCRDV;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__17(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__17\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__out_gnt_vec_rsp_vc1[0U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 0U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 0U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 0U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 0U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 0U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 0U)))));
    vlSelfRef.__PVT__out_gnt_vec_rsp_vc1[1U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 1U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 1U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 1U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 1U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 1U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 1U)))));
    vlSelfRef.__PVT__out_gnt_vec_rsp_vc1[2U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 2U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 2U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 2U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 2U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 2U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 2U)))));
    vlSelfRef.__PVT__out_gnt_vec_rsp_vc1[3U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 3U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 3U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 3U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 3U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 3U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 3U)))));
    vlSelfRef.__PVT__out_gnt_vec_rsp_vc1[4U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 4U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 4U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 4U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 4U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 4U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 4U)))));
    vlSelfRef.__PVT__out_gnt_vec_rsp_vc1[5U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 5U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 5U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 5U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 5U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 5U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 5U)))));
    vlSelfRef.__PVT__out_gnt_vec_rsp_vc1[6U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 6U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 6U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 6U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 6U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 6U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 6U)))));
    vlSelfRef.__PVT__out_gnt_vec_rsp_vc1[7U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 7U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 7U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 7U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 7U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 7U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 7U)))));
    vlSelfRef.__PVT__out_gnt_vec_rsp_vc1[8U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 8U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 8U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 8U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 8U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 8U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 8U)))));
    vlSelfRef.__PVT__out_gnt_vec_rsp_vc1[9U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 9U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 9U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 9U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 9U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 9U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_rx_hs.__PVT__gnt_recv), 9U)))));
    vlSelfRef.__PVT__out_gnt_vec_rsp_vc0[0U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 0U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 0U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 0U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 0U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 0U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 0U)))));
    vlSelfRef.__PVT__out_gnt_vec_rsp_vc0[1U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 1U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 1U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 1U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 1U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 1U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 1U)))));
    vlSelfRef.__PVT__out_gnt_vec_rsp_vc0[2U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 2U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 2U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 2U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 2U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 2U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 2U)))));
    vlSelfRef.__PVT__out_gnt_vec_rsp_vc0[3U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 3U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 3U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 3U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 3U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 3U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 3U)))));
    vlSelfRef.__PVT__out_gnt_vec_rsp_vc0[4U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 4U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 4U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 4U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 4U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 4U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 4U)))));
    vlSelfRef.__PVT__out_gnt_vec_rsp_vc0[5U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 5U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 5U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 5U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 5U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 5U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 5U)))));
    vlSelfRef.__PVT__out_gnt_vec_rsp_vc0[6U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 6U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 6U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 6U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 6U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 6U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 6U)))));
    vlSelfRef.__PVT__out_gnt_vec_rsp_vc0[7U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 7U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 7U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 7U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 7U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 7U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 7U)))));
    vlSelfRef.__PVT__out_gnt_vec_rsp_vc0[8U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 8U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 8U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 8U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 8U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 8U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 8U)))));
    vlSelfRef.__PVT__out_gnt_vec_rsp_vc0[9U] = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 9U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 9U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 9U)))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 9U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 9U)))), 
                                                                           VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_rx_hs.__PVT__gnt_recv), 9U)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc1_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,8,2, (0xffU & VL_SEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_gnt_vec_rsp_vc1
                                                            [1U], 2U, 8)), 
                               VL_EXTEND_II(2,1, (1U 
                                                  & VL_BITSEL_IIII(10, 
                                                                   vlSelfRef.__PVT__out_gnt_vec_rsp_vc1
                                                                   [1U], 0U)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc1_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,3,7, (7U & VL_SEL_IIII(10, 
                                                         vlSelfRef.__PVT__out_gnt_vec_rsp_vc1
                                                         [6U], 7U, 3)), 
                               VL_EXTEND_II(7,6, (0x3fU 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_rsp_vc1
                                                                [6U], 0U, 6)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc1_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,2,8, (3U & VL_SEL_IIII(10, 
                                                         vlSelfRef.__PVT__out_gnt_vec_rsp_vc1
                                                         [7U], 8U, 2)), 
                               VL_EXTEND_II(8,7, (0x7fU 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_rsp_vc1
                                                                [7U], 0U, 7)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc1_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,1,9, (1U & VL_BITSEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_gnt_vec_rsp_vc1
                                                            [8U], 9U)), 
                               VL_EXTEND_II(9,8, (0xffU 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_rsp_vc1
                                                                [8U], 0U, 8)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc1_tx_hs.__PVT__send_gnt 
        = (0U != (0x1ffU & VL_SEL_IIII(10, vlSelfRef.__PVT__out_gnt_vec_rsp_vc1
                                       [9U], 0U, 9)));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,9,1, (0x1ffU & VL_SEL_IIII(10, 
                                                             vlSelfRef.__PVT__out_gnt_vec_rsp_vc1
                                                             [0U], 1U, 9)), 0U));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc1_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,7,3, (0x7fU & VL_SEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_gnt_vec_rsp_vc1
                                                            [2U], 3U, 7)), 
                               VL_EXTEND_II(3,2, (3U 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_rsp_vc1
                                                                [2U], 0U, 2)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,6,4, (0x3fU & VL_SEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_gnt_vec_rsp_vc1
                                                            [3U], 4U, 6)), 
                               VL_EXTEND_II(4,3, (7U 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_rsp_vc1
                                                                [3U], 0U, 3)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc1_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,5,5, (0x1fU & VL_SEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_gnt_vec_rsp_vc1
                                                            [4U], 5U, 5)), 
                               VL_EXTEND_II(5,4, (0xfU 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_rsp_vc1
                                                                [4U], 0U, 4)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,4,6, (0xfU & VL_SEL_IIII(10, 
                                                           vlSelfRef.__PVT__out_gnt_vec_rsp_vc1
                                                           [5U], 6U, 4)), 
                               VL_EXTEND_II(6,5, (0x1fU 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_rsp_vc1
                                                                [5U], 0U, 5)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc0_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,8,2, (0xffU & VL_SEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_gnt_vec_rsp_vc0
                                                            [1U], 2U, 8)), 
                               VL_EXTEND_II(2,1, (1U 
                                                  & VL_BITSEL_IIII(10, 
                                                                   vlSelfRef.__PVT__out_gnt_vec_rsp_vc0
                                                                   [1U], 0U)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc0_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,3,7, (7U & VL_SEL_IIII(10, 
                                                         vlSelfRef.__PVT__out_gnt_vec_rsp_vc0
                                                         [6U], 7U, 3)), 
                               VL_EXTEND_II(7,6, (0x3fU 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_rsp_vc0
                                                                [6U], 0U, 6)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc0_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,2,8, (3U & VL_SEL_IIII(10, 
                                                         vlSelfRef.__PVT__out_gnt_vec_rsp_vc0
                                                         [7U], 8U, 2)), 
                               VL_EXTEND_II(8,7, (0x7fU 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_rsp_vc0
                                                                [7U], 0U, 7)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc0_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,1,9, (1U & VL_BITSEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_gnt_vec_rsp_vc0
                                                            [8U], 9U)), 
                               VL_EXTEND_II(9,8, (0xffU 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_rsp_vc0
                                                                [8U], 0U, 8)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc0_tx_hs.__PVT__send_gnt 
        = (0U != (0x1ffU & VL_SEL_IIII(10, vlSelfRef.__PVT__out_gnt_vec_rsp_vc0
                                       [9U], 0U, 9)));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,9,1, (0x1ffU & VL_SEL_IIII(10, 
                                                             vlSelfRef.__PVT__out_gnt_vec_rsp_vc0
                                                             [0U], 1U, 9)), 0U));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc0_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,7,3, (0x7fU & VL_SEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_gnt_vec_rsp_vc0
                                                            [2U], 3U, 7)), 
                               VL_EXTEND_II(3,2, (3U 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_rsp_vc0
                                                                [2U], 0U, 2)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,6,4, (0x3fU & VL_SEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_gnt_vec_rsp_vc0
                                                            [3U], 4U, 6)), 
                               VL_EXTEND_II(4,3, (7U 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_rsp_vc0
                                                                [3U], 0U, 3)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc0_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,5,5, (0x1fU & VL_SEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_gnt_vec_rsp_vc0
                                                            [4U], 5U, 5)), 
                               VL_EXTEND_II(5,4, (0xfU 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_rsp_vc0
                                                                [4U], 0U, 4)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_tx_hs.__PVT__send_gnt 
        = (0U != VL_CONCAT_III(10,4,6, (0xfU & VL_SEL_IIII(10, 
                                                           vlSelfRef.__PVT__out_gnt_vec_rsp_vc0
                                                           [5U], 6U, 4)), 
                               VL_EXTEND_II(6,5, (0x1fU 
                                                  & VL_SEL_IIII(10, 
                                                                vlSelfRef.__PVT__out_gnt_vec_rsp_vc0
                                                                [5U], 0U, 5)))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__18(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__18\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cc_RX_RSPLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__ic_RX_RSPLCRDV_VC0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__ic_TX_RSPLCRDV 
        = vlSelfRef.__PVT__cc_RX_RSPLCRDV;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__19(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__19\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__l3_wrdata_valid = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__l3_wrdata_valid;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__l3_wrdata_valid 
        = vlSelfRef.__PVT__l3_wrdata_valid;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__20(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__20\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cc_RX_DATFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__ic_TX_DATFLITPEND;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__ic_RX_DATFLITPEND 
        = vlSelfRef.__PVT__cc_RX_DATFLITPEND;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__21(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__21\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__PVT__l3_rspvalid = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__l3_rspvalid;
    vlSelfRef.__PVT__L3_TX_REQFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__L3_TX_REQFLITV;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__l3_rspflit, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__l3_rspflit);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__L3_TX_DATFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__L3_TX_DATFLIT);
    VL_ASSIGN_W(152,vlSelfRef.__Vcellout__sig_L3top_bypass_0__L3_TX_REQFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__L3_TX_REQFLIT);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__l3_rspvalid 
        = vlSelfRef.__PVT__l3_rspvalid;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__ic_RX_SNPFLITV 
        = vlSelfRef.__PVT__L3_TX_REQFLITV;
    VL_ASSIGN_W(73,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__l3_rspflit, vlSelfRef.__PVT__l3_rspflit);
    VL_ASSIGN_W(680,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__ic_RX_DATFLIT, vlSelfRef.__PVT__L3_TX_DATFLIT);
    vlSelfRef.__PVT__L3_TX_REQFLIT_snp_or_req_bit = 
        (1U & VL_BITSEL_IWII(152, vlSelfRef.__Vcellout__sig_L3top_bypass_0__L3_TX_REQFLIT, 0x97U));
    VL_CONST_W_5X(160,__Vtemp_1,0x007fffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(151, 152, __Vtemp_2, vlSelfRef.__Vcellout__sig_L3top_bypass_0__L3_TX_REQFLIT, 0U, 151);
    VL_AND_W(5, vlSelfRef.__PVT__L3_TX_REQFLIT, __Vtemp_1, __Vtemp_2);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__ic_RX_SNPFLIT_snp_or_req_bit 
        = vlSelfRef.__PVT__L3_TX_REQFLIT_snp_or_req_bit;
    VL_ASSIGN_W(151,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__ic_RX_SNPFLIT, vlSelfRef.__PVT__L3_TX_REQFLIT);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__22(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__22\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__porthas_rspgnt_fromcc = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__porthas_rspgnt_fromcc;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__porthas_rspgnt 
        = vlSelfRef.__PVT__porthas_rspgnt_fromcc;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__23(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__23\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cc_TX_RSPFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__ic_TX_RSPFLITV;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__cc_TX_RSPFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__ic_TX_RSPFLIT);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__ic_RX_RSPFLITV 
        = vlSelfRef.__PVT__cc_TX_RSPFLITV;
    VL_ASSIGN_W(73,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__ic_RX_RSPFLIT, vlSelfRef.__PVT__cc_TX_RSPFLIT);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__24(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__24\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p0_rx_activate_clk = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__rx_activate_clk;
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__activate_pp_rx, vlSelfRef.__PVT__p0_rx_activate_clk);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__25(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__25\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__sig_node_porttop_sn_p0__o_timeout_interrupt 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__o_timeout_interrupt;
    vlSelfRef.__Vcellout__sig_node_porttop_sn_p0__o_timeout_recovery_successful 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__o_timeout_recovery_successful;
    vlSelfRef.__PVT__p0_tx_is_inactive = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__tx_is_inactive;
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__node_port_timeout_interrupt_vec, vlSelfRef.__Vcellout__sig_node_porttop_sn_p0__o_timeout_interrupt);
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__node_port_timeout_recovery_successful_vec, vlSelfRef.__Vcellout__sig_node_porttop_sn_p0__o_timeout_recovery_successful);
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__pp_tx_is_inactive, vlSelfRef.__PVT__p0_tx_is_inactive);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__26(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__26\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p0_ic_TXSACTIVE = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__ic_TXSACTIVE;
    vlSelfRef.__PVT__p0_TX_LINKACTIVEREQ = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__ic_TX_LINKACTIVEREQ;
    vlSelfRef.__PVT__p0_RX_LINKACTIVEACK = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__ic_RX_LINKACTIVEACK;
    vlSelfRef.__PVT__p0_TX_REQFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__ic_TX_REQFLITPEND;
    vlSelfRef.__PVT__p0_TX_REQFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__ic_TX_REQFLITV;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__p0_TX_REQFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__ic_TX_REQFLIT);
    vlSelfRef.__PVT__p0_TX_DATFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__ic_TX_DATFLITPEND;
    vlSelfRef.__PVT__p0_TX_DATFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__ic_TX_DATFLITV;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__p0_TX_DATFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__ic_TX_DATFLIT);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__27(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__27\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p1_rx_activate_clk = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__rx_activate_clk;
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__activate_pp_rx, vlSelfRef.__PVT__p1_rx_activate_clk);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__28(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__28\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__sig_node_porttop_sn_p1__o_timeout_interrupt 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__o_timeout_interrupt;
    vlSelfRef.__Vcellout__sig_node_porttop_sn_p1__o_timeout_recovery_successful 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__o_timeout_recovery_successful;
    vlSelfRef.__PVT__p1_tx_is_inactive = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__tx_is_inactive;
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__node_port_timeout_interrupt_vec, vlSelfRef.__Vcellout__sig_node_porttop_sn_p1__o_timeout_interrupt);
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__node_port_timeout_recovery_successful_vec, vlSelfRef.__Vcellout__sig_node_porttop_sn_p1__o_timeout_recovery_successful);
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__pp_tx_is_inactive, vlSelfRef.__PVT__p1_tx_is_inactive);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__29(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__29\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p1_ic_TXSACTIVE = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__ic_TXSACTIVE;
    vlSelfRef.__PVT__p1_TX_LINKACTIVEREQ = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__ic_TX_LINKACTIVEREQ;
    vlSelfRef.__PVT__p1_RX_LINKACTIVEACK = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__ic_RX_LINKACTIVEACK;
    vlSelfRef.__PVT__p1_TX_REQFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__ic_TX_REQFLITPEND;
    vlSelfRef.__PVT__p1_TX_REQFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__ic_TX_REQFLITV;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__p1_TX_REQFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__ic_TX_REQFLIT);
    vlSelfRef.__PVT__p1_TX_DATFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__ic_TX_DATFLITPEND;
    vlSelfRef.__PVT__p1_TX_DATFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__ic_TX_DATFLITV;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__p1_TX_DATFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__ic_TX_DATFLIT);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__30(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__30\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p3_rx_activate_clk = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__rx_activate_clk;
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__activate_pp_rx, vlSelfRef.__PVT__p3_rx_activate_clk);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__31(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__31\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__sig_node_porttop_rn_p3__o_timeout_interrupt 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__o_timeout_interrupt;
    vlSelfRef.__Vcellout__sig_node_porttop_rn_p3__o_timeout_recovery_successful 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__o_timeout_recovery_successful;
    vlSelfRef.__PVT__p3_tx_is_inactive = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__tx_is_inactive;
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__node_port_timeout_interrupt_vec, vlSelfRef.__Vcellout__sig_node_porttop_rn_p3__o_timeout_interrupt);
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__node_port_timeout_recovery_successful_vec, vlSelfRef.__Vcellout__sig_node_porttop_rn_p3__o_timeout_recovery_successful);
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__pp_tx_is_inactive, vlSelfRef.__PVT__p3_tx_is_inactive);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__32(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__32\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p3_TX_LINKACTIVEREQ = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__ic_TX_LINKACTIVEREQ;
    vlSelfRef.__PVT__p3_RX_LINKACTIVEACK = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__ic_RX_LINKACTIVEACK;
    vlSelfRef.__PVT__p3_ic_TXSACTIVE = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__ic_TXSACTIVE;
    vlSelfRef.__PVT__p3_TX_DATFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__ic_TX_DATFLITPEND;
    vlSelfRef.__PVT__p3_TX_DATFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__ic_TX_DATFLITV;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__p3_TX_DATFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__ic_TX_DATFLIT);
    vlSelfRef.__PVT__p3_TX_RSPFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__ic_TX_RSPFLITPEND;
    vlSelfRef.__PVT__p3_TX_RSPFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__ic_TX_RSPFLITV;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__p3_TX_RSPFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__ic_TX_RSPFLIT);
    vlSelfRef.__PVT__p3_TX_SNPFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__ic_TX_SNPFLITPEND;
    vlSelfRef.__PVT__p3_TX_SNPFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__ic_TX_SNPFLITV;
    VL_ASSIGN_W(108,vlSelfRef.__PVT__p3_TX_SNPFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__ic_TX_SNPFLIT);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__33(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__33\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p2_rx_activate_clk = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__rx_activate_clk;
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__activate_pp_rx, vlSelfRef.__PVT__p2_rx_activate_clk);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__34(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__34\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__sig_node_porttop_rn_p2__o_timeout_interrupt 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__o_timeout_interrupt;
    vlSelfRef.__Vcellout__sig_node_porttop_rn_p2__o_timeout_recovery_successful 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__o_timeout_recovery_successful;
    vlSelfRef.__PVT__p2_tx_is_inactive = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__tx_is_inactive;
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__node_port_timeout_interrupt_vec, vlSelfRef.__Vcellout__sig_node_porttop_rn_p2__o_timeout_interrupt);
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__node_port_timeout_recovery_successful_vec, vlSelfRef.__Vcellout__sig_node_porttop_rn_p2__o_timeout_recovery_successful);
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__pp_tx_is_inactive, vlSelfRef.__PVT__p2_tx_is_inactive);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__35(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__35\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p2_TX_LINKACTIVEREQ = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__ic_TX_LINKACTIVEREQ;
    vlSelfRef.__PVT__p2_RX_LINKACTIVEACK = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__ic_RX_LINKACTIVEACK;
    vlSelfRef.__PVT__p2_ic_TXSACTIVE = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__ic_TXSACTIVE;
    vlSelfRef.__PVT__p2_TX_DATFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__ic_TX_DATFLITPEND;
    vlSelfRef.__PVT__p2_TX_DATFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__ic_TX_DATFLITV;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__p2_TX_DATFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__ic_TX_DATFLIT);
    vlSelfRef.__PVT__p2_TX_RSPFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__ic_TX_RSPFLITPEND;
    vlSelfRef.__PVT__p2_TX_RSPFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__ic_TX_RSPFLITV;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__p2_TX_RSPFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__ic_TX_RSPFLIT);
    vlSelfRef.__PVT__p2_TX_SNPFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__ic_TX_SNPFLITPEND;
    vlSelfRef.__PVT__p2_TX_SNPFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__ic_TX_SNPFLITV;
    VL_ASSIGN_W(108,vlSelfRef.__PVT__p2_TX_SNPFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__ic_TX_SNPFLIT);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__36(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__36\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cc_port_is_inactive = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__ctrlr_port_or_ic_rx_is_inactive;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__37(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__37\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(686,vlSelfRef.__PVT__l3_out_flit_datf_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__flit_out_datf_vc0);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__l3_out_flit_datf_vc1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__flit_out_datf_vc1);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__38(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__38\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__L3_TX_DATLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__ic_RX_DATLCRDV_VC0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__L3_TX_DATLCRDV 
        = vlSelfRef.__PVT__L3_TX_DATLCRDV;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__39(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__39\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cc_reqflit_valid = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__cc_reqflit_valid;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__cc_reqflit_valid 
        = vlSelfRef.__PVT__cc_reqflit_valid;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__40(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__40\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cc_RX_SNPFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__ic_TX_SNPFLITPEND;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__ic_RX_SNPFLITPEND 
        = vlSelfRef.__PVT__cc_RX_SNPFLITPEND;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__41(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__41\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__out_valid_flit_reqf_vc1 = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc1_tx_hs.__PVT__vld_send), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc1_tx_hs.__PVT__vld_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc1_tx_hs.__PVT__vld_send))), 
                                                                           VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc1_tx_hs.__PVT__vld_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc1_tx_hs.__PVT__vld_send))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc1_tx_hs.__PVT__vld_send), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc1_tx_hs.__PVT__vld_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc1_tx_hs.__PVT__vld_send))), 
                                                                           VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc1_tx_hs.__PVT__vld_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_tx_hs.__PVT__vld_send))));
    vlSelfRef.__PVT__out_end_flit_reqf_vc1 = VL_CONCAT_III(10,5,5, 
                                                           VL_CONCAT_III(5,3,2, 
                                                                         VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc1_tx_hs.__PVT__end_send), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc1_tx_hs.__PVT__end_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc1_tx_hs.__PVT__end_send))), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc1_tx_hs.__PVT__end_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc1_tx_hs.__PVT__end_send))), 
                                                           VL_CONCAT_III(5,3,2, 
                                                                         VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc1_tx_hs.__PVT__end_send), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc1_tx_hs.__PVT__end_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc1_tx_hs.__PVT__end_send))), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc1_tx_hs.__PVT__end_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_tx_hs.__PVT__end_send))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc1_rx_hs.__PVT__recv_vld 
        = VL_CONCAT_III(10,8,2, (0xffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_reqf_vc1), 2U, 8)), 
                        VL_EXTEND_II(2,1, (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_reqf_vc1), 0U))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc1_rx_hs.__PVT__recv_vld 
        = VL_CONCAT_III(10,3,7, (7U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_reqf_vc1), 7U, 3)), 
                        VL_EXTEND_II(7,6, (0x3fU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_reqf_vc1), 0U, 6))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc1_rx_hs.__PVT__recv_vld 
        = VL_CONCAT_III(10,2,8, (3U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_reqf_vc1), 8U, 2)), 
                        VL_EXTEND_II(8,7, (0x7fU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_reqf_vc1), 0U, 7))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc1_rx_hs.__PVT__recv_vld 
        = VL_CONCAT_III(10,1,9, (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_reqf_vc1), 9U)), 
                        VL_EXTEND_II(9,8, (0xffU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_reqf_vc1), 0U, 8))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc1_rx_hs.__PVT__recv_vld 
        = VL_EXTEND_II(10,9, (0x1ffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_reqf_vc1), 0U, 9)));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc1_rx_hs.__PVT__recv_vld 
        = VL_CONCAT_III(10,7,3, (0x7fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_reqf_vc1), 3U, 7)), 
                        VL_EXTEND_II(3,2, (3U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_reqf_vc1), 0U, 2))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc1_rx_hs.__PVT__recv_vld 
        = VL_CONCAT_III(10,6,4, (0x3fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_reqf_vc1), 4U, 6)), 
                        VL_EXTEND_II(4,3, (7U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_reqf_vc1), 0U, 3))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc1_rx_hs.__PVT__recv_vld 
        = VL_CONCAT_III(10,5,5, (0x1fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_reqf_vc1), 5U, 5)), 
                        VL_EXTEND_II(5,4, (0xfU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_reqf_vc1), 0U, 4))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc1_rx_hs.__PVT__recv_vld 
        = VL_CONCAT_III(10,4,6, (0xfU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_reqf_vc1), 6U, 4)), 
                        VL_EXTEND_II(6,5, (0x1fU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_reqf_vc1), 0U, 5))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_rx_hs.__PVT__recv_vld 
        = VL_CONCAT_III(10,9,1, (0x1ffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_reqf_vc1), 1U, 9)), 0U);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc1_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,8,2, (0xffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_reqf_vc1), 2U, 8)), 
                        VL_EXTEND_II(2,1, (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_reqf_vc1), 0U))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc1_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,3,7, (7U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_reqf_vc1), 7U, 3)), 
                        VL_EXTEND_II(7,6, (0x3fU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_reqf_vc1), 0U, 6))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc1_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,2,8, (3U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_reqf_vc1), 8U, 2)), 
                        VL_EXTEND_II(8,7, (0x7fU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_reqf_vc1), 0U, 7))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc1_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,1,9, (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_reqf_vc1), 9U)), 
                        VL_EXTEND_II(9,8, (0xffU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_reqf_vc1), 0U, 8))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc1_rx_hs.__PVT__recv_end 
        = VL_EXTEND_II(10,9, (0x1ffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_reqf_vc1), 0U, 9)));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc1_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,7,3, (0x7fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_reqf_vc1), 3U, 7)), 
                        VL_EXTEND_II(3,2, (3U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_reqf_vc1), 0U, 2))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc1_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,6,4, (0x3fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_reqf_vc1), 4U, 6)), 
                        VL_EXTEND_II(4,3, (7U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_reqf_vc1), 0U, 3))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc1_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,5,5, (0x1fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_reqf_vc1), 5U, 5)), 
                        VL_EXTEND_II(5,4, (0xfU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_reqf_vc1), 0U, 4))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc1_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,4,6, (0xfU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_reqf_vc1), 6U, 4)), 
                        VL_EXTEND_II(6,5, (0x1fU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_reqf_vc1), 0U, 5))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,9,1, (0x1ffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_reqf_vc1), 1U, 9)), 0U);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__42(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__42\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__L3_TX_REQLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__ic_RX_SNPLCRDV_VC0;
    vlSelfRef.__PVT__out_req_reqf_vc1[0U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc1_tx_hs.__PVT__req_send), 0U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc1_tx_hs.__PVT__req_send), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc1_tx_hs.__PVT__req_send), 0U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc1_tx_hs.__PVT__req_send), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc1_tx_hs.__PVT__req_send), 0U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc1_tx_hs.__PVT__req_send), 0U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc1_tx_hs.__PVT__req_send), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc1_tx_hs.__PVT__req_send), 0U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc1_tx_hs.__PVT__req_send), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_tx_hs.__PVT__req_send), 0U)))));
    vlSelfRef.__PVT__out_req_reqf_vc1[1U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc1_tx_hs.__PVT__req_send), 1U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc1_tx_hs.__PVT__req_send), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc1_tx_hs.__PVT__req_send), 1U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc1_tx_hs.__PVT__req_send), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc1_tx_hs.__PVT__req_send), 1U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc1_tx_hs.__PVT__req_send), 1U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc1_tx_hs.__PVT__req_send), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc1_tx_hs.__PVT__req_send), 1U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc1_tx_hs.__PVT__req_send), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_tx_hs.__PVT__req_send), 1U)))));
    vlSelfRef.__PVT__out_req_reqf_vc1[2U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc1_tx_hs.__PVT__req_send), 2U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc1_tx_hs.__PVT__req_send), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc1_tx_hs.__PVT__req_send), 2U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc1_tx_hs.__PVT__req_send), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc1_tx_hs.__PVT__req_send), 2U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc1_tx_hs.__PVT__req_send), 2U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc1_tx_hs.__PVT__req_send), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc1_tx_hs.__PVT__req_send), 2U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc1_tx_hs.__PVT__req_send), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_tx_hs.__PVT__req_send), 2U)))));
    vlSelfRef.__PVT__out_req_reqf_vc1[3U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc1_tx_hs.__PVT__req_send), 3U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc1_tx_hs.__PVT__req_send), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc1_tx_hs.__PVT__req_send), 3U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc1_tx_hs.__PVT__req_send), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc1_tx_hs.__PVT__req_send), 3U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc1_tx_hs.__PVT__req_send), 3U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc1_tx_hs.__PVT__req_send), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc1_tx_hs.__PVT__req_send), 3U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc1_tx_hs.__PVT__req_send), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_tx_hs.__PVT__req_send), 3U)))));
    vlSelfRef.__PVT__out_req_reqf_vc1[4U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc1_tx_hs.__PVT__req_send), 4U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc1_tx_hs.__PVT__req_send), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc1_tx_hs.__PVT__req_send), 4U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc1_tx_hs.__PVT__req_send), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc1_tx_hs.__PVT__req_send), 4U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc1_tx_hs.__PVT__req_send), 4U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc1_tx_hs.__PVT__req_send), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc1_tx_hs.__PVT__req_send), 4U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc1_tx_hs.__PVT__req_send), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_tx_hs.__PVT__req_send), 4U)))));
    vlSelfRef.__PVT__out_req_reqf_vc1[5U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc1_tx_hs.__PVT__req_send), 5U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc1_tx_hs.__PVT__req_send), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc1_tx_hs.__PVT__req_send), 5U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc1_tx_hs.__PVT__req_send), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc1_tx_hs.__PVT__req_send), 5U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc1_tx_hs.__PVT__req_send), 5U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc1_tx_hs.__PVT__req_send), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc1_tx_hs.__PVT__req_send), 5U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc1_tx_hs.__PVT__req_send), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_tx_hs.__PVT__req_send), 5U)))));
    vlSelfRef.__PVT__out_req_reqf_vc1[6U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc1_tx_hs.__PVT__req_send), 6U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc1_tx_hs.__PVT__req_send), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc1_tx_hs.__PVT__req_send), 6U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc1_tx_hs.__PVT__req_send), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc1_tx_hs.__PVT__req_send), 6U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc1_tx_hs.__PVT__req_send), 6U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc1_tx_hs.__PVT__req_send), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc1_tx_hs.__PVT__req_send), 6U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc1_tx_hs.__PVT__req_send), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_tx_hs.__PVT__req_send), 6U)))));
    vlSelfRef.__PVT__out_req_reqf_vc1[7U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc1_tx_hs.__PVT__req_send), 7U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc1_tx_hs.__PVT__req_send), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc1_tx_hs.__PVT__req_send), 7U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc1_tx_hs.__PVT__req_send), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc1_tx_hs.__PVT__req_send), 7U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc1_tx_hs.__PVT__req_send), 7U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc1_tx_hs.__PVT__req_send), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc1_tx_hs.__PVT__req_send), 7U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc1_tx_hs.__PVT__req_send), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_tx_hs.__PVT__req_send), 7U)))));
    vlSelfRef.__PVT__out_req_reqf_vc1[8U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc1_tx_hs.__PVT__req_send), 8U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc1_tx_hs.__PVT__req_send), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc1_tx_hs.__PVT__req_send), 8U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc1_tx_hs.__PVT__req_send), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc1_tx_hs.__PVT__req_send), 8U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc1_tx_hs.__PVT__req_send), 8U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc1_tx_hs.__PVT__req_send), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc1_tx_hs.__PVT__req_send), 8U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc1_tx_hs.__PVT__req_send), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_tx_hs.__PVT__req_send), 8U)))));
    vlSelfRef.__PVT__out_req_reqf_vc1[9U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc1_tx_hs.__PVT__req_send), 9U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc1_tx_hs.__PVT__req_send), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc1_tx_hs.__PVT__req_send), 9U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc1_tx_hs.__PVT__req_send), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc1_tx_hs.__PVT__req_send), 9U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc1_tx_hs.__PVT__req_send), 9U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc1_tx_hs.__PVT__req_send), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc1_tx_hs.__PVT__req_send), 9U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc1_tx_hs.__PVT__req_send), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_tx_hs.__PVT__req_send), 9U)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__L3_TX_REQLCRDV 
        = vlSelfRef.__PVT__L3_TX_REQLCRDV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc1_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,8,2, (0xffU & VL_SEL_IIII(10, 
                                                     vlSelfRef.__PVT__out_req_reqf_vc1
                                                     [1U], 2U, 8)), 
                        VL_EXTEND_II(2,1, (1U & VL_BITSEL_IIII(10, 
                                                               vlSelfRef.__PVT__out_req_reqf_vc1
                                                               [1U], 0U))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc1_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,3,7, (7U & VL_SEL_IIII(10, 
                                                  vlSelfRef.__PVT__out_req_reqf_vc1
                                                  [6U], 7U, 3)), 
                        VL_EXTEND_II(7,6, (0x3fU & 
                                           VL_SEL_IIII(10, 
                                                       vlSelfRef.__PVT__out_req_reqf_vc1
                                                       [6U], 0U, 6))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc1_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,2,8, (3U & VL_SEL_IIII(10, 
                                                  vlSelfRef.__PVT__out_req_reqf_vc1
                                                  [7U], 8U, 2)), 
                        VL_EXTEND_II(8,7, (0x7fU & 
                                           VL_SEL_IIII(10, 
                                                       vlSelfRef.__PVT__out_req_reqf_vc1
                                                       [7U], 0U, 7))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc1_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,1,9, (1U & VL_BITSEL_IIII(10, 
                                                     vlSelfRef.__PVT__out_req_reqf_vc1
                                                     [8U], 9U)), 
                        VL_EXTEND_II(9,8, (0xffU & 
                                           VL_SEL_IIII(10, 
                                                       vlSelfRef.__PVT__out_req_reqf_vc1
                                                       [8U], 0U, 8))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc1_rx_hs.__PVT__recv_req 
        = VL_EXTEND_II(10,9, (0x1ffU & VL_SEL_IIII(10, 
                                                   vlSelfRef.__PVT__out_req_reqf_vc1
                                                   [9U], 0U, 9)));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,9,1, (0x1ffU & VL_SEL_IIII(10, 
                                                      vlSelfRef.__PVT__out_req_reqf_vc1
                                                      [0U], 1U, 9)), 0U);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc1_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,7,3, (0x7fU & VL_SEL_IIII(10, 
                                                     vlSelfRef.__PVT__out_req_reqf_vc1
                                                     [2U], 3U, 7)), 
                        VL_EXTEND_II(3,2, (3U & VL_SEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_req_reqf_vc1
                                                            [2U], 0U, 2))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc1_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,6,4, (0x3fU & VL_SEL_IIII(10, 
                                                     vlSelfRef.__PVT__out_req_reqf_vc1
                                                     [3U], 4U, 6)), 
                        VL_EXTEND_II(4,3, (7U & VL_SEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_req_reqf_vc1
                                                            [3U], 0U, 3))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc1_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,5,5, (0x1fU & VL_SEL_IIII(10, 
                                                     vlSelfRef.__PVT__out_req_reqf_vc1
                                                     [4U], 5U, 5)), 
                        VL_EXTEND_II(5,4, (0xfU & VL_SEL_IIII(10, 
                                                              vlSelfRef.__PVT__out_req_reqf_vc1
                                                              [4U], 0U, 4))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc1_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,4,6, (0xfU & VL_SEL_IIII(10, 
                                                    vlSelfRef.__PVT__out_req_reqf_vc1
                                                    [5U], 6U, 4)), 
                        VL_EXTEND_II(6,5, (0x1fU & 
                                           VL_SEL_IIII(10, 
                                                       vlSelfRef.__PVT__out_req_reqf_vc1
                                                       [5U], 0U, 5))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__43(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__43\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__PVT__p0_out_flit_rspf_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__flit_out_rspf_vc0);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__p0_out_flit_rspf_vc1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__flit_out_rspf_vc1);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__p0_out_flit_datf_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__flit_out_datf_vc0);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__p0_out_flit_datf_vc1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__flit_out_datf_vc1);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__44(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__44\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__PVT__p1_out_flit_rspf_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__flit_out_rspf_vc0);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__p1_out_flit_rspf_vc1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__flit_out_rspf_vc1);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__p1_out_flit_datf_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__flit_out_datf_vc0);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__p1_out_flit_datf_vc1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__flit_out_datf_vc1);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__45(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__45\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0.__PVT__i_activate_pp_rx 
        = vlSelfRef.__PVT__activate_pp_rx;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__46(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__46\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr.__PVT__i_node_port_timeout_interrupt_vec 
        = vlSelfRef.__PVT__node_port_timeout_interrupt_vec;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr.__PVT__i_node_port_timeout_recovery_successful_vec 
        = vlSelfRef.__PVT__node_port_timeout_recovery_successful_vec;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0.__PVT__i_pp_tx_is_inactive 
        = vlSelfRef.__PVT__pp_tx_is_inactive;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__47(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__47\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__l3_port_is_inactive = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__ctrlr_port_or_ic_rx_is_inactive;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__48(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__48\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p0_rx_is_inactive = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__rx_is_inactive;
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__pp_rx_is_inactive, vlSelfRef.__PVT__p0_rx_is_inactive);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__49(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__49\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p1_rx_is_inactive = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__rx_is_inactive;
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__pp_rx_is_inactive, vlSelfRef.__PVT__p1_rx_is_inactive);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__50(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__50\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p3_rx_is_inactive = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__rx_is_inactive;
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__pp_rx_is_inactive, vlSelfRef.__PVT__p3_rx_is_inactive);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__51(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__51\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__out_end_flit_rspf_vc0 = VL_CONCAT_III(10,5,5, 
                                                           VL_CONCAT_III(5,3,2, 
                                                                         VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc0_tx_hs.__PVT__end_send), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc0_tx_hs.__PVT__end_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc0_tx_hs.__PVT__end_send))), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc0_tx_hs.__PVT__end_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_tx_hs.__PVT__end_send))), 
                                                           VL_CONCAT_III(5,3,2, 
                                                                         VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc0_tx_hs.__PVT__end_send), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_tx_hs.__PVT__end_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc0_tx_hs.__PVT__end_send))), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc0_tx_hs.__PVT__end_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_tx_hs.__PVT__end_send))));
    vlSelfRef.__PVT__out_end_flit_rspf_vc1 = VL_CONCAT_III(10,5,5, 
                                                           VL_CONCAT_III(5,3,2, 
                                                                         VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc1_tx_hs.__PVT__end_send), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc1_tx_hs.__PVT__end_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc1_tx_hs.__PVT__end_send))), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc1_tx_hs.__PVT__end_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_tx_hs.__PVT__end_send))), 
                                                           VL_CONCAT_III(5,3,2, 
                                                                         VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc1_tx_hs.__PVT__end_send), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_tx_hs.__PVT__end_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc1_tx_hs.__PVT__end_send))), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc1_tx_hs.__PVT__end_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_tx_hs.__PVT__end_send))));
    vlSelfRef.__PVT__out_req_rspf_vc0[0U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc0_tx_hs.__PVT__req_send), 0U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc0_tx_hs.__PVT__req_send), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc0_tx_hs.__PVT__req_send), 0U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc0_tx_hs.__PVT__req_send), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_tx_hs.__PVT__req_send), 0U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc0_tx_hs.__PVT__req_send), 0U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_tx_hs.__PVT__req_send), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc0_tx_hs.__PVT__req_send), 0U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc0_tx_hs.__PVT__req_send), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_tx_hs.__PVT__req_send), 0U)))));
    vlSelfRef.__PVT__out_req_rspf_vc0[1U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc0_tx_hs.__PVT__req_send), 1U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc0_tx_hs.__PVT__req_send), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc0_tx_hs.__PVT__req_send), 1U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc0_tx_hs.__PVT__req_send), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_tx_hs.__PVT__req_send), 1U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc0_tx_hs.__PVT__req_send), 1U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_tx_hs.__PVT__req_send), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc0_tx_hs.__PVT__req_send), 1U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc0_tx_hs.__PVT__req_send), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_tx_hs.__PVT__req_send), 1U)))));
    vlSelfRef.__PVT__out_req_rspf_vc0[2U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc0_tx_hs.__PVT__req_send), 2U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc0_tx_hs.__PVT__req_send), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc0_tx_hs.__PVT__req_send), 2U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc0_tx_hs.__PVT__req_send), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_tx_hs.__PVT__req_send), 2U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc0_tx_hs.__PVT__req_send), 2U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_tx_hs.__PVT__req_send), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc0_tx_hs.__PVT__req_send), 2U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc0_tx_hs.__PVT__req_send), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_tx_hs.__PVT__req_send), 2U)))));
    vlSelfRef.__PVT__out_req_rspf_vc0[3U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc0_tx_hs.__PVT__req_send), 3U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc0_tx_hs.__PVT__req_send), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc0_tx_hs.__PVT__req_send), 3U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc0_tx_hs.__PVT__req_send), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_tx_hs.__PVT__req_send), 3U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc0_tx_hs.__PVT__req_send), 3U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_tx_hs.__PVT__req_send), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc0_tx_hs.__PVT__req_send), 3U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc0_tx_hs.__PVT__req_send), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_tx_hs.__PVT__req_send), 3U)))));
    vlSelfRef.__PVT__out_req_rspf_vc0[4U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc0_tx_hs.__PVT__req_send), 4U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc0_tx_hs.__PVT__req_send), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc0_tx_hs.__PVT__req_send), 4U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc0_tx_hs.__PVT__req_send), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_tx_hs.__PVT__req_send), 4U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc0_tx_hs.__PVT__req_send), 4U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_tx_hs.__PVT__req_send), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc0_tx_hs.__PVT__req_send), 4U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc0_tx_hs.__PVT__req_send), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_tx_hs.__PVT__req_send), 4U)))));
    vlSelfRef.__PVT__out_req_rspf_vc0[5U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc0_tx_hs.__PVT__req_send), 5U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc0_tx_hs.__PVT__req_send), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc0_tx_hs.__PVT__req_send), 5U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc0_tx_hs.__PVT__req_send), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_tx_hs.__PVT__req_send), 5U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc0_tx_hs.__PVT__req_send), 5U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_tx_hs.__PVT__req_send), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc0_tx_hs.__PVT__req_send), 5U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc0_tx_hs.__PVT__req_send), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_tx_hs.__PVT__req_send), 5U)))));
    vlSelfRef.__PVT__out_req_rspf_vc0[6U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc0_tx_hs.__PVT__req_send), 6U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc0_tx_hs.__PVT__req_send), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc0_tx_hs.__PVT__req_send), 6U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc0_tx_hs.__PVT__req_send), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_tx_hs.__PVT__req_send), 6U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc0_tx_hs.__PVT__req_send), 6U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_tx_hs.__PVT__req_send), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc0_tx_hs.__PVT__req_send), 6U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc0_tx_hs.__PVT__req_send), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_tx_hs.__PVT__req_send), 6U)))));
    vlSelfRef.__PVT__out_req_rspf_vc0[7U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc0_tx_hs.__PVT__req_send), 7U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc0_tx_hs.__PVT__req_send), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc0_tx_hs.__PVT__req_send), 7U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc0_tx_hs.__PVT__req_send), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_tx_hs.__PVT__req_send), 7U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc0_tx_hs.__PVT__req_send), 7U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_tx_hs.__PVT__req_send), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc0_tx_hs.__PVT__req_send), 7U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc0_tx_hs.__PVT__req_send), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_tx_hs.__PVT__req_send), 7U)))));
    vlSelfRef.__PVT__out_req_rspf_vc0[8U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc0_tx_hs.__PVT__req_send), 8U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc0_tx_hs.__PVT__req_send), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc0_tx_hs.__PVT__req_send), 8U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc0_tx_hs.__PVT__req_send), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_tx_hs.__PVT__req_send), 8U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc0_tx_hs.__PVT__req_send), 8U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_tx_hs.__PVT__req_send), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc0_tx_hs.__PVT__req_send), 8U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc0_tx_hs.__PVT__req_send), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_tx_hs.__PVT__req_send), 8U)))));
    vlSelfRef.__PVT__out_req_rspf_vc0[9U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc0_tx_hs.__PVT__req_send), 9U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc0_tx_hs.__PVT__req_send), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc0_tx_hs.__PVT__req_send), 9U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc0_tx_hs.__PVT__req_send), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_tx_hs.__PVT__req_send), 9U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc0_tx_hs.__PVT__req_send), 9U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_tx_hs.__PVT__req_send), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc0_tx_hs.__PVT__req_send), 9U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc0_tx_hs.__PVT__req_send), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_tx_hs.__PVT__req_send), 9U)))));
    vlSelfRef.__PVT__out_req_rspf_vc1[0U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc1_tx_hs.__PVT__req_send), 0U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc1_tx_hs.__PVT__req_send), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc1_tx_hs.__PVT__req_send), 0U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc1_tx_hs.__PVT__req_send), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_tx_hs.__PVT__req_send), 0U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc1_tx_hs.__PVT__req_send), 0U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_tx_hs.__PVT__req_send), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc1_tx_hs.__PVT__req_send), 0U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc1_tx_hs.__PVT__req_send), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_tx_hs.__PVT__req_send), 0U)))));
    vlSelfRef.__PVT__out_req_rspf_vc1[1U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc1_tx_hs.__PVT__req_send), 1U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc1_tx_hs.__PVT__req_send), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc1_tx_hs.__PVT__req_send), 1U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc1_tx_hs.__PVT__req_send), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_tx_hs.__PVT__req_send), 1U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc1_tx_hs.__PVT__req_send), 1U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_tx_hs.__PVT__req_send), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc1_tx_hs.__PVT__req_send), 1U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc1_tx_hs.__PVT__req_send), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_tx_hs.__PVT__req_send), 1U)))));
    vlSelfRef.__PVT__out_req_rspf_vc1[2U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc1_tx_hs.__PVT__req_send), 2U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc1_tx_hs.__PVT__req_send), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc1_tx_hs.__PVT__req_send), 2U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc1_tx_hs.__PVT__req_send), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_tx_hs.__PVT__req_send), 2U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc1_tx_hs.__PVT__req_send), 2U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_tx_hs.__PVT__req_send), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc1_tx_hs.__PVT__req_send), 2U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc1_tx_hs.__PVT__req_send), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_tx_hs.__PVT__req_send), 2U)))));
    vlSelfRef.__PVT__out_req_rspf_vc1[3U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc1_tx_hs.__PVT__req_send), 3U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc1_tx_hs.__PVT__req_send), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc1_tx_hs.__PVT__req_send), 3U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc1_tx_hs.__PVT__req_send), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_tx_hs.__PVT__req_send), 3U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc1_tx_hs.__PVT__req_send), 3U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_tx_hs.__PVT__req_send), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc1_tx_hs.__PVT__req_send), 3U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc1_tx_hs.__PVT__req_send), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_tx_hs.__PVT__req_send), 3U)))));
    vlSelfRef.__PVT__out_req_rspf_vc1[4U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc1_tx_hs.__PVT__req_send), 4U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc1_tx_hs.__PVT__req_send), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc1_tx_hs.__PVT__req_send), 4U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc1_tx_hs.__PVT__req_send), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_tx_hs.__PVT__req_send), 4U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc1_tx_hs.__PVT__req_send), 4U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_tx_hs.__PVT__req_send), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc1_tx_hs.__PVT__req_send), 4U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc1_tx_hs.__PVT__req_send), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_tx_hs.__PVT__req_send), 4U)))));
    vlSelfRef.__PVT__out_req_rspf_vc1[5U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc1_tx_hs.__PVT__req_send), 5U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc1_tx_hs.__PVT__req_send), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc1_tx_hs.__PVT__req_send), 5U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc1_tx_hs.__PVT__req_send), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_tx_hs.__PVT__req_send), 5U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc1_tx_hs.__PVT__req_send), 5U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_tx_hs.__PVT__req_send), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc1_tx_hs.__PVT__req_send), 5U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc1_tx_hs.__PVT__req_send), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_tx_hs.__PVT__req_send), 5U)))));
    vlSelfRef.__PVT__out_req_rspf_vc1[6U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc1_tx_hs.__PVT__req_send), 6U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc1_tx_hs.__PVT__req_send), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc1_tx_hs.__PVT__req_send), 6U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc1_tx_hs.__PVT__req_send), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_tx_hs.__PVT__req_send), 6U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc1_tx_hs.__PVT__req_send), 6U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_tx_hs.__PVT__req_send), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc1_tx_hs.__PVT__req_send), 6U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc1_tx_hs.__PVT__req_send), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_tx_hs.__PVT__req_send), 6U)))));
    vlSelfRef.__PVT__out_req_rspf_vc1[7U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc1_tx_hs.__PVT__req_send), 7U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc1_tx_hs.__PVT__req_send), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc1_tx_hs.__PVT__req_send), 7U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc1_tx_hs.__PVT__req_send), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_tx_hs.__PVT__req_send), 7U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc1_tx_hs.__PVT__req_send), 7U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_tx_hs.__PVT__req_send), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc1_tx_hs.__PVT__req_send), 7U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc1_tx_hs.__PVT__req_send), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_tx_hs.__PVT__req_send), 7U)))));
    vlSelfRef.__PVT__out_req_rspf_vc1[8U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc1_tx_hs.__PVT__req_send), 8U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc1_tx_hs.__PVT__req_send), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc1_tx_hs.__PVT__req_send), 8U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc1_tx_hs.__PVT__req_send), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_tx_hs.__PVT__req_send), 8U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc1_tx_hs.__PVT__req_send), 8U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_tx_hs.__PVT__req_send), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc1_tx_hs.__PVT__req_send), 8U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc1_tx_hs.__PVT__req_send), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_tx_hs.__PVT__req_send), 8U)))));
    vlSelfRef.__PVT__out_req_rspf_vc1[9U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc1_tx_hs.__PVT__req_send), 9U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc1_tx_hs.__PVT__req_send), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc1_tx_hs.__PVT__req_send), 9U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc1_tx_hs.__PVT__req_send), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_tx_hs.__PVT__req_send), 9U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc1_tx_hs.__PVT__req_send), 9U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_tx_hs.__PVT__req_send), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc1_tx_hs.__PVT__req_send), 9U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc1_tx_hs.__PVT__req_send), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_tx_hs.__PVT__req_send), 9U)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc0_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,3,7, (7U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_rspf_vc0), 7U, 3)), 
                        VL_EXTEND_II(7,6, (0x3fU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_rspf_vc0), 0U, 6))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc0_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,2,8, (3U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_rspf_vc0), 8U, 2)), 
                        VL_EXTEND_II(8,7, (0x7fU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_rspf_vc0), 0U, 7))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc0_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,1,9, (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_rspf_vc0), 9U)), 
                        VL_EXTEND_II(9,8, (0xffU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_rspf_vc0), 0U, 8))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc0_rx_hs.__PVT__recv_end 
        = VL_EXTEND_II(10,9, (0x1ffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_rspf_vc0), 0U, 9)));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc0_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,7,3, (0x7fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_rspf_vc0), 3U, 7)), 
                        VL_EXTEND_II(3,2, (3U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_rspf_vc0), 0U, 2))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,6,4, (0x3fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_rspf_vc0), 4U, 6)), 
                        VL_EXTEND_II(4,3, (7U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_rspf_vc0), 0U, 3))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc0_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,5,5, (0x1fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_rspf_vc0), 5U, 5)), 
                        VL_EXTEND_II(5,4, (0xfU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_rspf_vc0), 0U, 4))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,4,6, (0xfU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_rspf_vc0), 6U, 4)), 
                        VL_EXTEND_II(6,5, (0x1fU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_rspf_vc0), 0U, 5))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,9,1, (0x1ffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_rspf_vc0), 1U, 9)), 0U);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc0_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,8,2, (0xffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_rspf_vc0), 2U, 8)), 
                        VL_EXTEND_II(2,1, (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_rspf_vc0), 0U))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc1_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,3,7, (7U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_rspf_vc1), 7U, 3)), 
                        VL_EXTEND_II(7,6, (0x3fU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_rspf_vc1), 0U, 6))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc1_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,2,8, (3U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_rspf_vc1), 8U, 2)), 
                        VL_EXTEND_II(8,7, (0x7fU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_rspf_vc1), 0U, 7))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc1_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,1,9, (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_rspf_vc1), 9U)), 
                        VL_EXTEND_II(9,8, (0xffU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_rspf_vc1), 0U, 8))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc1_rx_hs.__PVT__recv_end 
        = VL_EXTEND_II(10,9, (0x1ffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_rspf_vc1), 0U, 9)));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc1_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,7,3, (0x7fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_rspf_vc1), 3U, 7)), 
                        VL_EXTEND_II(3,2, (3U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_rspf_vc1), 0U, 2))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,6,4, (0x3fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_rspf_vc1), 4U, 6)), 
                        VL_EXTEND_II(4,3, (7U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_rspf_vc1), 0U, 3))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc1_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,5,5, (0x1fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_rspf_vc1), 5U, 5)), 
                        VL_EXTEND_II(5,4, (0xfU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_rspf_vc1), 0U, 4))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,4,6, (0xfU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_rspf_vc1), 6U, 4)), 
                        VL_EXTEND_II(6,5, (0x1fU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_rspf_vc1), 0U, 5))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,9,1, (0x1ffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_rspf_vc1), 1U, 9)), 0U);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc1_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,8,2, (0xffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_rspf_vc1), 2U, 8)), 
                        VL_EXTEND_II(2,1, (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_rspf_vc1), 0U))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc0_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,3,7, (7U & VL_SEL_IIII(10, 
                                                  vlSelfRef.__PVT__out_req_rspf_vc0
                                                  [6U], 7U, 3)), 
                        VL_EXTEND_II(7,6, (0x3fU & 
                                           VL_SEL_IIII(10, 
                                                       vlSelfRef.__PVT__out_req_rspf_vc0
                                                       [6U], 0U, 6))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc0_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,2,8, (3U & VL_SEL_IIII(10, 
                                                  vlSelfRef.__PVT__out_req_rspf_vc0
                                                  [7U], 8U, 2)), 
                        VL_EXTEND_II(8,7, (0x7fU & 
                                           VL_SEL_IIII(10, 
                                                       vlSelfRef.__PVT__out_req_rspf_vc0
                                                       [7U], 0U, 7))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc0_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,1,9, (1U & VL_BITSEL_IIII(10, 
                                                     vlSelfRef.__PVT__out_req_rspf_vc0
                                                     [8U], 9U)), 
                        VL_EXTEND_II(9,8, (0xffU & 
                                           VL_SEL_IIII(10, 
                                                       vlSelfRef.__PVT__out_req_rspf_vc0
                                                       [8U], 0U, 8))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc0_rx_hs.__PVT__recv_req 
        = VL_EXTEND_II(10,9, (0x1ffU & VL_SEL_IIII(10, 
                                                   vlSelfRef.__PVT__out_req_rspf_vc0
                                                   [9U], 0U, 9)));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc0_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,8,2, (0xffU & VL_SEL_IIII(10, 
                                                     vlSelfRef.__PVT__out_req_rspf_vc0
                                                     [1U], 2U, 8)), 
                        VL_EXTEND_II(2,1, (1U & VL_BITSEL_IIII(10, 
                                                               vlSelfRef.__PVT__out_req_rspf_vc0
                                                               [1U], 0U))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,9,1, (0x1ffU & VL_SEL_IIII(10, 
                                                      vlSelfRef.__PVT__out_req_rspf_vc0
                                                      [0U], 1U, 9)), 0U);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc0_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,7,3, (0x7fU & VL_SEL_IIII(10, 
                                                     vlSelfRef.__PVT__out_req_rspf_vc0
                                                     [2U], 3U, 7)), 
                        VL_EXTEND_II(3,2, (3U & VL_SEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_req_rspf_vc0
                                                            [2U], 0U, 2))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,6,4, (0x3fU & VL_SEL_IIII(10, 
                                                     vlSelfRef.__PVT__out_req_rspf_vc0
                                                     [3U], 4U, 6)), 
                        VL_EXTEND_II(4,3, (7U & VL_SEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_req_rspf_vc0
                                                            [3U], 0U, 3))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc0_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,5,5, (0x1fU & VL_SEL_IIII(10, 
                                                     vlSelfRef.__PVT__out_req_rspf_vc0
                                                     [4U], 5U, 5)), 
                        VL_EXTEND_II(5,4, (0xfU & VL_SEL_IIII(10, 
                                                              vlSelfRef.__PVT__out_req_rspf_vc0
                                                              [4U], 0U, 4))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,4,6, (0xfU & VL_SEL_IIII(10, 
                                                    vlSelfRef.__PVT__out_req_rspf_vc0
                                                    [5U], 6U, 4)), 
                        VL_EXTEND_II(6,5, (0x1fU & 
                                           VL_SEL_IIII(10, 
                                                       vlSelfRef.__PVT__out_req_rspf_vc0
                                                       [5U], 0U, 5))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_rsp_vc1_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,3,7, (7U & VL_SEL_IIII(10, 
                                                  vlSelfRef.__PVT__out_req_rspf_vc1
                                                  [6U], 7U, 3)), 
                        VL_EXTEND_II(7,6, (0x3fU & 
                                           VL_SEL_IIII(10, 
                                                       vlSelfRef.__PVT__out_req_rspf_vc1
                                                       [6U], 0U, 6))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_rsp_vc1_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,2,8, (3U & VL_SEL_IIII(10, 
                                                  vlSelfRef.__PVT__out_req_rspf_vc1
                                                  [7U], 8U, 2)), 
                        VL_EXTEND_II(8,7, (0x7fU & 
                                           VL_SEL_IIII(10, 
                                                       vlSelfRef.__PVT__out_req_rspf_vc1
                                                       [7U], 0U, 7))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_rsp_vc1_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,1,9, (1U & VL_BITSEL_IIII(10, 
                                                     vlSelfRef.__PVT__out_req_rspf_vc1
                                                     [8U], 9U)), 
                        VL_EXTEND_II(9,8, (0xffU & 
                                           VL_SEL_IIII(10, 
                                                       vlSelfRef.__PVT__out_req_rspf_vc1
                                                       [8U], 0U, 8))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_rsp_vc1_rx_hs.__PVT__recv_req 
        = VL_EXTEND_II(10,9, (0x1ffU & VL_SEL_IIII(10, 
                                                   vlSelfRef.__PVT__out_req_rspf_vc1
                                                   [9U], 0U, 9)));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_rsp_vc1_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,8,2, (0xffU & VL_SEL_IIII(10, 
                                                     vlSelfRef.__PVT__out_req_rspf_vc1
                                                     [1U], 2U, 8)), 
                        VL_EXTEND_II(2,1, (1U & VL_BITSEL_IIII(10, 
                                                               vlSelfRef.__PVT__out_req_rspf_vc1
                                                               [1U], 0U))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,9,1, (0x1ffU & VL_SEL_IIII(10, 
                                                      vlSelfRef.__PVT__out_req_rspf_vc1
                                                      [0U], 1U, 9)), 0U);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_rsp_vc1_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,7,3, (0x7fU & VL_SEL_IIII(10, 
                                                     vlSelfRef.__PVT__out_req_rspf_vc1
                                                     [2U], 3U, 7)), 
                        VL_EXTEND_II(3,2, (3U & VL_SEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_req_rspf_vc1
                                                            [2U], 0U, 2))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,6,4, (0x3fU & VL_SEL_IIII(10, 
                                                     vlSelfRef.__PVT__out_req_rspf_vc1
                                                     [3U], 4U, 6)), 
                        VL_EXTEND_II(4,3, (7U & VL_SEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_req_rspf_vc1
                                                            [3U], 0U, 3))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_rsp_vc1_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,5,5, (0x1fU & VL_SEL_IIII(10, 
                                                     vlSelfRef.__PVT__out_req_rspf_vc1
                                                     [4U], 5U, 5)), 
                        VL_EXTEND_II(5,4, (0xfU & VL_SEL_IIII(10, 
                                                              vlSelfRef.__PVT__out_req_rspf_vc1
                                                              [4U], 0U, 4))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,4,6, (0xfU & VL_SEL_IIII(10, 
                                                    vlSelfRef.__PVT__out_req_rspf_vc1
                                                    [5U], 6U, 4)), 
                        VL_EXTEND_II(6,5, (0x1fU & 
                                           VL_SEL_IIII(10, 
                                                       vlSelfRef.__PVT__out_req_rspf_vc1
                                                       [5U], 0U, 5))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__52(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__52\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__out_valid_flit_datf_vc0 = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc0_tx_hs.__PVT__vld_send), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc0_tx_hs.__PVT__vld_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc0_tx_hs.__PVT__vld_send))), 
                                                                           VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc0_tx_hs.__PVT__vld_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_tx_hs.__PVT__vld_send))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc0_tx_hs.__PVT__vld_send), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_tx_hs.__PVT__vld_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc0_tx_hs.__PVT__vld_send))), 
                                                                           VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc0_tx_hs.__PVT__vld_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_tx_hs.__PVT__vld_send))));
    vlSelfRef.__PVT__out_end_flit_datf_vc0 = VL_CONCAT_III(10,5,5, 
                                                           VL_CONCAT_III(5,3,2, 
                                                                         VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc0_tx_hs.__PVT__end_send), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc0_tx_hs.__PVT__end_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc0_tx_hs.__PVT__end_send))), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc0_tx_hs.__PVT__end_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_tx_hs.__PVT__end_send))), 
                                                           VL_CONCAT_III(5,3,2, 
                                                                         VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc0_tx_hs.__PVT__end_send), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_tx_hs.__PVT__end_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc0_tx_hs.__PVT__end_send))), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc0_tx_hs.__PVT__end_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_tx_hs.__PVT__end_send))));
    vlSelfRef.__PVT__out_valid_flit_datf_vc1 = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc1_tx_hs.__PVT__vld_send), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc1_tx_hs.__PVT__vld_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc1_tx_hs.__PVT__vld_send))), 
                                                                           VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc1_tx_hs.__PVT__vld_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_tx_hs.__PVT__vld_send))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc1_tx_hs.__PVT__vld_send), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_tx_hs.__PVT__vld_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc1_tx_hs.__PVT__vld_send))), 
                                                                           VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc1_tx_hs.__PVT__vld_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_tx_hs.__PVT__vld_send))));
    vlSelfRef.__PVT__out_end_flit_datf_vc1 = VL_CONCAT_III(10,5,5, 
                                                           VL_CONCAT_III(5,3,2, 
                                                                         VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc1_tx_hs.__PVT__end_send), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc1_tx_hs.__PVT__end_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc1_tx_hs.__PVT__end_send))), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc1_tx_hs.__PVT__end_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_tx_hs.__PVT__end_send))), 
                                                           VL_CONCAT_III(5,3,2, 
                                                                         VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc1_tx_hs.__PVT__end_send), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_tx_hs.__PVT__end_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc1_tx_hs.__PVT__end_send))), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc1_tx_hs.__PVT__end_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_tx_hs.__PVT__end_send))));
    vlSelfRef.__PVT__out_req_datf_vc0[0U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc0_tx_hs.__PVT__req_send), 0U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc0_tx_hs.__PVT__req_send), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc0_tx_hs.__PVT__req_send), 0U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc0_tx_hs.__PVT__req_send), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_tx_hs.__PVT__req_send), 0U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc0_tx_hs.__PVT__req_send), 0U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_tx_hs.__PVT__req_send), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc0_tx_hs.__PVT__req_send), 0U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc0_tx_hs.__PVT__req_send), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_tx_hs.__PVT__req_send), 0U)))));
    vlSelfRef.__PVT__out_req_datf_vc0[1U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc0_tx_hs.__PVT__req_send), 1U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc0_tx_hs.__PVT__req_send), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc0_tx_hs.__PVT__req_send), 1U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc0_tx_hs.__PVT__req_send), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_tx_hs.__PVT__req_send), 1U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc0_tx_hs.__PVT__req_send), 1U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_tx_hs.__PVT__req_send), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc0_tx_hs.__PVT__req_send), 1U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc0_tx_hs.__PVT__req_send), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_tx_hs.__PVT__req_send), 1U)))));
    vlSelfRef.__PVT__out_req_datf_vc0[2U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc0_tx_hs.__PVT__req_send), 2U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc0_tx_hs.__PVT__req_send), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc0_tx_hs.__PVT__req_send), 2U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc0_tx_hs.__PVT__req_send), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_tx_hs.__PVT__req_send), 2U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc0_tx_hs.__PVT__req_send), 2U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_tx_hs.__PVT__req_send), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc0_tx_hs.__PVT__req_send), 2U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc0_tx_hs.__PVT__req_send), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_tx_hs.__PVT__req_send), 2U)))));
    vlSelfRef.__PVT__out_req_datf_vc0[3U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc0_tx_hs.__PVT__req_send), 3U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc0_tx_hs.__PVT__req_send), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc0_tx_hs.__PVT__req_send), 3U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc0_tx_hs.__PVT__req_send), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_tx_hs.__PVT__req_send), 3U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc0_tx_hs.__PVT__req_send), 3U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_tx_hs.__PVT__req_send), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc0_tx_hs.__PVT__req_send), 3U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc0_tx_hs.__PVT__req_send), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_tx_hs.__PVT__req_send), 3U)))));
    vlSelfRef.__PVT__out_req_datf_vc0[4U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc0_tx_hs.__PVT__req_send), 4U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc0_tx_hs.__PVT__req_send), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc0_tx_hs.__PVT__req_send), 4U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc0_tx_hs.__PVT__req_send), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_tx_hs.__PVT__req_send), 4U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc0_tx_hs.__PVT__req_send), 4U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_tx_hs.__PVT__req_send), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc0_tx_hs.__PVT__req_send), 4U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc0_tx_hs.__PVT__req_send), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_tx_hs.__PVT__req_send), 4U)))));
    vlSelfRef.__PVT__out_req_datf_vc0[5U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc0_tx_hs.__PVT__req_send), 5U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc0_tx_hs.__PVT__req_send), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc0_tx_hs.__PVT__req_send), 5U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc0_tx_hs.__PVT__req_send), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_tx_hs.__PVT__req_send), 5U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc0_tx_hs.__PVT__req_send), 5U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_tx_hs.__PVT__req_send), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc0_tx_hs.__PVT__req_send), 5U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc0_tx_hs.__PVT__req_send), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_tx_hs.__PVT__req_send), 5U)))));
    vlSelfRef.__PVT__out_req_datf_vc0[6U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc0_tx_hs.__PVT__req_send), 6U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc0_tx_hs.__PVT__req_send), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc0_tx_hs.__PVT__req_send), 6U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc0_tx_hs.__PVT__req_send), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_tx_hs.__PVT__req_send), 6U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc0_tx_hs.__PVT__req_send), 6U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_tx_hs.__PVT__req_send), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc0_tx_hs.__PVT__req_send), 6U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc0_tx_hs.__PVT__req_send), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_tx_hs.__PVT__req_send), 6U)))));
    vlSelfRef.__PVT__out_req_datf_vc0[7U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc0_tx_hs.__PVT__req_send), 7U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc0_tx_hs.__PVT__req_send), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc0_tx_hs.__PVT__req_send), 7U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc0_tx_hs.__PVT__req_send), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_tx_hs.__PVT__req_send), 7U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc0_tx_hs.__PVT__req_send), 7U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_tx_hs.__PVT__req_send), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc0_tx_hs.__PVT__req_send), 7U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc0_tx_hs.__PVT__req_send), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_tx_hs.__PVT__req_send), 7U)))));
    vlSelfRef.__PVT__out_req_datf_vc0[8U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc0_tx_hs.__PVT__req_send), 8U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc0_tx_hs.__PVT__req_send), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc0_tx_hs.__PVT__req_send), 8U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc0_tx_hs.__PVT__req_send), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_tx_hs.__PVT__req_send), 8U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc0_tx_hs.__PVT__req_send), 8U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_tx_hs.__PVT__req_send), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc0_tx_hs.__PVT__req_send), 8U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc0_tx_hs.__PVT__req_send), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_tx_hs.__PVT__req_send), 8U)))));
    vlSelfRef.__PVT__out_req_datf_vc0[9U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc0_tx_hs.__PVT__req_send), 9U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc0_tx_hs.__PVT__req_send), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc0_tx_hs.__PVT__req_send), 9U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc0_tx_hs.__PVT__req_send), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_tx_hs.__PVT__req_send), 9U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc0_tx_hs.__PVT__req_send), 9U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_tx_hs.__PVT__req_send), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc0_tx_hs.__PVT__req_send), 9U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc0_tx_hs.__PVT__req_send), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_tx_hs.__PVT__req_send), 9U)))));
    vlSelfRef.__PVT__out_req_datf_vc1[0U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc1_tx_hs.__PVT__req_send), 0U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc1_tx_hs.__PVT__req_send), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc1_tx_hs.__PVT__req_send), 0U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc1_tx_hs.__PVT__req_send), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_tx_hs.__PVT__req_send), 0U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc1_tx_hs.__PVT__req_send), 0U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_tx_hs.__PVT__req_send), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc1_tx_hs.__PVT__req_send), 0U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc1_tx_hs.__PVT__req_send), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_tx_hs.__PVT__req_send), 0U)))));
    vlSelfRef.__PVT__out_req_datf_vc1[1U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc1_tx_hs.__PVT__req_send), 1U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc1_tx_hs.__PVT__req_send), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc1_tx_hs.__PVT__req_send), 1U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc1_tx_hs.__PVT__req_send), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_tx_hs.__PVT__req_send), 1U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc1_tx_hs.__PVT__req_send), 1U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_tx_hs.__PVT__req_send), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc1_tx_hs.__PVT__req_send), 1U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc1_tx_hs.__PVT__req_send), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_tx_hs.__PVT__req_send), 1U)))));
    vlSelfRef.__PVT__out_req_datf_vc1[2U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc1_tx_hs.__PVT__req_send), 2U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc1_tx_hs.__PVT__req_send), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc1_tx_hs.__PVT__req_send), 2U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc1_tx_hs.__PVT__req_send), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_tx_hs.__PVT__req_send), 2U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc1_tx_hs.__PVT__req_send), 2U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_tx_hs.__PVT__req_send), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc1_tx_hs.__PVT__req_send), 2U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc1_tx_hs.__PVT__req_send), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_tx_hs.__PVT__req_send), 2U)))));
    vlSelfRef.__PVT__out_req_datf_vc1[3U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc1_tx_hs.__PVT__req_send), 3U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc1_tx_hs.__PVT__req_send), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc1_tx_hs.__PVT__req_send), 3U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc1_tx_hs.__PVT__req_send), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_tx_hs.__PVT__req_send), 3U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc1_tx_hs.__PVT__req_send), 3U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_tx_hs.__PVT__req_send), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc1_tx_hs.__PVT__req_send), 3U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc1_tx_hs.__PVT__req_send), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_tx_hs.__PVT__req_send), 3U)))));
    vlSelfRef.__PVT__out_req_datf_vc1[4U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc1_tx_hs.__PVT__req_send), 4U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc1_tx_hs.__PVT__req_send), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc1_tx_hs.__PVT__req_send), 4U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc1_tx_hs.__PVT__req_send), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_tx_hs.__PVT__req_send), 4U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc1_tx_hs.__PVT__req_send), 4U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_tx_hs.__PVT__req_send), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc1_tx_hs.__PVT__req_send), 4U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc1_tx_hs.__PVT__req_send), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_tx_hs.__PVT__req_send), 4U)))));
    vlSelfRef.__PVT__out_req_datf_vc1[5U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc1_tx_hs.__PVT__req_send), 5U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc1_tx_hs.__PVT__req_send), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc1_tx_hs.__PVT__req_send), 5U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc1_tx_hs.__PVT__req_send), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_tx_hs.__PVT__req_send), 5U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc1_tx_hs.__PVT__req_send), 5U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_tx_hs.__PVT__req_send), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc1_tx_hs.__PVT__req_send), 5U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc1_tx_hs.__PVT__req_send), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_tx_hs.__PVT__req_send), 5U)))));
    vlSelfRef.__PVT__out_req_datf_vc1[6U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc1_tx_hs.__PVT__req_send), 6U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc1_tx_hs.__PVT__req_send), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc1_tx_hs.__PVT__req_send), 6U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc1_tx_hs.__PVT__req_send), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_tx_hs.__PVT__req_send), 6U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc1_tx_hs.__PVT__req_send), 6U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_tx_hs.__PVT__req_send), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc1_tx_hs.__PVT__req_send), 6U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc1_tx_hs.__PVT__req_send), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_tx_hs.__PVT__req_send), 6U)))));
    vlSelfRef.__PVT__out_req_datf_vc1[7U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc1_tx_hs.__PVT__req_send), 7U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc1_tx_hs.__PVT__req_send), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc1_tx_hs.__PVT__req_send), 7U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc1_tx_hs.__PVT__req_send), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_tx_hs.__PVT__req_send), 7U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc1_tx_hs.__PVT__req_send), 7U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_tx_hs.__PVT__req_send), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc1_tx_hs.__PVT__req_send), 7U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc1_tx_hs.__PVT__req_send), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_tx_hs.__PVT__req_send), 7U)))));
    vlSelfRef.__PVT__out_req_datf_vc1[8U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc1_tx_hs.__PVT__req_send), 8U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc1_tx_hs.__PVT__req_send), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc1_tx_hs.__PVT__req_send), 8U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc1_tx_hs.__PVT__req_send), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_tx_hs.__PVT__req_send), 8U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc1_tx_hs.__PVT__req_send), 8U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_tx_hs.__PVT__req_send), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc1_tx_hs.__PVT__req_send), 8U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc1_tx_hs.__PVT__req_send), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_tx_hs.__PVT__req_send), 8U)))));
    vlSelfRef.__PVT__out_req_datf_vc1[9U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc1_tx_hs.__PVT__req_send), 9U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc1_tx_hs.__PVT__req_send), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc1_tx_hs.__PVT__req_send), 9U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc1_tx_hs.__PVT__req_send), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_tx_hs.__PVT__req_send), 9U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc1_tx_hs.__PVT__req_send), 9U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_tx_hs.__PVT__req_send), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc1_tx_hs.__PVT__req_send), 9U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc1_tx_hs.__PVT__req_send), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_tx_hs.__PVT__req_send), 9U)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc0_rx_hs.__PVT__recv_vld 
        = VL_CONCAT_III(10,3,7, (7U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_datf_vc0), 7U, 3)), 
                        VL_EXTEND_II(7,6, (0x3fU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_datf_vc0), 0U, 6))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc0_rx_hs.__PVT__recv_vld 
        = VL_CONCAT_III(10,2,8, (3U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_datf_vc0), 8U, 2)), 
                        VL_EXTEND_II(8,7, (0x7fU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_datf_vc0), 0U, 7))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc0_rx_hs.__PVT__recv_vld 
        = VL_CONCAT_III(10,1,9, (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_datf_vc0), 9U)), 
                        VL_EXTEND_II(9,8, (0xffU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_datf_vc0), 0U, 8))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc0_rx_hs.__PVT__recv_vld 
        = VL_EXTEND_II(10,9, (0x1ffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_datf_vc0), 0U, 9)));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc0_rx_hs.__PVT__recv_vld 
        = VL_CONCAT_III(10,7,3, (0x7fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_datf_vc0), 3U, 7)), 
                        VL_EXTEND_II(3,2, (3U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_datf_vc0), 0U, 2))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_rx_hs.__PVT__recv_vld 
        = VL_CONCAT_III(10,6,4, (0x3fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_datf_vc0), 4U, 6)), 
                        VL_EXTEND_II(4,3, (7U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_datf_vc0), 0U, 3))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc0_rx_hs.__PVT__recv_vld 
        = VL_CONCAT_III(10,5,5, (0x1fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_datf_vc0), 5U, 5)), 
                        VL_EXTEND_II(5,4, (0xfU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_datf_vc0), 0U, 4))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_rx_hs.__PVT__recv_vld 
        = VL_CONCAT_III(10,4,6, (0xfU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_datf_vc0), 6U, 4)), 
                        VL_EXTEND_II(6,5, (0x1fU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_datf_vc0), 0U, 5))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_rx_hs.__PVT__recv_vld 
        = VL_CONCAT_III(10,9,1, (0x1ffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_datf_vc0), 1U, 9)), 0U);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc0_rx_hs.__PVT__recv_vld 
        = VL_CONCAT_III(10,8,2, (0xffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_datf_vc0), 2U, 8)), 
                        VL_EXTEND_II(2,1, (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_datf_vc0), 0U))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc0_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,3,7, (7U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_datf_vc0), 7U, 3)), 
                        VL_EXTEND_II(7,6, (0x3fU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_datf_vc0), 0U, 6))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc0_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,2,8, (3U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_datf_vc0), 8U, 2)), 
                        VL_EXTEND_II(8,7, (0x7fU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_datf_vc0), 0U, 7))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc0_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,1,9, (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_datf_vc0), 9U)), 
                        VL_EXTEND_II(9,8, (0xffU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_datf_vc0), 0U, 8))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc0_rx_hs.__PVT__recv_end 
        = VL_EXTEND_II(10,9, (0x1ffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_datf_vc0), 0U, 9)));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc0_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,7,3, (0x7fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_datf_vc0), 3U, 7)), 
                        VL_EXTEND_II(3,2, (3U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_datf_vc0), 0U, 2))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,6,4, (0x3fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_datf_vc0), 4U, 6)), 
                        VL_EXTEND_II(4,3, (7U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_datf_vc0), 0U, 3))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc0_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,5,5, (0x1fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_datf_vc0), 5U, 5)), 
                        VL_EXTEND_II(5,4, (0xfU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_datf_vc0), 0U, 4))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,4,6, (0xfU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_datf_vc0), 6U, 4)), 
                        VL_EXTEND_II(6,5, (0x1fU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_datf_vc0), 0U, 5))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,9,1, (0x1ffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_datf_vc0), 1U, 9)), 0U);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc0_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,8,2, (0xffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_datf_vc0), 2U, 8)), 
                        VL_EXTEND_II(2,1, (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_datf_vc0), 0U))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc1_rx_hs.__PVT__recv_vld 
        = VL_CONCAT_III(10,3,7, (7U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_datf_vc1), 7U, 3)), 
                        VL_EXTEND_II(7,6, (0x3fU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_datf_vc1), 0U, 6))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc1_rx_hs.__PVT__recv_vld 
        = VL_CONCAT_III(10,2,8, (3U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_datf_vc1), 8U, 2)), 
                        VL_EXTEND_II(8,7, (0x7fU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_datf_vc1), 0U, 7))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc1_rx_hs.__PVT__recv_vld 
        = VL_CONCAT_III(10,1,9, (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_datf_vc1), 9U)), 
                        VL_EXTEND_II(9,8, (0xffU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_datf_vc1), 0U, 8))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc1_rx_hs.__PVT__recv_vld 
        = VL_EXTEND_II(10,9, (0x1ffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_datf_vc1), 0U, 9)));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc1_rx_hs.__PVT__recv_vld 
        = VL_CONCAT_III(10,7,3, (0x7fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_datf_vc1), 3U, 7)), 
                        VL_EXTEND_II(3,2, (3U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_datf_vc1), 0U, 2))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_rx_hs.__PVT__recv_vld 
        = VL_CONCAT_III(10,6,4, (0x3fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_datf_vc1), 4U, 6)), 
                        VL_EXTEND_II(4,3, (7U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_datf_vc1), 0U, 3))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc1_rx_hs.__PVT__recv_vld 
        = VL_CONCAT_III(10,5,5, (0x1fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_datf_vc1), 5U, 5)), 
                        VL_EXTEND_II(5,4, (0xfU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_datf_vc1), 0U, 4))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_rx_hs.__PVT__recv_vld 
        = VL_CONCAT_III(10,4,6, (0xfU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_datf_vc1), 6U, 4)), 
                        VL_EXTEND_II(6,5, (0x1fU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_datf_vc1), 0U, 5))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_rx_hs.__PVT__recv_vld 
        = VL_CONCAT_III(10,9,1, (0x1ffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_datf_vc1), 1U, 9)), 0U);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc1_rx_hs.__PVT__recv_vld 
        = VL_CONCAT_III(10,8,2, (0xffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_datf_vc1), 2U, 8)), 
                        VL_EXTEND_II(2,1, (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_datf_vc1), 0U))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc1_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,3,7, (7U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_datf_vc1), 7U, 3)), 
                        VL_EXTEND_II(7,6, (0x3fU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_datf_vc1), 0U, 6))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc1_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,2,8, (3U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_datf_vc1), 8U, 2)), 
                        VL_EXTEND_II(8,7, (0x7fU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_datf_vc1), 0U, 7))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc1_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,1,9, (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_datf_vc1), 9U)), 
                        VL_EXTEND_II(9,8, (0xffU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_datf_vc1), 0U, 8))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc1_rx_hs.__PVT__recv_end 
        = VL_EXTEND_II(10,9, (0x1ffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_datf_vc1), 0U, 9)));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc1_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,7,3, (0x7fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_datf_vc1), 3U, 7)), 
                        VL_EXTEND_II(3,2, (3U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_datf_vc1), 0U, 2))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,6,4, (0x3fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_datf_vc1), 4U, 6)), 
                        VL_EXTEND_II(4,3, (7U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_datf_vc1), 0U, 3))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc1_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,5,5, (0x1fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_datf_vc1), 5U, 5)), 
                        VL_EXTEND_II(5,4, (0xfU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_datf_vc1), 0U, 4))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,4,6, (0xfU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_datf_vc1), 6U, 4)), 
                        VL_EXTEND_II(6,5, (0x1fU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_datf_vc1), 0U, 5))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,9,1, (0x1ffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_datf_vc1), 1U, 9)), 0U);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc1_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,8,2, (0xffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_datf_vc1), 2U, 8)), 
                        VL_EXTEND_II(2,1, (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_datf_vc1), 0U))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc0_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,3,7, (7U & VL_SEL_IIII(10, 
                                                  vlSelfRef.__PVT__out_req_datf_vc0
                                                  [6U], 7U, 3)), 
                        VL_EXTEND_II(7,6, (0x3fU & 
                                           VL_SEL_IIII(10, 
                                                       vlSelfRef.__PVT__out_req_datf_vc0
                                                       [6U], 0U, 6))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc0_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,2,8, (3U & VL_SEL_IIII(10, 
                                                  vlSelfRef.__PVT__out_req_datf_vc0
                                                  [7U], 8U, 2)), 
                        VL_EXTEND_II(8,7, (0x7fU & 
                                           VL_SEL_IIII(10, 
                                                       vlSelfRef.__PVT__out_req_datf_vc0
                                                       [7U], 0U, 7))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc0_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,1,9, (1U & VL_BITSEL_IIII(10, 
                                                     vlSelfRef.__PVT__out_req_datf_vc0
                                                     [8U], 9U)), 
                        VL_EXTEND_II(9,8, (0xffU & 
                                           VL_SEL_IIII(10, 
                                                       vlSelfRef.__PVT__out_req_datf_vc0
                                                       [8U], 0U, 8))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc0_rx_hs.__PVT__recv_req 
        = VL_EXTEND_II(10,9, (0x1ffU & VL_SEL_IIII(10, 
                                                   vlSelfRef.__PVT__out_req_datf_vc0
                                                   [9U], 0U, 9)));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc0_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,8,2, (0xffU & VL_SEL_IIII(10, 
                                                     vlSelfRef.__PVT__out_req_datf_vc0
                                                     [1U], 2U, 8)), 
                        VL_EXTEND_II(2,1, (1U & VL_BITSEL_IIII(10, 
                                                               vlSelfRef.__PVT__out_req_datf_vc0
                                                               [1U], 0U))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,9,1, (0x1ffU & VL_SEL_IIII(10, 
                                                      vlSelfRef.__PVT__out_req_datf_vc0
                                                      [0U], 1U, 9)), 0U);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc0_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,7,3, (0x7fU & VL_SEL_IIII(10, 
                                                     vlSelfRef.__PVT__out_req_datf_vc0
                                                     [2U], 3U, 7)), 
                        VL_EXTEND_II(3,2, (3U & VL_SEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_req_datf_vc0
                                                            [2U], 0U, 2))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,6,4, (0x3fU & VL_SEL_IIII(10, 
                                                     vlSelfRef.__PVT__out_req_datf_vc0
                                                     [3U], 4U, 6)), 
                        VL_EXTEND_II(4,3, (7U & VL_SEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_req_datf_vc0
                                                            [3U], 0U, 3))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc0_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,5,5, (0x1fU & VL_SEL_IIII(10, 
                                                     vlSelfRef.__PVT__out_req_datf_vc0
                                                     [4U], 5U, 5)), 
                        VL_EXTEND_II(5,4, (0xfU & VL_SEL_IIII(10, 
                                                              vlSelfRef.__PVT__out_req_datf_vc0
                                                              [4U], 0U, 4))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,4,6, (0xfU & VL_SEL_IIII(10, 
                                                    vlSelfRef.__PVT__out_req_datf_vc0
                                                    [5U], 6U, 4)), 
                        VL_EXTEND_II(6,5, (0x1fU & 
                                           VL_SEL_IIII(10, 
                                                       vlSelfRef.__PVT__out_req_datf_vc0
                                                       [5U], 0U, 5))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_dat_vc1_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,3,7, (7U & VL_SEL_IIII(10, 
                                                  vlSelfRef.__PVT__out_req_datf_vc1
                                                  [6U], 7U, 3)), 
                        VL_EXTEND_II(7,6, (0x3fU & 
                                           VL_SEL_IIII(10, 
                                                       vlSelfRef.__PVT__out_req_datf_vc1
                                                       [6U], 0U, 6))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_dat_vc1_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,2,8, (3U & VL_SEL_IIII(10, 
                                                  vlSelfRef.__PVT__out_req_datf_vc1
                                                  [7U], 8U, 2)), 
                        VL_EXTEND_II(8,7, (0x7fU & 
                                           VL_SEL_IIII(10, 
                                                       vlSelfRef.__PVT__out_req_datf_vc1
                                                       [7U], 0U, 7))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_dat_vc1_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,1,9, (1U & VL_BITSEL_IIII(10, 
                                                     vlSelfRef.__PVT__out_req_datf_vc1
                                                     [8U], 9U)), 
                        VL_EXTEND_II(9,8, (0xffU & 
                                           VL_SEL_IIII(10, 
                                                       vlSelfRef.__PVT__out_req_datf_vc1
                                                       [8U], 0U, 8))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_dat_vc1_rx_hs.__PVT__recv_req 
        = VL_EXTEND_II(10,9, (0x1ffU & VL_SEL_IIII(10, 
                                                   vlSelfRef.__PVT__out_req_datf_vc1
                                                   [9U], 0U, 9)));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_dat_vc1_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,8,2, (0xffU & VL_SEL_IIII(10, 
                                                     vlSelfRef.__PVT__out_req_datf_vc1
                                                     [1U], 2U, 8)), 
                        VL_EXTEND_II(2,1, (1U & VL_BITSEL_IIII(10, 
                                                               vlSelfRef.__PVT__out_req_datf_vc1
                                                               [1U], 0U))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,9,1, (0x1ffU & VL_SEL_IIII(10, 
                                                      vlSelfRef.__PVT__out_req_datf_vc1
                                                      [0U], 1U, 9)), 0U);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_dat_vc1_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,7,3, (0x7fU & VL_SEL_IIII(10, 
                                                     vlSelfRef.__PVT__out_req_datf_vc1
                                                     [2U], 3U, 7)), 
                        VL_EXTEND_II(3,2, (3U & VL_SEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_req_datf_vc1
                                                            [2U], 0U, 2))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,6,4, (0x3fU & VL_SEL_IIII(10, 
                                                     vlSelfRef.__PVT__out_req_datf_vc1
                                                     [3U], 4U, 6)), 
                        VL_EXTEND_II(4,3, (7U & VL_SEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_req_datf_vc1
                                                            [3U], 0U, 3))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_dat_vc1_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,5,5, (0x1fU & VL_SEL_IIII(10, 
                                                     vlSelfRef.__PVT__out_req_datf_vc1
                                                     [4U], 5U, 5)), 
                        VL_EXTEND_II(5,4, (0xfU & VL_SEL_IIII(10, 
                                                              vlSelfRef.__PVT__out_req_datf_vc1
                                                              [4U], 0U, 4))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,4,6, (0xfU & VL_SEL_IIII(10, 
                                                    vlSelfRef.__PVT__out_req_datf_vc1
                                                    [5U], 6U, 4)), 
                        VL_EXTEND_II(6,5, (0x1fU & 
                                           VL_SEL_IIII(10, 
                                                       vlSelfRef.__PVT__out_req_datf_vc1
                                                       [5U], 0U, 5))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__53(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__53\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__out_valid_flit_reqf_vc0 = VL_CONCAT_III(10,5,5, 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc0_tx_hs.__PVT__vld_send), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc0_tx_hs.__PVT__vld_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc0_tx_hs.__PVT__vld_send))), 
                                                                           VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc0_tx_hs.__PVT__vld_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_tx_hs.__PVT__vld_send))), 
                                                             VL_CONCAT_III(5,3,2, 
                                                                           VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc0_tx_hs.__PVT__vld_send), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc0_tx_hs.__PVT__vld_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc0_tx_hs.__PVT__vld_send))), 
                                                                           VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc0_tx_hs.__PVT__vld_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_tx_hs.__PVT__vld_send))));
    vlSelfRef.__PVT__out_end_flit_reqf_vc0 = VL_CONCAT_III(10,5,5, 
                                                           VL_CONCAT_III(5,3,2, 
                                                                         VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc0_tx_hs.__PVT__end_send), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc0_tx_hs.__PVT__end_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc0_tx_hs.__PVT__end_send))), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc0_tx_hs.__PVT__end_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_tx_hs.__PVT__end_send))), 
                                                           VL_CONCAT_III(5,3,2, 
                                                                         VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc0_tx_hs.__PVT__end_send), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc0_tx_hs.__PVT__end_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc0_tx_hs.__PVT__end_send))), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc0_tx_hs.__PVT__end_send), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_tx_hs.__PVT__end_send))));
    vlSelfRef.__PVT__out_req_reqf_vc0[0U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc0_tx_hs.__PVT__req_send), 0U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc0_tx_hs.__PVT__req_send), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc0_tx_hs.__PVT__req_send), 0U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc0_tx_hs.__PVT__req_send), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_tx_hs.__PVT__req_send), 0U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc0_tx_hs.__PVT__req_send), 0U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc0_tx_hs.__PVT__req_send), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc0_tx_hs.__PVT__req_send), 0U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc0_tx_hs.__PVT__req_send), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_tx_hs.__PVT__req_send), 0U)))));
    vlSelfRef.__PVT__out_req_reqf_vc0[1U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc0_tx_hs.__PVT__req_send), 1U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc0_tx_hs.__PVT__req_send), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc0_tx_hs.__PVT__req_send), 1U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc0_tx_hs.__PVT__req_send), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_tx_hs.__PVT__req_send), 1U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc0_tx_hs.__PVT__req_send), 1U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc0_tx_hs.__PVT__req_send), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc0_tx_hs.__PVT__req_send), 1U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc0_tx_hs.__PVT__req_send), 1U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_tx_hs.__PVT__req_send), 1U)))));
    vlSelfRef.__PVT__out_req_reqf_vc0[2U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc0_tx_hs.__PVT__req_send), 2U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc0_tx_hs.__PVT__req_send), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc0_tx_hs.__PVT__req_send), 2U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc0_tx_hs.__PVT__req_send), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_tx_hs.__PVT__req_send), 2U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc0_tx_hs.__PVT__req_send), 2U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc0_tx_hs.__PVT__req_send), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc0_tx_hs.__PVT__req_send), 2U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc0_tx_hs.__PVT__req_send), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_tx_hs.__PVT__req_send), 2U)))));
    vlSelfRef.__PVT__out_req_reqf_vc0[3U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc0_tx_hs.__PVT__req_send), 3U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc0_tx_hs.__PVT__req_send), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc0_tx_hs.__PVT__req_send), 3U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc0_tx_hs.__PVT__req_send), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_tx_hs.__PVT__req_send), 3U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc0_tx_hs.__PVT__req_send), 3U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc0_tx_hs.__PVT__req_send), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc0_tx_hs.__PVT__req_send), 3U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc0_tx_hs.__PVT__req_send), 3U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_tx_hs.__PVT__req_send), 3U)))));
    vlSelfRef.__PVT__out_req_reqf_vc0[4U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc0_tx_hs.__PVT__req_send), 4U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc0_tx_hs.__PVT__req_send), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc0_tx_hs.__PVT__req_send), 4U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc0_tx_hs.__PVT__req_send), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_tx_hs.__PVT__req_send), 4U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc0_tx_hs.__PVT__req_send), 4U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc0_tx_hs.__PVT__req_send), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc0_tx_hs.__PVT__req_send), 4U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc0_tx_hs.__PVT__req_send), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_tx_hs.__PVT__req_send), 4U)))));
    vlSelfRef.__PVT__out_req_reqf_vc0[5U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc0_tx_hs.__PVT__req_send), 5U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc0_tx_hs.__PVT__req_send), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc0_tx_hs.__PVT__req_send), 5U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc0_tx_hs.__PVT__req_send), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_tx_hs.__PVT__req_send), 5U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc0_tx_hs.__PVT__req_send), 5U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc0_tx_hs.__PVT__req_send), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc0_tx_hs.__PVT__req_send), 5U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc0_tx_hs.__PVT__req_send), 5U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_tx_hs.__PVT__req_send), 5U)))));
    vlSelfRef.__PVT__out_req_reqf_vc0[6U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc0_tx_hs.__PVT__req_send), 6U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc0_tx_hs.__PVT__req_send), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc0_tx_hs.__PVT__req_send), 6U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc0_tx_hs.__PVT__req_send), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_tx_hs.__PVT__req_send), 6U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc0_tx_hs.__PVT__req_send), 6U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc0_tx_hs.__PVT__req_send), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc0_tx_hs.__PVT__req_send), 6U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc0_tx_hs.__PVT__req_send), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_tx_hs.__PVT__req_send), 6U)))));
    vlSelfRef.__PVT__out_req_reqf_vc0[7U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc0_tx_hs.__PVT__req_send), 7U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc0_tx_hs.__PVT__req_send), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc0_tx_hs.__PVT__req_send), 7U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc0_tx_hs.__PVT__req_send), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_tx_hs.__PVT__req_send), 7U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc0_tx_hs.__PVT__req_send), 7U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc0_tx_hs.__PVT__req_send), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc0_tx_hs.__PVT__req_send), 7U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc0_tx_hs.__PVT__req_send), 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_tx_hs.__PVT__req_send), 7U)))));
    vlSelfRef.__PVT__out_req_reqf_vc0[8U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc0_tx_hs.__PVT__req_send), 8U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc0_tx_hs.__PVT__req_send), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc0_tx_hs.__PVT__req_send), 8U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc0_tx_hs.__PVT__req_send), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_tx_hs.__PVT__req_send), 8U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc0_tx_hs.__PVT__req_send), 8U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc0_tx_hs.__PVT__req_send), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc0_tx_hs.__PVT__req_send), 8U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc0_tx_hs.__PVT__req_send), 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_tx_hs.__PVT__req_send), 8U)))));
    vlSelfRef.__PVT__out_req_reqf_vc0[9U] = VL_CONCAT_III(10,5,5, 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc0_tx_hs.__PVT__req_send), 9U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc0_tx_hs.__PVT__req_send), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc0_tx_hs.__PVT__req_send), 9U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc0_tx_hs.__PVT__req_send), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_tx_hs.__PVT__req_send), 9U)))), 
                                                          VL_CONCAT_III(5,3,2, 
                                                                        VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc0_tx_hs.__PVT__req_send), 9U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc0_tx_hs.__PVT__req_send), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc0_tx_hs.__PVT__req_send), 9U)))), 
                                                                        VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc0_tx_hs.__PVT__req_send), 9U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_tx_hs.__PVT__req_send), 9U)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc0_rx_hs.__PVT__recv_vld 
        = VL_CONCAT_III(10,8,2, (0xffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_reqf_vc0), 2U, 8)), 
                        VL_EXTEND_II(2,1, (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_reqf_vc0), 0U))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc0_rx_hs.__PVT__recv_vld 
        = VL_CONCAT_III(10,3,7, (7U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_reqf_vc0), 7U, 3)), 
                        VL_EXTEND_II(7,6, (0x3fU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_reqf_vc0), 0U, 6))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc0_rx_hs.__PVT__recv_vld 
        = VL_CONCAT_III(10,2,8, (3U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_reqf_vc0), 8U, 2)), 
                        VL_EXTEND_II(8,7, (0x7fU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_reqf_vc0), 0U, 7))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc0_rx_hs.__PVT__recv_vld 
        = VL_CONCAT_III(10,1,9, (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_reqf_vc0), 9U)), 
                        VL_EXTEND_II(9,8, (0xffU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_reqf_vc0), 0U, 8))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc0_rx_hs.__PVT__recv_vld 
        = VL_EXTEND_II(10,9, (0x1ffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_reqf_vc0), 0U, 9)));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc0_rx_hs.__PVT__recv_vld 
        = VL_CONCAT_III(10,7,3, (0x7fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_reqf_vc0), 3U, 7)), 
                        VL_EXTEND_II(3,2, (3U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_reqf_vc0), 0U, 2))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc0_rx_hs.__PVT__recv_vld 
        = VL_CONCAT_III(10,6,4, (0x3fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_reqf_vc0), 4U, 6)), 
                        VL_EXTEND_II(4,3, (7U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_reqf_vc0), 0U, 3))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc0_rx_hs.__PVT__recv_vld 
        = VL_CONCAT_III(10,5,5, (0x1fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_reqf_vc0), 5U, 5)), 
                        VL_EXTEND_II(5,4, (0xfU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_reqf_vc0), 0U, 4))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_rx_hs.__PVT__recv_vld 
        = VL_CONCAT_III(10,4,6, (0xfU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_reqf_vc0), 6U, 4)), 
                        VL_EXTEND_II(6,5, (0x1fU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_reqf_vc0), 0U, 5))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_rx_hs.__PVT__recv_vld 
        = VL_CONCAT_III(10,9,1, (0x1ffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_valid_flit_reqf_vc0), 1U, 9)), 0U);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc0_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,8,2, (0xffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_reqf_vc0), 2U, 8)), 
                        VL_EXTEND_II(2,1, (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_reqf_vc0), 0U))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc0_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,3,7, (7U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_reqf_vc0), 7U, 3)), 
                        VL_EXTEND_II(7,6, (0x3fU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_reqf_vc0), 0U, 6))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc0_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,2,8, (3U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_reqf_vc0), 8U, 2)), 
                        VL_EXTEND_II(8,7, (0x7fU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_reqf_vc0), 0U, 7))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc0_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,1,9, (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_reqf_vc0), 9U)), 
                        VL_EXTEND_II(9,8, (0xffU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_reqf_vc0), 0U, 8))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc0_rx_hs.__PVT__recv_end 
        = VL_EXTEND_II(10,9, (0x1ffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_reqf_vc0), 0U, 9)));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc0_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,7,3, (0x7fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_reqf_vc0), 3U, 7)), 
                        VL_EXTEND_II(3,2, (3U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_reqf_vc0), 0U, 2))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc0_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,6,4, (0x3fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_reqf_vc0), 4U, 6)), 
                        VL_EXTEND_II(4,3, (7U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_reqf_vc0), 0U, 3))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc0_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,5,5, (0x1fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_reqf_vc0), 5U, 5)), 
                        VL_EXTEND_II(5,4, (0xfU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_reqf_vc0), 0U, 4))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,4,6, (0xfU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_reqf_vc0), 6U, 4)), 
                        VL_EXTEND_II(6,5, (0x1fU & 
                                           VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_reqf_vc0), 0U, 5))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_rx_hs.__PVT__recv_end 
        = VL_CONCAT_III(10,9,1, (0x1ffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__out_end_flit_reqf_vc0), 1U, 9)), 0U);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__l3_port_req_vc0_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,8,2, (0xffU & VL_SEL_IIII(10, 
                                                     vlSelfRef.__PVT__out_req_reqf_vc0
                                                     [1U], 2U, 8)), 
                        VL_EXTEND_II(2,1, (1U & VL_BITSEL_IIII(10, 
                                                               vlSelfRef.__PVT__out_req_reqf_vc0
                                                               [1U], 0U))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icn_port_req_vc0_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,3,7, (7U & VL_SEL_IIII(10, 
                                                  vlSelfRef.__PVT__out_req_reqf_vc0
                                                  [6U], 7U, 3)), 
                        VL_EXTEND_II(7,6, (0x3fU & 
                                           VL_SEL_IIII(10, 
                                                       vlSelfRef.__PVT__out_req_reqf_vc0
                                                       [6U], 0U, 6))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ice_port_req_vc0_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,2,8, (3U & VL_SEL_IIII(10, 
                                                  vlSelfRef.__PVT__out_req_reqf_vc0
                                                  [7U], 8U, 2)), 
                        VL_EXTEND_II(8,7, (0x7fU & 
                                           VL_SEL_IIII(10, 
                                                       vlSelfRef.__PVT__out_req_reqf_vc0
                                                       [7U], 0U, 7))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__ics_port_req_vc0_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,1,9, (1U & VL_BITSEL_IIII(10, 
                                                     vlSelfRef.__PVT__out_req_reqf_vc0
                                                     [8U], 9U)), 
                        VL_EXTEND_II(9,8, (0xffU & 
                                           VL_SEL_IIII(10, 
                                                       vlSelfRef.__PVT__out_req_reqf_vc0
                                                       [8U], 0U, 8))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__icw_port_req_vc0_rx_hs.__PVT__recv_req 
        = VL_EXTEND_II(10,9, (0x1ffU & VL_SEL_IIII(10, 
                                                   vlSelfRef.__PVT__out_req_reqf_vc0
                                                   [9U], 0U, 9)));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,9,1, (0x1ffU & VL_SEL_IIII(10, 
                                                      vlSelfRef.__PVT__out_req_reqf_vc0
                                                      [0U], 1U, 9)), 0U);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n0_port_req_vc0_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,7,3, (0x7fU & VL_SEL_IIII(10, 
                                                     vlSelfRef.__PVT__out_req_reqf_vc0
                                                     [2U], 3U, 7)), 
                        VL_EXTEND_II(3,2, (3U & VL_SEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_req_reqf_vc0
                                                            [2U], 0U, 2))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_req_vc0_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,6,4, (0x3fU & VL_SEL_IIII(10, 
                                                     vlSelfRef.__PVT__out_req_reqf_vc0
                                                     [3U], 4U, 6)), 
                        VL_EXTEND_II(4,3, (7U & VL_SEL_IIII(10, 
                                                            vlSelfRef.__PVT__out_req_reqf_vc0
                                                            [3U], 0U, 3))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n2_port_req_vc0_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,5,5, (0x1fU & VL_SEL_IIII(10, 
                                                     vlSelfRef.__PVT__out_req_reqf_vc0
                                                     [4U], 5U, 5)), 
                        VL_EXTEND_II(5,4, (0xfU & VL_SEL_IIII(10, 
                                                              vlSelfRef.__PVT__out_req_reqf_vc0
                                                              [4U], 0U, 4))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_rx_hs.__PVT__recv_req 
        = VL_CONCAT_III(10,4,6, (0xfU & VL_SEL_IIII(10, 
                                                    vlSelfRef.__PVT__out_req_reqf_vc0
                                                    [5U], 6U, 4)), 
                        VL_EXTEND_II(6,5, (0x1fU & 
                                           VL_SEL_IIII(10, 
                                                       vlSelfRef.__PVT__out_req_reqf_vc0
                                                       [5U], 0U, 5))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__54(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__54\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p2_rx_is_inactive = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__rx_is_inactive;
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__pp_rx_is_inactive, vlSelfRef.__PVT__p2_rx_is_inactive);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__55(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__55\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(154,vlSelfRef.__PVT__cc_reqflit, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0.__PVT__cc_reqflit);
    VL_ASSIGN_W(154,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0.__PVT__cc_reqflit, vlSelfRef.__PVT__cc_reqflit);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__56(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__56\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__activate_l3 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__activate_ctrlr_port_or_ic_tx_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__57(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__57\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__activate_cc = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__activate_ctrlr_port_or_ic_tx_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__58(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__58\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p0_tx_activate_clk = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__tx_activate_clk;
    vlSelfRef.__PVT__p1_tx_activate_clk = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__tx_activate_clk;
    vlSelfRef.__PVT__p2_tx_activate_clk = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__tx_activate_clk;
    vlSelfRef.__PVT__p3_tx_activate_clk = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__tx_activate_clk;
    vlSelfRef.__PVT__activate_pp_tx = VL_CONCAT_III(4,2,2, 
                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__p3_tx_activate_clk), (IData)(vlSelfRef.__PVT__p2_tx_activate_clk)), 
                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__p1_tx_activate_clk), (IData)(vlSelfRef.__PVT__p0_tx_activate_clk)));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0.__PVT__i_activate_pp_tx 
        = vlSelfRef.__PVT__activate_pp_tx;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__59(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__59\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0.__PVT__i_pp_rx_is_inactive 
        = vlSelfRef.__PVT__pp_rx_is_inactive;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__60(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__60\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__PVT__p3_out_flit_rspf_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__flit_out_rspf_vc0);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__p3_out_flit_rspf_vc1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__flit_out_rspf_vc1);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__p3_out_flit_datf_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__flit_out_datf_vc0);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__p3_out_flit_datf_vc1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__flit_out_datf_vc1);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__61(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__61\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__PVT__p2_out_flit_rspf_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__flit_out_rspf_vc0);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__p2_out_flit_rspf_vc1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__flit_out_rspf_vc1);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__p2_out_flit_datf_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__flit_out_datf_vc0);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__p2_out_flit_datf_vc1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__flit_out_datf_vc1);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__62(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__62\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<8>/*255:0*/ __Vtemp_2;
    VlWide<10>/*319:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_4;
    VlWide<8>/*255:0*/ __Vtemp_5;
    VlWide<10>/*319:0*/ __Vtemp_6;
    VlWide<5>/*159:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_8;
    VlWide<8>/*255:0*/ __Vtemp_9;
    VlWide<10>/*319:0*/ __Vtemp_10;
    VlWide<5>/*159:0*/ __Vtemp_11;
    VlWide<8>/*255:0*/ __Vtemp_12;
    VlWide<10>/*319:0*/ __Vtemp_13;
    VlWide<5>/*159:0*/ __Vtemp_14;
    // Body
    VL_CONCAT_WWW(158,79,79, __Vtemp_1, vlSelfRef.__PVT__l3_out_flit_rspf_vc0, vlSelfRef.__PVT__cc_out_flit_rspf_vc0);
    VL_CONCAT_WWW(237,79,158, __Vtemp_2, vlSelfRef.__PVT__p0_out_flit_rspf_vc0, __Vtemp_1);
    VL_CONCAT_WWW(316,79,237, __Vtemp_3, vlSelfRef.__PVT__p1_out_flit_rspf_vc0, __Vtemp_2);
    VL_ASSIGNSEL_WW(790,316,0U, vlSelfRef.__PVT__cc_in_flit_all_rsp_vc0, __Vtemp_3);
    VL_CONCAT_WWW(158,79,79, __Vtemp_4, vlSelfRef.__PVT__p3_out_flit_rspf_vc0, vlSelfRef.__PVT__p2_out_flit_rspf_vc0);
    VL_CONCAT_WWW(237,79,158, __Vtemp_5, vlSelfRef.__PVT__icn_out_flit_rspf_vc0, __Vtemp_4);
    VL_CONCAT_WWW(316,79,237, __Vtemp_6, vlSelfRef.__PVT__ice_out_flit_rspf_vc0, __Vtemp_5);
    VL_ASSIGNSEL_WW(790,316,0x13cU, vlSelfRef.__PVT__cc_in_flit_all_rsp_vc0, __Vtemp_6);
    VL_CONCAT_WWW(158,79,79, __Vtemp_7, vlSelfRef.__PVT__icw_out_flit_rspf_vc0, vlSelfRef.__PVT__ics_out_flit_rspf_vc0);
    VL_ASSIGNSEL_WW(790,158,0x278U, vlSelfRef.__PVT__cc_in_flit_all_rsp_vc0, __Vtemp_7);
    VL_CONCAT_WWW(158,79,79, __Vtemp_8, vlSelfRef.__PVT__l3_out_flit_rspf_vc1, vlSelfRef.__PVT__cc_out_flit_rspf_vc1);
    VL_CONCAT_WWW(237,79,158, __Vtemp_9, vlSelfRef.__PVT__p0_out_flit_rspf_vc1, __Vtemp_8);
    VL_CONCAT_WWW(316,79,237, __Vtemp_10, vlSelfRef.__PVT__p1_out_flit_rspf_vc1, __Vtemp_9);
    VL_ASSIGNSEL_WW(790,316,0U, vlSelfRef.__PVT__cc_in_flit_all_rsp_vc1, __Vtemp_10);
    VL_CONCAT_WWW(158,79,79, __Vtemp_11, vlSelfRef.__PVT__p3_out_flit_rspf_vc1, vlSelfRef.__PVT__p2_out_flit_rspf_vc1);
    VL_CONCAT_WWW(237,79,158, __Vtemp_12, vlSelfRef.__PVT__icn_out_flit_rspf_vc1, __Vtemp_11);
    VL_CONCAT_WWW(316,79,237, __Vtemp_13, vlSelfRef.__PVT__ice_out_flit_rspf_vc1, __Vtemp_12);
    VL_ASSIGNSEL_WW(790,316,0x13cU, vlSelfRef.__PVT__cc_in_flit_all_rsp_vc1, __Vtemp_13);
    VL_CONCAT_WWW(158,79,79, __Vtemp_14, vlSelfRef.__PVT__icw_out_flit_rspf_vc1, vlSelfRef.__PVT__ics_out_flit_rspf_vc1);
    VL_ASSIGNSEL_WW(790,158,0x278U, vlSelfRef.__PVT__cc_in_flit_all_rsp_vc1, __Vtemp_14);
    VL_ASSIGN_W(790,vlSelfRef.__PVT__icn_in_flit_all_rsp_vc0, vlSelfRef.__PVT__cc_in_flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSelfRef.__PVT__ice_in_flit_all_rsp_vc0, vlSelfRef.__PVT__cc_in_flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSelfRef.__PVT__ics_in_flit_all_rsp_vc0, vlSelfRef.__PVT__cc_in_flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSelfRef.__PVT__icw_in_flit_all_rsp_vc0, vlSelfRef.__PVT__cc_in_flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__flit_all_rsp_vc0, vlSelfRef.__PVT__cc_in_flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSelfRef.__PVT__l3_in_flit_all_rsp_vc0, vlSelfRef.__PVT__cc_in_flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSelfRef.__PVT__p0_in_flit_all_rsp_vc0, vlSelfRef.__PVT__cc_in_flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSelfRef.__PVT__p1_in_flit_all_rsp_vc0, vlSelfRef.__PVT__cc_in_flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSelfRef.__PVT__p2_in_flit_all_rsp_vc0, vlSelfRef.__PVT__cc_in_flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSelfRef.__PVT__p3_in_flit_all_rsp_vc0, vlSelfRef.__PVT__cc_in_flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSelfRef.__PVT__icn_in_flit_all_rsp_vc1, vlSelfRef.__PVT__cc_in_flit_all_rsp_vc1);
    VL_ASSIGN_W(790,vlSelfRef.__PVT__ice_in_flit_all_rsp_vc1, vlSelfRef.__PVT__cc_in_flit_all_rsp_vc1);
    VL_ASSIGN_W(790,vlSelfRef.__PVT__ics_in_flit_all_rsp_vc1, vlSelfRef.__PVT__cc_in_flit_all_rsp_vc1);
    VL_ASSIGN_W(790,vlSelfRef.__PVT__icw_in_flit_all_rsp_vc1, vlSelfRef.__PVT__cc_in_flit_all_rsp_vc1);
    VL_ASSIGN_W(790,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__flit_all_rsp_vc1, vlSelfRef.__PVT__cc_in_flit_all_rsp_vc1);
    VL_ASSIGN_W(790,vlSelfRef.__PVT__l3_in_flit_all_rsp_vc1, vlSelfRef.__PVT__cc_in_flit_all_rsp_vc1);
    VL_ASSIGN_W(790,vlSelfRef.__PVT__p0_in_flit_all_rsp_vc1, vlSelfRef.__PVT__cc_in_flit_all_rsp_vc1);
    VL_ASSIGN_W(790,vlSelfRef.__PVT__p1_in_flit_all_rsp_vc1, vlSelfRef.__PVT__cc_in_flit_all_rsp_vc1);
    VL_ASSIGN_W(790,vlSelfRef.__PVT__p2_in_flit_all_rsp_vc1, vlSelfRef.__PVT__cc_in_flit_all_rsp_vc1);
    VL_ASSIGN_W(790,vlSelfRef.__PVT__p3_in_flit_all_rsp_vc1, vlSelfRef.__PVT__cc_in_flit_all_rsp_vc1);
    VL_ASSIGN_W(790,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__flit_all_rsp_vc0, vlSelfRef.__PVT__l3_in_flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__flit_all_rsp_vc0, vlSelfRef.__PVT__p0_in_flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__flit_all_rsp_vc0, vlSelfRef.__PVT__p1_in_flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__flit_all_rsp_vc0, vlSelfRef.__PVT__p2_in_flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__flit_all_rsp_vc0, vlSelfRef.__PVT__p3_in_flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__flit_all_rsp_vc1, vlSelfRef.__PVT__l3_in_flit_all_rsp_vc1);
    VL_ASSIGN_W(790,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__flit_all_rsp_vc1, vlSelfRef.__PVT__p0_in_flit_all_rsp_vc1);
    VL_ASSIGN_W(790,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__flit_all_rsp_vc1, vlSelfRef.__PVT__p1_in_flit_all_rsp_vc1);
    VL_ASSIGN_W(790,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__flit_all_rsp_vc1, vlSelfRef.__PVT__p2_in_flit_all_rsp_vc1);
    VL_ASSIGN_W(790,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__flit_all_rsp_vc1, vlSelfRef.__PVT__p3_in_flit_all_rsp_vc1);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__63(Vsig_topology_top_sig_cl0_clustercore__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsig_topology_top_sig_cl0_clustercore__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__63\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<43>/*1375:0*/ __Vtemp_1;
    VlWide<65>/*2079:0*/ __Vtemp_2;
    VlWide<86>/*2751:0*/ __Vtemp_3;
    VlWide<43>/*1375:0*/ __Vtemp_4;
    VlWide<65>/*2079:0*/ __Vtemp_5;
    VlWide<86>/*2751:0*/ __Vtemp_6;
    VlWide<43>/*1375:0*/ __Vtemp_7;
    VlWide<43>/*1375:0*/ __Vtemp_8;
    VlWide<65>/*2079:0*/ __Vtemp_9;
    VlWide<86>/*2751:0*/ __Vtemp_10;
    VlWide<43>/*1375:0*/ __Vtemp_11;
    VlWide<65>/*2079:0*/ __Vtemp_12;
    VlWide<86>/*2751:0*/ __Vtemp_13;
    VlWide<43>/*1375:0*/ __Vtemp_14;
    // Body
    VL_CONCAT_WWW(1372,686,686, __Vtemp_1, vlSelfRef.__PVT__l3_out_flit_datf_vc0, vlSelfRef.__PVT__cc_out_flit_datf_vc0);
    VL_CONCAT_WWW(2058,686,1372, __Vtemp_2, vlSelfRef.__PVT__p0_out_flit_datf_vc0, __Vtemp_1);
    VL_CONCAT_WWW(2744,686,2058, __Vtemp_3, vlSelfRef.__PVT__p1_out_flit_datf_vc0, __Vtemp_2);
    VL_ASSIGNSEL_WW(6860,2744,0U, vlSelfRef.__PVT__cc_in_flit_all_dat_vc0, __Vtemp_3);
    VL_CONCAT_WWW(1372,686,686, __Vtemp_4, vlSelfRef.__PVT__p3_out_flit_datf_vc0, vlSelfRef.__PVT__p2_out_flit_datf_vc0);
    VL_CONCAT_WWW(2058,686,1372, __Vtemp_5, vlSelfRef.__PVT__icn_out_flit_datf_vc0, __Vtemp_4);
    VL_CONCAT_WWW(2744,686,2058, __Vtemp_6, vlSelfRef.__PVT__ice_out_flit_datf_vc0, __Vtemp_5);
    VL_ASSIGNSEL_WW(6860,2744,0xab8U, vlSelfRef.__PVT__cc_in_flit_all_dat_vc0, __Vtemp_6);
    VL_CONCAT_WWW(1372,686,686, __Vtemp_7, vlSelfRef.__PVT__icw_out_flit_datf_vc0, vlSelfRef.__PVT__ics_out_flit_datf_vc0);
    VL_ASSIGNSEL_WW(6860,1372,0x1570U, vlSelfRef.__PVT__cc_in_flit_all_dat_vc0, __Vtemp_7);
    VL_CONCAT_WWW(1372,686,686, __Vtemp_8, vlSelfRef.__PVT__l3_out_flit_datf_vc1, vlSelfRef.__PVT__cc_out_flit_datf_vc1);
    VL_CONCAT_WWW(2058,686,1372, __Vtemp_9, vlSelfRef.__PVT__p0_out_flit_datf_vc1, __Vtemp_8);
    VL_CONCAT_WWW(2744,686,2058, __Vtemp_10, vlSelfRef.__PVT__p1_out_flit_datf_vc1, __Vtemp_9);
    VL_ASSIGNSEL_WW(6860,2744,0U, vlSelfRef.__PVT__cc_in_flit_all_dat_vc1, __Vtemp_10);
    VL_CONCAT_WWW(1372,686,686, __Vtemp_11, vlSelfRef.__PVT__p3_out_flit_datf_vc1, vlSelfRef.__PVT__p2_out_flit_datf_vc1);
    VL_CONCAT_WWW(2058,686,1372, __Vtemp_12, vlSelfRef.__PVT__icn_out_flit_datf_vc1, __Vtemp_11);
    VL_CONCAT_WWW(2744,686,2058, __Vtemp_13, vlSelfRef.__PVT__ice_out_flit_datf_vc1, __Vtemp_12);
    VL_ASSIGNSEL_WW(6860,2744,0xab8U, vlSelfRef.__PVT__cc_in_flit_all_dat_vc1, __Vtemp_13);
    VL_CONCAT_WWW(1372,686,686, __Vtemp_14, vlSelfRef.__PVT__icw_out_flit_datf_vc1, vlSelfRef.__PVT__ics_out_flit_datf_vc1);
    VL_ASSIGNSEL_WW(6860,1372,0x1570U, vlSelfRef.__PVT__cc_in_flit_all_dat_vc1, __Vtemp_14);
    VL_ASSIGN_W(6860,vlSelfRef.__PVT__icn_in_flit_all_dat_vc0, vlSelfRef.__PVT__cc_in_flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSelfRef.__PVT__ice_in_flit_all_dat_vc0, vlSelfRef.__PVT__cc_in_flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSelfRef.__PVT__ics_in_flit_all_dat_vc0, vlSelfRef.__PVT__cc_in_flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSelfRef.__PVT__icw_in_flit_all_dat_vc0, vlSelfRef.__PVT__cc_in_flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__flit_all_dat_vc0, vlSelfRef.__PVT__cc_in_flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSelfRef.__PVT__l3_in_flit_all_dat_vc0, vlSelfRef.__PVT__cc_in_flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSelfRef.__PVT__p0_in_flit_all_dat_vc0, vlSelfRef.__PVT__cc_in_flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSelfRef.__PVT__p1_in_flit_all_dat_vc0, vlSelfRef.__PVT__cc_in_flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSelfRef.__PVT__p2_in_flit_all_dat_vc0, vlSelfRef.__PVT__cc_in_flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSelfRef.__PVT__p3_in_flit_all_dat_vc0, vlSelfRef.__PVT__cc_in_flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSelfRef.__PVT__icn_in_flit_all_dat_vc1, vlSelfRef.__PVT__cc_in_flit_all_dat_vc1);
    VL_ASSIGN_W(6860,vlSelfRef.__PVT__ice_in_flit_all_dat_vc1, vlSelfRef.__PVT__cc_in_flit_all_dat_vc1);
    VL_ASSIGN_W(6860,vlSelfRef.__PVT__ics_in_flit_all_dat_vc1, vlSelfRef.__PVT__cc_in_flit_all_dat_vc1);
    VL_ASSIGN_W(6860,vlSelfRef.__PVT__icw_in_flit_all_dat_vc1, vlSelfRef.__PVT__cc_in_flit_all_dat_vc1);
    VL_ASSIGN_W(6860,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0.__PVT__flit_all_dat_vc1, vlSelfRef.__PVT__cc_in_flit_all_dat_vc1);
    VL_ASSIGN_W(6860,vlSelfRef.__PVT__l3_in_flit_all_dat_vc1, vlSelfRef.__PVT__cc_in_flit_all_dat_vc1);
    VL_ASSIGN_W(6860,vlSelfRef.__PVT__p0_in_flit_all_dat_vc1, vlSelfRef.__PVT__cc_in_flit_all_dat_vc1);
    VL_ASSIGN_W(6860,vlSelfRef.__PVT__p1_in_flit_all_dat_vc1, vlSelfRef.__PVT__cc_in_flit_all_dat_vc1);
    VL_ASSIGN_W(6860,vlSelfRef.__PVT__p2_in_flit_all_dat_vc1, vlSelfRef.__PVT__cc_in_flit_all_dat_vc1);
    VL_ASSIGN_W(6860,vlSelfRef.__PVT__p3_in_flit_all_dat_vc1, vlSelfRef.__PVT__cc_in_flit_all_dat_vc1);
    VL_ASSIGN_W(6860,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__flit_all_dat_vc0, vlSelfRef.__PVT__l3_in_flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__flit_all_dat_vc0, vlSelfRef.__PVT__p0_in_flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__flit_all_dat_vc0, vlSelfRef.__PVT__p1_in_flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__flit_all_dat_vc0, vlSelfRef.__PVT__p2_in_flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__flit_all_dat_vc0, vlSelfRef.__PVT__p3_in_flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0.__PVT__flit_all_dat_vc1, vlSelfRef.__PVT__l3_in_flit_all_dat_vc1);
    VL_ASSIGN_W(6860,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0.__PVT__flit_all_dat_vc1, vlSelfRef.__PVT__p0_in_flit_all_dat_vc1);
    VL_ASSIGN_W(6860,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1.__PVT__flit_all_dat_vc1, vlSelfRef.__PVT__p1_in_flit_all_dat_vc1);
    VL_ASSIGN_W(6860,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2.__PVT__flit_all_dat_vc1, vlSelfRef.__PVT__p2_in_flit_all_dat_vc1);
    VL_ASSIGN_W(6860,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3.__PVT__flit_all_dat_vc1, vlSelfRef.__PVT__p3_in_flit_all_dat_vc1);
}
