// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_fifo_synchclk_flop__pi68.h"
#include "Vsig_topology_top_sig_fifo_synchclk_flop__pi69.h"
#include "Vsig_topology_top_sig_node_snptxflit_top__pi60.h"

VL_ATTR_COLD void Vsig_topology_top_sig_node_snptxflit_top__pi60___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__5(Vsig_topology_top_sig_node_snptxflit_top__pi60* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_snptxflit_top__pi60___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_snprsp_flit_fifo = (((IData)(vlSelfRef.__PVT__flitv_out_mux) 
                                               & (IData)(vlSelfRef.__PVT__portis_RN_or_SN)) 
                                              & (IData)(vlSelfRef.__PVT__sysco_is_disabled));
    vlSelfRef.__PVT__rden_storefifo_bypass = ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                                                & (IData)(vlSelfRef.__PVT__flitv_out_mux)) 
                                               & (IData)(vlSelfRef.__PVT__porthas_credits)) 
                                              & (~ 
                                                 ((IData)(vlSelfRef.__PVT__portis_RN_or_SN) 
                                                  & (IData)(vlSelfRef.__PVT__sysco_is_disabled))));
    vlSelf->__PVT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0->__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_snprsp_flit_fifo;
    vlSelfRef.__PVT__wren_flit_store_fifo = (((IData)(vlSelfRef.__PVT__flitv_out_mux) 
                                              & (~ (IData)(vlSelfRef.__PVT__wren_snprsp_flit_fifo))) 
                                             & (~ (IData)(vlSelfRef.__PVT__rden_storefifo_bypass)));
    vlSelfRef.__PVT__flitv_out = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                  | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    VL_COND_WIWW(152, vlSelfRef.__PVT__flit_out, (IData)(vlSelfRef.__PVT__rden_storefifo_bypass), vlSelfRef.__PVT__write_data_fifo_tx_snpreq, vlSelfRef.__PVT__readdata_storefifo);
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_flit_store_fifo;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_snptxflit_top__pi60___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__5(Vsig_topology_top_sig_node_snptxflit_top__pi60* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_snptxflit_top__pi60___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_snprsp_flit_fifo = (((IData)(vlSelfRef.__PVT__flitv_out_mux) 
                                               & (IData)(vlSelfRef.__PVT__portis_RN_or_SN)) 
                                              & (IData)(vlSelfRef.__PVT__sysco_is_disabled));
    vlSelfRef.__PVT__rden_storefifo_bypass = ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                                                & (IData)(vlSelfRef.__PVT__flitv_out_mux)) 
                                               & (IData)(vlSelfRef.__PVT__porthas_credits)) 
                                              & (~ 
                                                 ((IData)(vlSelfRef.__PVT__portis_RN_or_SN) 
                                                  & (IData)(vlSelfRef.__PVT__sysco_is_disabled))));
    vlSelf->__PVT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0->__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_snprsp_flit_fifo;
    vlSelfRef.__PVT__wren_flit_store_fifo = (((IData)(vlSelfRef.__PVT__flitv_out_mux) 
                                              & (~ (IData)(vlSelfRef.__PVT__wren_snprsp_flit_fifo))) 
                                             & (~ (IData)(vlSelfRef.__PVT__rden_storefifo_bypass)));
    vlSelfRef.__PVT__flitv_out = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                  | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    VL_COND_WIWW(152, vlSelfRef.__PVT__flit_out, (IData)(vlSelfRef.__PVT__rden_storefifo_bypass), vlSelfRef.__PVT__write_data_fifo_tx_snpreq, vlSelfRef.__PVT__readdata_storefifo);
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_flit_store_fifo;
}
