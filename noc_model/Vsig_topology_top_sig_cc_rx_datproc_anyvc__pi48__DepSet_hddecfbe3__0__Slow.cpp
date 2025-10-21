// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi48.h"

VL_ATTR_COLD void Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi48___ctor_var_reset(Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi48* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi48___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__ic_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 786372171911065518ull);
    vlSelf->__PVT__ic_gclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1003866039300048377ull);
    vlSelf->__PVT__rstb_ic_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8263995885505281668ull);
    vlSelf->__PVT__mycluster_id = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2384492568486524022ull);
    vlSelf->__PVT__myvc_value = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5300448369956341095ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__i_ucie_bridge_locations[__Vi0] = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14939638592589144635ull);
    }
    vlSelf->__PVT__ic_RX_FLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2973701770878643094ull);
    vlSelf->__PVT__ic_RX_FLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13669975153033366750ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__ic_RX_FLIT, __VscopeHash, 13586822630252626842ull);
    vlSelf->__PVT__req_vc = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 730623673836937258ull);
    vlSelf->__PVT__gnt_vc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8036332149768138720ull);
    VL_SCOPED_RAND_RESET_W(686, vlSelf->__PVT__flit_out, __VscopeHash, 10954420838652254973ull);
    vlSelf->__PVT__end_flit_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3539593210141077732ull);
    vlSelf->__PVT__valid_flit_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17770236575425598779ull);
    vlSelf->__PVT__send_working_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1583289451390043325ull);
    vlSelf->__PVT__icx_exist = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8367053913676612596ull);
    vlSelf->__PVT__enable_balanced_routing = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15479611087166412018ull);
    vlSelf->__PVT__full_flit_store_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7623605713479764967ull);
    vlSelf->__PVT__empty_flit_store_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10819162057250240777ull);
    vlSelf->__PVT__wren_flit_store_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5175894201791744789ull);
    vlSelf->__PVT__assert_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 86243202810160948ull);
    vlSelf->__PVT__fifo_data_avail = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2178050497567064315ull);
    vlSelf->__PVT__tgt_clusterid_fifoout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 387417632561706661ull);
    vlSelf->__PVT__tgt_portid_fifoout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15781973199691402238ull);
    vlSelf->__PVT__drive_end_flit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7271266757207979839ull);
    vlSelf->__PVT__rden_storefifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6978475532258913999ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__flit_out_pyld, __VscopeHash, 14689513724446069492ull);
    vlSelf->__PVT__flit_out_meta = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4781678093268733927ull);
    vlSelf->__PVT__myport_id = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6611438896727267080ull);
    vlSelf->__PVT__exit_network = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14487318861047735563ull);
    vlSelf->__PVT__stayin_network = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8266926721082722206ull);
    vlSelf->__PVT__route_east_xfirst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3363111744227497745ull);
    vlSelf->__PVT__route_west_xfirst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16602266665050450995ull);
    vlSelf->__PVT__route_north_xfirst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5242363399908867930ull);
    vlSelf->__PVT__route_south_xfirst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12509283291086408906ull);
    vlSelf->__PVT__route_east_yfirst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8855799978197763761ull);
    vlSelf->__PVT__route_west_yfirst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7232539986717908453ull);
    vlSelf->__PVT__route_north_yfirst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6436651731777356303ull);
    vlSelf->__PVT__route_south_yfirst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12650726061625165518ull);
    vlSelf->__PVT__xmtstate = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7790739645219600961ull);
    vlSelf->__PVT__xmtstate_nxt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15411646401568280851ull);
    vlSelf->__PVT__send_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9817852700440672486ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__read_data_fifo_stored_nxt, __VscopeHash, 9236714825484219837ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__write_data_fifo, __VscopeHash, 11498526385856397901ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__read_data_fifo, __VscopeHash, 15169263796891844761ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__read_data_fifo_stored, __VscopeHash, 18266271290246763668ull);
    vlSelf->__PVT__creditfifo_hasroom = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14565009676211480998ull);
    vlSelf->__PVT__req_crdt_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10400161427952110143ull);
    vlSelf->__PVT__rden_storefifo_bypass = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15702879741833884612ull);
    vlSelf->__PVT__srcid_bit0_fifoout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17885360760144034417ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__Vcellout__flit_store_fifo_0__fifo_rddata, __VscopeHash, 7381871460150964851ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__Vcellinp__flit_store_fifo_0__fifo_wrdata, __VscopeHash, 14470943242895543582ull);
    vlSelf->__PVT__my_cluster_x = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9140717396955540956ull);
    vlSelf->__PVT__tgt_cluster_x = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15539555788864595596ull);
    vlSelf->__PVT__final_tgt_cluster_x = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10125120546149040962ull);
    vlSelf->__PVT__my_cluster_y = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17253315228073334112ull);
    vlSelf->__PVT__tgt_cluster_y = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15254192181378776428ull);
    vlSelf->__PVT__final_tgt_cluster_y = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7630514236813194162ull);
    vlSelf->__PVT__my_topology_x = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18351176466089285285ull);
    vlSelf->__PVT__tgt_topology_x = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16118586023733067563ull);
    vlSelf->__PVT__my_topology_y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5189033068698802036ull);
    vlSelf->__PVT__tgt_topology_y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4455920916368223496ull);
    vlSelf->__PVT__mismatched_topology_ids = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16417463048178261673ull);
    vlSelf->__PVT__w_tgt_ucie_bridge_info = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15442745731092632879ull);
    vlSelf->__PVT__ucie_bridge_cluster_only_x = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8184855016783662111ull);
    vlSelf->__PVT__ucie_bridge_cluster_only_y = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15331863288827912648ull);
    vlSelf->__PVT__ucie_bridge_port_drxn_only = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13117567892498268045ull);
    vlSelf->__PVT__select_xfirst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3146073831916067206ull);
    vlSelf->__PVT__full_credit_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18028165325612334765ull);
    vlSelf->__Vdly__xmtstate = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13421361454766880576ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__Vdly__read_data_fifo_stored, __VscopeHash, 2990092295006844582ull);
}
