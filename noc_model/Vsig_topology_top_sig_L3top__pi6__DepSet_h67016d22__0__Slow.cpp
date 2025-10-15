// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_L3top__pi6.h"

VL_ATTR_COLD void Vsig_topology_top_sig_L3top__pi6___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0(Vsig_topology_top_sig_L3top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_L3top__pi6___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__slc_init_complete = 1U;
    vlSelfRef.__PVT__flush_cache_done = 0U;
}

VL_ATTR_COLD void Vsig_topology_top_sig_L3top__pi6___ctor_var_reset(Vsig_topology_top_sig_L3top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_L3top__pi6___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__cc_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10522366009035690765ull);
    vlSelf->__PVT__cc_gclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8377306375537073466ull);
    vlSelf->__PVT__rstb_cc_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8322896653826704470ull);
    vlSelf->__PVT__L3clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12952212100334694957ull);
    vlSelf->__PVT__L3gclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12904334431791191000ull);
    vlSelf->__PVT__rstb_L3clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12647866638877570282ull);
    vlSelf->__PVT__flush_cache = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2096500263814306947ull);
    vlSelf->__PVT__flush_cache_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13497889216828590760ull);
    vlSelf->__PVT__cc_reqflit_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10043822492024180417ull);
    VL_SCOPED_RAND_RESET_W(154, vlSelf->__PVT__cc_reqflit, __VscopeHash, 5878351373451340800ull);
    vlSelf->__PVT__l3reqflit_fifo_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11472252453616715901ull);
    vlSelf->__PVT__l3_rspvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17693132866999472368ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__l3_rspflit, __VscopeHash, 1662627214675102205ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__PVT__l3_wrdata, __VscopeHash, 18003566889332421426ull);
    vlSelf->__PVT__l3_wrbe = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14685619672498633367ull);
    vlSelf->__PVT__l3_wrdata_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9791843214000505586ull);
    vlSelf->__PVT__l3_wrdatabuf_hasroom = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9024268663274794995ull);
    vlSelf->__PVT__l3_drop_wrdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1194144497674625872ull);
    vlSelf->__PVT__dbid_from_l3 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17251312435797380305ull);
    vlSelf->__PVT__compdata_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5818177061271302065ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__PVT__compdata_tocc, __VscopeHash, 774043747864646837ull);
    vlSelf->__PVT__compresperr_tocc = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6055254652167255583ull);
    vlSelf->__PVT__comptxnid_tocc = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 16946801127706022978ull);
    vlSelf->__PVT__L3_TX_REQFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2210628507672945632ull);
    vlSelf->__PVT__L3_TX_REQFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13620214578686760631ull);
    VL_SCOPED_RAND_RESET_W(152, vlSelf->__PVT__L3_TX_REQFLIT, __VscopeHash, 4929664733785189039ull);
    vlSelf->__PVT__L3_TX_REQLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5986119285849200532ull);
    vlSelf->__PVT__L3_RX_DATFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6962311723288182005ull);
    vlSelf->__PVT__L3_RX_DATFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 35466695963359726ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__L3_RX_DATFLIT, __VscopeHash, 5914456430438756307ull);
    vlSelf->__PVT__L3_RX_DATLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17545073633354976760ull);
    vlSelf->__PVT__L3_RX_RSPFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8363488771420761057ull);
    vlSelf->__PVT__L3_RX_RSPFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15683242788466627303ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__L3_RX_RSPFLIT, __VscopeHash, 9748617099820654558ull);
    vlSelf->__PVT__L3_RX_RSPLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14528260235820381414ull);
    vlSelf->__PVT__L3_TX_DATFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5832887487001733237ull);
    vlSelf->__PVT__L3_TX_DATFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 258482247900736388ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__L3_TX_DATFLIT, __VscopeHash, 17415385467563837408ull);
    vlSelf->__PVT__L3_TX_DATLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13571806703389013328ull);
    vlSelf->__PVT__xy_coord_all_pm = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14093339878997901900ull);
    vlSelf->__PVT__cm_homeaddr_base_all_pm = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 16326596507192002194ull);
    vlSelf->__PVT__cm_homeaddr_limit_all_pm = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 15039959541587252906ull);
    vlSelf->__PVT__mycluster_id = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2384492568486524022ull);
    vlSelf->__PVT__slc_init_complete = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16216320429211894851ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__PVT__l3_wrdata_int, __VscopeHash, 11955341401203799459ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__PVT__compdata_int_tocc, __VscopeHash, 18242999731017902857ull);
    vlSelf->__Vcellout__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__ic_TX_REQFLIT_snp_or_req_bit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15218174596374533646ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__Vcellout__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__ic_TX_REQFLIT, __VscopeHash, 5606207709648457764ull);
    vlSelf->__Vcellinp__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__cc_reqflit_metadata = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17438230365674446076ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__Vcellinp__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__cc_reqflit, __VscopeHash, 10811794330542089876ull);
}
