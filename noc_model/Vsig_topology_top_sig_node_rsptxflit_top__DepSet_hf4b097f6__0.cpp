// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_node_rsptxflit_top.h"
#include "Vsig_topology_top_sig_node_txflit_mux__F4f.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_rsptxflit_top___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_rsptxflit_top_0__1(Vsig_topology_top_sig_node_rsptxflit_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rsptxflit_top___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_rsptxflit_top_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_vc0);
    VL_ASSIGN_W(790,vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rsptxflit_top___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_rsptxflit_top_0__1(Vsig_topology_top_sig_node_rsptxflit_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rsptxflit_top___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_rsptxflit_top_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_vc0);
    VL_ASSIGN_W(790,vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rsptxflit_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_rsptxflit_top_0__2(Vsig_topology_top_sig_node_rsptxflit_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rsptxflit_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_rsptxflit_top_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_mux, vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_out);
    vlSelfRef.__PVT__flitv_out_mux = vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flitv_out;
    VL_CONST_W_3X(96,__Vtemp_1,0x000001ff,0xffffffff,0xffffffff);
    VL_SEL_WWII(73, 79, __Vtemp_2, vlSelfRef.__PVT__flit_out_mux, 0U, 73);
    VL_AND_W(3, vlSelfRef.__PVT__flit_to_id_translator, __Vtemp_1, __Vtemp_2);
    vlSelfRef.__PVT__flitv_to_id_translator = vlSelfRef.__PVT__flitv_out_mux;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rsptxflit_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_rsptxflit_top_0__11(Vsig_topology_top_sig_node_rsptxflit_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rsptxflit_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_rsptxflit_top_0__11\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rsptxflit_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_rsptxflit_top_0__12(Vsig_topology_top_sig_node_rsptxflit_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rsptxflit_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_rsptxflit_top_0__12\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rsptxflit_top___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_rsptxflit_top_0__1(Vsig_topology_top_sig_node_rsptxflit_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rsptxflit_top___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_rsptxflit_top_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_vc0);
    VL_ASSIGN_W(790,vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rsptxflit_top___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_rsptxflit_top_0__1(Vsig_topology_top_sig_node_rsptxflit_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rsptxflit_top___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_rsptxflit_top_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_vc0);
    VL_ASSIGN_W(790,vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rsptxflit_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_rsptxflit_top_0__2(Vsig_topology_top_sig_node_rsptxflit_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rsptxflit_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_rsptxflit_top_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_mux, vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_out);
    vlSelfRef.__PVT__flitv_out_mux = vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flitv_out;
    VL_CONST_W_3X(96,__Vtemp_1,0x000001ff,0xffffffff,0xffffffff);
    VL_SEL_WWII(73, 79, __Vtemp_2, vlSelfRef.__PVT__flit_out_mux, 0U, 73);
    VL_AND_W(3, vlSelfRef.__PVT__flit_to_id_translator, __Vtemp_1, __Vtemp_2);
    vlSelfRef.__PVT__flitv_to_id_translator = vlSelfRef.__PVT__flitv_out_mux;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rsptxflit_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_rsptxflit_top_0__11(Vsig_topology_top_sig_node_rsptxflit_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rsptxflit_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_rsptxflit_top_0__11\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rsptxflit_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_rsptxflit_top_0__12(Vsig_topology_top_sig_node_rsptxflit_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rsptxflit_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_rsptxflit_top_0__12\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_vc1);
}
