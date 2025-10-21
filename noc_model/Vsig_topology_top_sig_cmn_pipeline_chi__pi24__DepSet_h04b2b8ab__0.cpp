// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cmn_pipeline_chi__pi24.h"
#include "Vsig_topology_top_sig_cmn_pipeline_ff__D9a.h"

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi24___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__4(Vsig_topology_top_sig_cmn_pipeline_chi__pi24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi24___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    VL_CONCAT_WWI(152,151,1, __Vtemp_1, vlSelfRef.__PVT__rxreqflit_slv, (IData)(vlSelfRef.__PVT__rxreqlcrdv_mst));
    VL_CONCAT_WIW(154,2,152, vlSelfRef.__Vcellinp__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_in, 
                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rxreqflitpend_slv), (IData)(vlSelfRef.__PVT__rxreqflitv_slv)), __Vtemp_1);
    VL_ASSIGN_W(154,vlSelf->__PVT__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv->__PVT__data_in, vlSelfRef.__Vcellinp__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_in);
}

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi24___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__5(Vsig_topology_top_sig_cmn_pipeline_chi__pi24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi24___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    VL_ASSIGN_W(154,vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_out, vlSelf->__PVT__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv->__PVT__data_out);
    vlSelfRef.__PVT__rxreqlcrdv_slv = (1U & VL_BITSEL_IWII(154, vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_out, 0U));
    vlSelfRef.__PVT__rxreqflitpend_mst = (1U & VL_BITSEL_IWII(154, vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_out, 0x99U));
    vlSelfRef.__PVT__rxreqflitv_mst = (1U & VL_BITSEL_IWII(154, vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_out, 0x98U));
    VL_CONST_W_5X(160,__Vtemp_1,0x007fffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(151, 154, __Vtemp_2, vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_out, 1U, 151);
    VL_AND_W(5, vlSelfRef.__PVT__rxreqflit_mst, __Vtemp_1, __Vtemp_2);
}

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi24___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__4(Vsig_topology_top_sig_cmn_pipeline_chi__pi24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi24___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    VL_CONCAT_WWI(152,151,1, __Vtemp_1, vlSelfRef.__PVT__rxreqflit_slv, (IData)(vlSelfRef.__PVT__rxreqlcrdv_mst));
    VL_CONCAT_WIW(154,2,152, vlSelfRef.__Vcellinp__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_in, 
                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rxreqflitpend_slv), (IData)(vlSelfRef.__PVT__rxreqflitv_slv)), __Vtemp_1);
    VL_ASSIGN_W(154,vlSelf->__PVT__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv->__PVT__data_in, vlSelfRef.__Vcellinp__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_in);
}

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi24___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__5(Vsig_topology_top_sig_cmn_pipeline_chi__pi24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi24___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    VL_ASSIGN_W(154,vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_out, vlSelf->__PVT__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv->__PVT__data_out);
    vlSelfRef.__PVT__rxreqlcrdv_slv = (1U & VL_BITSEL_IWII(154, vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_out, 0U));
    vlSelfRef.__PVT__rxreqflitpend_mst = (1U & VL_BITSEL_IWII(154, vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_out, 0x99U));
    vlSelfRef.__PVT__rxreqflitv_mst = (1U & VL_BITSEL_IWII(154, vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_out, 0x98U));
    VL_CONST_W_5X(160,__Vtemp_1,0x007fffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(151, 154, __Vtemp_2, vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_out, 1U, 151);
    VL_AND_W(5, vlSelfRef.__PVT__rxreqflit_mst, __Vtemp_1, __Vtemp_2);
}

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi24___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__4(Vsig_topology_top_sig_cmn_pipeline_chi__pi24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi24___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    VL_CONCAT_WWI(152,151,1, __Vtemp_1, vlSelfRef.__PVT__rxreqflit_slv, (IData)(vlSelfRef.__PVT__rxreqlcrdv_mst));
    VL_CONCAT_WIW(154,2,152, vlSelfRef.__Vcellinp__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_in, 
                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rxreqflitpend_slv), (IData)(vlSelfRef.__PVT__rxreqflitv_slv)), __Vtemp_1);
    VL_ASSIGN_W(154,vlSelf->__PVT__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv->__PVT__data_in, vlSelfRef.__Vcellinp__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_in);
}

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi24___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__5(Vsig_topology_top_sig_cmn_pipeline_chi__pi24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi24___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    VL_ASSIGN_W(154,vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_out, vlSelf->__PVT__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv->__PVT__data_out);
    vlSelfRef.__PVT__rxreqlcrdv_slv = (1U & VL_BITSEL_IWII(154, vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_out, 0U));
    vlSelfRef.__PVT__rxreqflitpend_mst = (1U & VL_BITSEL_IWII(154, vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_out, 0x99U));
    vlSelfRef.__PVT__rxreqflitv_mst = (1U & VL_BITSEL_IWII(154, vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_out, 0x98U));
    VL_CONST_W_5X(160,__Vtemp_1,0x007fffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(151, 154, __Vtemp_2, vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_out, 1U, 151);
    VL_AND_W(5, vlSelfRef.__PVT__rxreqflit_mst, __Vtemp_1, __Vtemp_2);
}

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi24___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__4(Vsig_topology_top_sig_cmn_pipeline_chi__pi24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi24___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    VL_CONCAT_WWI(152,151,1, __Vtemp_1, vlSelfRef.__PVT__rxreqflit_slv, (IData)(vlSelfRef.__PVT__rxreqlcrdv_mst));
    VL_CONCAT_WIW(154,2,152, vlSelfRef.__Vcellinp__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_in, 
                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rxreqflitpend_slv), (IData)(vlSelfRef.__PVT__rxreqflitv_slv)), __Vtemp_1);
    VL_ASSIGN_W(154,vlSelf->__PVT__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv->__PVT__data_in, vlSelfRef.__Vcellinp__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_in);
}

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi24___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__5(Vsig_topology_top_sig_cmn_pipeline_chi__pi24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi24___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    VL_ASSIGN_W(154,vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_out, vlSelf->__PVT__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv->__PVT__data_out);
    vlSelfRef.__PVT__rxreqlcrdv_slv = (1U & VL_BITSEL_IWII(154, vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_out, 0U));
    vlSelfRef.__PVT__rxreqflitpend_mst = (1U & VL_BITSEL_IWII(154, vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_out, 0x99U));
    vlSelfRef.__PVT__rxreqflitv_mst = (1U & VL_BITSEL_IWII(154, vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_out, 0x98U));
    VL_CONST_W_5X(160,__Vtemp_1,0x007fffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(151, 154, __Vtemp_2, vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_out, 1U, 151);
    VL_AND_W(5, vlSelfRef.__PVT__rxreqflit_mst, __Vtemp_1, __Vtemp_2);
}
