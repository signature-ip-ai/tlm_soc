// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_cc_txtop__pi11.h"

VL_ATTR_COLD void Vsig_topology_top_sig_cc_txtop__pi11___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0(Vsig_topology_top_sig_cc_txtop__pi11* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cc_txtop__pi11___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_ic_crdt_recv_req.__PVT__i_in_timeout_or_recovery = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_ic_crdt_recv_rsp.__PVT__i_in_timeout_or_recovery = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_ic_crdt_recv_dat.__PVT__i_in_timeout_or_recovery = 0U;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_txtop__pi11___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__0(Vsig_topology_top_sig_cc_txtop__pi11* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cc_txtop__pi11___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_credits_rsp = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_ic_crdt_recv_rsp.__PVT__available_credits;
    vlSelfRef.__PVT__available_credits_req = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_ic_crdt_recv_req.__PVT__available_credits;
    vlSelfRef.__PVT__available_credits_dat = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_ic_crdt_recv_dat.__PVT__available_credits;
    vlSelfRef.__PVT__porthas_credits_rsp = (0U != (IData)(vlSelfRef.__PVT__available_credits_rsp));
    vlSelfRef.__PVT__porthas_credits_req = (0U != (IData)(vlSelfRef.__PVT__available_credits_req));
    vlSelfRef.__PVT__porthas_credits_dat = (0U != (IData)(vlSelfRef.__PVT__available_credits_dat));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0.__PVT__porthas_credits 
        = vlSelfRef.__PVT__porthas_credits_rsp;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0.__PVT__porthas_credits 
        = vlSelfRef.__PVT__porthas_credits_req;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0.__PVT__porthas_credits 
        = vlSelfRef.__PVT__porthas_credits_dat;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_txtop__pi11___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__1(Vsig_topology_top_sig_cc_txtop__pi11* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cc_txtop__pi11___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_ic_crdt_recv_req.__PVT__rcvd_crdt 
        = vlSelfRef.__PVT__reqlcrdv;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_ic_crdt_recv_dat.__PVT__rcvd_crdt 
        = vlSelfRef.__PVT__datlcrdv;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_ic_crdt_recv_rsp.__PVT__rcvd_crdt 
        = vlSelfRef.__PVT__rsplcrdv;
    vlSelfRef.__PVT__flitv_out_req = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0.__PVT__flitv_out;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__flit_out_req, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0.__PVT__flit_out);
    vlSelfRef.__PVT__consumed_crdt_req = vlSelfRef.__PVT__flitv_out_req;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_ic_crdt_recv_req.__PVT__consumed_crdt 
        = vlSelfRef.__PVT__consumed_crdt_req;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_txtop__pi11___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__2(Vsig_topology_top_sig_cc_txtop__pi11* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cc_txtop__pi11___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_ic_crdt_recv_req.__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_ic_crdt_recv_rsp.__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_ic_crdt_recv_dat.__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0.__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0.__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0.__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0.__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0.__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0.__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_ic_crdt_recv_req.__PVT__cc_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_ic_crdt_recv_rsp.__PVT__cc_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_ic_crdt_recv_dat.__PVT__cc_clk 
        = vlSelfRef.__PVT__ic_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_txtop__pi11___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__3(Vsig_topology_top_sig_cc_txtop__pi11* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cc_txtop__pi11___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0.__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_req_vc0);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_txtop__pi11___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__4(Vsig_topology_top_sig_cc_txtop__pi11* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cc_txtop__pi11___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0.__PVT__ic_gclk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0.__PVT__ic_gclk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0.__PVT__ic_gclk 
        = vlSelfRef.__PVT__ic_gclk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_txtop__pi11___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__5(Vsig_topology_top_sig_cc_txtop__pi11* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cc_txtop__pi11___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0.__PVT__porthas_datgnt_fromcc 
        = vlSelfRef.__PVT__porthas_datgnt_fromcc;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_txtop__pi11___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__6(Vsig_topology_top_sig_cc_txtop__pi11* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cc_txtop__pi11___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__PVT__flit_out_dat, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0.__PVT__flit_out);
    vlSelfRef.__PVT__flitv_out_dat = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0.__PVT__flitv_out;
    vlSelfRef.__PVT__consumed_crdt_dat = vlSelfRef.__PVT__flitv_out_dat;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_ic_crdt_recv_dat.__PVT__consumed_crdt 
        = vlSelfRef.__PVT__consumed_crdt_dat;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_txtop__pi11___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__0(Vsig_topology_top_sig_cc_txtop__pi11* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cc_txtop__pi11___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_vec_req_vc0 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0.__PVT__gnt_vec_vc0;
    vlSelfRef.__PVT__gnt_vec_req_vc1 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0.__PVT__gnt_vec_vc1;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_txtop__pi11___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__1(Vsig_topology_top_sig_cc_txtop__pi11* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cc_txtop__pi11___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_vec_dat_vc1 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0.__PVT__gnt_vec_vc1;
    vlSelfRef.__PVT__gnt_vec_dat_vc0 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0.__PVT__gnt_vec_vc0;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_txtop__pi11___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__2(Vsig_topology_top_sig_cc_txtop__pi11* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cc_txtop__pi11___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_vec_rsp_vc1 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0.__PVT__gnt_vec_vc1;
    vlSelfRef.__PVT__gnt_vec_rsp_vc0 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0.__PVT__gnt_vec_vc0;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_txtop__pi11___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__3(Vsig_topology_top_sig_cc_txtop__pi11* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cc_txtop__pi11___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0.__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_req_vc1);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_txtop__pi11___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__4(Vsig_topology_top_sig_cc_txtop__pi11* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cc_txtop__pi11___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0.__PVT__porthas_rspgnt_fromcc 
        = vlSelfRef.__PVT__porthas_rspgnt_fromcc;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_txtop__pi11___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__5(Vsig_topology_top_sig_cc_txtop__pi11* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cc_txtop__pi11___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__flitv_out_rsp = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0.__PVT__flitv_out;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__flit_out_rsp, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0.__PVT__flit_out);
    vlSelfRef.__PVT__consumed_crdt_rsp = vlSelfRef.__PVT__flitv_out_rsp;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_ic_crdt_recv_rsp.__PVT__consumed_crdt 
        = vlSelfRef.__PVT__consumed_crdt_rsp;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_txtop__pi11___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__6(Vsig_topology_top_sig_cc_txtop__pi11* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cc_txtop__pi11___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0.__PVT__valid_req_vec_vc1 
        = vlSelfRef.__PVT__valid_req_vec_req_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0.__PVT__end_req_vec_vc1 
        = vlSelfRef.__PVT__end_req_vec_req_vc1;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_txtop__pi11___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__7(Vsig_topology_top_sig_cc_txtop__pi11* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cc_txtop__pi11___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0.__PVT__req_vec_vc1 
        = vlSelfRef.__PVT__req_vec_req_vc1;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_txtop__pi11___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__8(Vsig_topology_top_sig_cc_txtop__pi11* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cc_txtop__pi11___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0.__PVT__end_req_vec_vc0 
        = vlSelfRef.__PVT__end_req_vec_rsp_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0.__PVT__end_req_vec_vc1 
        = vlSelfRef.__PVT__end_req_vec_rsp_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0.__PVT__req_vec_vc0 
        = vlSelfRef.__PVT__req_vec_rsp_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0.__PVT__req_vec_vc1 
        = vlSelfRef.__PVT__req_vec_rsp_vc1;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_txtop__pi11___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__9(Vsig_topology_top_sig_cc_txtop__pi11* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cc_txtop__pi11___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0.__PVT__valid_req_vec_vc0 
        = vlSelfRef.__PVT__valid_req_vec_dat_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0.__PVT__end_req_vec_vc0 
        = vlSelfRef.__PVT__end_req_vec_dat_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0.__PVT__valid_req_vec_vc1 
        = vlSelfRef.__PVT__valid_req_vec_dat_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0.__PVT__end_req_vec_vc1 
        = vlSelfRef.__PVT__end_req_vec_dat_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0.__PVT__req_vec_vc0 
        = vlSelfRef.__PVT__req_vec_dat_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0.__PVT__req_vec_vc1 
        = vlSelfRef.__PVT__req_vec_dat_vc1;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_txtop__pi11___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__10(Vsig_topology_top_sig_cc_txtop__pi11* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cc_txtop__pi11___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0.__PVT__valid_req_vec_vc0 
        = vlSelfRef.__PVT__valid_req_vec_req_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0.__PVT__end_req_vec_vc0 
        = vlSelfRef.__PVT__end_req_vec_req_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0.__PVT__req_vec_vc0 
        = vlSelfRef.__PVT__req_vec_req_vc0;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_txtop__pi11___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__11(Vsig_topology_top_sig_cc_txtop__pi11* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cc_txtop__pi11___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__11\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0.__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0.__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_rsp_vc1);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_txtop__pi11___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__12(Vsig_topology_top_sig_cc_txtop__pi11* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cc_txtop__pi11___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__12\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0.__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0.__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_dat_vc1);
}
