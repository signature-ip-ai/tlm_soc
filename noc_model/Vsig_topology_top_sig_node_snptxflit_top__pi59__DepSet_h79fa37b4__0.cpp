// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_fifo_synchclk_flop__pi68.h"
#include "Vsig_topology_top_sig_node_snptxflit_top__pi59.h"
#include "Vsig_topology_top_sig_node_txflit_mux__Fa1.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_snptxflit_top__pi59___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__3(Vsig_topology_top_sig_node_snptxflit_top__pi59* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_snptxflit_top__pi59___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_mux, vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flit_out);
    vlSelfRef.__PVT__flitv_out_mux = vlSelf->__PVT__sig_node_txflit_mux_0->__PVT__flitv_out;
    vlSelfRef.__PVT__flit_fromcc_req_or_snp = (1U & 
                                               VL_BITSEL_IWII(161, vlSelfRef.__PVT__flit_out_mux, 0xa0U));
    VL_CONST_W_5X(160,__Vtemp_1,0x007fffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(151, 161, __Vtemp_2, vlSelfRef.__PVT__flit_out_mux, 0U, 151);
    VL_AND_W(5, vlSelfRef.__PVT__flit_to_id_translator, __Vtemp_1, __Vtemp_2);
    vlSelfRef.__PVT__wren_snprsp_flit_fifo = (((IData)(vlSelfRef.__PVT__flitv_out_mux) 
                                               & (IData)(vlSelfRef.__PVT__portis_RN_or_SN)) 
                                              & (IData)(vlSelfRef.__PVT__sysco_is_disabled));
    vlSelfRef.__PVT__flitv_to_id_translator = vlSelfRef.__PVT__flitv_out_mux;
    vlSelf->__PVT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0->__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_snprsp_flit_fifo;
}
