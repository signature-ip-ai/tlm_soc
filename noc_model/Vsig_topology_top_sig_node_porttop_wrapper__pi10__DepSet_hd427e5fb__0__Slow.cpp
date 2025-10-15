// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_node_porttop_wrapper__pi10.h"

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi10___ctor_var_reset(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__intfrx_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 970813291405437ull);
    vlSelf->__PVT__rstb_intfrx_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12027660576638610361ull);
    vlSelf->__PVT__ic_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 786372171911065518ull);
    vlSelf->__PVT__rstb_ic_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8263995885505281668ull);
    vlSelf->__PVT__rx_ic_gclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14734729547715297656ull);
    vlSelf->__PVT__tx_ic_gclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12314182055565024476ull);
    vlSelf->__PVT__rx_intfrx_gclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5657768447574710954ull);
    vlSelf->__PVT__tx_intfrx_gclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14479686406378418957ull);
    vlSelf->__PVT__rx_is_inactive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7568623272905151952ull);
    vlSelf->__PVT__tx_is_inactive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209931857166942920ull);
    vlSelf->__PVT__rx_activate_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1562813220007974936ull);
    vlSelf->__PVT__tx_activate_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1428466810526109246ull);
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
    VL_SCOPED_RAND_RESET_W(161, vlSelf->__PVT__flit_out_reqf_vc0, __VscopeHash, 5627513096090483279ull);
    VL_SCOPED_RAND_RESET_W(79, vlSelf->__PVT__flit_out_rspf_vc0, __VscopeHash, 15115730508375395079ull);
    VL_SCOPED_RAND_RESET_W(686, vlSelf->__PVT__flit_out_datf_vc0, __VscopeHash, 16167855692546365320ull);
    VL_SCOPED_RAND_RESET_W(161, vlSelf->__PVT__flit_out_reqf_vc1, __VscopeHash, 1936265307465211183ull);
    VL_SCOPED_RAND_RESET_W(79, vlSelf->__PVT__flit_out_rspf_vc1, __VscopeHash, 17924978620067481116ull);
    VL_SCOPED_RAND_RESET_W(686, vlSelf->__PVT__flit_out_datf_vc1, __VscopeHash, 7139772207802805426ull);
    VL_SCOPED_RAND_RESET_W(1610, vlSelf->__PVT__flit_all_req_vc0, __VscopeHash, 2122902704796411884ull);
    VL_SCOPED_RAND_RESET_W(1610, vlSelf->__PVT__flit_all_req_vc1, __VscopeHash, 15524392444694250015ull);
    VL_SCOPED_RAND_RESET_W(790, vlSelf->__PVT__flit_all_rsp_vc0, __VscopeHash, 5001631417125367275ull);
    VL_SCOPED_RAND_RESET_W(790, vlSelf->__PVT__flit_all_rsp_vc1, __VscopeHash, 12482377973635375604ull);
    VL_SCOPED_RAND_RESET_W(6860, vlSelf->__PVT__flit_all_dat_vc0, __VscopeHash, 16163490529354362292ull);
    VL_SCOPED_RAND_RESET_W(6860, vlSelf->__PVT__flit_all_dat_vc1, __VscopeHash, 16006715428440085762ull);
    vlSelf->__PVT__ic_TX_REQFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2871580351066470812ull);
    vlSelf->__PVT__ic_TX_REQFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4109497001447517023ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__ic_TX_REQFLIT, __VscopeHash, 569663838784936448ull);
    vlSelf->__PVT__ic_TX_REQLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18149747107335034857ull);
    vlSelf->__PVT__ic_TX_SNPFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2271438628891321049ull);
    vlSelf->__PVT__ic_TX_SNPFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6849754011617526692ull);
    vlSelf->__PVT__ic_TX_SNPFLIT[0] = 0U;
    vlSelf->__PVT__ic_TX_SNPFLIT[1] = 0U;
    vlSelf->__PVT__ic_TX_SNPFLIT[2] = 0U;
    vlSelf->__PVT__ic_TX_SNPFLIT[3] = 0U;
    vlSelf->__PVT__ic_TX_SNPLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4400709601415914605ull);
    vlSelf->__PVT__ic_TX_RSPFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2060896954836582492ull);
    vlSelf->__PVT__ic_TX_RSPFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6986194630684743894ull);
    vlSelf->__PVT__ic_TX_RSPFLIT[0] = 0U;
    vlSelf->__PVT__ic_TX_RSPFLIT[1] = 0U;
    vlSelf->__PVT__ic_TX_RSPFLIT[2] = 0U;
    vlSelf->__PVT__ic_TX_RSPLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12927273387244497438ull);
    vlSelf->__PVT__ic_TX_DATFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8102072163694598261ull);
    vlSelf->__PVT__ic_TX_DATFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17980292739927272412ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__ic_TX_DATFLIT, __VscopeHash, 11344885391285752503ull);
    vlSelf->__PVT__ic_TX_DATLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5674497833994614527ull);
    vlSelf->__PVT__icx_exist = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8367053913676612596ull);
    vlSelf->__PVT__ic_TXSACTIVE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14402484682683694775ull);
    vlSelf->__PVT__ic_RXSACTIVE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6849932795827893202ull);
    vlSelf->__PVT__cc_is_inactive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17456575816747454447ull);
    vlSelf->__PVT__all_cache_init_complete = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3192120307074908864ull);
    vlSelf->__PVT__ic_TX_LINKACTIVEREQ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9310742148893260830ull);
    vlSelf->__PVT__ic_TX_LINKACTIVEACK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10405995942365889507ull);
    vlSelf->__PVT__syscoreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1028827991034232600ull);
    vlSelf->__PVT__syscoack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17385625609871208022ull);
    vlSelf->__PVT__reg_syscoh = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7521666326908395216ull);
    vlSelf->__PVT__i_clear_timeout_interrupt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11306935004978713909ull);
    vlSelf->__PVT__o_timeout_interrupt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7740206937123914527ull);
    vlSelf->__PVT__o_timeout_recovery_successful = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2130048337168507016ull);
    vlSelf->__PVT__i_clear_recovery_interrupt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1448590681538369443ull);
    vlSelf->__PVT__id_translator_hs_pending_txn_snp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9786047516829092547ull);
    vlSelf->__PVT__node_porttop_sn__DOT__rxsactive_to_hn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16897851071023277962ull);
    vlSelf->__PVT__node_porttop_sn__DOT__txsactive_to_pl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3251022312230175902ull);
    vlSelf->__PVT__node_porttop_sn__DOT__rxlinkactivereq_to_hn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16679457709584021021ull);
    vlSelf->__PVT__node_porttop_sn__DOT__rxlinkactiveack_to_pl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7554197802222175815ull);
    vlSelf->__PVT__node_porttop_sn__DOT__txlinkactivereq_to_pl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17231204635544797647ull);
    vlSelf->__PVT__node_porttop_sn__DOT__txlinkactiveack_to_hn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 213892697954411290ull);
    vlSelf->__PVT__node_porttop_sn__DOT__rxrspflitpend_to_hn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4834492814209744111ull);
    vlSelf->__PVT__node_porttop_sn__DOT__rxrspflitv_to_hn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7577351930184354142ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__node_porttop_sn__DOT__rxrspflit_to_hn, __VscopeHash, 3589312348121756029ull);
    vlSelf->__PVT__node_porttop_sn__DOT__rxrsplcrdv_to_pl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13781421432869429239ull);
    vlSelf->__PVT__node_porttop_sn__DOT__rxdatflitpend_to_hn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8094836669092604786ull);
    vlSelf->__PVT__node_porttop_sn__DOT__rxdatflitv_to_hn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11982482550518265752ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__node_porttop_sn__DOT__rxdatflit_to_hn, __VscopeHash, 5120415778320017681ull);
    vlSelf->__PVT__node_porttop_sn__DOT__rxdatlcrdv_to_pl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15559443582959841392ull);
    vlSelf->__PVT__node_porttop_sn__DOT__txreqflitpend_to_pl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2263708780477133107ull);
    vlSelf->__PVT__node_porttop_sn__DOT__txreqflitv_to_pl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11220661182294979629ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__node_porttop_sn__DOT__txreqflit_to_pl, __VscopeHash, 2597598063425804582ull);
    vlSelf->__PVT__node_porttop_sn__DOT__txreqlcrdv_to_hn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6867574940045729301ull);
    vlSelf->__PVT__node_porttop_sn__DOT__txdatflitpend_to_pl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11448021679802830560ull);
    vlSelf->__PVT__node_porttop_sn__DOT__txdatflitv_to_pl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12805271135617445103ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__node_porttop_sn__DOT__txdatflit_to_pl, __VscopeHash, 5262649267280400752ull);
    vlSelf->__PVT__node_porttop_sn__DOT__txdatlcrdv_to_hn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16221739432570469843ull);
}
