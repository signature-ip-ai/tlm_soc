// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_common_porttop__pi4.h"

VL_ATTR_COLD void Vsig_topology_top_sig_common_porttop__pi4___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__enable_balanced_routing = 0U;
    vlSelfRef.__PVT__rx_activate_clk = 0U;
    vlSelfRef.__PVT__tx_is_inactive = 0U;
    vlSelfRef.__PVT__ic_RX_SNPLCRDV_VC1 = 0U;
    vlSelfRef.__PVT__ic_RX_RSPLCRDV_VC1 = 0U;
    vlSelfRef.__PVT__ic_RX_DATLCRDV_VC1 = 0U;
    vlSelfRef.__PVT__ic_TX_REQFLITPEND = 0U;
    vlSelfRef.__PVT__ic_TX_REQFLIT_snp_or_req_bit = 0U;
    vlSelfRef.__PVT__ic_TX_REQFLIT_metadata = 0U;
    vlSelfRef.__PVT__ic_TX_RSPFLITPEND = 0U;
    vlSelfRef.__PVT__ic_TX_RSPFLIT_metadata = 0U;
    vlSelfRef.__PVT__ic_TX_DATFLITPEND = 0U;
    vlSelfRef.__PVT__ic_TX_DATFLIT_metadata = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_tx_hs.__PVT__vld_send = 1U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_tx_hs.__PVT__vld_send = 1U;
}

VL_ATTR_COLD void Vsig_topology_top_sig_common_porttop__pi4___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__0(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__i_ucie_bridge_locations[0U] 
        = vlSelfRef.__PVT__i_ucie_bridge_locations[0U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__enable_balanced_routing 
        = vlSelfRef.__PVT__enable_balanced_routing;
}

VL_ATTR_COLD void Vsig_topology_top_sig_common_porttop__pi4___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__1(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__valid_flit_out_reqf_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__valid_flit_out_reqf_vc0;
    vlSelfRef.__Vcellout__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__end_flit_out_reqf_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__end_flit_out_reqf_vc0;
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_reqf_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__flit_out_reqf_vc0);
    vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__reqf_vc0_tx_hs_req_send 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__req_reqf_vc0;
    vlSelfRef.__PVT__icx_exist_req = vlSelfRef.__PVT__icx_exist;
    vlSelfRef.__PVT__icx_exist_rsp = vlSelfRef.__PVT__icx_exist;
    vlSelfRef.__PVT__icx_exist_dat = vlSelfRef.__PVT__icx_exist;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__mycluster_id 
        = vlSelfRef.__PVT__mycluster_id;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__reqlcrdv 
        = vlSelfRef.__PVT__ic_TX_REQLCRDV_VC0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__datlcrdv 
        = vlSelfRef.__PVT__ic_TX_DATLCRDV_VC0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__rsplcrdv 
        = vlSelfRef.__PVT__ic_TX_RSPLCRDV_VC0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__ic_RX_SNPFLITV 
        = vlSelfRef.__PVT__ic_RX_SNPFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__ic_RX_RSPFLITV 
        = vlSelfRef.__PVT__ic_RX_RSPFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__ic_RX_DATFLITV 
        = vlSelfRef.__PVT__ic_RX_DATFLITV;
    VL_ASSIGN_W(73,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__ic_RX_RSPFLIT, vlSelfRef.__PVT__ic_RX_RSPFLIT);
    VL_ASSIGN_W(680,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__ic_RX_DATFLIT, vlSelfRef.__PVT__ic_RX_DATFLIT);
    VL_CONCAT_WIW(152,1,151, vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__ic_RX_SNPFLIT, (IData)(vlSelfRef.__PVT__ic_RX_SNPFLIT_snp_or_req_bit), vlSelfRef.__PVT__ic_RX_SNPFLIT);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_tx_hs.__PVT__vld_send 
        = vlSelfRef.__Vcellout__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__valid_flit_out_reqf_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_tx_hs.__PVT__end_send 
        = vlSelfRef.__Vcellout__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__end_flit_out_reqf_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_tx_hs.__PVT__req_send 
        = vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__reqf_vc0_tx_hs_req_send;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__icx_exist_req 
        = vlSelfRef.__PVT__icx_exist_req;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__icx_exist_rsp 
        = vlSelfRef.__PVT__icx_exist_rsp;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__icx_exist_dat 
        = vlSelfRef.__PVT__icx_exist_dat;
    VL_ASSIGN_W(152,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__ic_RX_SNPFLIT, vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__ic_RX_SNPFLIT);
}

