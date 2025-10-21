// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_chi_xmt_data_flit__C2a8.h"

VL_ATTR_COLD void Vsig_topology_top_sig_chi_xmt_data_flit__C2a8___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_data_flit_0__0(Vsig_topology_top_sig_chi_xmt_data_flit__C2a8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_data_flit__C2a8___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_data_flit_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__enter_ff__DOT__ic_TX_DATFLITV_nxt 
        = vlSelfRef.__PVT__compdata_tx_datflitv;
    vlSelfRef.__PVT__ic_TX_DATFLITPEND = vlSelfRef.__PVT__enter_ff__DOT__ic_TX_DATFLITV_nxt;
}

extern const VlWide<22>/*703:0*/ Vsig_topology_top__ConstPool__CONST_he95d9d6c_0;

VL_ATTR_COLD void Vsig_topology_top_sig_chi_xmt_data_flit__C2a8___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_data_flit_0__1(Vsig_topology_top_sig_chi_xmt_data_flit__C2a8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_data_flit__C2a8___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_data_flit_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__PVT__enter_ff__DOT__ic_TX_DATFLIT_nxt, Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    if (vlSelfRef.__PVT__compdata_tx_datflitv) {
        VL_ASSIGN_W(680,vlSelfRef.__PVT__enter_ff__DOT__ic_TX_DATFLIT_nxt, vlSelfRef.__PVT__compdata_tx_datflit);
    }
}

VL_ATTR_COLD void Vsig_topology_top_sig_chi_xmt_data_flit__C2a8___ctor_var_reset(Vsig_topology_top_sig_chi_xmt_data_flit__C2a8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_data_flit__C2a8___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__cc_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10522366009035690765ull);
    vlSelf->__PVT__rstb_cc_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8322896653826704470ull);
    vlSelf->__PVT__compdata_tx_datflitv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5658433782436806923ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__compdata_tx_datflit, __VscopeHash, 2235789749406062051ull);
    vlSelf->__PVT__ic_TX_DATFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8102072163694598261ull);
    vlSelf->__PVT__ic_TX_DATFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17980292739927272412ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__ic_TX_DATFLIT, __VscopeHash, 11344885391285752503ull);
    vlSelf->__PVT__enter_ff__DOT__ic_TX_DATFLITV_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3090658512799038752ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__enter_ff__DOT__ic_TX_DATFLIT_nxt, __VscopeHash, 7567832857872274576ull);
    vlSelf->__Vdly__ic_TX_DATFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12173427009157714649ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__Vdly__ic_TX_DATFLIT, __VscopeHash, 15541513884832554616ull);
}
