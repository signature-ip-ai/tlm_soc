// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_chi_xmt_resp.h"

VL_ATTR_COLD void Vsig_topology_top_sig_chi_xmt_resp___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0__2(Vsig_topology_top_sig_chi_xmt_resp* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_resp___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    VL_ASSIGN_W(74,vlSelfRef.__PVT__ic_TX_RSPFLIT_s, vlSelfRef.__PVT__respbody_snpreq);
    if ((1U == (IData)(vlSelfRef.__PVT__grant_resp))) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__ic_TX_RSPFLIT_s, vlSelfRef.__PVT__respbody_snpreq);
    } else if ((2U == (IData)(vlSelfRef.__PVT__grant_resp))) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__ic_TX_RSPFLIT_s, vlSelfRef.__PVT__respbody_compdata);
    } else if ((4U == (IData)(vlSelfRef.__PVT__grant_resp))) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__ic_TX_RSPFLIT_s, vlSelfRef.__PVT__respbody_rdrcpt);
    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_resp))) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__ic_TX_RSPFLIT_s, vlSelfRef.__PVT__respbody_retryack);
    } else if ((0x10U == (IData)(vlSelfRef.__PVT__grant_resp))) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__ic_TX_RSPFLIT_s, vlSelfRef.__PVT__respbody_pcrdgnt);
    }
    vlSelfRef.__PVT__rev_xform_linear_to_actual = (1U 
                                                   & VL_BITSEL_IWII(74, vlSelfRef.__PVT__ic_TX_RSPFLIT_s, 0x49U));
    VL_CONST_W_3X(96,__Vtemp_1,0x000001ff,0xffffffff,0xffffffff);
    VL_SEL_WWII(73, 74, __Vtemp_2, vlSelfRef.__PVT__ic_TX_RSPFLIT_s, 0U, 73);
    VL_AND_W(3, vlSelfRef.__PVT__ic_TX_RSPFLIT_nxt, __Vtemp_1, __Vtemp_2);
}

VL_ATTR_COLD void Vsig_topology_top_sig_chi_xmt_resp___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0__3(Vsig_topology_top_sig_chi_xmt_resp* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_resp___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_xmt_resp_nodeid_valid = 0U;
    if (vlSelfRef.__PVT__ic_TX_RSPFLITV_nxt) {
        vlSelfRef.__PVT__o_xmt_resp_nodeid_valid = 1U;
    }
    vlSelfRef.__PVT__o_xmt_resp_linear_nodeid = (0x7ffU 
                                                 & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_TX_RSPFLIT_nxt, 4U, 11));
    vlSelfRef.__PVT__tgt_nodeid_grid = vlSelfRef.__PVT__i_xmt_resp_full_node_id;
    vlSelfRef.__PVT__final_tgt_id = (0x7ffU & ((IData)(vlSelfRef.__PVT__rev_xform_linear_to_actual)
                                                ? (IData)(vlSelfRef.__PVT__tgt_nodeid_grid)
                                                : VL_SEL_IWII(73, vlSelfRef.__PVT__ic_TX_RSPFLIT_nxt, 4U, 11)));
}

VL_ATTR_COLD void Vsig_topology_top_sig_chi_xmt_resp___ctor_var_reset(Vsig_topology_top_sig_chi_xmt_resp* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_resp___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__cc_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10522366009035690765ull);
    vlSelf->__PVT__cc_gclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8377306375537073466ull);
    vlSelf->__PVT__rstb_cc_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8322896653826704470ull);
    vlSelf->__PVT__ic_TX_RSPFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2060896954836582492ull);
    vlSelf->__PVT__ic_TX_RSPFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6986194630684743894ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__ic_TX_RSPFLIT, __VscopeHash, 16838131667686188585ull);
    vlSelf->__PVT__ic_TX_RSPLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12927273387244497438ull);
    vlSelf->__PVT__req_resp_snpreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8477813137800465214ull);
    vlSelf->__PVT__req_resp_compdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15373783711339039012ull);
    vlSelf->__PVT__req_retry_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17787793606977226748ull);
    vlSelf->__PVT__req_pcrd_grant = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11620457739990091831ull);
    vlSelf->__PVT__req_readreceipt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14238351225281945974ull);
    VL_SCOPED_RAND_RESET_W(74, vlSelf->__PVT__respbody_snpreq, __VscopeHash, 14749717961920806112ull);
    VL_SCOPED_RAND_RESET_W(74, vlSelf->__PVT__respbody_compdata, __VscopeHash, 18159381090262869894ull);
    VL_SCOPED_RAND_RESET_W(74, vlSelf->__PVT__respbody_rdrcpt, __VscopeHash, 5850674495418744749ull);
    VL_SCOPED_RAND_RESET_W(74, vlSelf->__PVT__respbody_retryack, __VscopeHash, 14875097657771260812ull);
    VL_SCOPED_RAND_RESET_W(74, vlSelf->__PVT__respbody_pcrdgnt, __VscopeHash, 8880194259380262916ull);
    vlSelf->__PVT__o_xmt_resp_nodeid_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7306704923393792402ull);
    vlSelf->__PVT__o_xmt_resp_linear_nodeid = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12574494364862970949ull);
    vlSelf->__PVT__i_xmt_resp_full_node_id = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9076307021979588359ull);
    vlSelf->__PVT__grant_resp = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15449471594239148283ull);
    VL_SCOPED_RAND_RESET_W(74, vlSelf->__PVT__ic_TX_RSPFLIT_s, __VscopeHash, 17937772874278659569ull);
    vlSelf->__PVT__ic_TX_RSPFLITV_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16789822792671324068ull);
    vlSelf->__PVT__consumed_crdt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6102239534665153977ull);
    vlSelf->__PVT__available_credits = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15808204370360910140ull);
    vlSelf->__PVT__link_crdt_avlble = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3554336964461030202ull);
    vlSelf->__PVT__req_all = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10855424964472738371ull);
    vlSelf->__PVT__tgt_nodeid_grid = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6387887992653856042ull);
    vlSelf->__PVT__final_tgt_id = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9041390339325429580ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__ic_TX_RSPFLIT_nxt, __VscopeHash, 15460662313159509390ull);
    vlSelf->__PVT__rev_xform_linear_to_actual = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9474145166356552861ull);
    vlSelf->__Vdly__ic_TX_RSPFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9301843383836560370ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__Vdly__ic_TX_RSPFLIT, __VscopeHash, 4341190931306558707ull);
}
