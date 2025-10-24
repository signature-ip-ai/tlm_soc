// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_node_dattxflit_top__pi59.h"
#include "Vsig_topology_top_sig_node_rsptxflit_top.h"
#include "Vsig_topology_top_sig_node_snptxflit_top__pi58.h"
#include "Vsig_topology_top_sig_node_txtop__pi43.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi43___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__1(Vsig_topology_top_sig_node_txtop__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi43___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_gclk;
    vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_gclk;
    vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_gclk;
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__sysco_is_disabled 
        = vlSelfRef.__PVT__sysco_is_disabled;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi43___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__6(Vsig_topology_top_sig_node_txtop__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi43___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__id_translator_full 
        = vlSelfRef.__PVT__id_translator_full;
    vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__id_translator_full 
        = vlSelfRef.__PVT__id_translator_full;
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__id_translator_full 
        = vlSelfRef.__PVT__id_translator_full;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__2(Vsig_topology_top_sig_node_txtop__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_gclk;
    vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_gclk;
    vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__3(Vsig_topology_top_sig_node_txtop__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__11(Vsig_topology_top_sig_node_txtop__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__11\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(151,vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__flit_from_id_translator, vlSelfRef.__PVT__snpreq_flit_from_id_translator);
    VL_ASSIGN_W(73,vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__flit_from_id_translator, vlSelfRef.__PVT__rsp_flit_from_id_translator);
    VL_ASSIGN_W(680,vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__flit_from_id_translator, vlSelfRef.__PVT__dat_flit_from_id_translator);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi43___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__1(Vsig_topology_top_sig_node_txtop__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi43___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_gclk;
    vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_gclk;
    vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi43___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__5(Vsig_topology_top_sig_node_txtop__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi43___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__id_translator_full 
        = vlSelfRef.__PVT__id_translator_full;
    vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__id_translator_full 
        = vlSelfRef.__PVT__id_translator_full;
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__id_translator_full 
        = vlSelfRef.__PVT__id_translator_full;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__1(Vsig_topology_top_sig_node_txtop__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_gclk;
    vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_gclk;
    vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__2(Vsig_topology_top_sig_node_txtop__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__9(Vsig_topology_top_sig_node_txtop__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi43___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(151,vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__flit_from_id_translator, vlSelfRef.__PVT__snpreq_flit_from_id_translator);
    VL_ASSIGN_W(73,vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__flit_from_id_translator, vlSelfRef.__PVT__rsp_flit_from_id_translator);
    VL_ASSIGN_W(680,vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__flit_from_id_translator, vlSelfRef.__PVT__dat_flit_from_id_translator);
}