VL_ATTR_COLD void Vsig_topology_top_sig_common_porttop__pi4___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__2(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__flit_out_rspf_vc0);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__flit_out_rspf_vc1);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelfRef.__PVT__ic_TX_REQFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__flitv_out_req;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__ic_TX_REQFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__flit_out_req);
}

VL_ATTR_COLD void Vsig_topology_top_sig_common_porttop__pi4___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__3(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__flit_all_req_vc0, vlSelfRef.__PVT__flit_all_req_vc0);
}

VL_ATTR_COLD void Vsig_topology_top_sig_common_porttop__pi4___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__4(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__ic_gclk 
        = vlSelfRef.__PVT__rx_ic_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__ic_gclk 
        = vlSelfRef.__PVT__tx_ic_gclk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_common_porttop__pi4___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__5(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__porthas_datgnt_fromcc 
        = vlSelfRef.__PVT__porthas_datgnt;
}

VL_ATTR_COLD void Vsig_topology_top_sig_common_porttop__pi4___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__6(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_TX_DATFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__flit_out_dat);
    vlSelfRef.__PVT__ic_TX_DATFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__flitv_out_dat;
}

VL_ATTR_COLD void Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__0(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__ic_RX_RSPFLITPEND 
        = vlSelfRef.__PVT__ic_RX_RSPFLITPEND;
}

VL_ATTR_COLD void Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__1(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__reqf_vc0_rx_hs_gnt_recv 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__gnt_vec_req_vc0;
    vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__reqf_vc1_rx_hs_gnt_recv 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__gnt_vec_req_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_rx_hs.__PVT__gnt_recv 
        = vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__reqf_vc0_rx_hs_gnt_recv;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_rx_hs.__PVT__gnt_recv 
        = vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__reqf_vc1_rx_hs_gnt_recv;
}

VL_ATTR_COLD void Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__2(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__gnt_vec_dat_vc1;
    vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__gnt_vec_dat_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_rx_hs.__PVT__gnt_recv 
        = vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_rx_hs.__PVT__gnt_recv 
        = vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv;
}

VL_ATTR_COLD void Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__3(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__rspf_vc1_rx_hs_gnt_recv 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__gnt_vec_rsp_vc1;
    vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__rspf_vc0_rx_hs_gnt_recv 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__gnt_vec_rsp_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_rx_hs.__PVT__gnt_recv 
        = vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__rspf_vc1_rx_hs_gnt_recv;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_rx_hs.__PVT__gnt_recv 
        = vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__rspf_vc0_rx_hs_gnt_recv;
}

VL_ATTR_COLD void Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__4(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__gnt_reqf_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_tx_hs.__PVT__send_gnt;
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__gnt_reqf_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_tx_hs.__PVT__send_gnt;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__gnt_reqf_vc0 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__gnt_reqf_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__gnt_reqf_vc1 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__gnt_reqf_vc1;
}

VL_ATTR_COLD void Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__5(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__end_flit_out_reqf_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__end_flit_out_reqf_vc1;
    vlSelfRef.__Vcellout__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__valid_flit_out_reqf_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__valid_flit_out_reqf_vc1;
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_reqf_vc1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__flit_out_reqf_vc1);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_tx_hs.__PVT__end_send 
        = vlSelfRef.__Vcellout__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__end_flit_out_reqf_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_tx_hs.__PVT__vld_send 
        = vlSelfRef.__Vcellout__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__valid_flit_out_reqf_vc1;
}

