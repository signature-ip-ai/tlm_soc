// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_l3_rxtop__pi22.h"

VL_ATTR_COLD void Vsig_topology_top_sig_l3_rxtop__pi22___ctor_var_reset(Vsig_topology_top_sig_l3_rxtop__pi22* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_l3_rxtop__pi22___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__ic_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 786372171911065518ull);
    vlSelf->__PVT__ic_gclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1003866039300048377ull);
    vlSelf->__PVT__rstb_ic_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8263995885505281668ull);
    vlSelf->__PVT__mycluster_id = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2384492568486524022ull);
    vlSelf->__PVT__myproc_id = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13274432713412293163ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__i_ucie_bridge_locations[__Vi0] = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14939638592589144635ull);
    }
    vlSelf->__PVT__ic_RX_SNPFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4721516062163118000ull);
    vlSelf->__PVT__ic_RX_SNPFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11171710941652216617ull);
    VL_SCOPED_RAND_RESET_W(152, vlSelf->__PVT__ic_RX_SNPFLIT, __VscopeHash, 5654856779067209852ull);
    vlSelf->__PVT__ic_RX_SNPLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8564341555754716050ull);
    vlSelf->__PVT__ic_RX_DATFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11842918978764936861ull);
    vlSelf->__PVT__ic_RX_DATFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16491006942135745796ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__ic_RX_DATFLIT, __VscopeHash, 2011190906039008480ull);
    vlSelf->__PVT__ic_RX_DATLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3658967141809139587ull);
    vlSelf->__PVT__req_reqf_vc0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16182308171970828964ull);
    vlSelf->__PVT__req_datf_vc0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8143280187034488093ull);
    vlSelf->__PVT__req_reqf_vc1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3084715214600639188ull);
    vlSelf->__PVT__req_datf_vc1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1340330266869130998ull);
    vlSelf->__PVT__gnt_reqf_vc0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10337792968397162935ull);
    vlSelf->__PVT__gnt_datf_vc0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4690291837141631643ull);
    vlSelf->__PVT__gnt_reqf_vc1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7507678595377534496ull);
    vlSelf->__PVT__gnt_datf_vc1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13035988335623299034ull);
    VL_SCOPED_RAND_RESET_W(161, vlSelf->__PVT__flit_out_reqf_vc0, __VscopeHash, 5627513096090483279ull);
    VL_SCOPED_RAND_RESET_W(686, vlSelf->__PVT__flit_out_datf_vc0, __VscopeHash, 16167855692546365320ull);
    VL_SCOPED_RAND_RESET_W(161, vlSelf->__PVT__flit_out_reqf_vc1, __VscopeHash, 1936265307465211183ull);
    VL_SCOPED_RAND_RESET_W(686, vlSelf->__PVT__flit_out_datf_vc1, __VscopeHash, 7139772207802805426ull);
    vlSelf->__PVT__end_flit_out_reqf_vc0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 966070447754287473ull);
    vlSelf->__PVT__end_flit_out_datf_vc0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6553788314450706445ull);
    vlSelf->__PVT__end_flit_out_reqf_vc1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15693890420803596367ull);
    vlSelf->__PVT__end_flit_out_datf_vc1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11965865157846258264ull);
    vlSelf->__PVT__valid_flit_out_datf_vc0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17187525963011170432ull);
    vlSelf->__PVT__valid_flit_out_datf_vc1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16125595054313582089ull);
    vlSelf->__PVT__valid_flit_out_reqf_vc0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4911628211178330723ull);
    vlSelf->__PVT__valid_flit_out_reqf_vc1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 165055649993814706ull);
    vlSelf->__PVT__icx_exist_req = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7178889322011531642ull);
    vlSelf->__PVT__icx_exist_rsp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 577472896178209734ull);
    vlSelf->__PVT__icx_exist_dat = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6017703924268166047ull);
    vlSelf->__PVT__enable_balanced_routing = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15479611087166412018ull);
    vlSelf->__PVT__enable_init_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13683977253010121183ull);
}
