// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_node_rxtop__pi46.h"

VL_ATTR_COLD void Vsig_topology_top_sig_node_rxtop__pi46___ctor_var_reset(Vsig_topology_top_sig_node_rxtop__pi46* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi46___ctor_var_reset\n"); );
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
    vlSelf->__PVT__mn_node_id = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6366623572454694384ull);
    vlSelf->__PVT__cm_homeaddr_base_all_hn_f = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 14619223296438610351ull);
    vlSelf->__PVT__cm_homeaddr_limit_all_hn_f = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 7789085967633061188ull);
    vlSelf->__PVT__xy_coord_all_hn_f = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9419461143915451259ull);
    vlSelf->__PVT__noncm_homeaddr_base_all_hn_f = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 10569734242115779178ull);
    vlSelf->__PVT__noncm_homeaddr_limit_all_hn_f = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 4929601239921733728ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->__PVT__noncm_homeaddr_base_all_hn_i, __VscopeHash, 5774525247165067667ull);
    VL_SCOPED_RAND_RESET_W(116, vlSelf->__PVT__noncm_homeaddr_limit_all_hn_i, __VscopeHash, 18196959966301009892ull);
    vlSelf->__PVT__xy_coord_all_hn_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6990528853360295797ull);
    vlSelf->__PVT__xy_coord_all_pm = VL_SCOPED_RAND_RESET_Q(44, __VscopeHash, 14093339878997901900ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->__PVT__cm_homeaddr_base_all_pm, __VscopeHash, 16326596507192002194ull);
    VL_SCOPED_RAND_RESET_W(116, vlSelf->__PVT__cm_homeaddr_limit_all_pm, __VscopeHash, 15039959541587252906ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->__PVT__noncm_homeaddr_base_all_pm, __VscopeHash, 4362549229537796297ull);
    VL_SCOPED_RAND_RESET_W(116, vlSelf->__PVT__noncm_homeaddr_limit_all_pm, __VscopeHash, 17603428951671837452ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__i_ucie_bridge_locations[__Vi0] = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14939638592589144635ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__i_ucie_node_ids[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6025634249874724155ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__i_ucie_base_addresses[__Vi0] = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 18152667713515942132ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__i_ucie_limit_addresses[__Vi0] = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 3856869148840372046ull);
    }
    vlSelf->__PVT__qos_override_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6335881680461040627ull);
    vlSelf->__PVT__qos_override_val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6466953120562445816ull);
    vlSelf->__PVT__ic_RX_REQFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10592429441801268004ull);
    vlSelf->__PVT__ic_RX_REQFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10926843868711745075ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__ic_RX_REQFLIT, __VscopeHash, 10081777986980214128ull);
    vlSelf->__PVT__ic_RX_REQLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7784705244231261851ull);
    vlSelf->__PVT__ic_RX_SNPFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4721516062163118000ull);
    vlSelf->__PVT__ic_RX_SNPFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11171710941652216617ull);
    VL_SCOPED_RAND_RESET_W(108, vlSelf->__PVT__ic_RX_SNPFLIT, __VscopeHash, 5654856779067209852ull);
    vlSelf->__PVT__ic_RX_SNPLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8564341555754716050ull);
    vlSelf->__PVT__ic_RX_RSPFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18123678973012384143ull);
    vlSelf->__PVT__ic_RX_RSPFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17408552711796289962ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__ic_RX_RSPFLIT, __VscopeHash, 1354610994472511875ull);
    vlSelf->__PVT__ic_RX_RSPLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4980050914503369147ull);
    vlSelf->__PVT__ic_RX_DATFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11842918978764936861ull);
    vlSelf->__PVT__ic_RX_DATFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16491006942135745796ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__ic_RX_DATFLIT, __VscopeHash, 2011190906039008480ull);
    vlSelf->__PVT__ic_RX_DATLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3658967141809139587ull);
    vlSelf->__PVT__ic_RX_LINKACTIVEREQ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7171924022146679320ull);
    vlSelf->__PVT__ic_RX_LINKACTIVEACK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2490056953492044266ull);
    vlSelf->__PVT__ic_TX_LINKACTIVEREQ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9310742148893260830ull);
    VL_SCOPED_RAND_RESET_W(161, vlSelf->__PVT__flit_out_reqf_vc0, __VscopeHash, 5627513096090483279ull);
    VL_SCOPED_RAND_RESET_W(79, vlSelf->__PVT__flit_out_rspf_vc0, __VscopeHash, 15115730508375395079ull);
    VL_SCOPED_RAND_RESET_W(686, vlSelf->__PVT__flit_out_datf_vc0, __VscopeHash, 16167855692546365320ull);
    VL_SCOPED_RAND_RESET_W(161, vlSelf->__PVT__flit_out_reqf_vc1, __VscopeHash, 1936265307465211183ull);
    VL_SCOPED_RAND_RESET_W(79, vlSelf->__PVT__flit_out_rspf_vc1, __VscopeHash, 17924978620067481116ull);
    VL_SCOPED_RAND_RESET_W(686, vlSelf->__PVT__flit_out_datf_vc1, __VscopeHash, 7139772207802805426ull);
    vlSelf->__PVT__credits_backto_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 58441542743280763ull);
    vlSelf->__PVT__rx_req_port_is_inactive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7321643654435963694ull);
    vlSelf->__PVT__i_in_timeout_mode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7004353338641607000ull);
    vlSelf->__PVT__i_in_recovery_mode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13597268550939905961ull);
    vlSelf->__PVT__o_timeout_can_send_generated_dat_rsp_flit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1909876397124644461ull);
    vlSelf->__PVT__id_translator_full_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17777691839719015227ull);
    vlSelf->__PVT__icx_exist_req = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7178889322011531642ull);
    vlSelf->__PVT__icx_exist_rsp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 577472896178209734ull);
    vlSelf->__PVT__icx_exist_dat = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6017703924268166047ull);
    vlSelf->__PVT__enable_balanced_routing = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15479611087166412018ull);
    vlSelf->__PVT__portis_RN_or_SN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8163090187906755036ull);
    vlSelf->__PVT__rden_snprsp_flit_fifo_tx_snp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7405587457092863059ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__rddata_snprsp_flit_fifo_tx_snp, __VscopeHash, 5185148519681247711ull);
    vlSelf->__PVT__empty_snprsp_flit_fifo_tx_snp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13201661025019523298ull);
    vlSelf->__PVT__rxtop_datproc_fifo_is_full_vc0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13601906680556258455ull);
    vlSelf->__PVT__rxtop_rspproc_fifo_is_full_vc0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8672383669517086385ull);
    vlSelf->__PVT__timeout_or_recovery_mode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14880990720530548864ull);
    vlSelf->__PVT__enable_init_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13683977253010121183ull);
    vlSelf->__PVT__rcvr_can_send_crdt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13837892261923136218ull);
    vlSelf->__PVT__rcvr_can_send_crdt_muxed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17212597579096409565ull);
    vlSelf->__PVT__credits_backto_full_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1376913507531579757ull);
    vlSelf->__PVT__credits_backto_full_snp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8369858288872517220ull);
    vlSelf->__PVT__credits_backto_full_rsp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11657471882245870659ull);
    vlSelf->__PVT__credits_backto_full_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 589484163409881232ull);
}
