// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cc_txtop__pi12.h"

VL_ATTR_COLD void Vsig_topology_top_sig_cc_txtop__pi12___ctor_var_reset(Vsig_topology_top_sig_cc_txtop__pi12* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cc_txtop__pi12___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__ic_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 786372171911065518ull);
    vlSelf->__PVT__ic_gclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1003866039300048377ull);
    vlSelf->__PVT__rstb_ic_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8263995885505281668ull);
    vlSelf->__PVT__req_vec_req_vc0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10431220892497264786ull);
    vlSelf->__PVT__end_req_vec_req_vc0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 666411363009523882ull);
    vlSelf->__PVT__req_vec_req_vc1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1480400560292633280ull);
    vlSelf->__PVT__end_req_vec_req_vc1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16718147878235865154ull);
    vlSelf->__PVT__gnt_vec_req_vc0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8348470946367142261ull);
    vlSelf->__PVT__gnt_vec_req_vc1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2820284876223411623ull);
    vlSelf->__PVT__req_vec_rsp_vc0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3338642449935364368ull);
    vlSelf->__PVT__end_req_vec_rsp_vc0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16180570367530523856ull);
    vlSelf->__PVT__req_vec_rsp_vc1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13155661224363787760ull);
    vlSelf->__PVT__end_req_vec_rsp_vc1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5127729380846732269ull);
    vlSelf->__PVT__gnt_vec_rsp_vc0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9941494329303029430ull);
    vlSelf->__PVT__gnt_vec_rsp_vc1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 39969762727893978ull);
    vlSelf->__PVT__req_vec_dat_vc0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14505137839278945984ull);
    vlSelf->__PVT__end_req_vec_dat_vc0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11720612251852492202ull);
    vlSelf->__PVT__req_vec_dat_vc1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10484819184193767036ull);
    vlSelf->__PVT__end_req_vec_dat_vc1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8570540159949852086ull);
    vlSelf->__PVT__gnt_vec_dat_vc0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7158790327100450564ull);
    vlSelf->__PVT__gnt_vec_dat_vc1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11343252202203419134ull);
    vlSelf->__PVT__valid_req_vec_dat_vc0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10443581476876378532ull);
    vlSelf->__PVT__valid_req_vec_dat_vc1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14745148638399339028ull);
    vlSelf->__PVT__valid_req_vec_req_vc0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13975341869600939190ull);
    vlSelf->__PVT__valid_req_vec_req_vc1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5569652759246714056ull);
    VL_SCOPED_RAND_RESET_W(1610, vlSelf->__PVT__flit_all_req_vc0, __VscopeHash, 2122902704796411884ull);
    VL_SCOPED_RAND_RESET_W(1610, vlSelf->__PVT__flit_all_req_vc1, __VscopeHash, 15524392444694250015ull);
    VL_SCOPED_RAND_RESET_W(790, vlSelf->__PVT__flit_all_rsp_vc0, __VscopeHash, 5001631417125367275ull);
    VL_SCOPED_RAND_RESET_W(790, vlSelf->__PVT__flit_all_rsp_vc1, __VscopeHash, 12482377973635375604ull);
    VL_SCOPED_RAND_RESET_W(6860, vlSelf->__PVT__flit_all_dat_vc0, __VscopeHash, 16163490529354362292ull);
    VL_SCOPED_RAND_RESET_W(6860, vlSelf->__PVT__flit_all_dat_vc1, __VscopeHash, 16006715428440085762ull);
    vlSelf->__PVT__flitv_out_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12045900238967261473ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__flit_out_req, __VscopeHash, 5480216104951164106ull);
    vlSelf->__PVT__flitv_out_rsp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16983129043289821138ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__flit_out_rsp, __VscopeHash, 8145673491450059812ull);
    vlSelf->__PVT__flitv_out_dat = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15422383533877958152ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__flit_out_dat, __VscopeHash, 16991002073853662577ull);
    vlSelf->__PVT__reqlcrdv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1593979809434606521ull);
    vlSelf->__PVT__rsplcrdv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2850692669943154162ull);
    vlSelf->__PVT__datlcrdv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3131453381897191933ull);
    vlSelf->__PVT__porthas_datgnt_fromcc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 260289634538244644ull);
    vlSelf->__PVT__porthas_rspgnt_fromcc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13920214279695019476ull);
    vlSelf->__PVT__porthas_credits_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7729084454786195475ull);
    vlSelf->__PVT__porthas_credits_rsp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6634241343494093732ull);
    vlSelf->__PVT__porthas_credits_dat = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6774252393583263126ull);
    vlSelf->__PVT__available_credits_req = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5580651942451961431ull);
    vlSelf->__PVT__available_credits_rsp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16380299538546861729ull);
    vlSelf->__PVT__available_credits_dat = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8000902258681717191ull);
    vlSelf->__PVT__consumed_crdt_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6901489891341171838ull);
    vlSelf->__PVT__consumed_crdt_rsp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13451413481617514405ull);
    vlSelf->__PVT__consumed_crdt_dat = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2090882134738184593ull);
}