VL_ATTR_COLD void Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__6(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__flit_all_req_vc1, vlSelfRef.__PVT__flit_all_req_vc1);
    vlSelfRef.__PVT__ic_RX_SNPLCRDV_VC0 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__ic_RX_SNPLCRDV;
    vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__reqf_vc1_tx_hs_req_send 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__req_reqf_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_tx_hs.__PVT__req_send 
        = vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__reqf_vc1_tx_hs_req_send;
}

VL_ATTR_COLD void Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__7(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__gnt_datf_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_tx_hs.__PVT__send_gnt;
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__gnt_datf_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_tx_hs.__PVT__send_gnt;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__gnt_datf_vc1 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__gnt_datf_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__gnt_datf_vc0 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__gnt_datf_vc0;
}

VL_ATTR_COLD void Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__8(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__valid_flit_out_datf_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__valid_flit_out_datf_vc1;
    vlSelfRef.__Vcellout__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__end_flit_out_datf_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__end_flit_out_datf_vc1;
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__flit_out_datf_vc1);
    vlSelfRef.__Vcellout__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__valid_flit_out_datf_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__valid_flit_out_datf_vc0;
    vlSelfRef.__Vcellout__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__end_flit_out_datf_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__end_flit_out_datf_vc0;
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__flit_out_datf_vc0);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_tx_hs.__PVT__vld_send 
        = vlSelfRef.__Vcellout__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__valid_flit_out_datf_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_tx_hs.__PVT__end_send 
        = vlSelfRef.__Vcellout__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__end_flit_out_datf_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_tx_hs.__PVT__vld_send 
        = vlSelfRef.__Vcellout__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__valid_flit_out_datf_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_tx_hs.__PVT__end_send 
        = vlSelfRef.__Vcellout__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__end_flit_out_datf_vc0;
}

VL_ATTR_COLD void Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__9(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ic_RX_DATLCRDV_VC0 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__ic_RX_DATLCRDV;
    vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__datf_vc1_tx_hs_req_send 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__req_datf_vc1;
    vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__datf_vc0_tx_hs_req_send 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__req_datf_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_tx_hs.__PVT__req_send 
        = vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__datf_vc1_tx_hs_req_send;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_tx_hs.__PVT__req_send 
        = vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__datf_vc0_tx_hs_req_send;
}

VL_ATTR_COLD void Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__10(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__gnt_rspf_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_tx_hs.__PVT__send_gnt;
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__gnt_rspf_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_tx_hs.__PVT__send_gnt;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__gnt_rspf_vc1 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__gnt_rspf_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__gnt_rspf_vc0 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__gnt_rspf_vc0;
}

VL_ATTR_COLD void Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__11(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__11\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__end_flit_out_rspf_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__end_flit_out_rspf_vc1;
    vlSelfRef.__Vcellout__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__end_flit_out_rspf_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__end_flit_out_rspf_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_tx_hs.__PVT__end_send 
        = vlSelfRef.__Vcellout__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__end_flit_out_rspf_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_tx_hs.__PVT__end_send 
        = vlSelfRef.__Vcellout__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__end_flit_out_rspf_vc0;
}

VL_ATTR_COLD void Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__12(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__12\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ic_RX_RSPLCRDV_VC0 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__ic_RX_RSPLCRDV;
    vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__rspf_vc1_tx_hs_req_send 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__req_rspf_vc1;
    vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__rspf_vc0_tx_hs_req_send 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__req_rspf_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_tx_hs.__PVT__req_send 
        = vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__rspf_vc1_tx_hs_req_send;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_tx_hs.__PVT__req_send 
        = vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__rspf_vc0_tx_hs_req_send;
}

VL_ATTR_COLD void Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__13(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__13\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__ic_RX_DATFLITPEND 
        = vlSelfRef.__PVT__ic_RX_DATFLITPEND;
}

VL_ATTR_COLD void Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__14(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__14\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__porthas_rspgnt_fromcc 
        = vlSelfRef.__PVT__porthas_rspgnt;
}

VL_ATTR_COLD void Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__15(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__15\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ic_TX_RSPFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__flitv_out_rsp;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__ic_TX_RSPFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__flit_out_rsp);
}

