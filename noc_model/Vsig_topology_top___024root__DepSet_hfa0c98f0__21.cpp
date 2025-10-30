// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top___024root.h"

extern const VlWide<22>/*703:0*/ Vsig_topology_top__ConstPool__CONST_h1de318c0_0;

VL_INLINE_OPT void Vsig_topology_top___024root___nba_comb__TOP__114(Vsig_topology_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsig_topology_top___024root___nba_comb__TOP__114\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<43>/*1375:0*/ __Vtemp_1;
    VlWide<43>/*1375:0*/ __Vtemp_2;
    VlWide<86>/*2751:0*/ __Vtemp_3;
    VlWide<108>/*3455:0*/ __Vtemp_4;
    VlWide<129>/*4127:0*/ __Vtemp_5;
    VlWide<43>/*1375:0*/ __Vtemp_6;
    VlWide<43>/*1375:0*/ __Vtemp_7;
    VlWide<86>/*2751:0*/ __Vtemp_8;
    VlWide<108>/*3455:0*/ __Vtemp_9;
    VlWide<129>/*4127:0*/ __Vtemp_10;
    // Body
    __Vtemp_1[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc1[0U];
    __Vtemp_1[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc1[1U];
    __Vtemp_1[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc1[2U];
    __Vtemp_1[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc1[3U];
    __Vtemp_1[4U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc1[4U];
    __Vtemp_1[5U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc1[5U];
    __Vtemp_1[6U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc1[6U];
    __Vtemp_1[7U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc1[7U];
    __Vtemp_1[8U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc1[8U];
    __Vtemp_1[9U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc1[9U];
    __Vtemp_1[0xaU] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc1[0xaU];
    __Vtemp_1[0xbU] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc1[0xbU];
    __Vtemp_1[0xcU] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc1[0xcU];
    __Vtemp_1[0xdU] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc1[0xdU];
    __Vtemp_1[0xeU] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc1[0xeU];
    __Vtemp_1[0xfU] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc1[0xfU];
    __Vtemp_1[0x10U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc1[0x10U];
    __Vtemp_1[0x11U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc1[0x11U];
    __Vtemp_1[0x12U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc1[0x12U];
    __Vtemp_1[0x13U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc1[0x13U];
    __Vtemp_1[0x14U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc1[0x14U];
    __Vtemp_1[0x15U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[0U] 
                         << 0xeU) | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc1[0x15U]);
    __Vtemp_1[0x16U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[0U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[1U] 
                                      << 0xeU));
    __Vtemp_1[0x17U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[1U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[2U] 
                                      << 0xeU));
    __Vtemp_1[0x18U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[2U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[3U] 
                                      << 0xeU));
    __Vtemp_1[0x19U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[3U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[4U] 
                                      << 0xeU));
    __Vtemp_1[0x1aU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[4U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[5U] 
                                      << 0xeU));
    __Vtemp_1[0x1bU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[5U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[6U] 
                                      << 0xeU));
    __Vtemp_1[0x1cU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[6U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[7U] 
                                      << 0xeU));
    __Vtemp_1[0x1dU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[7U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[8U] 
                                      << 0xeU));
    __Vtemp_1[0x1eU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[8U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[9U] 
                                      << 0xeU));
    __Vtemp_1[0x1fU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[9U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[0xaU] 
                                      << 0xeU));
    __Vtemp_1[0x20U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[0xaU] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[0xbU] 
                                      << 0xeU));
    __Vtemp_1[0x21U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[0xbU] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[0xcU] 
                                      << 0xeU));
    __Vtemp_1[0x22U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[0xcU] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[0xdU] 
                                      << 0xeU));
    __Vtemp_1[0x23U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[0xdU] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[0xeU] 
                                      << 0xeU));
    __Vtemp_1[0x24U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[0xeU] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[0xfU] 
                                      << 0xeU));
    __Vtemp_1[0x25U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[0xfU] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[0x10U] 
                                      << 0xeU));
    __Vtemp_1[0x26U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[0x10U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[0x11U] 
                                      << 0xeU));
    __Vtemp_1[0x27U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[0x11U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[0x12U] 
                                      << 0xeU));
    __Vtemp_1[0x28U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[0x12U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[0x13U] 
                                      << 0xeU));
    __Vtemp_1[0x29U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[0x13U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[0x14U] 
                                      << 0xeU));
    __Vtemp_1[0x2aU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[0x14U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc1[0x15U] 
                                      << 0xeU));
    __Vtemp_2[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc1[0U];
    __Vtemp_2[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc1[1U];
    __Vtemp_2[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc1[2U];
    __Vtemp_2[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc1[3U];
    __Vtemp_2[4U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc1[4U];
    __Vtemp_2[5U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc1[5U];
    __Vtemp_2[6U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc1[6U];
    __Vtemp_2[7U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc1[7U];
    __Vtemp_2[8U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc1[8U];
    __Vtemp_2[9U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc1[9U];
    __Vtemp_2[0xaU] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc1[0xaU];
    __Vtemp_2[0xbU] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc1[0xbU];
    __Vtemp_2[0xcU] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc1[0xcU];
    __Vtemp_2[0xdU] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc1[0xdU];
    __Vtemp_2[0xeU] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc1[0xeU];
    __Vtemp_2[0xfU] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc1[0xfU];
    __Vtemp_2[0x10U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc1[0x10U];
    __Vtemp_2[0x11U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc1[0x11U];
    __Vtemp_2[0x12U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc1[0x12U];
    __Vtemp_2[0x13U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc1[0x13U];
    __Vtemp_2[0x14U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc1[0x14U];
    __Vtemp_2[0x15U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[0U] 
                         << 0xeU) | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc1[0x15U]);
    __Vtemp_2[0x16U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[0U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[1U] 
                                      << 0xeU));
    __Vtemp_2[0x17U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[1U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[2U] 
                                      << 0xeU));
    __Vtemp_2[0x18U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[2U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[3U] 
                                      << 0xeU));
    __Vtemp_2[0x19U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[3U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[4U] 
                                      << 0xeU));
    __Vtemp_2[0x1aU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[4U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[5U] 
                                      << 0xeU));
    __Vtemp_2[0x1bU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[5U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[6U] 
                                      << 0xeU));
    __Vtemp_2[0x1cU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[6U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[7U] 
                                      << 0xeU));
    __Vtemp_2[0x1dU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[7U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[8U] 
                                      << 0xeU));
    __Vtemp_2[0x1eU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[8U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[9U] 
                                      << 0xeU));
    __Vtemp_2[0x1fU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[9U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[0xaU] 
                                      << 0xeU));
    __Vtemp_2[0x20U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[0xaU] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[0xbU] 
                                      << 0xeU));
    __Vtemp_2[0x21U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[0xbU] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[0xcU] 
                                      << 0xeU));
    __Vtemp_2[0x22U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[0xcU] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[0xdU] 
                                      << 0xeU));
    __Vtemp_2[0x23U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[0xdU] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[0xeU] 
                                      << 0xeU));
    __Vtemp_2[0x24U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[0xeU] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[0xfU] 
                                      << 0xeU));
    __Vtemp_2[0x25U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[0xfU] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[0x10U] 
                                      << 0xeU));
    __Vtemp_2[0x26U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[0x10U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[0x11U] 
                                      << 0xeU));
    __Vtemp_2[0x27U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[0x11U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[0x12U] 
                                      << 0xeU));
    __Vtemp_2[0x28U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[0x12U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[0x13U] 
                                      << 0xeU));
    __Vtemp_2[0x29U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[0x13U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[0x14U] 
                                      << 0xeU));
    __Vtemp_2[0x2aU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[0x14U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc1[0x15U] 
                                      << 0xeU));
    VL_CONCAT_WWW(2744,1372,1372, __Vtemp_3, __Vtemp_1, __Vtemp_2);
    VL_EXTEND_WW(3430,2744, __Vtemp_4, __Vtemp_3);
    VL_CONCAT_WWW(4116,686,3430, __Vtemp_5, vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p3_out_flit_datf_vc1, __Vtemp_4);
    VL_EXTEND_WW(6860,4116, vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_in_flit_all_dat_vc1, __Vtemp_5);
    __Vtemp_6[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc0[0U];
    __Vtemp_6[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc0[1U];
    __Vtemp_6[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc0[2U];
    __Vtemp_6[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc0[3U];
    __Vtemp_6[4U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc0[4U];
    __Vtemp_6[5U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc0[5U];
    __Vtemp_6[6U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc0[6U];
    __Vtemp_6[7U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc0[7U];
    __Vtemp_6[8U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc0[8U];
    __Vtemp_6[9U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc0[9U];
    __Vtemp_6[0xaU] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc0[0xaU];
    __Vtemp_6[0xbU] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc0[0xbU];
    __Vtemp_6[0xcU] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc0[0xcU];
    __Vtemp_6[0xdU] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc0[0xdU];
    __Vtemp_6[0xeU] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc0[0xeU];
    __Vtemp_6[0xfU] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc0[0xfU];
    __Vtemp_6[0x10U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc0[0x10U];
    __Vtemp_6[0x11U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc0[0x11U];
    __Vtemp_6[0x12U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc0[0x12U];
    __Vtemp_6[0x13U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc0[0x13U];
    __Vtemp_6[0x14U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc0[0x14U];
    __Vtemp_6[0x15U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[0U] 
                         << 0xeU) | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_out_flit_datf_vc0[0x15U]);
    __Vtemp_6[0x16U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[0U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[1U] 
                                      << 0xeU));
    __Vtemp_6[0x17U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[1U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[2U] 
                                      << 0xeU));
    __Vtemp_6[0x18U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[2U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[3U] 
                                      << 0xeU));
    __Vtemp_6[0x19U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[3U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[4U] 
                                      << 0xeU));
    __Vtemp_6[0x1aU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[4U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[5U] 
                                      << 0xeU));
    __Vtemp_6[0x1bU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[5U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[6U] 
                                      << 0xeU));
    __Vtemp_6[0x1cU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[6U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[7U] 
                                      << 0xeU));
    __Vtemp_6[0x1dU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[7U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[8U] 
                                      << 0xeU));
    __Vtemp_6[0x1eU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[8U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[9U] 
                                      << 0xeU));
    __Vtemp_6[0x1fU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[9U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[0xaU] 
                                      << 0xeU));
    __Vtemp_6[0x20U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[0xaU] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[0xbU] 
                                      << 0xeU));
    __Vtemp_6[0x21U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[0xbU] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[0xcU] 
                                      << 0xeU));
    __Vtemp_6[0x22U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[0xcU] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[0xdU] 
                                      << 0xeU));
    __Vtemp_6[0x23U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[0xdU] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[0xeU] 
                                      << 0xeU));
    __Vtemp_6[0x24U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[0xeU] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[0xfU] 
                                      << 0xeU));
    __Vtemp_6[0x25U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[0xfU] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[0x10U] 
                                      << 0xeU));
    __Vtemp_6[0x26U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[0x10U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[0x11U] 
                                      << 0xeU));
    __Vtemp_6[0x27U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[0x11U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[0x12U] 
                                      << 0xeU));
    __Vtemp_6[0x28U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[0x12U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[0x13U] 
                                      << 0xeU));
    __Vtemp_6[0x29U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[0x13U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[0x14U] 
                                      << 0xeU));
    __Vtemp_6[0x2aU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[0x14U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_out_flit_datf_vc0[0x15U] 
                                      << 0xeU));
    __Vtemp_7[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc0[0U];
    __Vtemp_7[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc0[1U];
    __Vtemp_7[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc0[2U];
    __Vtemp_7[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc0[3U];
    __Vtemp_7[4U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc0[4U];
    __Vtemp_7[5U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc0[5U];
    __Vtemp_7[6U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc0[6U];
    __Vtemp_7[7U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc0[7U];
    __Vtemp_7[8U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc0[8U];
    __Vtemp_7[9U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc0[9U];
    __Vtemp_7[0xaU] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc0[0xaU];
    __Vtemp_7[0xbU] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc0[0xbU];
    __Vtemp_7[0xcU] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc0[0xcU];
    __Vtemp_7[0xdU] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc0[0xdU];
    __Vtemp_7[0xeU] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc0[0xeU];
    __Vtemp_7[0xfU] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc0[0xfU];
    __Vtemp_7[0x10U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc0[0x10U];
    __Vtemp_7[0x11U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc0[0x11U];
    __Vtemp_7[0x12U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc0[0x12U];
    __Vtemp_7[0x13U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc0[0x13U];
    __Vtemp_7[0x14U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc0[0x14U];
    __Vtemp_7[0x15U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[0U] 
                         << 0xeU) | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_out_flit_datf_vc0[0x15U]);
    __Vtemp_7[0x16U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[0U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[1U] 
                                      << 0xeU));
    __Vtemp_7[0x17U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[1U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[2U] 
                                      << 0xeU));
    __Vtemp_7[0x18U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[2U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[3U] 
                                      << 0xeU));
    __Vtemp_7[0x19U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[3U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[4U] 
                                      << 0xeU));
    __Vtemp_7[0x1aU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[4U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[5U] 
                                      << 0xeU));
    __Vtemp_7[0x1bU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[5U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[6U] 
                                      << 0xeU));
    __Vtemp_7[0x1cU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[6U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[7U] 
                                      << 0xeU));
    __Vtemp_7[0x1dU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[7U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[8U] 
                                      << 0xeU));
    __Vtemp_7[0x1eU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[8U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[9U] 
                                      << 0xeU));
    __Vtemp_7[0x1fU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[9U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[0xaU] 
                                      << 0xeU));
    __Vtemp_7[0x20U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[0xaU] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[0xbU] 
                                      << 0xeU));
    __Vtemp_7[0x21U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[0xbU] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[0xcU] 
                                      << 0xeU));
    __Vtemp_7[0x22U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[0xcU] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[0xdU] 
                                      << 0xeU));
    __Vtemp_7[0x23U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[0xdU] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[0xeU] 
                                      << 0xeU));
    __Vtemp_7[0x24U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[0xeU] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[0xfU] 
                                      << 0xeU));
    __Vtemp_7[0x25U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[0xfU] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[0x10U] 
                                      << 0xeU));
    __Vtemp_7[0x26U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[0x10U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[0x11U] 
                                      << 0xeU));
    __Vtemp_7[0x27U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[0x11U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[0x12U] 
                                      << 0xeU));
    __Vtemp_7[0x28U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[0x12U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[0x13U] 
                                      << 0xeU));
    __Vtemp_7[0x29U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[0x13U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[0x14U] 
                                      << 0xeU));
    __Vtemp_7[0x2aU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[0x14U] 
                         >> 0x12U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_out_flit_datf_vc0[0x15U] 
                                      << 0xeU));
    VL_CONCAT_WWW(2744,1372,1372, __Vtemp_8, __Vtemp_6, __Vtemp_7);
    VL_EXTEND_WW(3430,2744, __Vtemp_9, __Vtemp_8);
    VL_CONCAT_WWW(4116,686,3430, __Vtemp_10, vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p3_out_flit_datf_vc0, __Vtemp_9);
    VL_EXTEND_WW(6860,4116, vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_in_flit_all_dat_vc0, __Vtemp_10);
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[1U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[1U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[2U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[2U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[3U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[3U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[4U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[4U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[5U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[5U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[6U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[6U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[7U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[7U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[8U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[8U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[9U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[9U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0xaU];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0xbU];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0xcU];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0xdU];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0xeU];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0xfU];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0x10U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0x11U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0x12U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0x13U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0x14U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0x15U];
    if ((1U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [0U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [0U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [0U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [0U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [0U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [0U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [0U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [0U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [0U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0x15U];
    }
    if ((2U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [1U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [1U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [1U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [1U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [1U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [1U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [1U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [1U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [1U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0x15U];
    }
    if ((4U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [2U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [2U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [2U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [2U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [2U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [2U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [2U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [2U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [2U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0x15U];
    }
    if ((8U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [3U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [3U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [3U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [3U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [3U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [3U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [3U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [3U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [3U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0x15U];
    }
    if ((0x10U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [4U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [4U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [4U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [4U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [4U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [4U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [4U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [4U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [4U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0x15U];
    }
    if ((0x20U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [5U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [5U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [5U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [5U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [5U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [5U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [5U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [5U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [5U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0x15U];
    }
    if ((0x40U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [6U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [6U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [6U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [6U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [6U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [6U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [6U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [6U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [6U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0x15U];
    }
    if ((0x80U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [7U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [7U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [7U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [7U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [7U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [7U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [7U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [7U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [7U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0x15U];
    }
    if ((0x100U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [8U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [8U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [8U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [8U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [8U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [8U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [8U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [8U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [8U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0x15U];
    }
    if ((0x200U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [9U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [9U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [9U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [9U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [9U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [9U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [9U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [9U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [9U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__sig_cc_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0x15U];
    }
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[1U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[1U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[2U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[2U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[3U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[3U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[4U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[4U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[5U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[5U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[6U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[6U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[7U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[7U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[8U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[8U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[9U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[9U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0xaU];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0xbU];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0xcU];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0xdU];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0xeU];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0xfU];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0x10U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0x11U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0x12U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0x13U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0x14U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0x15U];
    if ((1U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [0U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [0U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [0U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [0U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [0U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [0U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [0U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [0U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [0U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0x15U];
    }
    if ((2U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [1U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [1U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [1U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [1U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [1U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [1U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [1U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [1U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [1U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0x15U];
    }
    if ((4U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [2U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [2U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [2U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [2U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [2U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [2U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [2U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [2U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [2U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0x15U];
    }
    if ((8U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [3U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [3U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [3U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [3U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [3U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [3U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [3U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [3U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [3U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0x15U];
    }
    if ((0x10U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [4U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [4U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [4U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [4U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [4U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [4U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [4U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [4U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [4U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0x15U];
    }
    if ((0x20U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [5U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [5U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [5U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [5U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [5U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [5U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [5U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [5U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [5U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0x15U];
    }
    if ((0x40U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [6U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [6U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [6U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [6U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [6U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [6U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [6U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [6U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [6U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0x15U];
    }
    if ((0x80U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [7U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [7U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [7U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [7U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [7U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [7U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [7U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [7U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [7U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0x15U];
    }
    if ((0x100U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [8U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [8U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [8U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [8U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [8U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [8U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [8U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [8U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [8U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0x15U];
    }
    if ((0x200U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [9U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [9U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [9U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [9U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [9U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [9U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [9U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [9U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [9U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__sig_l3_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0x15U];
    }
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[1U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[1U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[2U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[2U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[3U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[3U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[4U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[4U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[5U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[5U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[6U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[6U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[7U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[7U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[8U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[8U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[9U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[9U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0xaU];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0xbU];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0xcU];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0xdU];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0xeU];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0xfU];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0x10U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0x11U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0x12U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0x13U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0x14U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0x15U];
    if ((1U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0x15U];
    }
    if ((2U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0x15U];
    }
    if ((4U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0x15U];
    }
    if ((8U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0x15U];
    }
    if ((0x10U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0x15U];
    }
    if ((0x20U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0x15U];
    }
    if ((0x40U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0x15U];
    }
    if ((0x80U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0x15U];
    }
    if ((0x100U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0x15U];
    }
    if ((0x200U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0x15U];
    }
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[1U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[1U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[2U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[2U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[3U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[3U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[4U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[4U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[5U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[5U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[6U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[6U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[7U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[7U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[8U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[8U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[9U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[9U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0xaU];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0xbU];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0xcU];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0xdU];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0xeU];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0xfU];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0x10U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0x11U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0x12U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0x13U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0x14U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0x15U];
    if ((1U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0x15U];
    }
    if ((2U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0x15U];
    }
    if ((4U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0x15U];
    }
    if ((8U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0x15U];
    }
    if ((0x10U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0x15U];
    }
    if ((0x20U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0x15U];
    }
    if ((0x40U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0x15U];
    }
    if ((0x80U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0x15U];
    }
    if ((0x100U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0x15U];
    }
    if ((0x200U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0x15U];
    }
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[1U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[1U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[2U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[2U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[3U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[3U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[4U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[4U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[5U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[5U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[6U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[6U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[7U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[7U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[8U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[8U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[9U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[9U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0xaU];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0xbU];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0xcU];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0xdU];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0xeU];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0xfU];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0x10U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0x11U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0x12U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0x13U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0x14U];
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
        = Vsig_topology_top__ConstPool__CONST_h1de318c0_0[0x15U];
    if ((1U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [0U][0x15U];
    }
    if ((2U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [1U][0x15U];
    }
    if ((4U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [2U][0x15U];
    }
    if ((8U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [3U][0x15U];
    }
    if ((0x10U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [4U][0x15U];
    }
    if ((0x20U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [5U][0x15U];
    }
    if ((0x40U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [6U][0x15U];
    }
    if ((0x80U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [7U][0x15U];
    }
    if ((0x100U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [8U][0x15U];
    }
    if ((0x200U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__gnt_vec_eithervc))) {
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[1U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][1U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[2U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][2U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[3U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][3U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[4U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][4U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[5U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][5U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[6U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][6U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[7U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][7U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[8U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][8U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[9U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][9U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xaU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0xaU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xbU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0xbU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xcU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0xcU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xdU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0xdU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xeU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0xeU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0xfU] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0xfU];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x10U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0x10U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x11U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0x11U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x12U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0x12U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x13U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0x13U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x14U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0x14U];
        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_out_nxt[0x15U] 
            = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sig_node_txflit_mux_0__DOT__flit_in_eithervc
            [9U][0x15U];
    }
    vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3407 = (
                                                   (((0U 
                                                      != 
                                                      (0x3feU 
                                                       & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv) 
                                                          & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_datf_vc0)))) 
                                                     | (0U 
                                                        != 
                                                        (0x3feU 
                                                         & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv) 
                                                            & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_datf_vc1))))) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__send_datacrdt_update));
    vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3410 = (
                                                   (((0U 
                                                      != 
                                                      ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv) 
                                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc0_rx_hs.recv_vld))) 
                                                     | (0U 
                                                        != 
                                                        ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv) 
                                                         & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc1_rx_hs.recv_vld)))) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__opened_fiforoom));
    vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3426 = (
                                                   (((0U 
                                                      != 
                                                      ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_dat_vc0_rx_hs.recv_vld))) 
                                                     | (0U 
                                                        != 
                                                        ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                                         & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_dat_vc1_rx_hs.recv_vld)))) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom));
    vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3412 = (
                                                   (((0U 
                                                      != 
                                                      ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc0_rx_hs.recv_vld))) 
                                                     | (0U 
                                                        != 
                                                        ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                                         & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc1_rx_hs.recv_vld)))) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom));
    vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3439 = (
                                                   (((0U 
                                                      != 
                                                      ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc0_rx_hs.recv_vld))) 
                                                     | (0U 
                                                        != 
                                                        ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                                         & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc1_rx_hs.recv_vld)))) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom));
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__available_fiforoom_nxt 
        = (0x1fU & ((2U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3407))
                     ? ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__available_fiforoom) 
                        - (IData)(1U)) : ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__available_fiforoom) 
                                          + (1U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3407)))));
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__available_fiforoom_nxt 
        = (0x1fU & ((2U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3410))
                     ? ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__available_fiforoom) 
                        - (IData)(1U)) : ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__available_fiforoom) 
                                          + (1U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3410)))));
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__available_fiforoom_nxt 
        = (0x1fU & ((2U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3426))
                     ? ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__available_fiforoom) 
                        - (IData)(1U)) : ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__available_fiforoom) 
                                          + (1U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3426)))));
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__available_fiforoom_nxt 
        = (0x1fU & ((2U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3412))
                     ? ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__available_fiforoom) 
                        - (IData)(1U)) : ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__available_fiforoom) 
                                          + (1U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3412)))));
    vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__available_fiforoom_nxt 
        = (0x1fU & ((2U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3439))
                     ? ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__available_fiforoom) 
                        - (IData)(1U)) : ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__available_fiforoom) 
                                          + (1U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3439)))));
}
