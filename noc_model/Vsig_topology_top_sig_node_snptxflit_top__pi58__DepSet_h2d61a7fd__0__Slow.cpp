// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_node_snptxflit_top__pi58.h"

VL_ATTR_COLD void Vsig_topology_top_sig_node_snptxflit_top__pi58___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__7(Vsig_topology_top_sig_node_snptxflit_top__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_snptxflit_top__pi58___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_snptxflit_top_0__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_fiforoom_nxt = vlSelfRef.__PVT__available_fiforoom;
    if (((IData)(vlSelfRef.__PVT__consumed_fiforoom) 
         & (~ (IData)(vlSelfRef.__PVT__opened_fiforoom)))) {
        vlSelfRef.__PVT__available_fiforoom_nxt = (0x1fU 
                                                   & ((IData)(vlSelfRef.__PVT__available_fiforoom) 
                                                      - (IData)(1U)));
    } else if (((~ (IData)(vlSelfRef.__PVT__consumed_fiforoom)) 
                & (IData)(vlSelfRef.__PVT__opened_fiforoom))) {
        vlSelfRef.__PVT__available_fiforoom_nxt = (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__available_fiforoom)));
    }
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_snptxflit_top__pi58___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__7(Vsig_topology_top_sig_node_snptxflit_top__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_snptxflit_top__pi58___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_snptxflit_top_0__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_fiforoom_nxt = vlSelfRef.__PVT__available_fiforoom;
    if (((IData)(vlSelfRef.__PVT__consumed_fiforoom) 
         & (~ (IData)(vlSelfRef.__PVT__opened_fiforoom)))) {
        vlSelfRef.__PVT__available_fiforoom_nxt = (0x1fU 
                                                   & ((IData)(vlSelfRef.__PVT__available_fiforoom) 
                                                      - (IData)(1U)));
    } else if (((~ (IData)(vlSelfRef.__PVT__consumed_fiforoom)) 
                & (IData)(vlSelfRef.__PVT__opened_fiforoom))) {
        vlSelfRef.__PVT__available_fiforoom_nxt = (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__available_fiforoom)));
    }
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_snptxflit_top__pi58___ctor_var_reset(Vsig_topology_top_sig_node_snptxflit_top__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_snptxflit_top__pi58___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__ic_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 786372171911065518ull);
    vlSelf->__PVT__rstb_ic_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8263995885505281668ull);
    vlSelf->__PVT__intfrx_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 970813291405437ull);
    vlSelf->__PVT__rstb_intfrx_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12027660576638610361ull);
    VL_SCOPED_RAND_RESET_W(1610, vlSelf->__PVT__flit_all_vc0, __VscopeHash, 10452376482605581112ull);
    VL_SCOPED_RAND_RESET_W(1610, vlSelf->__PVT__flit_all_vc1, __VscopeHash, 10132536508638841952ull);
    vlSelf->__PVT__flitv_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12967655514397149454ull);
    VL_SCOPED_RAND_RESET_W(152, vlSelf->__PVT__flit_out, __VscopeHash, 10954420838652254973ull);
    vlSelf->__PVT__porthas_credits = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6351129103085960748ull);
    vlSelf->__PVT__empty_flit_store_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10819162057250240777ull);
    vlSelf->__PVT__flitv_to_id_translator = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12221125971502813320ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__flit_to_id_translator, __VscopeHash, 7464494725577366258ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__flit_from_id_translator, __VscopeHash, 2364390315696130323ull);
    vlSelf->__PVT__id_translator_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4073664312429058754ull);
    vlSelf->__PVT__portis_RN_or_SN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8163090187906755036ull);
    vlSelf->__PVT__sysco_is_disabled = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4786428636997299290ull);
    vlSelf->__PVT__rden_snprsp_flit_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13296725141238944103ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__rddata_snprsp_flit_fifo, __VscopeHash, 10433869773384980416ull);
    vlSelf->__PVT__empty_snprsp_flit_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12694782985816099130ull);
    vlSelf->__PVT__wren_flit_store_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5175894201791744789ull);
    vlSelf->__PVT__flitv_out_mux = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10840250322423008502ull);
    VL_SCOPED_RAND_RESET_W(161, vlSelf->__PVT__flit_out_mux, __VscopeHash, 18214460708949876316ull);
    VL_SCOPED_RAND_RESET_W(152, vlSelf->__PVT__write_data_fifo_tx_snpreq, __VscopeHash, 3549038885383555245ull);
    vlSelf->__PVT__available_fiforoom = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6544740132552875668ull);
    vlSelf->__PVT__available_fiforoom_nxt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9114120108916219325ull);
    vlSelf->__PVT__consumed_fiforoom = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9185320215779078961ull);
    vlSelf->__PVT__flit_storefifo_has_space = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7780745181683522137ull);
    VL_SCOPED_RAND_RESET_W(152, vlSelf->__PVT__readdata_storefifo, __VscopeHash, 9154684542333146740ull);
    vlSelf->__PVT__rden_storefifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6978475532258913999ull);
    vlSelf->__PVT__opened_fiforoom = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11169301651891756420ull);
    vlSelf->__PVT__flit_fromcc_req_or_snp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9533344608703161767ull);
    vlSelf->__PVT__full_credit_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18028165325612334765ull);
    VL_SCOPED_RAND_RESET_W(119, vlSelf->__PVT__snp_flit_out_mux_s, __VscopeHash, 10393403922659161713ull);
    vlSelf->__PVT__wren_snprsp_flit_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15708962926052054293ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__wrdata_snprsp_flit_fifo, __VscopeHash, 15865090137578043272ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__snprsp_flit_s, __VscopeHash, 12066511590254748320ull);
    vlSelf->__PVT__rden_storefifo_bypass = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15702879741833884612ull);
    vlSelf->__PVT__flit_handshake_vc0_if_gnt_recv = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12869256891022488121ull);
    vlSelf->__PVT__flit_handshake_vc1_if_gnt_recv = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3556949877359826491ull);
    vlSelf->__Vcellinp__sig_node_arbtop_0__end_req_vec_vc1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10892790857333327260ull);
    vlSelf->__Vcellinp__sig_node_arbtop_0__req_vec_vc1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6687828096489180123ull);
    vlSelf->__Vcellinp__sig_node_arbtop_0__end_req_vec_vc0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1019649365914650915ull);
    vlSelf->__Vcellinp__sig_node_arbtop_0__req_vec_vc0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11257502383188926913ull);
    vlSelf->__Vcellinp__sig_node_txflit_mux_0__valid_flit_vc1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15754696429226358128ull);
    vlSelf->__Vcellinp__sig_node_txflit_mux_0__valid_flit_vc0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15276519410504474539ull);
    vlSelf->__Vdly__available_fiforoom = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1562813114644968658ull);
}
