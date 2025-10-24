// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_node_rx_datproc__pi57.h"

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc__pi57___ctor_var_reset(Vsig_topology_top_sig_node_rx_datproc__pi57* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_datproc__pi57___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__ic_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 786372171911065518ull);
    vlSelf->__PVT__ic_gclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1003866039300048377ull);
    vlSelf->__PVT__rstb_ic_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8263995885505281668ull);
    vlSelf->__PVT__intfrx_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 970813291405437ull);
    vlSelf->__PVT__intfrx_gclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16373072684055786530ull);
    vlSelf->__PVT__rstb_intfrx_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12027660576638610361ull);
    vlSelf->__PVT__mycluster_id = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2384492568486524022ull);
    vlSelf->__PVT__myproc_id = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13274432713412293163ull);
    vlSelf->__PVT__ic_RX_FLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2973701770878643094ull);
    vlSelf->__PVT__ic_RX_FLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13669975153033366750ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__ic_RX_FLIT, __VscopeHash, 13586822630252626842ull);
    vlSelf->__PVT__ic_RX_LCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14072176314593920398ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__i_ucie_bridge_locations[__Vi0] = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14939638592589144635ull);
    }
    VL_SCOPED_RAND_RESET_W(686, vlSelf->__PVT__flit_out_vc0, __VscopeHash, 3622398562474296952ull);
    VL_SCOPED_RAND_RESET_W(686, vlSelf->__PVT__flit_out_vc1, __VscopeHash, 4252838621045558912ull);
    vlSelf->__PVT__enable_init_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13683977253010121183ull);
    vlSelf->__PVT__rcvr_can_send_crdt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13837892261923136218ull);
    vlSelf->__PVT__icx_exist = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8367053913676612596ull);
    vlSelf->__PVT__enable_balanced_routing = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15479611087166412018ull);
    vlSelf->__PVT__credits_backto_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 58441542743280763ull);
    vlSelf->__PVT__i_timeout_or_recovery_mode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17777484362480875309ull);
    vlSelf->__PVT__o_rxtop_datproc_fifo_is_full_vc0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12145460219354508886ull);
    vlSelf->__PVT__flit_is_vc0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14652192241777145500ull);
    vlSelf->__PVT__flit_is_vc1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11115859143169763414ull);
    vlSelf->__PVT__rcv_buff_released_vc0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6932248938443979625ull);
    vlSelf->__PVT__rcv_buff_released_vc1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17651193454876933414ull);
    vlSelf->__PVT__send_credit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15932663388384811978ull);
    vlSelf->__PVT__credits_backto_full_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7856123552877331471ull);
    vlSelf->__PVT__rcvd_link_crdt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9476045855841013185ull);
    vlSelf->__PVT__rcvd_proc_crdt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4353204567222726855ull);
    vlSelf->__PVT__rxtop_datproc_fifo_is_full_vc0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13601906680556258455ull);
    vlSelf->__PVT__rxtop_datproc_fifo_is_full_vc1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13485552210242841776ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__ic_RX_DATFLIT_s, __VscopeHash, 4621413436226450250ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__ic_RX_FLIT_modified, __VscopeHash, 1950009161238542041ull);
    vlSelf->__PVT__crdt_balnce_tobesent = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12965322316520837628ull);
    vlSelf->__PVT__crdt_balnce_tobesent_nxt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4036998401411060512ull);
    vlSelf->__PVT__crdt_balance_to_deactivate_link = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13051745309924181175ull);
    vlSelf->__PVT__crdt_balance_to_deactivate_link_nxt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3642973881028721926ull);
    vlSelf->__PVT__rcv_buff_released_credit_value = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8276621158196907902ull);
    vlSelf->__PVT__ic_RX_FLITV_is_vc0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9349394018244799750ull);
    vlSelf->__PVT__ic_RX_FLITV_is_vc1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2483582584601230660ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__Vcellinp__sig_node_rx_datproc_vc0__ic_RX_FLIT, __VscopeHash, 18233342395545717515ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__Vcellinp__sig_node_rx_datproc_vc1__ic_RX_FLIT, __VscopeHash, 3376611851571601946ull);
    vlSelf->__Vdly__crdt_balnce_tobesent = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4688106688718098034ull);
    vlSelf->__Vdly__crdt_balance_to_deactivate_link = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5641473467674498908ull);
    vlSelf->__Vdly__credits_backto_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15123773418311361357ull);
}
