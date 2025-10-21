// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_cc_rsptxflit_top__F3.h"

VL_ATTR_COLD void Vsig_topology_top_sig_cc_rsptxflit_top__F3___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0(Vsig_topology_top_sig_cc_rsptxflit_top__F3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cc_rsptxflit_top__F3___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_txflit_mux_0.__PVT__valid_flit_vc1 = 0x3ffU;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_txflit_mux_0.__PVT__valid_flit_vc0 = 0x3ffU;
    vlSelfRef.__PVT__full_credit_fifo = 0U;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_rsptxflit_top__F3___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__0(Vsig_topology_top_sig_cc_rsptxflit_top__F3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cc_rsptxflit_top__F3___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__PVT__flit_storefifo_has_space = (7U 
                                                 & VL_REPLICATE_IOI(1,
                                                                    (0U 
                                                                     != (IData)(vlSelfRef.__PVT__available_fiforoom)), 3U));
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_mux, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_txflit_mux_0.__PVT__flit_out);
    vlSelfRef.__PVT__flitv_out_mux = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_txflit_mux_0.__PVT__flitv_out;
    vlSelfRef.__PVT__empty_flit_store_fifo = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__flit_store_fifo_0.__PVT__fifo_empty;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_arbtop_0.__PVT__vcx_has_credits 
        = vlSelfRef.__PVT__flit_storefifo_has_space;
    VL_CONST_W_3X(96,__Vtemp_1,0x000001ff,0xffffffff,0xffffffff);
    VL_SEL_WWII(73, 79, __Vtemp_2, vlSelfRef.__PVT__flit_out_mux, 0U, 73);
    VL_AND_W(3, vlSelfRef.__PVT__write_data_fifo, __Vtemp_1, __Vtemp_2);
    VL_ASSIGN_W(73,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__flit_store_fifo_0.__PVT__fifo_wrdata, vlSelfRef.__PVT__write_data_fifo);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_rsptxflit_top__F3___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__1(Vsig_topology_top_sig_cc_rsptxflit_top__F3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cc_rsptxflit_top__F3___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(73,vlSelfRef.__PVT__readdata_storefifo, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__flit_store_fifo_0.__PVT__fifo_rddata);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_rsptxflit_top__F3___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__2(Vsig_topology_top_sig_cc_rsptxflit_top__F3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cc_rsptxflit_top__F3___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_txflit_mux_0.__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__flit_store_fifo_0.__PVT__rstb 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_arbtop_0.__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_rsptxflit_top__F3___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__3(Vsig_topology_top_sig_cc_rsptxflit_top__F3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cc_rsptxflit_top__F3___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_txflit_mux_0.__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__flit_store_fifo_0.__PVT__fifo_clk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_arbtop_0.__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_rsptxflit_top__F3___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__0(Vsig_topology_top_sig_cc_rsptxflit_top__F3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cc_rsptxflit_top__F3___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_vec_vc1 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_arbtop_0.__PVT__gnt_vec_vc1;
    vlSelfRef.__PVT__gnt_vec_vc0 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_arbtop_0.__PVT__gnt_vec_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_txflit_mux_0.__PVT__gnt_vec_vc1 
        = vlSelfRef.__PVT__gnt_vec_vc1;
    vlSelfRef.__PVT__consumed_fiforoom = ((0U != (IData)(vlSelfRef.__PVT__gnt_vec_vc0)) 
                                          | (0U != (IData)(vlSelfRef.__PVT__gnt_vec_vc1)));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_txflit_mux_0.__PVT__gnt_vec_vc0 
        = vlSelfRef.__PVT__gnt_vec_vc0;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_rsptxflit_top__F3___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__1(Vsig_topology_top_sig_cc_rsptxflit_top__F3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cc_rsptxflit_top__F3___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rden_storefifo = (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                                        & (IData)(vlSelfRef.__PVT__porthas_credits)) 
                                       & (IData)(vlSelfRef.__PVT__porthas_rspgnt_fromcc));
    vlSelfRef.__PVT__rden_storefifo_bypass = ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                                                & (IData)(vlSelfRef.__PVT__flitv_out_mux)) 
                                               & (IData)(vlSelfRef.__PVT__porthas_credits)) 
                                              & (IData)(vlSelfRef.__PVT__porthas_rspgnt_fromcc));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__flit_store_fifo_0.__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_storefifo;
    vlSelfRef.__PVT__opened_fiforoom = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                        | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelfRef.__PVT__wren_flit_store_fifo = ((IData)(vlSelfRef.__PVT__flitv_out_mux) 
                                             & (~ (IData)(vlSelfRef.__PVT__rden_storefifo_bypass)));
    vlSelfRef.__PVT__flitv_out = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                  | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    VL_COND_WIWW(73, vlSelfRef.__PVT__flit_out, (IData)(vlSelfRef.__PVT__rden_storefifo_bypass), vlSelfRef.__PVT__write_data_fifo, vlSelfRef.__PVT__readdata_storefifo);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__flit_store_fifo_0.__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_flit_store_fifo;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_rsptxflit_top__F3___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__3(Vsig_topology_top_sig_cc_rsptxflit_top__F3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cc_rsptxflit_top__F3___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_arbtop_0.__PVT__end_req_vec_vc0 
        = vlSelfRef.__PVT__end_req_vec_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_arbtop_0.__PVT__end_req_vec_vc1 
        = vlSelfRef.__PVT__end_req_vec_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_arbtop_0.__PVT__req_vec_vc0 
        = vlSelfRef.__PVT__req_vec_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_arbtop_0.__PVT__req_vec_vc1 
        = vlSelfRef.__PVT__req_vec_vc1;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_rsptxflit_top__F3___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__4(Vsig_topology_top_sig_cc_rsptxflit_top__F3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cc_rsptxflit_top__F3___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_txflit_mux_0.__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_vc0);
    VL_ASSIGN_W(790,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_txflit_mux_0.__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_vc1);
}
