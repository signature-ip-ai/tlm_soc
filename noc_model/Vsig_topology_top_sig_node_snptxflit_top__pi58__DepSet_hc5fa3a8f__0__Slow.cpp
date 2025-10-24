// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_fifo_synchclk_flop__pi67.h"
#include "Vsig_topology_top_sig_node_snptxflit_top__pi58.h"

VL_ATTR_COLD void Vsig_topology_top_sig_node_snptxflit_top__pi58___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__4(Vsig_topology_top_sig_node_snptxflit_top__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_snptxflit_top__pi58___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__opened_fiforoom = (((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                         | (IData)(vlSelfRef.__PVT__rden_snprsp_flit_fifo)) 
                                        | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelf->__PVT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0->__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_snprsp_flit_fifo;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_snptxflit_top__pi58___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__1(Vsig_topology_top_sig_node_snptxflit_top__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_snptxflit_top__pi58___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(73,vlSelfRef.__PVT__rddata_snprsp_flit_fifo, vlSelf->__PVT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0->__PVT__fifo_rddata);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_snptxflit_top__pi58___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__4(Vsig_topology_top_sig_node_snptxflit_top__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_snptxflit_top__pi58___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__opened_fiforoom = (((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                         | (IData)(vlSelfRef.__PVT__rden_snprsp_flit_fifo)) 
                                        | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelf->__PVT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0->__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_snprsp_flit_fifo;
}
