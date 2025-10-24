// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_node_txtop__pi43.h"

VL_ATTR_COLD void Vsig_topology_top_sig_node_txtop__pi43___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0(Vsig_topology_top_sig_node_txtop__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi43___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__consumed_crdt_req = 0U;
    vlSelfRef.__PVT__available_credits_req = 0U;
    vlSelfRef.__PVT__porthas_credits_req = 0U;
    vlSelfRef.__PVT__TX_REQFLITPEND = 0U;
    vlSelfRef.__PVT__TX_REQFLITV_link = 0U;
    vlSelfRef.__PVT__TX_REQFLITV_nxt = 0U;
    vlSelfRef.__PVT__req_or_snp = 0U;
    VL_CONST_W_1X(151,vlSelfRef.__PVT__TX_REQFLIT_nxt,0x00000000);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_txtop__pi43___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0(Vsig_topology_top_sig_node_txtop__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi43___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__consumed_crdt_req = 0U;
    vlSelfRef.__PVT__available_credits_req = 0U;
    vlSelfRef.__PVT__porthas_credits_req = 0U;
    vlSelfRef.__PVT__TX_REQFLITPEND = 0U;
    vlSelfRef.__PVT__TX_REQFLITV_link = 0U;
    vlSelfRef.__PVT__TX_REQFLITV_nxt = 0U;
    vlSelfRef.__PVT__req_or_snp = 0U;
    VL_CONST_W_1X(151,vlSelfRef.__PVT__TX_REQFLIT_nxt,0x00000000);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_txtop__pi43___ctor_var_reset(Vsig_topology_top_sig_node_txtop__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi43___ctor_var_reset\n"); );
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
    VL_SCOPED_RAND_RESET_W(1610, vlSelf->__PVT__flit_all_req_vc0, __VscopeHash, 2122902704796411884ull);
    VL_SCOPED_RAND_RESET_W(1610, vlSelf->__PVT__flit_all_req_vc1, __VscopeHash, 15524392444694250015ull);
    VL_SCOPED_RAND_RESET_W(790, vlSelf->__PVT__flit_all_rsp_vc0, __VscopeHash, 5001631417125367275ull);
    VL_SCOPED_RAND_RESET_W(790, vlSelf->__PVT__flit_all_rsp_vc1, __VscopeHash, 12482377973635375604ull);
    VL_SCOPED_RAND_RESET_W(6860, vlSelf->__PVT__flit_all_dat_vc0, __VscopeHash, 16163490529354362292ull);
    VL_SCOPED_RAND_RESET_W(6860, vlSelf->__PVT__flit_all_dat_vc1, __VscopeHash, 16006715428440085762ull);
    vlSelf->__PVT__TX_SNPFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12096002944267808113ull);
    vlSelf->__PVT__TX_SNPFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18019983823571415489ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__TX_SNPFLIT, __VscopeHash, 15944402612150038018ull);
    vlSelf->__PVT__TX_SNPLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8728606098800022000ull);
    vlSelf->__PVT__TX_RSPFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4033634596937570879ull);
    vlSelf->__PVT__TX_RSPFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5378569590393295390ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__TX_RSPFLIT, __VscopeHash, 18057175752291438982ull);
    vlSelf->__PVT__TX_RSPLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 299263609115093483ull);
    vlSelf->__PVT__TX_DATFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1282605962752823826ull);
    vlSelf->__PVT__TX_DATFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8603989194328696760ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__TX_DATFLIT, __VscopeHash, 17803260119943457707ull);
    vlSelf->__PVT__TX_DATLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11064232963854065622ull);
    vlSelf->__PVT__TX_REQFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12833755208230947664ull);
    vlSelf->__PVT__TX_REQFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3179205346594666518ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__TX_REQFLIT, __VscopeHash, 14973448239384349692ull);
    vlSelf->__PVT__TX_REQLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5965153919997853552ull);
    vlSelf->__PVT__ic_RX_LINKACTIVEREQ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7171924022146679320ull);
    vlSelf->__PVT__ic_RX_LINKACTIVEACK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2490056953492044266ull);
    vlSelf->__PVT__ic_TX_LINKACTIVEREQ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9310742148893260830ull);
    vlSelf->__PVT__ic_TX_LINKACTIVEACK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10405995942365889507ull);
    vlSelf->__PVT__ic_TXSACTIVE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14402484682683694775ull);
    vlSelf->__PVT__ic_RXSACTIVE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6849932795827893202ull);
    vlSelf->__PVT__cc_is_inactive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17456575816747454447ull);
    vlSelf->__PVT__all_cache_init_complete = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3192120307074908864ull);
    vlSelf->__PVT__portis_RN_or_SN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8163090187906755036ull);
    vlSelf->__PVT__sysco_is_disabled = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4786428636997299290ull);
    vlSelf->__PVT__credits_backto_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 58441542743280763ull);
    vlSelf->__PVT__i_in_timeout_mode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7004353338641607000ull);
    vlSelf->__PVT__i_in_recovery_mode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13597268550939905961ull);
    vlSelf->__PVT__rx_req_port_is_inactive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7321643654435963694ull);
    vlSelf->__PVT__o_dat_empty_flit_store_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2781486666930446518ull);
    vlSelf->__PVT__snpreq_flitv_to_id_translator = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6653768036596764987ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__snpreq_flit_to_id_translator, __VscopeHash, 13482283629500303700ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__snpreq_flit_from_id_translator, __VscopeHash, 17520739221770740768ull);
    vlSelf->__PVT__rsp_flitv_to_id_translator = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6935841997132875563ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__rsp_flit_to_id_translator, __VscopeHash, 10661581656049496778ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__rsp_flit_from_id_translator, __VscopeHash, 10049279408871534745ull);
    vlSelf->__PVT__dat_flitv_to_id_translator = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13185158726219803338ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__dat_flit_to_id_translator, __VscopeHash, 13998049040510675683ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__dat_flit_from_id_translator, __VscopeHash, 17165843179809650780ull);
    vlSelf->__PVT__id_translator_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4073664312429058754ull);
    vlSelf->__PVT__id_translator_hs_pending_txn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12924654799560797390ull);
    vlSelf->__PVT__rden_snprsp_flit_fifo_tx_snp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7405587457092863059ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__rddata_snprsp_flit_fifo_tx_snp, __VscopeHash, 5185148519681247711ull);
    vlSelf->__PVT__empty_snprsp_flit_fifo_tx_snp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13201661025019523298ull);
    vlSelf->__PVT__req_or_snp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16385689263128811340ull);
    vlSelf->__PVT__porthas_credits_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7729084454786195475ull);
    vlSelf->__PVT__porthas_credits_rsp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6634241343494093732ull);
    vlSelf->__PVT__porthas_credits_dat = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6774252393583263126ull);
    vlSelf->__PVT__porthas_credits_snp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3427007860305320040ull);
    vlSelf->__PVT__port_can_send_flit_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8079703924264351160ull);
    vlSelf->__PVT__port_can_send_flit_dat = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1077065336289204322ull);
    vlSelf->__PVT__port_can_send_flit_rsp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7973421977527602088ull);
    vlSelf->__PVT__port_can_send_flit_snp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9001996996882255107ull);
    vlSelf->__PVT__available_credits_req = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5580651942451961431ull);
    vlSelf->__PVT__available_credits_rsp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16380299538546861729ull);
    vlSelf->__PVT__available_credits_dat = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8000902258681717191ull);
    vlSelf->__PVT__available_credits_snp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9173345717232129719ull);
    vlSelf->__PVT__consumed_crdt_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6901489891341171838ull);
    vlSelf->__PVT__consumed_crdt_rsp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13451413481617514405ull);
    vlSelf->__PVT__consumed_crdt_dat = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2090882134738184593ull);
    vlSelf->__PVT__consumed_crdt_snp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1913947446295053ull);
    vlSelf->__PVT__enter_deactivate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13056046345568184098ull);
    vlSelf->__PVT__xmtr_cansend_flits = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1636758649356649624ull);
    vlSelf->__PVT__enable_xmt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8656032351994292809ull);
    VL_SCOPED_RAND_RESET_W(152, vlSelf->__PVT__TX_SNPFLIT_ptcl, __VscopeHash, 5013035635649698832ull);
    vlSelf->__PVT__TX_SNPFLITV_ptcl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2725637156341393184ull);
    vlSelf->__PVT__TX_RSPFLITV_ptcl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13661135293078015812ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__TX_RSPFLIT_ptcl, __VscopeHash, 9223054494263744722ull);
    vlSelf->__PVT__TX_DATFLITV_ptcl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2691536930312968154ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__TX_DATFLIT_ptcl, __VscopeHash, 17139407076707891922ull);
    vlSelf->__PVT__TX_REQFLITV_link = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 236489707246375159ull);
    vlSelf->__PVT__TX_SNPFLITV_link = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8672530621668593723ull);
    vlSelf->__PVT__TX_RSPFLITV_link = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16382926518335784218ull);
    vlSelf->__PVT__TX_DATFLITV_link = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2167387235811014282ull);
    vlSelf->__PVT__TX_REQFLITV_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15729914971049826965ull);
    vlSelf->__PVT__TX_REQFLIT_nxt[0] = 0U;
    vlSelf->__PVT__TX_REQFLIT_nxt[1] = 0U;
    vlSelf->__PVT__TX_REQFLIT_nxt[2] = 0U;
    vlSelf->__PVT__TX_REQFLIT_nxt[3] = 0U;
    vlSelf->__PVT__TX_REQFLIT_nxt[4] = 0U;
    vlSelf->__PVT__TX_SNPFLITV_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4528054911478664357ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__TX_SNPFLIT_nxt, __VscopeHash, 5841022531611034549ull);
    vlSelf->__PVT__TX_RSPFLITV_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12989468677098877249ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__TX_RSPFLIT_nxt, __VscopeHash, 9962298184049517304ull);
    vlSelf->__PVT__TX_DATFLITV_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5280438221958940909ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__TX_DATFLIT_nxt, __VscopeHash, 9665637407682698643ull);
    vlSelf->__PVT__return_linkcrdt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4055845121182950496ull);
    vlSelf->__PVT__snpreq_empty_flit_store_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17831900485040996943ull);
    vlSelf->__PVT__rsp_empty_flit_store_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15293243631098125204ull);
    vlSelf->__PVT__dat_empty_flit_store_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14142311941449047050ull);
    vlSelf->__PVT__inactive_cntr = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 9603686313470315538ull);
    vlSelf->__PVT__inactive_cntr_nxt = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 3010388850881891129ull);
    vlSelf->__PVT__port_is_inactive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5358130019534102335ull);
    vlSelf->__PVT__port_is_inactive_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17848955832646399442ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__TX_REQFLIT_ptcl_s, __VscopeHash, 15200307511698681749ull);
    VL_SCOPED_RAND_RESET_W(119, vlSelf->__PVT__TX_SNPFLIT_ptcl_s, __VscopeHash, 2659506188031512252ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__TX_RSPFLIT_ptcl_s, __VscopeHash, 17744691515524774337ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__TX_DATFLIT_ptcl_s, __VscopeHash, 9850997639920612761ull);
    vlSelf->__PVT__timeout_or_recovery_mode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14880990720530548864ull);
    vlSelf->__PVT__cc_is_inactive_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5569650755951755723ull);
    vlSelf->__PVT__sactive_st = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7184864939791572377ull);
    vlSelf->__PVT__sactive_st_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2482318659743545140ull);
    vlSelf->__PVT__ic_TXSACTIVE_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15784796067965167638ull);
    vlSelf->__PVT__opcode_req_or_lcrdt = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2386169503462764873ull);
    vlSelf->__PVT__opcode_snp_or_lcrdt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2730960484805415704ull);
    vlSelf->__PVT__opcode_rsp_or_lcrdt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5353967568017652229ull);
    vlSelf->__PVT__opcode_dat_or_lcrdt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3875106112427663508ull);
    vlSelf->__PVT__txnid_req_or_lcrdt = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8627785298025770030ull);
    vlSelf->__PVT__txnid_snp_or_lcrdt = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2416352061459589302ull);
    vlSelf->__PVT__txnid_rsp_or_lcrdt = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12705497540555778106ull);
    vlSelf->__PVT__txnid_dat_or_lcrdt = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17304846504135831518ull);
    vlSelf->__Vdly__inactive_cntr = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 14607590063487013733ull);
    vlSelf->__Vdly__port_is_inactive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6405471630199526216ull);
    vlSelf->__Vdly__TX_SNPFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6708118372798457718ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__Vdly__TX_SNPFLIT, __VscopeHash, 11432478044582399259ull);
    vlSelf->__Vdly__TX_RSPFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5683836989744801898ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__Vdly__TX_RSPFLIT, __VscopeHash, 2568174604003189993ull);
    vlSelf->__Vdly__TX_DATFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2162152247487221426ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__Vdly__TX_DATFLIT, __VscopeHash, 5494861306092675576ull);
    vlSelf->__Vdly__TX_REQFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10507777376575134980ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__Vdly__TX_REQFLIT, __VscopeHash, 6572727418033270370ull);
    vlSelf->__Vdly__sactive_st = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 245348508901565206ull);
    vlSelf->__Vdly__ic_TXSACTIVE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18016489144741079583ull);
}
