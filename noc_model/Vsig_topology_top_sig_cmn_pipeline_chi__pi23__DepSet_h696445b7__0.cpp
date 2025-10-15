// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_cmn_pipeline_chi__pi23.h"

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi23___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__0(Vsig_topology_top_sig_cmn_pipeline_chi__pi23* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi23___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__i_pipe_rxrsp_slv.__PVT__reset_n 
        = vlSelfRef.__PVT__reset_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__i_pipe_rxdat_slv.__PVT__reset_n 
        = vlSelfRef.__PVT__reset_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__i_pipe_rxdat_mst.__PVT__reset_n 
        = vlSelfRef.__PVT__reset_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__i_pipe_rxsnp_mst.__PVT__reset_n 
        = vlSelfRef.__PVT__reset_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__i_pipe_sact.__PVT__reset_n 
        = vlSelfRef.__PVT__reset_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__i_pipe_rxlink.__PVT__reset_n 
        = vlSelfRef.__PVT__reset_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__i_pipe_txlink_slv.__PVT__reset_n 
        = vlSelfRef.__PVT__reset_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_sysco.__PVT__reset_n 
        = vlSelfRef.__PVT__reset_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv.__PVT__reset_n 
        = vlSelfRef.__PVT__reset_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxrsp_mst.__PVT__reset_n 
        = vlSelfRef.__PVT__reset_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__i_pipe_rxrsp_slv.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__i_pipe_rxdat_slv.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__i_pipe_rxdat_mst.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__i_pipe_rxsnp_mst.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__i_pipe_sact.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__i_pipe_rxlink.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__i_pipe_txlink_slv.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_sysco.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxrsp_mst.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSelfRef.__Vcellinp__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_sysco__data_in 
        = VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__syscoack_mst), (IData)(vlSelfRef.__PVT__syscoreq_slv));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_sysco.__PVT__data_in 
        = vlSelfRef.__Vcellinp__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_sysco__data_in;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi23___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__1(Vsig_topology_top_sig_cmn_pipeline_chi__pi23* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi23___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_sysco__data_out 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_sysco.__PVT__data_out;
    vlSelfRef.__PVT__syscoack_slv = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_sysco__data_out), 1U));
    vlSelfRef.__PVT__syscoreq_mst = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_sysco__data_out), 0U));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi23___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__0(Vsig_topology_top_sig_cmn_pipeline_chi__pi23* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi23___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<22>/*703:0*/ __Vtemp_1;
    // Body
    VL_CONCAT_WWI(681,680,1, __Vtemp_1, vlSelfRef.__PVT__rxdatflit_slv, (IData)(vlSelfRef.__PVT__rxdatlcrdv_mst));
    VL_CONCAT_WIW(683,2,681, vlSelfRef.__Vcellinp__i_pipe_rxdat_slv__data_in, 
                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rxdatflitpend_slv), (IData)(vlSelfRef.__PVT__rxdatflitv_slv)), __Vtemp_1);
    VL_ASSIGN_W(683,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__i_pipe_rxdat_slv.__PVT__data_in, vlSelfRef.__Vcellinp__i_pipe_rxdat_slv__data_in);
}

