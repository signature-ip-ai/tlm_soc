// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cmn_pipeline_chi__pi24.h"
#include "Vsig_topology_top_sig_cmn_pipeline_ff__D2ab.h"

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi24___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__0(Vsig_topology_top_sig_cmn_pipeline_chi__pi24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi24___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<22>/*703:0*/ __Vtemp_1;
    // Body
    VL_CONCAT_WWI(681,680,1, __Vtemp_1, vlSelfRef.__PVT__rxdatflit_slv, (IData)(vlSelfRef.__PVT__rxdatlcrdv_mst));
    VL_CONCAT_WIW(683,2,681, vlSelfRef.__Vcellinp__i_pipe_rxdat_slv__data_in, 
                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rxdatflitpend_slv), (IData)(vlSelfRef.__PVT__rxdatflitv_slv)), __Vtemp_1);
    VL_ASSIGN_W(683,vlSelf->__PVT__i_pipe_rxdat_slv->__PVT__data_in, vlSelfRef.__Vcellinp__i_pipe_rxdat_slv__data_in);
}

extern const VlWide<22>/*703:0*/ Vsig_topology_top__ConstPool__CONST_h93abe68d_0;

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi24___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__1(Vsig_topology_top_sig_cmn_pipeline_chi__pi24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi24___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<22>/*703:0*/ __Vtemp_1;
    // Body
    VL_ASSIGN_W(683,vlSelfRef.__Vcellout__i_pipe_rxdat_slv__data_out, vlSelf->__PVT__i_pipe_rxdat_slv->__PVT__data_out);
    vlSelfRef.__PVT__rxdatlcrdv_slv = (1U & VL_BITSEL_IWII(683, vlSelfRef.__Vcellout__i_pipe_rxdat_slv__data_out, 0U));
    vlSelfRef.__PVT__rxdatflitv_mst = (1U & VL_BITSEL_IWII(683, vlSelfRef.__Vcellout__i_pipe_rxdat_slv__data_out, 0x2a9U));
    VL_SEL_WWII(680, 683, __Vtemp_1, vlSelfRef.__Vcellout__i_pipe_rxdat_slv__data_out, 1U, 680);
    VL_AND_W(22, vlSelfRef.__PVT__rxdatflit_mst, Vsig_topology_top__ConstPool__CONST_h93abe68d_0, __Vtemp_1);
    vlSelfRef.__PVT__rxdatflitpend_mst = (1U & VL_BITSEL_IWII(683, vlSelfRef.__Vcellout__i_pipe_rxdat_slv__data_out, 0x2aaU));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi24___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__0(Vsig_topology_top_sig_cmn_pipeline_chi__pi24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi24___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<22>/*703:0*/ __Vtemp_1;
    // Body
    VL_CONCAT_WWI(681,680,1, __Vtemp_1, vlSelfRef.__PVT__rxdatflit_slv, (IData)(vlSelfRef.__PVT__rxdatlcrdv_mst));
    VL_CONCAT_WIW(683,2,681, vlSelfRef.__Vcellinp__i_pipe_rxdat_slv__data_in, 
                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rxdatflitpend_slv), (IData)(vlSelfRef.__PVT__rxdatflitv_slv)), __Vtemp_1);
    VL_ASSIGN_W(683,vlSelf->__PVT__i_pipe_rxdat_slv->__PVT__data_in, vlSelfRef.__Vcellinp__i_pipe_rxdat_slv__data_in);
}

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi24___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__1(Vsig_topology_top_sig_cmn_pipeline_chi__pi24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi24___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<22>/*703:0*/ __Vtemp_1;
    // Body
    VL_ASSIGN_W(683,vlSelfRef.__Vcellout__i_pipe_rxdat_slv__data_out, vlSelf->__PVT__i_pipe_rxdat_slv->__PVT__data_out);
    vlSelfRef.__PVT__rxdatlcrdv_slv = (1U & VL_BITSEL_IWII(683, vlSelfRef.__Vcellout__i_pipe_rxdat_slv__data_out, 0U));
    vlSelfRef.__PVT__rxdatflitv_mst = (1U & VL_BITSEL_IWII(683, vlSelfRef.__Vcellout__i_pipe_rxdat_slv__data_out, 0x2a9U));
    VL_SEL_WWII(680, 683, __Vtemp_1, vlSelfRef.__Vcellout__i_pipe_rxdat_slv__data_out, 1U, 680);
    VL_AND_W(22, vlSelfRef.__PVT__rxdatflit_mst, Vsig_topology_top__ConstPool__CONST_h93abe68d_0, __Vtemp_1);
    vlSelfRef.__PVT__rxdatflitpend_mst = (1U & VL_BITSEL_IWII(683, vlSelfRef.__Vcellout__i_pipe_rxdat_slv__data_out, 0x2aaU));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi24___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__0(Vsig_topology_top_sig_cmn_pipeline_chi__pi24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi24___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<22>/*703:0*/ __Vtemp_1;
    // Body
    VL_CONCAT_WWI(681,680,1, __Vtemp_1, vlSelfRef.__PVT__rxdatflit_slv, (IData)(vlSelfRef.__PVT__rxdatlcrdv_mst));
    VL_CONCAT_WIW(683,2,681, vlSelfRef.__Vcellinp__i_pipe_rxdat_slv__data_in, 
                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rxdatflitpend_slv), (IData)(vlSelfRef.__PVT__rxdatflitv_slv)), __Vtemp_1);
    VL_ASSIGN_W(683,vlSelf->__PVT__i_pipe_rxdat_slv->__PVT__data_in, vlSelfRef.__Vcellinp__i_pipe_rxdat_slv__data_in);
}

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi24___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__1(Vsig_topology_top_sig_cmn_pipeline_chi__pi24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi24___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<22>/*703:0*/ __Vtemp_1;
    // Body
    VL_ASSIGN_W(683,vlSelfRef.__Vcellout__i_pipe_rxdat_slv__data_out, vlSelf->__PVT__i_pipe_rxdat_slv->__PVT__data_out);
    vlSelfRef.__PVT__rxdatlcrdv_slv = (1U & VL_BITSEL_IWII(683, vlSelfRef.__Vcellout__i_pipe_rxdat_slv__data_out, 0U));
    vlSelfRef.__PVT__rxdatflitv_mst = (1U & VL_BITSEL_IWII(683, vlSelfRef.__Vcellout__i_pipe_rxdat_slv__data_out, 0x2a9U));
    VL_SEL_WWII(680, 683, __Vtemp_1, vlSelfRef.__Vcellout__i_pipe_rxdat_slv__data_out, 1U, 680);
    VL_AND_W(22, vlSelfRef.__PVT__rxdatflit_mst, Vsig_topology_top__ConstPool__CONST_h93abe68d_0, __Vtemp_1);
    vlSelfRef.__PVT__rxdatflitpend_mst = (1U & VL_BITSEL_IWII(683, vlSelfRef.__Vcellout__i_pipe_rxdat_slv__data_out, 0x2aaU));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi24___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__0(Vsig_topology_top_sig_cmn_pipeline_chi__pi24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi24___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<22>/*703:0*/ __Vtemp_1;
    // Body
    VL_CONCAT_WWI(681,680,1, __Vtemp_1, vlSelfRef.__PVT__rxdatflit_slv, (IData)(vlSelfRef.__PVT__rxdatlcrdv_mst));
    VL_CONCAT_WIW(683,2,681, vlSelfRef.__Vcellinp__i_pipe_rxdat_slv__data_in, 
                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rxdatflitpend_slv), (IData)(vlSelfRef.__PVT__rxdatflitv_slv)), __Vtemp_1);
    VL_ASSIGN_W(683,vlSelf->__PVT__i_pipe_rxdat_slv->__PVT__data_in, vlSelfRef.__Vcellinp__i_pipe_rxdat_slv__data_in);
}

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi24___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__1(Vsig_topology_top_sig_cmn_pipeline_chi__pi24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi24___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<22>/*703:0*/ __Vtemp_1;
    // Body
    VL_ASSIGN_W(683,vlSelfRef.__Vcellout__i_pipe_rxdat_slv__data_out, vlSelf->__PVT__i_pipe_rxdat_slv->__PVT__data_out);
    vlSelfRef.__PVT__rxdatlcrdv_slv = (1U & VL_BITSEL_IWII(683, vlSelfRef.__Vcellout__i_pipe_rxdat_slv__data_out, 0U));
    vlSelfRef.__PVT__rxdatflitv_mst = (1U & VL_BITSEL_IWII(683, vlSelfRef.__Vcellout__i_pipe_rxdat_slv__data_out, 0x2a9U));
    VL_SEL_WWII(680, 683, __Vtemp_1, vlSelfRef.__Vcellout__i_pipe_rxdat_slv__data_out, 1U, 680);
    VL_AND_W(22, vlSelfRef.__PVT__rxdatflit_mst, Vsig_topology_top__ConstPool__CONST_h93abe68d_0, __Vtemp_1);
    vlSelfRef.__PVT__rxdatflitpend_mst = (1U & VL_BITSEL_IWII(683, vlSelfRef.__Vcellout__i_pipe_rxdat_slv__data_out, 0x2aaU));
}
