// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_node_arbtop.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_arbtop___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__sig_node_arbtop_0__0(Vsig_topology_top_sig_node_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_arbtop___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__sig_node_arbtop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_vec_vc0 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc0_pre) 
                                    & VL_REPLICATE_IOI(1,
                                                       (1U 
                                                        & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_vec_vcarb), 0U)), 0xaU));
    vlSelfRef.__PVT__gnt_vec_vc1 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc1_pre) 
                                    & VL_REPLICATE_IOI(1,
                                                       (1U 
                                                        & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_vec_vcarb), 1U)), 0xaU));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__sig_node_arbtop_0__1(Vsig_topology_top_sig_node_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__sig_node_arbtop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_vec_vc0 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc0_pre) 
                                    & VL_REPLICATE_IOI(1,
                                                       (1U 
                                                        & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_vec_vcarb), 0U)), 0xaU));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__sig_node_arbtop_0__2(Vsig_topology_top_sig_node_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__sig_node_arbtop_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_vec_vc1 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc1_pre) 
                                    & VL_REPLICATE_IOI(1,
                                                       (1U 
                                                        & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_vec_vcarb), 1U)), 0xaU));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__sig_node_arbtop_0__3(Vsig_topology_top_sig_node_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__sig_node_arbtop_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__req_tovcarb, 
                    ((0U != (IData)(vlSelfRef.__PVT__gnt_vec_vc0_pre)) 
                     & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__vcx_has_credits), 0U)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__sig_node_arbtop_0__4(Vsig_topology_top_sig_node_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__sig_node_arbtop_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_II(3,2,1U, vlSelfRef.__PVT__req_tovcarb, 
                    VL_EXTEND_II(2,1, ((0U != (IData)(vlSelfRef.__PVT__gnt_vec_vc1_pre)) 
                                       & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__vcx_has_credits), 1U))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_arbtop___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_rsptxflit_top_0__sig_node_arbtop_0__0(Vsig_topology_top_sig_node_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_arbtop___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_rsptxflit_top_0__sig_node_arbtop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_vec_vc1 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc1_pre) 
                                    & VL_REPLICATE_IOI(1,
                                                       (1U 
                                                        & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_vec_vcarb), 1U)), 0xaU));
    vlSelfRef.__PVT__gnt_vec_vc0 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc0_pre) 
                                    & VL_REPLICATE_IOI(1,
                                                       (1U 
                                                        & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_vec_vcarb), 0U)), 0xaU));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_rsptxflit_top_0__sig_node_arbtop_0__1(Vsig_topology_top_sig_node_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_rsptxflit_top_0__sig_node_arbtop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_vec_vc1 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc1_pre) 
                                    & VL_REPLICATE_IOI(1,
                                                       (1U 
                                                        & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_vec_vcarb), 1U)), 0xaU));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_rsptxflit_top_0__sig_node_arbtop_0__2(Vsig_topology_top_sig_node_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_rsptxflit_top_0__sig_node_arbtop_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_II(3,2,1U, vlSelfRef.__PVT__req_tovcarb, 
                    VL_EXTEND_II(2,1, ((0U != (IData)(vlSelfRef.__PVT__gnt_vec_vc1_pre)) 
                                       & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__vcx_has_credits), 1U))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_rsptxflit_top_0__sig_node_arbtop_0__3(Vsig_topology_top_sig_node_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_rsptxflit_top_0__sig_node_arbtop_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_vec_vc0 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc0_pre) 
                                    & VL_REPLICATE_IOI(1,
                                                       (1U 
                                                        & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_vec_vcarb), 0U)), 0xaU));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_rsptxflit_top_0__sig_node_arbtop_0__4(Vsig_topology_top_sig_node_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_rsptxflit_top_0__sig_node_arbtop_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__req_tovcarb, 
                    ((0U != (IData)(vlSelfRef.__PVT__gnt_vec_vc0_pre)) 
                     & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__vcx_has_credits), 0U)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_arbtop___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__sig_node_arbtop_0__0(Vsig_topology_top_sig_node_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_arbtop___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__sig_node_arbtop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_vec_vc1 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc1_pre) 
                                    & VL_REPLICATE_IOI(1,
                                                       (1U 
                                                        & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_vec_vcarb), 1U)), 0xaU));
    vlSelfRef.__PVT__gnt_vec_vc0 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc0_pre) 
                                    & VL_REPLICATE_IOI(1,
                                                       (1U 
                                                        & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_vec_vcarb), 0U)), 0xaU));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__sig_node_arbtop_0__1(Vsig_topology_top_sig_node_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__sig_node_arbtop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_vec_vc1 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc1_pre) 
                                    & VL_REPLICATE_IOI(1,
                                                       (1U 
                                                        & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_vec_vcarb), 1U)), 0xaU));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__sig_node_arbtop_0__2(Vsig_topology_top_sig_node_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__sig_node_arbtop_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_II(3,2,1U, vlSelfRef.__PVT__req_tovcarb, 
                    VL_EXTEND_II(2,1, ((0U != (IData)(vlSelfRef.__PVT__gnt_vec_vc1_pre)) 
                                       & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__vcx_has_credits), 1U))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__sig_node_arbtop_0__3(Vsig_topology_top_sig_node_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__sig_node_arbtop_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_vec_vc0 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc0_pre) 
                                    & VL_REPLICATE_IOI(1,
                                                       (1U 
                                                        & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_vec_vcarb), 0U)), 0xaU));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__sig_node_arbtop_0__4(Vsig_topology_top_sig_node_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__sig_node_arbtop_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__req_tovcarb, 
                    ((0U != (IData)(vlSelfRef.__PVT__gnt_vec_vc0_pre)) 
                     & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__vcx_has_credits), 0U)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_arbtop___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__sig_node_arbtop_0__0(Vsig_topology_top_sig_node_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_arbtop___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__sig_node_arbtop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_vec_vc0 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc0_pre) 
                                    & VL_REPLICATE_IOI(1,
                                                       (1U 
                                                        & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_vec_vcarb), 0U)), 0xaU));
    vlSelfRef.__PVT__gnt_vec_vc1 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc1_pre) 
                                    & VL_REPLICATE_IOI(1,
                                                       (1U 
                                                        & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_vec_vcarb), 1U)), 0xaU));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__sig_node_arbtop_0__1(Vsig_topology_top_sig_node_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__sig_node_arbtop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_vec_vc0 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc0_pre) 
                                    & VL_REPLICATE_IOI(1,
                                                       (1U 
                                                        & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_vec_vcarb), 0U)), 0xaU));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__sig_node_arbtop_0__2(Vsig_topology_top_sig_node_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__sig_node_arbtop_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_vec_vc1 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc1_pre) 
                                    & VL_REPLICATE_IOI(1,
                                                       (1U 
                                                        & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_vec_vcarb), 1U)), 0xaU));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__sig_node_arbtop_0__3(Vsig_topology_top_sig_node_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__sig_node_arbtop_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__req_tovcarb, 
                    ((0U != (IData)(vlSelfRef.__PVT__gnt_vec_vc0_pre)) 
                     & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__vcx_has_credits), 0U)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__sig_node_arbtop_0__4(Vsig_topology_top_sig_node_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__sig_node_arbtop_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_II(3,2,1U, vlSelfRef.__PVT__req_tovcarb, 
                    VL_EXTEND_II(2,1, ((0U != (IData)(vlSelfRef.__PVT__gnt_vec_vc1_pre)) 
                                       & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__vcx_has_credits), 1U))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_arbtop___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_rsptxflit_top_0__sig_node_arbtop_0__0(Vsig_topology_top_sig_node_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_arbtop___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_rsptxflit_top_0__sig_node_arbtop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_vec_vc1 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc1_pre) 
                                    & VL_REPLICATE_IOI(1,
                                                       (1U 
                                                        & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_vec_vcarb), 1U)), 0xaU));
    vlSelfRef.__PVT__gnt_vec_vc0 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc0_pre) 
                                    & VL_REPLICATE_IOI(1,
                                                       (1U 
                                                        & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_vec_vcarb), 0U)), 0xaU));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_rsptxflit_top_0__sig_node_arbtop_0__1(Vsig_topology_top_sig_node_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_rsptxflit_top_0__sig_node_arbtop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_vec_vc1 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc1_pre) 
                                    & VL_REPLICATE_IOI(1,
                                                       (1U 
                                                        & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_vec_vcarb), 1U)), 0xaU));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_rsptxflit_top_0__sig_node_arbtop_0__2(Vsig_topology_top_sig_node_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_rsptxflit_top_0__sig_node_arbtop_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_II(3,2,1U, vlSelfRef.__PVT__req_tovcarb, 
                    VL_EXTEND_II(2,1, ((0U != (IData)(vlSelfRef.__PVT__gnt_vec_vc1_pre)) 
                                       & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__vcx_has_credits), 1U))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_rsptxflit_top_0__sig_node_arbtop_0__3(Vsig_topology_top_sig_node_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_rsptxflit_top_0__sig_node_arbtop_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_vec_vc0 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc0_pre) 
                                    & VL_REPLICATE_IOI(1,
                                                       (1U 
                                                        & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_vec_vcarb), 0U)), 0xaU));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_rsptxflit_top_0__sig_node_arbtop_0__4(Vsig_topology_top_sig_node_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_rsptxflit_top_0__sig_node_arbtop_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__req_tovcarb, 
                    ((0U != (IData)(vlSelfRef.__PVT__gnt_vec_vc0_pre)) 
                     & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__vcx_has_credits), 0U)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_arbtop___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__sig_node_arbtop_0__0(Vsig_topology_top_sig_node_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_arbtop___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__sig_node_arbtop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_vec_vc1 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc1_pre) 
                                    & VL_REPLICATE_IOI(1,
                                                       (1U 
                                                        & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_vec_vcarb), 1U)), 0xaU));
    vlSelfRef.__PVT__gnt_vec_vc0 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc0_pre) 
                                    & VL_REPLICATE_IOI(1,
                                                       (1U 
                                                        & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_vec_vcarb), 0U)), 0xaU));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__sig_node_arbtop_0__1(Vsig_topology_top_sig_node_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__sig_node_arbtop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_vec_vc1 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc1_pre) 
                                    & VL_REPLICATE_IOI(1,
                                                       (1U 
                                                        & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_vec_vcarb), 1U)), 0xaU));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__sig_node_arbtop_0__2(Vsig_topology_top_sig_node_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__sig_node_arbtop_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_II(3,2,1U, vlSelfRef.__PVT__req_tovcarb, 
                    VL_EXTEND_II(2,1, ((0U != (IData)(vlSelfRef.__PVT__gnt_vec_vc1_pre)) 
                                       & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__vcx_has_credits), 1U))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__sig_node_arbtop_0__3(Vsig_topology_top_sig_node_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__sig_node_arbtop_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_vec_vc0 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc0_pre) 
                                    & VL_REPLICATE_IOI(1,
                                                       (1U 
                                                        & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_vec_vcarb), 0U)), 0xaU));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__sig_node_arbtop_0__4(Vsig_topology_top_sig_node_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_arbtop___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__sig_node_arbtop_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__req_tovcarb, 
                    ((0U != (IData)(vlSelfRef.__PVT__gnt_vec_vc0_pre)) 
                     & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__vcx_has_credits), 0U)));
}
