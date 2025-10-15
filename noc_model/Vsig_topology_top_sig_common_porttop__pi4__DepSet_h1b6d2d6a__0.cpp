// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_common_porttop__pi4.h"

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__0(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__1(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__ic_gclk 
        = vlSelfRef.__PVT__rx_ic_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__ic_gclk 
        = vlSelfRef.__PVT__tx_ic_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__0(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__end_req_vec_rsp_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_rx_hs.__PVT__recv_end;
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__end_req_vec_rsp_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_rx_hs.__PVT__recv_end;
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__valid_req_vec_dat_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_rx_hs.__PVT__recv_vld;
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__end_req_vec_dat_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_rx_hs.__PVT__recv_end;
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__valid_req_vec_dat_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_rx_hs.__PVT__recv_vld;
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__end_req_vec_dat_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_rx_hs.__PVT__recv_end;
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__valid_req_vec_req_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_rx_hs.__PVT__recv_vld;
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__end_req_vec_req_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_rx_hs.__PVT__recv_end;
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__req_vec_rsp_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_rx_hs.__PVT__recv_req;
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__req_vec_rsp_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_rx_hs.__PVT__recv_req;
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__req_vec_dat_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_rx_hs.__PVT__recv_req;
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__req_vec_dat_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_rx_hs.__PVT__recv_req;
    vlSelfRef.__PVT__activate_ctrlr_port_or_ic_tx_clk 
        = (((((VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_rx_hs.__PVT__recv_req)) 
               | VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_rx_hs.__PVT__recv_req))) 
              | VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_rx_hs.__PVT__recv_req))) 
             | VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_rx_hs.__PVT__recv_req))) 
            | VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_rx_hs.__PVT__recv_req))) 
           | VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_rx_hs.__PVT__recv_req)));
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__req_vec_req_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_rx_hs.__PVT__recv_req;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__end_req_vec_rsp_vc0 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__end_req_vec_rsp_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__end_req_vec_rsp_vc1 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__end_req_vec_rsp_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__valid_req_vec_dat_vc0 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__valid_req_vec_dat_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__end_req_vec_dat_vc0 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__end_req_vec_dat_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__valid_req_vec_dat_vc1 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__valid_req_vec_dat_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__end_req_vec_dat_vc1 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__end_req_vec_dat_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__valid_req_vec_req_vc0 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__valid_req_vec_req_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__end_req_vec_req_vc0 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__end_req_vec_req_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__req_vec_rsp_vc0 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__req_vec_rsp_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__req_vec_rsp_vc1 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__req_vec_rsp_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__req_vec_dat_vc0 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__req_vec_dat_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__req_vec_dat_vc1 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__req_vec_dat_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__req_vec_req_vc0 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__req_vec_req_vc0;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__1(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__flit_all_rsp_vc0, vlSelfRef.__PVT__flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__flit_all_rsp_vc1, vlSelfRef.__PVT__flit_all_rsp_vc1);
    VL_ASSIGN_W(6860,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__flit_all_dat_vc0, vlSelfRef.__PVT__flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__flit_all_dat_vc1, vlSelfRef.__PVT__flit_all_dat_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__0(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__1(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__1\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__2(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__2\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__3(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__ic_RX_RSPFLITPEND 
        = vlSelfRef.__PVT__ic_RX_RSPFLITPEND;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__0(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__1(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__1\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__2(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__2\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__3(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__3\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__4(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__4\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__5(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__5\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__6(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__6\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__7(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__7\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__8(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__8\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__9(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__ic_RX_DATFLITPEND 
        = vlSelfRef.__PVT__ic_RX_DATFLITPEND;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__10(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__porthas_rspgnt_fromcc 
        = vlSelfRef.__PVT__porthas_rspgnt;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__11(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__11\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ic_TX_RSPFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__flitv_out_rsp;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__ic_TX_RSPFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__flit_out_rsp);
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__12(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__12\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__13(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__13\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__ic_RX_SNPFLITPEND 
        = vlSelfRef.__PVT__ic_RX_SNPFLITPEND;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__14(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__14\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__15(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__15\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__req_vec_req_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_rx_hs.__PVT__recv_req;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__req_vec_req_vc1 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__req_vec_req_vc1;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__16(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__16\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__17(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__17\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__18(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__18\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__19(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__19\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__20(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__20\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__flit_all_rsp_vc0, vlSelfRef.__PVT__flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__flit_all_rsp_vc1, vlSelfRef.__PVT__flit_all_rsp_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__21(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__21\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__flit_all_dat_vc0, vlSelfRef.__PVT__flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__flit_all_dat_vc1, vlSelfRef.__PVT__flit_all_dat_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__0(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__rsplcrdv 
        = vlSelfRef.__PVT__ic_TX_RSPLCRDV_VC0;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__1(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__datlcrdv 
        = vlSelfRef.__PVT__ic_TX_DATLCRDV_VC0;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__2(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__reqlcrdv 
        = vlSelfRef.__PVT__ic_TX_REQLCRDV_VC0;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__3(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__ic_gclk 
        = vlSelfRef.__PVT__rx_ic_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__ic_gclk 
        = vlSelfRef.__PVT__tx_ic_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__4(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__flit_out_rspf_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__5(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__flit_out_rspf_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__6(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__ic_RX_RSPFLITV 
        = vlSelfRef.__PVT__ic_RX_RSPFLITV;
    VL_ASSIGN_W(73,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__ic_RX_RSPFLIT, vlSelfRef.__PVT__ic_RX_RSPFLIT);
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__7(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__ic_RX_DATFLITV 
        = vlSelfRef.__PVT__ic_RX_DATFLITV;
    VL_ASSIGN_W(680,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__ic_RX_DATFLIT, vlSelfRef.__PVT__ic_RX_DATFLIT);
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__8(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__ic_RX_SNPFLITV 
        = vlSelfRef.__PVT__ic_RX_SNPFLITV;
    VL_CONCAT_WIW(152,1,151, vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__ic_RX_SNPFLIT, (IData)(vlSelfRef.__PVT__ic_RX_SNPFLIT_snp_or_req_bit), vlSelfRef.__PVT__ic_RX_SNPFLIT);
    VL_ASSIGN_W(152,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__ic_RX_SNPFLIT, vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__ic_RX_SNPFLIT);
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__9(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__ic_RX_RSPFLITPEND 
        = vlSelfRef.__PVT__ic_RX_RSPFLITPEND;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__0(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__flit_all_req_vc0, vlSelfRef.__PVT__flit_all_req_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__1(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__reqf_vc0_rx_hs_gnt_recv 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__gnt_vec_req_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_rx_hs.__PVT__gnt_recv 
        = vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__reqf_vc0_rx_hs_gnt_recv;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__2(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__reqf_vc1_rx_hs_gnt_recv 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__gnt_vec_req_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_rx_hs.__PVT__gnt_recv 
        = vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__reqf_vc1_rx_hs_gnt_recv;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__3(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__gnt_vec_dat_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_rx_hs.__PVT__gnt_recv 
        = vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__4(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__gnt_vec_dat_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_rx_hs.__PVT__gnt_recv 
        = vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__5(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__rspf_vc1_rx_hs_gnt_recv 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__gnt_vec_rsp_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_rx_hs.__PVT__gnt_recv 
        = vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__rspf_vc1_rx_hs_gnt_recv;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__6(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__rspf_vc0_rx_hs_gnt_recv 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__gnt_vec_rsp_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_rx_hs.__PVT__gnt_recv 
        = vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__rspf_vc0_rx_hs_gnt_recv;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__7(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ic_TX_REQFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__flitv_out_req;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__ic_TX_REQFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__flit_out_req);
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__8(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__porthas_datgnt_fromcc 
        = vlSelfRef.__PVT__porthas_datgnt;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__9(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__gnt_reqf_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc0_tx_hs.__PVT__send_gnt;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__gnt_reqf_vc0 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__gnt_reqf_vc0;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__10(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__gnt_reqf_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_tx_hs.__PVT__send_gnt;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__gnt_reqf_vc1 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__gnt_reqf_vc1;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__11(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__11\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__gnt_datf_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_tx_hs.__PVT__send_gnt;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__gnt_datf_vc1 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__gnt_datf_vc1;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__12(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__12\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__gnt_datf_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_tx_hs.__PVT__send_gnt;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__gnt_datf_vc0 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__gnt_datf_vc0;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__13(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__13\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__gnt_rspf_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_tx_hs.__PVT__send_gnt;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__gnt_rspf_vc1 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__gnt_rspf_vc1;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__14(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__14\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__gnt_rspf_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_tx_hs.__PVT__send_gnt;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__gnt_rspf_vc0 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__gnt_rspf_vc0;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__15(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__15\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_TX_DATFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__flit_out_dat);
    vlSelfRef.__PVT__ic_TX_DATFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__flitv_out_dat;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__16(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__16\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__17(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__17\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__reqf_vc1_tx_hs_req_send 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__req_reqf_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_tx_hs.__PVT__req_send 
        = vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__reqf_vc1_tx_hs_req_send;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__18(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__18\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__valid_flit_out_datf_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__valid_flit_out_datf_vc1;
    vlSelfRef.__Vcellout__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__end_flit_out_datf_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__end_flit_out_datf_vc1;
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__flit_out_datf_vc1);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_tx_hs.__PVT__vld_send 
        = vlSelfRef.__Vcellout__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__valid_flit_out_datf_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_tx_hs.__PVT__end_send 
        = vlSelfRef.__Vcellout__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__end_flit_out_datf_vc1;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__19(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__19\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__datf_vc1_tx_hs_req_send 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__req_datf_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_tx_hs.__PVT__req_send 
        = vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__datf_vc1_tx_hs_req_send;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__20(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__20\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__valid_flit_out_datf_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__valid_flit_out_datf_vc0;
    vlSelfRef.__Vcellout__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__end_flit_out_datf_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__end_flit_out_datf_vc0;
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__flit_out_datf_vc0);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_tx_hs.__PVT__vld_send 
        = vlSelfRef.__Vcellout__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__valid_flit_out_datf_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_tx_hs.__PVT__end_send 
        = vlSelfRef.__Vcellout__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__end_flit_out_datf_vc0;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__21(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__21\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__datf_vc0_tx_hs_req_send 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__req_datf_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_tx_hs.__PVT__req_send 
        = vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__datf_vc0_tx_hs_req_send;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__22(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__22\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__end_flit_out_rspf_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__end_flit_out_rspf_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_tx_hs.__PVT__end_send 
        = vlSelfRef.__Vcellout__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__end_flit_out_rspf_vc1;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__23(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__23\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__rspf_vc1_tx_hs_req_send 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__req_rspf_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_tx_hs.__PVT__req_send 
        = vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__rspf_vc1_tx_hs_req_send;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__24(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__24\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__end_flit_out_rspf_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__end_flit_out_rspf_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_tx_hs.__PVT__end_send 
        = vlSelfRef.__Vcellout__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__end_flit_out_rspf_vc0;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__25(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__25\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__rspf_vc0_tx_hs_req_send 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__req_rspf_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_tx_hs.__PVT__req_send 
        = vlSelfRef.__PVT__sig_cc_porttop_gen_blk__DOT__rspf_vc0_tx_hs_req_send;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__26(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__26\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__flit_all_req_vc1, vlSelfRef.__PVT__flit_all_req_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__27(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__27\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__28(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__28\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ic_RX_SNPLCRDV_VC0 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__ic_RX_SNPLCRDV;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__29(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__29\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ic_RX_DATLCRDV_VC0 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__ic_RX_DATLCRDV;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__30(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__30\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ic_RX_RSPLCRDV_VC0 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__ic_RX_RSPLCRDV;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__31(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__31\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__end_req_vec_rsp_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_rx_hs.__PVT__recv_end;
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__req_vec_rsp_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc0_rx_hs.__PVT__recv_req;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__end_req_vec_rsp_vc0 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__end_req_vec_rsp_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__req_vec_rsp_vc0 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__req_vec_rsp_vc0;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__32(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__32\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__end_req_vec_rsp_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_rx_hs.__PVT__recv_end;
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__req_vec_rsp_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_rsp_vc1_rx_hs.__PVT__recv_req;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__end_req_vec_rsp_vc1 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__end_req_vec_rsp_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__req_vec_rsp_vc1 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__req_vec_rsp_vc1;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__33(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__33\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__ic_RX_DATFLITPEND 
        = vlSelfRef.__PVT__ic_RX_DATFLITPEND;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__34(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__34\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__porthas_rspgnt_fromcc 
        = vlSelfRef.__PVT__porthas_rspgnt;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__35(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__35\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0.__PVT__ic_RX_SNPFLITPEND 
        = vlSelfRef.__PVT__ic_RX_SNPFLITPEND;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__36(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__36\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ic_TX_RSPFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__flitv_out_rsp;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__ic_TX_RSPFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__flit_out_rsp);
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__37(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__37\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__flit_all_rsp_vc0, vlSelfRef.__PVT__flit_all_rsp_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__38(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__38\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__flit_all_rsp_vc1, vlSelfRef.__PVT__flit_all_rsp_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__39(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__39\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__valid_req_vec_req_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_rx_hs.__PVT__recv_vld;
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__end_req_vec_req_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_rx_hs.__PVT__recv_end;
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__req_vec_req_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_req_vc1_rx_hs.__PVT__recv_req;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__valid_req_vec_req_vc1 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__valid_req_vec_req_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__end_req_vec_req_vc1 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__end_req_vec_req_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__req_vec_req_vc1 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__req_vec_req_vc1;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__40(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__40\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__valid_req_vec_dat_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_rx_hs.__PVT__recv_vld;
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__end_req_vec_dat_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_rx_hs.__PVT__recv_end;
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__req_vec_dat_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc0_rx_hs.__PVT__recv_req;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__valid_req_vec_dat_vc0 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__valid_req_vec_dat_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__end_req_vec_dat_vc0 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__end_req_vec_dat_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__req_vec_dat_vc0 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__req_vec_dat_vc0;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__41(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__41\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__flit_all_dat_vc0, vlSelfRef.__PVT__flit_all_dat_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__42(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__42\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__valid_req_vec_dat_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_rx_hs.__PVT__recv_vld;
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__end_req_vec_dat_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_rx_hs.__PVT__recv_end;
    vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__req_vec_dat_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__cc_port_dat_vc1_rx_hs.__PVT__recv_req;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__valid_req_vec_dat_vc1 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__valid_req_vec_dat_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__end_req_vec_dat_vc1 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__end_req_vec_dat_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__req_vec_dat_vc1 
        = vlSelfRef.__Vcellinp__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__req_vec_dat_vc1;
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__43(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__43\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0.__PVT__flit_all_dat_vc1, vlSelfRef.__PVT__flit_all_dat_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__44(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__44\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__45(Vsig_topology_top_sig_common_porttop__pi4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi4___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__45\n"); );
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
