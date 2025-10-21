// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cc_arbtop.h"

VL_ATTR_COLD void Vsig_topology_top_sig_cc_arbtop___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0__sig_cc_arbtop_0__0(Vsig_topology_top_sig_cc_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_arbtop___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0__sig_cc_arbtop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_vec_vc0 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc0_pre) 
                                    & VL_REPLICATE_IOI(1,
                                                       (1U 
                                                        & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_vec_vcarb), 0U)), 0xaU));
    vlSelfRef.__PVT__gnt_vec_vc1 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc1_pre) 
                                    & VL_REPLICATE_IOI(1,
                                                       (1U 
                                                        & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_vec_vcarb), 1U)), 0xaU));
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_arbtop___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_arbtop_0__0(Vsig_topology_top_sig_cc_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_arbtop___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_arbtop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_vec_vc1 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc1_pre) 
                                    & VL_REPLICATE_IOI(1,
                                                       (1U 
                                                        & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_vec_vcarb), 1U)), 0xaU));
    vlSelfRef.__PVT__gnt_vec_vc0 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc0_pre) 
                                    & VL_REPLICATE_IOI(1,
                                                       (1U 
                                                        & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_vec_vcarb), 0U)), 0xaU));
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_arbtop___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0__0(Vsig_topology_top_sig_cc_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_arbtop___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_vec_vc1 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc1_pre) 
                                    & VL_REPLICATE_IOI(1,
                                                       (1U 
                                                        & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_vec_vcarb), 1U)), 0xaU));
    vlSelfRef.__PVT__gnt_vec_vc0 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc0_pre) 
                                    & VL_REPLICATE_IOI(1,
                                                       (1U 
                                                        & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_vec_vcarb), 0U)), 0xaU));
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_arbtop___ctor_var_reset(Vsig_topology_top_sig_cc_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_arbtop___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__ic_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 786372171911065518ull);
    vlSelf->__PVT__rstb_ic_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8263995885505281668ull);
    vlSelf->__PVT__req_vec_vc0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16045427108489484104ull);
    vlSelf->__PVT__end_req_vec_vc0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10504889914627152416ull);
    vlSelf->__PVT__req_vec_vc1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15680133804361938353ull);
    vlSelf->__PVT__end_req_vec_vc1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6327451665652750600ull);
    vlSelf->__PVT__gnt_vec_vc0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6127171034593648077ull);
    vlSelf->__PVT__gnt_vec_vc1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5389941327883996194ull);
    vlSelf->__PVT__vcx_has_credits = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9259687305568273532ull);
    vlSelf->__PVT__gnt_vec_vc0_pre = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16208179230048086227ull);
    vlSelf->__PVT__gnt_vec_vc1_pre = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11916097794384997779ull);
    vlSelf->__PVT__req_tovcarb = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12159771577801068363ull);
    vlSelf->__PVT__gnt_vec_vcarb = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11998022499384669799ull);
    vlSelf->__PVT__end_req_qual_vc0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8015412468256812012ull);
    vlSelf->__PVT__end_req_qual_vc1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15465812313491462457ull);
    vlSelf->__PVT__end_granted_agent = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16057977915810665545ull);
}
