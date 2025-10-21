// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cmn_pipeline_chi__pi27.h"
#include "Vsig_topology_top_sig_cmn_pipeline_ff__D2.h"
#include "Vsig_topology_top_sig_cmn_pipeline_ff__D2ab.h"
#include "Vsig_topology_top_sig_cmn_pipeline_ff__D9a.h"

VL_ATTR_COLD void Vsig_topology_top_sig_cmn_pipeline_chi__pi27___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn__4(Vsig_topology_top_sig_cmn_pipeline_chi__pi27* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi27___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<22>/*703:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__Vcellinp__nodeport_configuration__DOT__i_pipe_sact__data_in 
        = VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__txsactive_mst), (IData)(vlSelfRef.__PVT__rxsactive_slv));
    vlSelfRef.__Vcellinp__nodeport_configuration__DOT__i_pipe_txlink_slv__data_in 
        = VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__txlinkactivereq_mst), (IData)(vlSelfRef.__PVT__txlinkactiveack_slv));
    vlSelfRef.__Vcellinp__nodeport_configuration__DOT__i_pipe_rxlink__data_in 
        = VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rxlinkactiveack_mst), (IData)(vlSelfRef.__PVT__rxlinkactivereq_slv));
    VL_CONCAT_WWI(152,151,1, __Vtemp_1, vlSelfRef.__PVT__txsnpflit_mst, (IData)(vlSelfRef.__PVT__txsnplcrdv_slv));
    VL_CONCAT_WIW(154,2,152, vlSelfRef.__Vcellinp__i_pipe_rxsnp_mst__data_in, 
                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__txsnpflitpend_mst), (IData)(vlSelfRef.__PVT__txsnpflitv_mst)), __Vtemp_1);
    VL_CONCAT_WWI(681,680,1, __Vtemp_2, vlSelfRef.__PVT__txdatflit_mst, (IData)(vlSelfRef.__PVT__txdatlcrdv_slv));
    VL_CONCAT_WIW(683,2,681, vlSelfRef.__Vcellinp__i_pipe_rxdat_mst__data_in, 
                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__txdatflitpend_mst), (IData)(vlSelfRef.__PVT__txdatflitv_mst)), __Vtemp_2);
    vlSelf->__PVT__nodeport_configuration__DOT__i_pipe_sact->__PVT__data_in 
        = vlSelfRef.__Vcellinp__nodeport_configuration__DOT__i_pipe_sact__data_in;
    vlSelf->__PVT__nodeport_configuration__DOT__i_pipe_txlink_slv->__PVT__data_in 
        = vlSelfRef.__Vcellinp__nodeport_configuration__DOT__i_pipe_txlink_slv__data_in;
    vlSelf->__PVT__nodeport_configuration__DOT__i_pipe_rxlink->__PVT__data_in 
        = vlSelfRef.__Vcellinp__nodeport_configuration__DOT__i_pipe_rxlink__data_in;
    VL_ASSIGN_W(154,vlSelf->__PVT__i_pipe_rxsnp_mst->__PVT__data_in, vlSelfRef.__Vcellinp__i_pipe_rxsnp_mst__data_in);
    VL_ASSIGN_W(683,vlSelf->__PVT__i_pipe_rxdat_mst->__PVT__data_in, vlSelfRef.__Vcellinp__i_pipe_rxdat_mst__data_in);
}

extern const VlWide<22>/*703:0*/ Vsig_topology_top__ConstPool__CONST_h93abe68d_0;

VL_ATTR_COLD void Vsig_topology_top_sig_cmn_pipeline_chi__pi27___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn__5(Vsig_topology_top_sig_cmn_pipeline_chi__pi27* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi27___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    VlWide<22>/*703:0*/ __Vtemp_3;
    // Body
    vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_sact__data_out 
        = vlSelf->__PVT__nodeport_configuration__DOT__i_pipe_sact->__PVT__data_out;
    vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_txlink_slv__data_out 
        = vlSelf->__PVT__nodeport_configuration__DOT__i_pipe_txlink_slv->__PVT__data_out;
    vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_rxlink__data_out 
        = vlSelf->__PVT__nodeport_configuration__DOT__i_pipe_rxlink->__PVT__data_out;
    VL_ASSIGN_W(154,vlSelfRef.__Vcellout__i_pipe_rxsnp_mst__data_out, vlSelf->__PVT__i_pipe_rxsnp_mst->__PVT__data_out);
    VL_ASSIGN_W(683,vlSelfRef.__Vcellout__i_pipe_rxdat_mst__data_out, vlSelf->__PVT__i_pipe_rxdat_mst->__PVT__data_out);
    vlSelfRef.__PVT__rxsactive_mst = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_sact__data_out), 0U));
    vlSelfRef.__PVT__txsactive_slv = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_sact__data_out), 1U));
    vlSelfRef.__PVT__txlinkactiveack_mst = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_txlink_slv__data_out), 0U));
    vlSelfRef.__PVT__txlinkactivereq_slv = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_txlink_slv__data_out), 1U));
    vlSelfRef.__PVT__rxlinkactivereq_mst = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_rxlink__data_out), 0U));
    vlSelfRef.__PVT__rxlinkactiveack_slv = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_rxlink__data_out), 1U));
    vlSelfRef.__PVT__txsnplcrdv_mst = (1U & VL_BITSEL_IWII(154, vlSelfRef.__Vcellout__i_pipe_rxsnp_mst__data_out, 0U));
    vlSelfRef.__PVT__txsnpflitpend_slv = (1U & VL_BITSEL_IWII(154, vlSelfRef.__Vcellout__i_pipe_rxsnp_mst__data_out, 0x99U));
    vlSelfRef.__PVT__txsnpflitv_slv = (1U & VL_BITSEL_IWII(154, vlSelfRef.__Vcellout__i_pipe_rxsnp_mst__data_out, 0x98U));
    VL_CONST_W_5X(160,__Vtemp_1,0x007fffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(151, 154, __Vtemp_2, vlSelfRef.__Vcellout__i_pipe_rxsnp_mst__data_out, 1U, 151);
    VL_AND_W(5, vlSelfRef.__PVT__txsnpflit_slv, __Vtemp_1, __Vtemp_2);
    vlSelfRef.__PVT__txdatlcrdv_mst = (1U & VL_BITSEL_IWII(683, vlSelfRef.__Vcellout__i_pipe_rxdat_mst__data_out, 0U));
    vlSelfRef.__PVT__txdatflitpend_slv = (1U & VL_BITSEL_IWII(683, vlSelfRef.__Vcellout__i_pipe_rxdat_mst__data_out, 0x2aaU));
    vlSelfRef.__PVT__txdatflitv_slv = (1U & VL_BITSEL_IWII(683, vlSelfRef.__Vcellout__i_pipe_rxdat_mst__data_out, 0x2a9U));
    VL_SEL_WWII(680, 683, __Vtemp_3, vlSelfRef.__Vcellout__i_pipe_rxdat_mst__data_out, 1U, 680);
    VL_AND_W(22, vlSelfRef.__PVT__txdatflit_slv, Vsig_topology_top__ConstPool__CONST_h93abe68d_0, __Vtemp_3);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cmn_pipeline_chi__pi27___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn__4(Vsig_topology_top_sig_cmn_pipeline_chi__pi27* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi27___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<22>/*703:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__Vcellinp__nodeport_configuration__DOT__i_pipe_sact__data_in 
        = VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__txsactive_mst), (IData)(vlSelfRef.__PVT__rxsactive_slv));
    vlSelfRef.__Vcellinp__nodeport_configuration__DOT__i_pipe_txlink_slv__data_in 
        = VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__txlinkactivereq_mst), (IData)(vlSelfRef.__PVT__txlinkactiveack_slv));
    vlSelfRef.__Vcellinp__nodeport_configuration__DOT__i_pipe_rxlink__data_in 
        = VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rxlinkactiveack_mst), (IData)(vlSelfRef.__PVT__rxlinkactivereq_slv));
    VL_CONCAT_WWI(152,151,1, __Vtemp_1, vlSelfRef.__PVT__txsnpflit_mst, (IData)(vlSelfRef.__PVT__txsnplcrdv_slv));
    VL_CONCAT_WIW(154,2,152, vlSelfRef.__Vcellinp__i_pipe_rxsnp_mst__data_in, 
                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__txsnpflitpend_mst), (IData)(vlSelfRef.__PVT__txsnpflitv_mst)), __Vtemp_1);
    VL_CONCAT_WWI(681,680,1, __Vtemp_2, vlSelfRef.__PVT__txdatflit_mst, (IData)(vlSelfRef.__PVT__txdatlcrdv_slv));
    VL_CONCAT_WIW(683,2,681, vlSelfRef.__Vcellinp__i_pipe_rxdat_mst__data_in, 
                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__txdatflitpend_mst), (IData)(vlSelfRef.__PVT__txdatflitv_mst)), __Vtemp_2);
    vlSelf->__PVT__nodeport_configuration__DOT__i_pipe_sact->__PVT__data_in 
        = vlSelfRef.__Vcellinp__nodeport_configuration__DOT__i_pipe_sact__data_in;
    vlSelf->__PVT__nodeport_configuration__DOT__i_pipe_txlink_slv->__PVT__data_in 
        = vlSelfRef.__Vcellinp__nodeport_configuration__DOT__i_pipe_txlink_slv__data_in;
    vlSelf->__PVT__nodeport_configuration__DOT__i_pipe_rxlink->__PVT__data_in 
        = vlSelfRef.__Vcellinp__nodeport_configuration__DOT__i_pipe_rxlink__data_in;
    VL_ASSIGN_W(154,vlSelf->__PVT__i_pipe_rxsnp_mst->__PVT__data_in, vlSelfRef.__Vcellinp__i_pipe_rxsnp_mst__data_in);
    VL_ASSIGN_W(683,vlSelf->__PVT__i_pipe_rxdat_mst->__PVT__data_in, vlSelfRef.__Vcellinp__i_pipe_rxdat_mst__data_in);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cmn_pipeline_chi__pi27___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn__5(Vsig_topology_top_sig_cmn_pipeline_chi__pi27* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi27___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    VlWide<22>/*703:0*/ __Vtemp_3;
    // Body
    vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_sact__data_out 
        = vlSelf->__PVT__nodeport_configuration__DOT__i_pipe_sact->__PVT__data_out;
    vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_txlink_slv__data_out 
        = vlSelf->__PVT__nodeport_configuration__DOT__i_pipe_txlink_slv->__PVT__data_out;
    vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_rxlink__data_out 
        = vlSelf->__PVT__nodeport_configuration__DOT__i_pipe_rxlink->__PVT__data_out;
    VL_ASSIGN_W(154,vlSelfRef.__Vcellout__i_pipe_rxsnp_mst__data_out, vlSelf->__PVT__i_pipe_rxsnp_mst->__PVT__data_out);
    VL_ASSIGN_W(683,vlSelfRef.__Vcellout__i_pipe_rxdat_mst__data_out, vlSelf->__PVT__i_pipe_rxdat_mst->__PVT__data_out);
    vlSelfRef.__PVT__rxsactive_mst = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_sact__data_out), 0U));
    vlSelfRef.__PVT__txsactive_slv = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_sact__data_out), 1U));
    vlSelfRef.__PVT__txlinkactiveack_mst = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_txlink_slv__data_out), 0U));
    vlSelfRef.__PVT__txlinkactivereq_slv = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_txlink_slv__data_out), 1U));
    vlSelfRef.__PVT__rxlinkactivereq_mst = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_rxlink__data_out), 0U));
    vlSelfRef.__PVT__rxlinkactiveack_slv = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_rxlink__data_out), 1U));
    vlSelfRef.__PVT__txsnplcrdv_mst = (1U & VL_BITSEL_IWII(154, vlSelfRef.__Vcellout__i_pipe_rxsnp_mst__data_out, 0U));
    vlSelfRef.__PVT__txsnpflitpend_slv = (1U & VL_BITSEL_IWII(154, vlSelfRef.__Vcellout__i_pipe_rxsnp_mst__data_out, 0x99U));
    vlSelfRef.__PVT__txsnpflitv_slv = (1U & VL_BITSEL_IWII(154, vlSelfRef.__Vcellout__i_pipe_rxsnp_mst__data_out, 0x98U));
    VL_CONST_W_5X(160,__Vtemp_1,0x007fffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(151, 154, __Vtemp_2, vlSelfRef.__Vcellout__i_pipe_rxsnp_mst__data_out, 1U, 151);
    VL_AND_W(5, vlSelfRef.__PVT__txsnpflit_slv, __Vtemp_1, __Vtemp_2);
    vlSelfRef.__PVT__txdatlcrdv_mst = (1U & VL_BITSEL_IWII(683, vlSelfRef.__Vcellout__i_pipe_rxdat_mst__data_out, 0U));
    vlSelfRef.__PVT__txdatflitpend_slv = (1U & VL_BITSEL_IWII(683, vlSelfRef.__Vcellout__i_pipe_rxdat_mst__data_out, 0x2aaU));
    vlSelfRef.__PVT__txdatflitv_slv = (1U & VL_BITSEL_IWII(683, vlSelfRef.__Vcellout__i_pipe_rxdat_mst__data_out, 0x2a9U));
    VL_SEL_WWII(680, 683, __Vtemp_3, vlSelfRef.__Vcellout__i_pipe_rxdat_mst__data_out, 1U, 680);
    VL_AND_W(22, vlSelfRef.__PVT__txdatflit_slv, Vsig_topology_top__ConstPool__CONST_h93abe68d_0, __Vtemp_3);
}
