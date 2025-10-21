// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_node_dattxflit_top__pi61.h"
#include "Vsig_topology_top_sig_node_txflit_mux__F2ae.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_dattxflit_top__pi61___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__1(Vsig_topology_top_sig_node_dattxflit_top__pi61* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_dattxflit_top__pi61___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_vc0);
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_dattxflit_top__pi61___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__1(Vsig_topology_top_sig_node_dattxflit_top__pi61* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_dattxflit_top__pi61___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_vc0);
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_vc1);
}

extern const VlWide<22>/*703:0*/ Vsig_topology_top__ConstPool__CONST_h93abe68d_0;

VL_INLINE_OPT void Vsig_topology_top_sig_node_dattxflit_top__pi61___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__2(Vsig_topology_top_sig_node_dattxflit_top__pi61* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_dattxflit_top__pi61___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<22>/*703:0*/ __Vtemp_1;
    // Body
    VL_ASSIGN_W(686,vlSelfRef.__PVT__TX_DATFLIT_mux, vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_out);
    vlSelfRef.__PVT__TX_DATFLITV_mux = vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flitv_out;
    VL_SEL_WWII(680, 686, __Vtemp_1, vlSelfRef.__PVT__TX_DATFLIT_mux, 0U, 680);
    VL_AND_W(22, vlSelfRef.__PVT__flit_to_id_translator, Vsig_topology_top__ConstPool__CONST_h93abe68d_0, __Vtemp_1);
    vlSelfRef.__PVT__flitv_to_id_translator = vlSelfRef.__PVT__TX_DATFLITV_mux;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_dattxflit_top__pi61___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__8(Vsig_topology_top_sig_node_dattxflit_top__pi61* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_dattxflit_top__pi61___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_dattxflit_top__pi61___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__10(Vsig_topology_top_sig_node_dattxflit_top__pi61* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_dattxflit_top__pi61___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_dattxflit_top__pi61___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__1(Vsig_topology_top_sig_node_dattxflit_top__pi61* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_dattxflit_top__pi61___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_vc0);
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_dattxflit_top__pi61___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__1(Vsig_topology_top_sig_node_dattxflit_top__pi61* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_dattxflit_top__pi61___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_vc0);
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_dattxflit_top__pi61___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__2(Vsig_topology_top_sig_node_dattxflit_top__pi61* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_dattxflit_top__pi61___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<22>/*703:0*/ __Vtemp_1;
    // Body
    VL_ASSIGN_W(686,vlSelfRef.__PVT__TX_DATFLIT_mux, vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_out);
    vlSelfRef.__PVT__TX_DATFLITV_mux = vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flitv_out;
    VL_SEL_WWII(680, 686, __Vtemp_1, vlSelfRef.__PVT__TX_DATFLIT_mux, 0U, 680);
    VL_AND_W(22, vlSelfRef.__PVT__flit_to_id_translator, Vsig_topology_top__ConstPool__CONST_h93abe68d_0, __Vtemp_1);
    vlSelfRef.__PVT__flitv_to_id_translator = vlSelfRef.__PVT__TX_DATFLITV_mux;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_dattxflit_top__pi61___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__8(Vsig_topology_top_sig_node_dattxflit_top__pi61* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_dattxflit_top__pi61___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_dattxflit_top__pi61___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__10(Vsig_topology_top_sig_node_dattxflit_top__pi61* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_dattxflit_top__pi61___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_dattxflit_top__pi61___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__1(Vsig_topology_top_sig_node_dattxflit_top__pi61* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_dattxflit_top__pi61___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_vc0);
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_dattxflit_top__pi61___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__1(Vsig_topology_top_sig_node_dattxflit_top__pi61* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_dattxflit_top__pi61___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_vc0);
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_dattxflit_top__pi61___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__2(Vsig_topology_top_sig_node_dattxflit_top__pi61* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_dattxflit_top__pi61___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<22>/*703:0*/ __Vtemp_1;
    // Body
    VL_ASSIGN_W(686,vlSelfRef.__PVT__TX_DATFLIT_mux, vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_out);
    vlSelfRef.__PVT__TX_DATFLITV_mux = vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flitv_out;
    VL_SEL_WWII(680, 686, __Vtemp_1, vlSelfRef.__PVT__TX_DATFLIT_mux, 0U, 680);
    VL_AND_W(22, vlSelfRef.__PVT__flit_to_id_translator, Vsig_topology_top__ConstPool__CONST_h93abe68d_0, __Vtemp_1);
    vlSelfRef.__PVT__flitv_to_id_translator = vlSelfRef.__PVT__TX_DATFLITV_mux;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_dattxflit_top__pi61___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__8(Vsig_topology_top_sig_node_dattxflit_top__pi61* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_dattxflit_top__pi61___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_dattxflit_top__pi61___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__10(Vsig_topology_top_sig_node_dattxflit_top__pi61* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_dattxflit_top__pi61___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_dattxflit_top__pi61___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__1(Vsig_topology_top_sig_node_dattxflit_top__pi61* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_dattxflit_top__pi61___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_vc0);
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_dattxflit_top__pi61___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__1(Vsig_topology_top_sig_node_dattxflit_top__pi61* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_dattxflit_top__pi61___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_vc0);
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_dattxflit_top__pi61___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__2(Vsig_topology_top_sig_node_dattxflit_top__pi61* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_dattxflit_top__pi61___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<22>/*703:0*/ __Vtemp_1;
    // Body
    VL_ASSIGN_W(686,vlSelfRef.__PVT__TX_DATFLIT_mux, vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_out);
    vlSelfRef.__PVT__TX_DATFLITV_mux = vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flitv_out;
    VL_SEL_WWII(680, 686, __Vtemp_1, vlSelfRef.__PVT__TX_DATFLIT_mux, 0U, 680);
    VL_AND_W(22, vlSelfRef.__PVT__flit_to_id_translator, Vsig_topology_top__ConstPool__CONST_h93abe68d_0, __Vtemp_1);
    vlSelfRef.__PVT__flitv_to_id_translator = vlSelfRef.__PVT__TX_DATFLITV_mux;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_dattxflit_top__pi61___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__8(Vsig_topology_top_sig_node_dattxflit_top__pi61* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_dattxflit_top__pi61___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_dattxflit_top__pi61___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__10(Vsig_topology_top_sig_node_dattxflit_top__pi61* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_dattxflit_top__pi61___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_vc1);
}
