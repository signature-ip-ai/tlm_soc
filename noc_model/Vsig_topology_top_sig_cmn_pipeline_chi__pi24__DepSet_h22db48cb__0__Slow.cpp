// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cmn_pipeline_chi__pi24.h"
#include "Vsig_topology_top_sig_cmn_pipeline_ff__D2.h"
#include "Vsig_topology_top_sig_cmn_pipeline_ff__D2ab.h"
#include "Vsig_topology_top_sig_cmn_pipeline_ff__D4c.h"
#include "Vsig_topology_top_sig_cmn_pipeline_ff__D6f.h"

VL_ATTR_COLD void Vsig_topology_top_sig_cmn_pipeline_chi__pi24___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__6(Vsig_topology_top_sig_cmn_pipeline_chi__pi24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi24___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<22>/*703:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    // Body
    vlSelfRef.__Vcellinp__nodeport_configuration__DOT__i_pipe_txlink_slv__data_in 
        = VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__txlinkactivereq_mst), (IData)(vlSelfRef.__PVT__txlinkactiveack_slv));
    vlSelfRef.__Vcellinp__nodeport_configuration__DOT__i_pipe_rxlink__data_in 
        = VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rxlinkactiveack_mst), (IData)(vlSelfRef.__PVT__rxlinkactivereq_slv));
    vlSelfRef.__Vcellinp__nodeport_configuration__DOT__i_pipe_sact__data_in 
        = VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__txsactive_mst), (IData)(vlSelfRef.__PVT__rxsactive_slv));
    VL_CONCAT_WWI(681,680,1, __Vtemp_1, vlSelfRef.__PVT__txdatflit_mst, (IData)(vlSelfRef.__PVT__txdatlcrdv_slv));
    VL_CONCAT_WIW(683,2,681, vlSelfRef.__Vcellinp__i_pipe_rxdat_mst__data_in, 
                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__txdatflitpend_mst), (IData)(vlSelfRef.__PVT__txdatflitv_mst)), __Vtemp_1);
    VL_CONCAT_WWI(74,73,1, __Vtemp_2, vlSelfRef.__PVT__txrspflit_mst, (IData)(vlSelfRef.__PVT__txrsplcrdv_slv));
    VL_CONCAT_WIW(76,2,74, vlSelfRef.__Vcellinp__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxrsp_mst__data_in, 
                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__txrspflitpend_mst), (IData)(vlSelfRef.__PVT__txrspflitv_mst)), __Vtemp_2);
    VL_CONCAT_WWI(109,108,1, __Vtemp_3, vlSelfRef.__PVT__txsnpflit_mst, (IData)(vlSelfRef.__PVT__txsnplcrdv_slv));
    VL_CONCAT_WIW(111,2,109, vlSelfRef.__Vcellinp__i_pipe_rxsnp_mst__data_in, 
                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__txsnpflitpend_mst), (IData)(vlSelfRef.__PVT__txsnpflitv_mst)), __Vtemp_3);
    vlSelf->__PVT__nodeport_configuration__DOT__i_pipe_txlink_slv->__PVT__data_in 
        = vlSelfRef.__Vcellinp__nodeport_configuration__DOT__i_pipe_txlink_slv__data_in;
    vlSelf->__PVT__nodeport_configuration__DOT__i_pipe_rxlink->__PVT__data_in 
        = vlSelfRef.__Vcellinp__nodeport_configuration__DOT__i_pipe_rxlink__data_in;
    vlSelf->__PVT__nodeport_configuration__DOT__i_pipe_sact->__PVT__data_in 
        = vlSelfRef.__Vcellinp__nodeport_configuration__DOT__i_pipe_sact__data_in;
    VL_ASSIGN_W(683,vlSelf->__PVT__i_pipe_rxdat_mst->__PVT__data_in, vlSelfRef.__Vcellinp__i_pipe_rxdat_mst__data_in);
    VL_ASSIGN_W(76,vlSelf->__PVT__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxrsp_mst->__PVT__data_in, vlSelfRef.__Vcellinp__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxrsp_mst__data_in);
    VL_ASSIGN_W(111,vlSelf->__PVT__i_pipe_rxsnp_mst->__PVT__data_in, vlSelfRef.__Vcellinp__i_pipe_rxsnp_mst__data_in);
}

extern const VlWide<22>/*703:0*/ Vsig_topology_top__ConstPool__CONST_h93abe68d_0;

VL_ATTR_COLD void Vsig_topology_top_sig_cmn_pipeline_chi__pi24___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__7(Vsig_topology_top_sig_cmn_pipeline_chi__pi24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi24___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<22>/*703:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    // Body
    vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_txlink_slv__data_out 
        = vlSelf->__PVT__nodeport_configuration__DOT__i_pipe_txlink_slv->__PVT__data_out;
    vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_rxlink__data_out 
        = vlSelf->__PVT__nodeport_configuration__DOT__i_pipe_rxlink->__PVT__data_out;
    vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_sact__data_out 
        = vlSelf->__PVT__nodeport_configuration__DOT__i_pipe_sact->__PVT__data_out;
    VL_ASSIGN_W(683,vlSelfRef.__Vcellout__i_pipe_rxdat_mst__data_out, vlSelf->__PVT__i_pipe_rxdat_mst->__PVT__data_out);
    VL_ASSIGN_W(76,vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxrsp_mst__data_out, vlSelf->__PVT__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxrsp_mst->__PVT__data_out);
    VL_ASSIGN_W(111,vlSelfRef.__Vcellout__i_pipe_rxsnp_mst__data_out, vlSelf->__PVT__i_pipe_rxsnp_mst->__PVT__data_out);
    vlSelfRef.__PVT__txlinkactiveack_mst = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_txlink_slv__data_out), 0U));
    vlSelfRef.__PVT__txlinkactivereq_slv = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_txlink_slv__data_out), 1U));
    vlSelfRef.__PVT__rxlinkactivereq_mst = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_rxlink__data_out), 0U));
    vlSelfRef.__PVT__rxlinkactiveack_slv = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_rxlink__data_out), 1U));
    vlSelfRef.__PVT__rxsactive_mst = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_sact__data_out), 0U));
    vlSelfRef.__PVT__txsactive_slv = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_sact__data_out), 1U));
    vlSelfRef.__PVT__txdatlcrdv_mst = (1U & VL_BITSEL_IWII(683, vlSelfRef.__Vcellout__i_pipe_rxdat_mst__data_out, 0U));
    vlSelfRef.__PVT__txdatflitpend_slv = (1U & VL_BITSEL_IWII(683, vlSelfRef.__Vcellout__i_pipe_rxdat_mst__data_out, 0x2aaU));
    vlSelfRef.__PVT__txdatflitv_slv = (1U & VL_BITSEL_IWII(683, vlSelfRef.__Vcellout__i_pipe_rxdat_mst__data_out, 0x2a9U));
    VL_SEL_WWII(680, 683, __Vtemp_1, vlSelfRef.__Vcellout__i_pipe_rxdat_mst__data_out, 1U, 680);
    VL_AND_W(22, vlSelfRef.__PVT__txdatflit_slv, Vsig_topology_top__ConstPool__CONST_h93abe68d_0, __Vtemp_1);
    vlSelfRef.__PVT__txrsplcrdv_mst = (1U & VL_BITSEL_IWII(76, vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxrsp_mst__data_out, 0U));
    vlSelfRef.__PVT__txrspflitpend_slv = (1U & VL_BITSEL_IWII(76, vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxrsp_mst__data_out, 0x4bU));
    vlSelfRef.__PVT__txrspflitv_slv = (1U & VL_BITSEL_IWII(76, vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxrsp_mst__data_out, 0x4aU));
    VL_CONST_W_3X(96,__Vtemp_2,0x000001ff,0xffffffff,0xffffffff);
    VL_SEL_WWII(73, 76, __Vtemp_3, vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxrsp_mst__data_out, 1U, 73);
    VL_AND_W(3, vlSelfRef.__PVT__txrspflit_slv, __Vtemp_2, __Vtemp_3);
    vlSelfRef.__PVT__txsnplcrdv_mst = (1U & VL_BITSEL_IWII(111, vlSelfRef.__Vcellout__i_pipe_rxsnp_mst__data_out, 0U));
    vlSelfRef.__PVT__txsnpflitpend_slv = (1U & VL_BITSEL_IWII(111, vlSelfRef.__Vcellout__i_pipe_rxsnp_mst__data_out, 0x6eU));
    vlSelfRef.__PVT__txsnpflitv_slv = (1U & VL_BITSEL_IWII(111, vlSelfRef.__Vcellout__i_pipe_rxsnp_mst__data_out, 0x6dU));
    VL_CONST_W_4X(128,__Vtemp_4,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 111, __Vtemp_5, vlSelfRef.__Vcellout__i_pipe_rxsnp_mst__data_out, 1U, 108);
    VL_AND_W(4, vlSelfRef.__PVT__txsnpflit_slv, __Vtemp_4, __Vtemp_5);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cmn_pipeline_chi__pi24___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__6(Vsig_topology_top_sig_cmn_pipeline_chi__pi24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi24___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<22>/*703:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    // Body
    vlSelfRef.__Vcellinp__nodeport_configuration__DOT__i_pipe_txlink_slv__data_in 
        = VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__txlinkactivereq_mst), (IData)(vlSelfRef.__PVT__txlinkactiveack_slv));
    vlSelfRef.__Vcellinp__nodeport_configuration__DOT__i_pipe_rxlink__data_in 
        = VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rxlinkactiveack_mst), (IData)(vlSelfRef.__PVT__rxlinkactivereq_slv));
    vlSelfRef.__Vcellinp__nodeport_configuration__DOT__i_pipe_sact__data_in 
        = VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__txsactive_mst), (IData)(vlSelfRef.__PVT__rxsactive_slv));
    VL_CONCAT_WWI(681,680,1, __Vtemp_1, vlSelfRef.__PVT__txdatflit_mst, (IData)(vlSelfRef.__PVT__txdatlcrdv_slv));
    VL_CONCAT_WIW(683,2,681, vlSelfRef.__Vcellinp__i_pipe_rxdat_mst__data_in, 
                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__txdatflitpend_mst), (IData)(vlSelfRef.__PVT__txdatflitv_mst)), __Vtemp_1);
    VL_CONCAT_WWI(74,73,1, __Vtemp_2, vlSelfRef.__PVT__txrspflit_mst, (IData)(vlSelfRef.__PVT__txrsplcrdv_slv));
    VL_CONCAT_WIW(76,2,74, vlSelfRef.__Vcellinp__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxrsp_mst__data_in, 
                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__txrspflitpend_mst), (IData)(vlSelfRef.__PVT__txrspflitv_mst)), __Vtemp_2);
    VL_CONCAT_WWI(109,108,1, __Vtemp_3, vlSelfRef.__PVT__txsnpflit_mst, (IData)(vlSelfRef.__PVT__txsnplcrdv_slv));
    VL_CONCAT_WIW(111,2,109, vlSelfRef.__Vcellinp__i_pipe_rxsnp_mst__data_in, 
                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__txsnpflitpend_mst), (IData)(vlSelfRef.__PVT__txsnpflitv_mst)), __Vtemp_3);
    vlSelf->__PVT__nodeport_configuration__DOT__i_pipe_txlink_slv->__PVT__data_in 
        = vlSelfRef.__Vcellinp__nodeport_configuration__DOT__i_pipe_txlink_slv__data_in;
    vlSelf->__PVT__nodeport_configuration__DOT__i_pipe_rxlink->__PVT__data_in 
        = vlSelfRef.__Vcellinp__nodeport_configuration__DOT__i_pipe_rxlink__data_in;
    vlSelf->__PVT__nodeport_configuration__DOT__i_pipe_sact->__PVT__data_in 
        = vlSelfRef.__Vcellinp__nodeport_configuration__DOT__i_pipe_sact__data_in;
    VL_ASSIGN_W(683,vlSelf->__PVT__i_pipe_rxdat_mst->__PVT__data_in, vlSelfRef.__Vcellinp__i_pipe_rxdat_mst__data_in);
    VL_ASSIGN_W(76,vlSelf->__PVT__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxrsp_mst->__PVT__data_in, vlSelfRef.__Vcellinp__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxrsp_mst__data_in);
    VL_ASSIGN_W(111,vlSelf->__PVT__i_pipe_rxsnp_mst->__PVT__data_in, vlSelfRef.__Vcellinp__i_pipe_rxsnp_mst__data_in);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cmn_pipeline_chi__pi24___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__7(Vsig_topology_top_sig_cmn_pipeline_chi__pi24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi24___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<22>/*703:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    // Body
    vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_txlink_slv__data_out 
        = vlSelf->__PVT__nodeport_configuration__DOT__i_pipe_txlink_slv->__PVT__data_out;
    vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_rxlink__data_out 
        = vlSelf->__PVT__nodeport_configuration__DOT__i_pipe_rxlink->__PVT__data_out;
    vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_sact__data_out 
        = vlSelf->__PVT__nodeport_configuration__DOT__i_pipe_sact->__PVT__data_out;
    VL_ASSIGN_W(683,vlSelfRef.__Vcellout__i_pipe_rxdat_mst__data_out, vlSelf->__PVT__i_pipe_rxdat_mst->__PVT__data_out);
    VL_ASSIGN_W(76,vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxrsp_mst__data_out, vlSelf->__PVT__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxrsp_mst->__PVT__data_out);
    VL_ASSIGN_W(111,vlSelfRef.__Vcellout__i_pipe_rxsnp_mst__data_out, vlSelf->__PVT__i_pipe_rxsnp_mst->__PVT__data_out);
    vlSelfRef.__PVT__txlinkactiveack_mst = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_txlink_slv__data_out), 0U));
    vlSelfRef.__PVT__txlinkactivereq_slv = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_txlink_slv__data_out), 1U));
    vlSelfRef.__PVT__rxlinkactivereq_mst = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_rxlink__data_out), 0U));
    vlSelfRef.__PVT__rxlinkactiveack_slv = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_rxlink__data_out), 1U));
    vlSelfRef.__PVT__rxsactive_mst = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_sact__data_out), 0U));
    vlSelfRef.__PVT__txsactive_slv = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_sact__data_out), 1U));
    vlSelfRef.__PVT__txdatlcrdv_mst = (1U & VL_BITSEL_IWII(683, vlSelfRef.__Vcellout__i_pipe_rxdat_mst__data_out, 0U));
    vlSelfRef.__PVT__txdatflitpend_slv = (1U & VL_BITSEL_IWII(683, vlSelfRef.__Vcellout__i_pipe_rxdat_mst__data_out, 0x2aaU));
    vlSelfRef.__PVT__txdatflitv_slv = (1U & VL_BITSEL_IWII(683, vlSelfRef.__Vcellout__i_pipe_rxdat_mst__data_out, 0x2a9U));
    VL_SEL_WWII(680, 683, __Vtemp_1, vlSelfRef.__Vcellout__i_pipe_rxdat_mst__data_out, 1U, 680);
    VL_AND_W(22, vlSelfRef.__PVT__txdatflit_slv, Vsig_topology_top__ConstPool__CONST_h93abe68d_0, __Vtemp_1);
    vlSelfRef.__PVT__txrsplcrdv_mst = (1U & VL_BITSEL_IWII(76, vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxrsp_mst__data_out, 0U));
    vlSelfRef.__PVT__txrspflitpend_slv = (1U & VL_BITSEL_IWII(76, vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxrsp_mst__data_out, 0x4bU));
    vlSelfRef.__PVT__txrspflitv_slv = (1U & VL_BITSEL_IWII(76, vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxrsp_mst__data_out, 0x4aU));
    VL_CONST_W_3X(96,__Vtemp_2,0x000001ff,0xffffffff,0xffffffff);
    VL_SEL_WWII(73, 76, __Vtemp_3, vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxrsp_mst__data_out, 1U, 73);
    VL_AND_W(3, vlSelfRef.__PVT__txrspflit_slv, __Vtemp_2, __Vtemp_3);
    vlSelfRef.__PVT__txsnplcrdv_mst = (1U & VL_BITSEL_IWII(111, vlSelfRef.__Vcellout__i_pipe_rxsnp_mst__data_out, 0U));
    vlSelfRef.__PVT__txsnpflitpend_slv = (1U & VL_BITSEL_IWII(111, vlSelfRef.__Vcellout__i_pipe_rxsnp_mst__data_out, 0x6eU));
    vlSelfRef.__PVT__txsnpflitv_slv = (1U & VL_BITSEL_IWII(111, vlSelfRef.__Vcellout__i_pipe_rxsnp_mst__data_out, 0x6dU));
    VL_CONST_W_4X(128,__Vtemp_4,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 111, __Vtemp_5, vlSelfRef.__Vcellout__i_pipe_rxsnp_mst__data_out, 1U, 108);
    VL_AND_W(4, vlSelfRef.__PVT__txsnpflit_slv, __Vtemp_4, __Vtemp_5);
}
