// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_common_porttop__pi7.h"

VL_ATTR_COLD void Vsig_topology_top_sig_common_porttop__pi7___ctor_var_reset(Vsig_topology_top_sig_common_porttop__pi7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_common_porttop__pi7___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__intfrx_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 970813291405437ull);
    vlSelf->__PVT__rx_intfrx_gclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5657768447574710954ull);
    vlSelf->__PVT__tx_intfrx_gclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14479686406378418957ull);
    vlSelf->__PVT__rstb_intfrx_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12027660576638610361ull);
    vlSelf->__PVT__ic_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 786372171911065518ull);
    vlSelf->__PVT__rx_ic_gclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14734729547715297656ull);
    vlSelf->__PVT__tx_ic_gclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12314182055565024476ull);
    vlSelf->__PVT__rstb_ic_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8263995885505281668ull);
    vlSelf->__PVT__mycluster_id = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2384492568486524022ull);
    vlSelf->__PVT__myproc_id = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13274432713412293163ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__i_ucie_bridge_locations[__Vi0] = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14939638592589144635ull);
    }
    vlSelf->__PVT__ctrlr_port_or_ic_rx_is_inactive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15373714069886776536ull);
    vlSelf->__PVT__activate_ctrlr_port_or_ic_tx_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1764337791682678913ull);
    vlSelf->__PVT__rx_activate_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1562813220007974936ull);
    vlSelf->__PVT__tx_is_inactive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209931857166942920ull);
    vlSelf->__PVT__ic_RX_SNPFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4721516062163118000ull);
    vlSelf->__PVT__ic_RX_SNPFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11171710941652216617ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__ic_RX_SNPFLIT, __VscopeHash, 5654856779067209852ull);
    vlSelf->__PVT__ic_RX_SNPFLIT_snp_or_req_bit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17832355392170743723ull);
    vlSelf->__PVT__ic_RX_SNPFLIT_metadata = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15303795558602720361ull);
    vlSelf->__PVT__ic_RX_SNPLCRDV_VC0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1386591263920169425ull);
    vlSelf->__PVT__ic_RX_SNPLCRDV_VC1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9242878006518064952ull);
    vlSelf->__PVT__ic_RX_RSPFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18123678973012384143ull);
    vlSelf->__PVT__ic_RX_RSPFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17408552711796289962ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__ic_RX_RSPFLIT, __VscopeHash, 1354610994472511875ull);
    vlSelf->__PVT__ic_RX_RSPFLIT_metadata = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4575888697419936209ull);
    vlSelf->__PVT__ic_RX_RSPLCRDV_VC0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10217730147979087582ull);
    vlSelf->__PVT__ic_RX_RSPLCRDV_VC1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12255241847427108196ull);
    vlSelf->__PVT__ic_RX_DATFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11842918978764936861ull);
    vlSelf->__PVT__ic_RX_DATFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16491006942135745796ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__ic_RX_DATFLIT, __VscopeHash, 2011190906039008480ull);
    vlSelf->__PVT__ic_RX_DATFLIT_metadata = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5300939213790142520ull);
    vlSelf->__PVT__ic_RX_DATLCRDV_VC0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2411229462896118354ull);
    vlSelf->__PVT__ic_RX_DATLCRDV_VC1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2275006090557441981ull);
    VL_SCOPED_RAND_RESET_W(161, vlSelf->__PVT__flit_out_reqf_vc0, __VscopeHash, 5627513096090483279ull);
    vlSelf->__PVT__flit_out_rspf_vc0[0] = 0U;
    vlSelf->__PVT__flit_out_rspf_vc0[1] = 0U;
    vlSelf->__PVT__flit_out_rspf_vc0[2] = 0U;
    VL_SCOPED_RAND_RESET_W(686, vlSelf->__PVT__flit_out_datf_vc0, __VscopeHash, 16167855692546365320ull);
    VL_SCOPED_RAND_RESET_W(161, vlSelf->__PVT__flit_out_reqf_vc1, __VscopeHash, 1936265307465211183ull);
    vlSelf->__PVT__flit_out_rspf_vc1[0] = 0U;
    vlSelf->__PVT__flit_out_rspf_vc1[1] = 0U;
    vlSelf->__PVT__flit_out_rspf_vc1[2] = 0U;
    VL_SCOPED_RAND_RESET_W(686, vlSelf->__PVT__flit_out_datf_vc1, __VscopeHash, 7139772207802805426ull);
    VL_SCOPED_RAND_RESET_W(1610, vlSelf->__PVT__flit_all_req_vc0, __VscopeHash, 2122902704796411884ull);
    VL_SCOPED_RAND_RESET_W(1610, vlSelf->__PVT__flit_all_req_vc1, __VscopeHash, 15524392444694250015ull);
    VL_SCOPED_RAND_RESET_W(790, vlSelf->__PVT__flit_all_rsp_vc0, __VscopeHash, 5001631417125367275ull);
    VL_SCOPED_RAND_RESET_W(790, vlSelf->__PVT__flit_all_rsp_vc1, __VscopeHash, 12482377973635375604ull);
    VL_SCOPED_RAND_RESET_W(6860, vlSelf->__PVT__flit_all_dat_vc0, __VscopeHash, 16163490529354362292ull);
    VL_SCOPED_RAND_RESET_W(6860, vlSelf->__PVT__flit_all_dat_vc1, __VscopeHash, 16006715428440085762ull);
    vlSelf->__PVT__ic_TX_REQFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2871580351066470812ull);
    vlSelf->__PVT__ic_TX_REQFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4109497001447517023ull);
    vlSelf->__PVT__ic_TX_REQFLIT[0] = 0U;
    vlSelf->__PVT__ic_TX_REQFLIT[1] = 0U;
    vlSelf->__PVT__ic_TX_REQFLIT[2] = 0U;
    vlSelf->__PVT__ic_TX_REQFLIT[3] = 0U;
    vlSelf->__PVT__ic_TX_REQFLIT[4] = 0U;
    vlSelf->__PVT__ic_TX_REQFLIT_snp_or_req_bit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13437824712247010899ull);
    vlSelf->__PVT__ic_TX_REQFLIT_metadata = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14626472004518096808ull);
    vlSelf->__PVT__ic_TX_REQLCRDV_VC0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13754655014630008777ull);
    vlSelf->__PVT__ic_TX_REQLCRDV_VC1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9210036406272363689ull);
    vlSelf->__PVT__ic_TX_RSPFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2060896954836582492ull);
    vlSelf->__PVT__ic_TX_RSPFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6986194630684743894ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__ic_TX_RSPFLIT, __VscopeHash, 16838131667686188585ull);
    vlSelf->__PVT__ic_TX_RSPFLIT_metadata = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4429008388044881175ull);
    vlSelf->__PVT__ic_TX_RSPLCRDV_VC0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 342216383193943767ull);
    vlSelf->__PVT__ic_TX_RSPLCRDV_VC1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 672771690331614868ull);
    vlSelf->__PVT__ic_TX_DATFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8102072163694598261ull);
    vlSelf->__PVT__ic_TX_DATFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17980292739927272412ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__ic_TX_DATFLIT, __VscopeHash, 11344885391285752503ull);
    vlSelf->__PVT__ic_TX_DATFLIT_metadata = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 884269737716608959ull);
    vlSelf->__PVT__ic_TX_DATLCRDV_VC0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5495050516890710260ull);
    vlSelf->__PVT__ic_TX_DATLCRDV_VC1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12718405901679731870ull);
    vlSelf->__PVT__icx_exist = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8367053913676612596ull);
    vlSelf->__PVT__porthas_datgnt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10531141061249131515ull);
    vlSelf->__PVT__porthas_rspgnt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16758850824690651711ull);
    vlSelf->__PVT__myport_direction = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4398456496220392373ull);
    vlSelf->__PVT__enable_balanced_routing = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15479611087166412018ull);
    vlSelf->__PVT__icx_exist_req = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7178889322011531642ull);
    vlSelf->__PVT__icx_exist_rsp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 577472896178209734ull);
    vlSelf->__PVT__icx_exist_dat = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6017703924268166047ull);
    vlSelf->__PVT__sig_l3_porttop_gen_blk__DOT__reqf_vc0_tx_hs_req_send = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10747879223319573251ull);
    vlSelf->__PVT__sig_l3_porttop_gen_blk__DOT__datf_vc0_tx_hs_req_send = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4703372426700184773ull);
    vlSelf->__PVT__sig_l3_porttop_gen_blk__DOT__reqf_vc1_tx_hs_req_send = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13459894507036049139ull);
    vlSelf->__PVT__sig_l3_porttop_gen_blk__DOT__datf_vc1_tx_hs_req_send = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17031972264159832475ull);
    vlSelf->__PVT__sig_l3_porttop_gen_blk__DOT__rspf_vc0_rx_hs_gnt_recv = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13598568006984212930ull);
    vlSelf->__PVT__sig_l3_porttop_gen_blk__DOT__rspf_vc1_rx_hs_gnt_recv = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5698665518166777259ull);
    vlSelf->__PVT__sig_l3_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13723513646214427399ull);
    vlSelf->__PVT__sig_l3_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13742256969525948967ull);
    vlSelf->__Vcellout__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__valid_flit_out_reqf_vc1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1769991414363470091ull);
    vlSelf->__Vcellout__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__valid_flit_out_reqf_vc0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15468186447528144264ull);
    vlSelf->__Vcellout__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__valid_flit_out_datf_vc1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2736295512373154797ull);
    vlSelf->__Vcellout__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__valid_flit_out_datf_vc0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6231563270195352505ull);
    vlSelf->__Vcellout__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__end_flit_out_datf_vc1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9794091791761916250ull);
    vlSelf->__Vcellout__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__end_flit_out_reqf_vc1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15809820730827519512ull);
    vlSelf->__Vcellout__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__end_flit_out_datf_vc0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16406010200569052846ull);
    vlSelf->__Vcellout__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__end_flit_out_reqf_vc0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14140753152267796281ull);
    vlSelf->__Vcellinp__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__gnt_datf_vc1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4056525881854660905ull);
    vlSelf->__Vcellinp__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__gnt_reqf_vc1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11664971039535844244ull);
    vlSelf->__Vcellinp__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__gnt_datf_vc0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3786792366899256426ull);
    vlSelf->__Vcellinp__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__gnt_reqf_vc0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9302615767269665109ull);
    VL_SCOPED_RAND_RESET_W(152, vlSelf->__Vcellinp__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__ic_RX_SNPFLIT, __VscopeHash, 3075346933868727885ull);
    vlSelf->__Vcellinp__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__valid_req_vec_dat_vc1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8948118398433608228ull);
    vlSelf->__Vcellinp__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__valid_req_vec_dat_vc0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3439169098244486000ull);
    vlSelf->__Vcellinp__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__end_req_vec_dat_vc1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6618096287760490121ull);
    vlSelf->__Vcellinp__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__req_vec_dat_vc1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3478349136330713249ull);
    vlSelf->__Vcellinp__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__end_req_vec_dat_vc0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5815200574825226735ull);
    vlSelf->__Vcellinp__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__req_vec_dat_vc0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12467974748017323809ull);
    vlSelf->__Vcellinp__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__end_req_vec_rsp_vc1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8504551595176170902ull);
    vlSelf->__Vcellinp__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__req_vec_rsp_vc1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6861912088380782744ull);
    vlSelf->__Vcellinp__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__end_req_vec_rsp_vc0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8142481227882151830ull);
    vlSelf->__Vcellinp__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__req_vec_rsp_vc0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4440033630806112000ull);
}
