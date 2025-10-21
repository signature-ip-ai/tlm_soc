// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_l3_rx_datproc__pi40.h"

VL_ATTR_COLD void Vsig_topology_top_sig_l3_rx_datproc__pi40___ctor_var_reset(Vsig_topology_top_sig_l3_rx_datproc__pi40* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_l3_rx_datproc__pi40___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__ic_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 786372171911065518ull);
    vlSelf->__PVT__ic_gclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1003866039300048377ull);
    vlSelf->__PVT__rstb_ic_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8263995885505281668ull);
    vlSelf->__PVT__mycluster_id = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2384492568486524022ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__i_ucie_bridge_locations[__Vi0] = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14939638592589144635ull);
    }
    vlSelf->__PVT__ic_RX_FLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2973701770878643094ull);
    vlSelf->__PVT__ic_RX_FLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13669975153033366750ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__ic_RX_FLIT, __VscopeHash, 13586822630252626842ull);
    vlSelf->__PVT__ic_RX_LCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14072176314593920398ull);
    vlSelf->__PVT__req_vc0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3832781230470882259ull);
    vlSelf->__PVT__req_vc1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 416742267048905341ull);
    vlSelf->__PVT__gnt_vc0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11170812478043669991ull);
    vlSelf->__PVT__gnt_vc1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7507679530179871333ull);
    VL_SCOPED_RAND_RESET_W(686, vlSelf->__PVT__flit_out_vc0, __VscopeHash, 3622398562474296952ull);
    VL_SCOPED_RAND_RESET_W(686, vlSelf->__PVT__flit_out_vc1, __VscopeHash, 4252838621045558912ull);
    vlSelf->__PVT__end_flit_out_vc0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9822321988348738392ull);
    vlSelf->__PVT__end_flit_out_vc1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17861019278121669558ull);
    vlSelf->__PVT__valid_flit_out_vc0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8347193919685782202ull);
    vlSelf->__PVT__valid_flit_out_vc1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10916403010820539844ull);
    vlSelf->__PVT__enable_init_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13683977253010121183ull);
    vlSelf->__PVT__icx_exist = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8367053913676612596ull);
    vlSelf->__PVT__enable_balanced_routing = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15479611087166412018ull);
    vlSelf->__PVT__flit_is_vc0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14652192241777145500ull);
    vlSelf->__PVT__flit_is_vc1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11115859143169763414ull);
    vlSelf->__PVT__flit_qos_field = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15449561090948766219ull);
    vlSelf->__PVT__send_working_update_vc0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16449924964598446810ull);
    vlSelf->__PVT__send_working_update_vc1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6444899848225697098ull);
    vlSelf->__PVT__send_working_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1583289451390043325ull);
    vlSelf->__PVT__ic_RX_FLITV_is_vc0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9349394018244799750ull);
    vlSelf->__PVT__ic_RX_FLITV_is_vc1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2483582584601230660ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__ic_RX_DATFLIT_s, __VscopeHash, 4621413436226450250ull);
    vlSelf->__PVT__credits_cnt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7236487950202972042ull);
    vlSelf->__PVT__credits_cnt_nxt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8217311561027965769ull);
    vlSelf->__Vdly__credits_cnt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3170841655236782140ull);
}