extern const VlWide<22>/*703:0*/ Vsig_topology_top__ConstPool__CONST_h93abe68d_0;

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi23___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__1(Vsig_topology_top_sig_cmn_pipeline_chi__pi23* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi23___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<22>/*703:0*/ __Vtemp_1;
    // Body
    VL_ASSIGN_W(683,vlSelfRef.__Vcellout__i_pipe_rxdat_slv__data_out, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__i_pipe_rxdat_slv.__PVT__data_out);
    vlSelfRef.__PVT__rxdatlcrdv_slv = (1U & VL_BITSEL_IWII(683, vlSelfRef.__Vcellout__i_pipe_rxdat_slv__data_out, 0U));
    vlSelfRef.__PVT__rxdatflitv_mst = (1U & VL_BITSEL_IWII(683, vlSelfRef.__Vcellout__i_pipe_rxdat_slv__data_out, 0x2a9U));
    VL_SEL_WWII(680, 683, __Vtemp_1, vlSelfRef.__Vcellout__i_pipe_rxdat_slv__data_out, 1U, 680);
    VL_AND_W(22, vlSelfRef.__PVT__rxdatflit_mst, Vsig_topology_top__ConstPool__CONST_h93abe68d_0, __Vtemp_1);
    vlSelfRef.__PVT__rxdatflitpend_mst = (1U & VL_BITSEL_IWII(683, vlSelfRef.__Vcellout__i_pipe_rxdat_slv__data_out, 0x2aaU));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi23___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__2(Vsig_topology_top_sig_cmn_pipeline_chi__pi23* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi23___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    VL_CONCAT_WWI(74,73,1, __Vtemp_1, vlSelfRef.__PVT__rxrspflit_slv, (IData)(vlSelfRef.__PVT__rxrsplcrdv_mst));
    VL_CONCAT_WIW(76,2,74, vlSelfRef.__Vcellinp__i_pipe_rxrsp_slv__data_in, 
                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rxrspflitpend_slv), (IData)(vlSelfRef.__PVT__rxrspflitv_slv)), __Vtemp_1);
    VL_ASSIGN_W(76,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__i_pipe_rxrsp_slv.__PVT__data_in, vlSelfRef.__Vcellinp__i_pipe_rxrsp_slv__data_in);
}

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi23___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__3(Vsig_topology_top_sig_cmn_pipeline_chi__pi23* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi23___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    VL_ASSIGN_W(76,vlSelfRef.__Vcellout__i_pipe_rxrsp_slv__data_out, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__i_pipe_rxrsp_slv.__PVT__data_out);
    vlSelfRef.__PVT__rxrsplcrdv_slv = (1U & VL_BITSEL_IWII(76, vlSelfRef.__Vcellout__i_pipe_rxrsp_slv__data_out, 0U));
    vlSelfRef.__PVT__rxrspflitv_mst = (1U & VL_BITSEL_IWII(76, vlSelfRef.__Vcellout__i_pipe_rxrsp_slv__data_out, 0x4aU));
    VL_CONST_W_3X(96,__Vtemp_1,0x000001ff,0xffffffff,0xffffffff);
    VL_SEL_WWII(73, 76, __Vtemp_2, vlSelfRef.__Vcellout__i_pipe_rxrsp_slv__data_out, 1U, 73);
    VL_AND_W(3, vlSelfRef.__PVT__rxrspflit_mst, __Vtemp_1, __Vtemp_2);
    vlSelfRef.__PVT__rxrspflitpend_mst = (1U & VL_BITSEL_IWII(76, vlSelfRef.__Vcellout__i_pipe_rxrsp_slv__data_out, 0x4bU));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi23___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__4(Vsig_topology_top_sig_cmn_pipeline_chi__pi23* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi23___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    VL_CONCAT_WWI(152,151,1, __Vtemp_1, vlSelfRef.__PVT__rxreqflit_slv, (IData)(vlSelfRef.__PVT__rxreqlcrdv_mst));
    VL_CONCAT_WIW(154,2,152, vlSelfRef.__Vcellinp__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_in, 
                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rxreqflitpend_slv), (IData)(vlSelfRef.__PVT__rxreqflitv_slv)), __Vtemp_1);
    VL_ASSIGN_W(154,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv.__PVT__data_in, vlSelfRef.__Vcellinp__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_in);
}

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi23___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__5(Vsig_topology_top_sig_cmn_pipeline_chi__pi23* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi23___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    VL_ASSIGN_W(154,vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_out, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv.__PVT__data_out);
    vlSelfRef.__PVT__rxreqlcrdv_slv = (1U & VL_BITSEL_IWII(154, vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_out, 0U));
    vlSelfRef.__PVT__rxreqflitpend_mst = (1U & VL_BITSEL_IWII(154, vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_out, 0x99U));
    vlSelfRef.__PVT__rxreqflitv_mst = (1U & VL_BITSEL_IWII(154, vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_out, 0x98U));
    VL_CONST_W_5X(160,__Vtemp_1,0x007fffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(151, 154, __Vtemp_2, vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_out, 1U, 151);
    VL_AND_W(5, vlSelfRef.__PVT__rxreqflit_mst, __Vtemp_1, __Vtemp_2);
}

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi23___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__6(Vsig_topology_top_sig_cmn_pipeline_chi__pi23* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi23___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__6\n"); );
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
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__i_pipe_txlink_slv.__PVT__data_in 
        = vlSelfRef.__Vcellinp__nodeport_configuration__DOT__i_pipe_txlink_slv__data_in;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__i_pipe_rxlink.__PVT__data_in 
        = vlSelfRef.__Vcellinp__nodeport_configuration__DOT__i_pipe_rxlink__data_in;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__i_pipe_sact.__PVT__data_in 
        = vlSelfRef.__Vcellinp__nodeport_configuration__DOT__i_pipe_sact__data_in;
    VL_ASSIGN_W(683,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__i_pipe_rxdat_mst.__PVT__data_in, vlSelfRef.__Vcellinp__i_pipe_rxdat_mst__data_in);
    VL_ASSIGN_W(76,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxrsp_mst.__PVT__data_in, vlSelfRef.__Vcellinp__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxrsp_mst__data_in);
    VL_ASSIGN_W(111,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__i_pipe_rxsnp_mst.__PVT__data_in, vlSelfRef.__Vcellinp__i_pipe_rxsnp_mst__data_in);
}

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi23___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__7(Vsig_topology_top_sig_cmn_pipeline_chi__pi23* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi23___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__7\n"); );
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
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__i_pipe_txlink_slv.__PVT__data_out;
    vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_rxlink__data_out 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__i_pipe_rxlink.__PVT__data_out;
    vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_sact__data_out 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__i_pipe_sact.__PVT__data_out;
    VL_ASSIGN_W(683,vlSelfRef.__Vcellout__i_pipe_rxdat_mst__data_out, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__i_pipe_rxdat_mst.__PVT__data_out);
    VL_ASSIGN_W(76,vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxrsp_mst__data_out, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxrsp_mst.__PVT__data_out);
    VL_ASSIGN_W(111,vlSelfRef.__Vcellout__i_pipe_rxsnp_mst__data_out, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__i_pipe_rxsnp_mst.__PVT__data_out);
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

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi23___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__0(Vsig_topology_top_sig_cmn_pipeline_chi__pi23* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi23___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<22>/*703:0*/ __Vtemp_1;
    // Body
    VL_CONCAT_WWI(681,680,1, __Vtemp_1, vlSelfRef.__PVT__rxdatflit_slv, (IData)(vlSelfRef.__PVT__rxdatlcrdv_mst));
    VL_CONCAT_WIW(683,2,681, vlSelfRef.__Vcellinp__i_pipe_rxdat_slv__data_in, 
                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rxdatflitpend_slv), (IData)(vlSelfRef.__PVT__rxdatflitv_slv)), __Vtemp_1);
    VL_ASSIGN_W(683,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__i_pipe_rxdat_slv.__PVT__data_in, vlSelfRef.__Vcellinp__i_pipe_rxdat_slv__data_in);
}

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi23___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__1(Vsig_topology_top_sig_cmn_pipeline_chi__pi23* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi23___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<22>/*703:0*/ __Vtemp_1;
    // Body
    VL_ASSIGN_W(683,vlSelfRef.__Vcellout__i_pipe_rxdat_slv__data_out, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__i_pipe_rxdat_slv.__PVT__data_out);
    vlSelfRef.__PVT__rxdatlcrdv_slv = (1U & VL_BITSEL_IWII(683, vlSelfRef.__Vcellout__i_pipe_rxdat_slv__data_out, 0U));
    vlSelfRef.__PVT__rxdatflitv_mst = (1U & VL_BITSEL_IWII(683, vlSelfRef.__Vcellout__i_pipe_rxdat_slv__data_out, 0x2a9U));
    VL_SEL_WWII(680, 683, __Vtemp_1, vlSelfRef.__Vcellout__i_pipe_rxdat_slv__data_out, 1U, 680);
    VL_AND_W(22, vlSelfRef.__PVT__rxdatflit_mst, Vsig_topology_top__ConstPool__CONST_h93abe68d_0, __Vtemp_1);
    vlSelfRef.__PVT__rxdatflitpend_mst = (1U & VL_BITSEL_IWII(683, vlSelfRef.__Vcellout__i_pipe_rxdat_slv__data_out, 0x2aaU));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi23___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__2(Vsig_topology_top_sig_cmn_pipeline_chi__pi23* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi23___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    VL_CONCAT_WWI(74,73,1, __Vtemp_1, vlSelfRef.__PVT__rxrspflit_slv, (IData)(vlSelfRef.__PVT__rxrsplcrdv_mst));
    VL_CONCAT_WIW(76,2,74, vlSelfRef.__Vcellinp__i_pipe_rxrsp_slv__data_in, 
                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rxrspflitpend_slv), (IData)(vlSelfRef.__PVT__rxrspflitv_slv)), __Vtemp_1);
    VL_ASSIGN_W(76,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__i_pipe_rxrsp_slv.__PVT__data_in, vlSelfRef.__Vcellinp__i_pipe_rxrsp_slv__data_in);
}

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi23___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__3(Vsig_topology_top_sig_cmn_pipeline_chi__pi23* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi23___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    VL_ASSIGN_W(76,vlSelfRef.__Vcellout__i_pipe_rxrsp_slv__data_out, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__i_pipe_rxrsp_slv.__PVT__data_out);
    vlSelfRef.__PVT__rxrsplcrdv_slv = (1U & VL_BITSEL_IWII(76, vlSelfRef.__Vcellout__i_pipe_rxrsp_slv__data_out, 0U));
    vlSelfRef.__PVT__rxrspflitv_mst = (1U & VL_BITSEL_IWII(76, vlSelfRef.__Vcellout__i_pipe_rxrsp_slv__data_out, 0x4aU));
    VL_CONST_W_3X(96,__Vtemp_1,0x000001ff,0xffffffff,0xffffffff);
    VL_SEL_WWII(73, 76, __Vtemp_2, vlSelfRef.__Vcellout__i_pipe_rxrsp_slv__data_out, 1U, 73);
    VL_AND_W(3, vlSelfRef.__PVT__rxrspflit_mst, __Vtemp_1, __Vtemp_2);
    vlSelfRef.__PVT__rxrspflitpend_mst = (1U & VL_BITSEL_IWII(76, vlSelfRef.__Vcellout__i_pipe_rxrsp_slv__data_out, 0x4bU));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi23___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__4(Vsig_topology_top_sig_cmn_pipeline_chi__pi23* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi23___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    VL_CONCAT_WWI(152,151,1, __Vtemp_1, vlSelfRef.__PVT__rxreqflit_slv, (IData)(vlSelfRef.__PVT__rxreqlcrdv_mst));
    VL_CONCAT_WIW(154,2,152, vlSelfRef.__Vcellinp__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_in, 
                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rxreqflitpend_slv), (IData)(vlSelfRef.__PVT__rxreqflitv_slv)), __Vtemp_1);
    VL_ASSIGN_W(154,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv.__PVT__data_in, vlSelfRef.__Vcellinp__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_in);
}

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi23___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__5(Vsig_topology_top_sig_cmn_pipeline_chi__pi23* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi23___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    VL_ASSIGN_W(154,vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_out, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv.__PVT__data_out);
    vlSelfRef.__PVT__rxreqlcrdv_slv = (1U & VL_BITSEL_IWII(154, vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_out, 0U));
    vlSelfRef.__PVT__rxreqflitpend_mst = (1U & VL_BITSEL_IWII(154, vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_out, 0x99U));
    vlSelfRef.__PVT__rxreqflitv_mst = (1U & VL_BITSEL_IWII(154, vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_out, 0x98U));
    VL_CONST_W_5X(160,__Vtemp_1,0x007fffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(151, 154, __Vtemp_2, vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxreq_slv__data_out, 1U, 151);
    VL_AND_W(5, vlSelfRef.__PVT__rxreqflit_mst, __Vtemp_1, __Vtemp_2);
}

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi23___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__0(Vsig_topology_top_sig_cmn_pipeline_chi__pi23* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi23___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__0\n"); );
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
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__i_pipe_txlink_slv.__PVT__data_in 
        = vlSelfRef.__Vcellinp__nodeport_configuration__DOT__i_pipe_txlink_slv__data_in;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__i_pipe_rxlink.__PVT__data_in 
        = vlSelfRef.__Vcellinp__nodeport_configuration__DOT__i_pipe_rxlink__data_in;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__i_pipe_sact.__PVT__data_in 
        = vlSelfRef.__Vcellinp__nodeport_configuration__DOT__i_pipe_sact__data_in;
    VL_ASSIGN_W(683,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__i_pipe_rxdat_mst.__PVT__data_in, vlSelfRef.__Vcellinp__i_pipe_rxdat_mst__data_in);
    VL_ASSIGN_W(76,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxrsp_mst.__PVT__data_in, vlSelfRef.__Vcellinp__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxrsp_mst__data_in);
    VL_ASSIGN_W(111,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__i_pipe_rxsnp_mst.__PVT__data_in, vlSelfRef.__Vcellinp__i_pipe_rxsnp_mst__data_in);
}

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi23___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__1(Vsig_topology_top_sig_cmn_pipeline_chi__pi23* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi23___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__1\n"); );
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
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__i_pipe_txlink_slv.__PVT__data_out;
    vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_rxlink__data_out 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__i_pipe_rxlink.__PVT__data_out;
    vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_sact__data_out 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__i_pipe_sact.__PVT__data_out;
    VL_ASSIGN_W(683,vlSelfRef.__Vcellout__i_pipe_rxdat_mst__data_out, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__i_pipe_rxdat_mst.__PVT__data_out);
    VL_ASSIGN_W(76,vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxrsp_mst__data_out, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxrsp_mst.__PVT__data_out);
    VL_ASSIGN_W(111,vlSelfRef.__Vcellout__i_pipe_rxsnp_mst__data_out, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__i_pipe_rxsnp_mst.__PVT__data_out);
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

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi23___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__0(Vsig_topology_top_sig_cmn_pipeline_chi__pi23* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi23___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_sysco__data_in 
        = VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__syscoack_mst), (IData)(vlSelfRef.__PVT__syscoreq_slv));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_sysco.__PVT__data_in 
        = vlSelfRef.__Vcellinp__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_sysco__data_in;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi23___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__1(Vsig_topology_top_sig_cmn_pipeline_chi__pi23* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi23___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_sysco__data_out 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_sysco.__PVT__data_out;
    vlSelfRef.__PVT__syscoack_slv = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_sysco__data_out), 1U));
    vlSelfRef.__PVT__syscoreq_mst = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_sysco__data_out), 0U));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi23___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__0(Vsig_topology_top_sig_cmn_pipeline_chi__pi23* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi23___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__0\n"); );
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
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__i_pipe_txlink_slv.__PVT__data_in 
        = vlSelfRef.__Vcellinp__nodeport_configuration__DOT__i_pipe_txlink_slv__data_in;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__i_pipe_rxlink.__PVT__data_in 
        = vlSelfRef.__Vcellinp__nodeport_configuration__DOT__i_pipe_rxlink__data_in;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__i_pipe_sact.__PVT__data_in 
        = vlSelfRef.__Vcellinp__nodeport_configuration__DOT__i_pipe_sact__data_in;
    VL_ASSIGN_W(683,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__i_pipe_rxdat_mst.__PVT__data_in, vlSelfRef.__Vcellinp__i_pipe_rxdat_mst__data_in);
    VL_ASSIGN_W(76,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxrsp_mst.__PVT__data_in, vlSelfRef.__Vcellinp__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxrsp_mst__data_in);
    VL_ASSIGN_W(111,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__i_pipe_rxsnp_mst.__PVT__data_in, vlSelfRef.__Vcellinp__i_pipe_rxsnp_mst__data_in);
}

VL_INLINE_OPT void Vsig_topology_top_sig_cmn_pipeline_chi__pi23___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__1(Vsig_topology_top_sig_cmn_pipeline_chi__pi23* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cmn_pipeline_chi__pi23___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__1\n"); );
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
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__i_pipe_txlink_slv.__PVT__data_out;
    vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_rxlink__data_out 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__i_pipe_rxlink.__PVT__data_out;
    vlSelfRef.__Vcellout__nodeport_configuration__DOT__i_pipe_sact__data_out 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__i_pipe_sact.__PVT__data_out;
    VL_ASSIGN_W(683,vlSelfRef.__Vcellout__i_pipe_rxdat_mst__data_out, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__i_pipe_rxdat_mst.__PVT__data_out);
    VL_ASSIGN_W(76,vlSelfRef.__Vcellout__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxrsp_mst__data_out, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__nodeport_configuration__DOT__rn_to_hn_configuration__DOT__i_pipe_rxrsp_mst.__PVT__data_out);
    VL_ASSIGN_W(111,vlSelfRef.__Vcellout__i_pipe_rxsnp_mst__data_out, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__i_pipe_rxsnp_mst.__PVT__data_out);
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