VL_ATTR_COLD void Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__16(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__16\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ctrlr_port_or_ic_rx_is_inactive 
        = (1U & (~ (((((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_tx_hs.__PVT__req_send)) 
                        | VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_tx_hs.__PVT__req_send))) 
                       | VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_tx_hs.__PVT__req_send))) 
                      | VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_tx_hs.__PVT__req_send))) 
                     | VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_tx_hs.__PVT__req_send))) 
                    | VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_tx_hs.__PVT__req_send)))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__17(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__17\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__ic_RX_SNPFLITPEND 
        = vlSelfRef.__PVT__ic_RX_SNPFLITPEND;
}

VL_ATTR_COLD void Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__18(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__18\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__valid_req_vec_req_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_rx_hs.__PVT__recv_vld;
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__end_req_vec_req_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_rx_hs.__PVT__recv_end;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__valid_req_vec_req_vc1 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__valid_req_vec_req_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__end_req_vec_req_vc1 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__end_req_vec_req_vc1;
}

VL_ATTR_COLD void Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__19(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__19\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__req_vec_req_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_rx_hs.__PVT__recv_req;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__req_vec_req_vc1 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__req_vec_req_vc1;
}

VL_ATTR_COLD void Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__20(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__20\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__end_req_vec_rsp_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_rx_hs.__PVT__recv_end;
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__end_req_vec_rsp_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_rx_hs.__PVT__recv_end;
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__req_vec_rsp_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_rx_hs.__PVT__recv_req;
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__req_vec_rsp_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_rx_hs.__PVT__recv_req;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__end_req_vec_rsp_vc0 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__end_req_vec_rsp_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__end_req_vec_rsp_vc1 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__end_req_vec_rsp_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__req_vec_rsp_vc0 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__req_vec_rsp_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__req_vec_rsp_vc1 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__req_vec_rsp_vc1;
}

VL_ATTR_COLD void Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__21(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__21\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__valid_req_vec_dat_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_rx_hs.__PVT__recv_vld;
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__end_req_vec_dat_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_rx_hs.__PVT__recv_end;
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__valid_req_vec_dat_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_rx_hs.__PVT__recv_vld;
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__end_req_vec_dat_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_rx_hs.__PVT__recv_end;
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__req_vec_dat_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_rx_hs.__PVT__recv_req;
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__req_vec_dat_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_rx_hs.__PVT__recv_req;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__valid_req_vec_dat_vc0 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__valid_req_vec_dat_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__end_req_vec_dat_vc0 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__end_req_vec_dat_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__valid_req_vec_dat_vc1 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__valid_req_vec_dat_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__end_req_vec_dat_vc1 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__end_req_vec_dat_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__req_vec_dat_vc0 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__req_vec_dat_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__req_vec_dat_vc1 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__req_vec_dat_vc1;
}

VL_ATTR_COLD void Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__22(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__22\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__valid_req_vec_req_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_rx_hs.__PVT__recv_vld;
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__end_req_vec_req_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_rx_hs.__PVT__recv_end;
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__req_vec_req_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_rx_hs.__PVT__recv_req;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__valid_req_vec_req_vc0 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__valid_req_vec_req_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__end_req_vec_req_vc0 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__end_req_vec_req_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__req_vec_req_vc0 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__req_vec_req_vc0;
}

VL_ATTR_COLD void Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__23(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__23\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__activate_ctrlr_port_or_ic_tx_clk 
        = (((((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_rx_hs.__PVT__recv_req)) 
               | VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_rx_hs.__PVT__recv_req))) 
              | VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_rx_hs.__PVT__recv_req))) 
             | VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_rx_hs.__PVT__recv_req))) 
            | VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_rx_hs.__PVT__recv_req))) 
           | VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_rx_hs.__PVT__recv_req)));
}

VL_ATTR_COLD void Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__24(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__24\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__flit_all_rsp_vc0, vlSelfRef.__PVT__flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__flit_all_rsp_vc1, vlSelfRef.__PVT__flit_all_rsp_vc1);
}

VL_ATTR_COLD void Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__25(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__25\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__flit_all_dat_vc0, vlSelfRef.__PVT__flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__flit_all_dat_vc1, vlSelfRef.__PVT__flit_all_dat_vc1);
}
