// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cmn_pipeline_chi__pi24.h"
#include "Vsig_topology_top_sig_cmn_pipeline_ff__D4c.h"

VL_ATTR_COLD void Vsig_topology_top_sig_cmn_pipeline_chi__pi24___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__2(Vsig_topology_top_sig_cmn_pipeline_chi__pi24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi24___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    VL_CONCAT_WWI(74,73,1, __Vtemp_1, vlSelfRef.__PVT__rxrspflit_slv, (IData)(vlSelfRef.__PVT__rxrsplcrdv_mst));
    VL_CONCAT_WIW(76,2,74, vlSelfRef.__Vcellinp__i_pipe_rxrsp_slv__data_in, 
                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rxrspflitpend_slv), (IData)(vlSelfRef.__PVT__rxrspflitv_slv)), __Vtemp_1);
    VL_ASSIGN_W(76,vlSelf->__PVT__i_pipe_rxrsp_slv->__PVT__data_in, vlSelfRef.__Vcellinp__i_pipe_rxrsp_slv__data_in);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cmn_pipeline_chi__pi24___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__3(Vsig_topology_top_sig_cmn_pipeline_chi__pi24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi24___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    VL_ASSIGN_W(76,vlSelfRef.__Vcellout__i_pipe_rxrsp_slv__data_out, vlSelf->__PVT__i_pipe_rxrsp_slv->__PVT__data_out);
    vlSelfRef.__PVT__rxrsplcrdv_slv = (1U & VL_BITSEL_IWII(76, vlSelfRef.__Vcellout__i_pipe_rxrsp_slv__data_out, 0U));
    vlSelfRef.__PVT__rxrspflitv_mst = (1U & VL_BITSEL_IWII(76, vlSelfRef.__Vcellout__i_pipe_rxrsp_slv__data_out, 0x4aU));
    VL_CONST_W_3X(96,__Vtemp_1,0x000001ff,0xffffffff,0xffffffff);
    VL_SEL_WWII(73, 76, __Vtemp_2, vlSelfRef.__Vcellout__i_pipe_rxrsp_slv__data_out, 1U, 73);
    VL_AND_W(3, vlSelfRef.__PVT__rxrspflit_mst, __Vtemp_1, __Vtemp_2);
    vlSelfRef.__PVT__rxrspflitpend_mst = (1U & VL_BITSEL_IWII(76, vlSelfRef.__Vcellout__i_pipe_rxrsp_slv__data_out, 0x4bU));
}

VL_ATTR_COLD void Vsig_topology_top_sig_cmn_pipeline_chi__pi24___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__2(Vsig_topology_top_sig_cmn_pipeline_chi__pi24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi24___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    VL_CONCAT_WWI(74,73,1, __Vtemp_1, vlSelfRef.__PVT__rxrspflit_slv, (IData)(vlSelfRef.__PVT__rxrsplcrdv_mst));
    VL_CONCAT_WIW(76,2,74, vlSelfRef.__Vcellinp__i_pipe_rxrsp_slv__data_in, 
                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rxrspflitpend_slv), (IData)(vlSelfRef.__PVT__rxrspflitv_slv)), __Vtemp_1);
    VL_ASSIGN_W(76,vlSelf->__PVT__i_pipe_rxrsp_slv->__PVT__data_in, vlSelfRef.__Vcellinp__i_pipe_rxrsp_slv__data_in);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cmn_pipeline_chi__pi24___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__3(Vsig_topology_top_sig_cmn_pipeline_chi__pi24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi24___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    VL_ASSIGN_W(76,vlSelfRef.__Vcellout__i_pipe_rxrsp_slv__data_out, vlSelf->__PVT__i_pipe_rxrsp_slv->__PVT__data_out);
    vlSelfRef.__PVT__rxrsplcrdv_slv = (1U & VL_BITSEL_IWII(76, vlSelfRef.__Vcellout__i_pipe_rxrsp_slv__data_out, 0U));
    vlSelfRef.__PVT__rxrspflitv_mst = (1U & VL_BITSEL_IWII(76, vlSelfRef.__Vcellout__i_pipe_rxrsp_slv__data_out, 0x4aU));
    VL_CONST_W_3X(96,__Vtemp_1,0x000001ff,0xffffffff,0xffffffff);
    VL_SEL_WWII(73, 76, __Vtemp_2, vlSelfRef.__Vcellout__i_pipe_rxrsp_slv__data_out, 1U, 73);
    VL_AND_W(3, vlSelfRef.__PVT__rxrspflit_mst, __Vtemp_1, __Vtemp_2);
    vlSelfRef.__PVT__rxrspflitpend_mst = (1U & VL_BITSEL_IWII(76, vlSelfRef.__Vcellout__i_pipe_rxrsp_slv__data_out, 0x4bU));
}
