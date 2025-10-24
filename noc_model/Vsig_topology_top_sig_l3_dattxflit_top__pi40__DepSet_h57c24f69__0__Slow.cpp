// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_l3_dattxflit_top__pi40.h"

VL_ATTR_COLD void Vsig_topology_top_sig_l3_dattxflit_top__pi40___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__sig_l3_dattxflit_top_0(Vsig_topology_top_sig_l3_dattxflit_top__pi40* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_l3_dattxflit_top__pi40___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__sig_l3_dattxflit_top_0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__full_credit_fifo = 0U;
}

VL_ATTR_COLD void Vsig_topology_top_sig_l3_dattxflit_top__pi40___ctor_var_reset(Vsig_topology_top_sig_l3_dattxflit_top__pi40* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_l3_dattxflit_top__pi40___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__ic_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 786372171911065518ull);
    vlSelf->__PVT__ic_gclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1003866039300048377ull);
    vlSelf->__PVT__rstb_ic_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8263995885505281668ull);
    vlSelf->__PVT__req_vec_vc0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16045427108489484104ull);
    vlSelf->__PVT__end_req_vec_vc0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10504889914627152416ull);
    vlSelf->__PVT__req_vec_vc1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15680133804361938353ull);
    vlSelf->__PVT__end_req_vec_vc1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6327451665652750600ull);
    vlSelf->__PVT__gnt_vec_vc0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6127171034593648077ull);
    vlSelf->__PVT__gnt_vec_vc1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5389941327883996194ull);
    vlSelf->__PVT__valid_req_vec_vc0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16075452181192341057ull);
    vlSelf->__PVT__valid_req_vec_vc1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3322647582798853289ull);
    VL_SCOPED_RAND_RESET_W(6860, vlSelf->__PVT__flit_all_vc0, __VscopeHash, 10452376482605581112ull);
    VL_SCOPED_RAND_RESET_W(6860, vlSelf->__PVT__flit_all_vc1, __VscopeHash, 10132536508638841952ull);
    vlSelf->__PVT__flitv_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12967655514397149454ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__flit_out, __VscopeHash, 10954420838652254973ull);
    vlSelf->__PVT__porthas_credits = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6351129103085960748ull);
    vlSelf->__PVT__wren_flit_store_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5175894201791744789ull);
    vlSelf->__PVT__flitv_out_mux = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10840250322423008502ull);
    VL_SCOPED_RAND_RESET_W(686, vlSelf->__PVT__flit_out_mux, __VscopeHash, 18214460708949876316ull);
    VL_SCOPED_RAND_RESET_W(686, vlSelf->__PVT__write_data_fifo, __VscopeHash, 11498526385856397901ull);
    vlSelf->__PVT__available_fiforoom = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6544740132552875668ull);
    vlSelf->__PVT__available_fiforoom_nxt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9114120108916219325ull);
    vlSelf->__PVT__consumed_fiforoom = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9185320215779078961ull);
    vlSelf->__PVT__read_en_credit_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11975881600328980788ull);
    vlSelf->__PVT__flit_storefifo_has_space = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7780745181683522137ull);
    vlSelf->__PVT__full_flit_store_fifo_dummy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15814986922407404946ull);
    vlSelf->__PVT__empty_flit_store_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10819162057250240777ull);
    VL_SCOPED_RAND_RESET_W(686, vlSelf->__PVT__readdata_storefifo, __VscopeHash, 9154684542333146740ull);
    vlSelf->__PVT__rden_storefifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6978475532258913999ull);
    vlSelf->__PVT__data_beats = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11074227777853195859ull);
    vlSelf->__PVT__data_beats_nxt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17793466704810880652ull);
    vlSelf->__PVT__dataid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3835658495423953905ull);
    vlSelf->__PVT__dataid_nxt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11461983148690258078ull);
    vlSelf->__PVT__rddata_creditfifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1247209856639848900ull);
    vlSelf->__PVT__opened_fiforoom = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11169301651891756420ull);
    vlSelf->__PVT__full_credit_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18028165325612334765ull);
    vlSelf->__PVT__rden_storefifo_bypass = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15702879741833884612ull);
    vlSelf->__Vdly__available_fiforoom = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1562813114644968658ull);
}
