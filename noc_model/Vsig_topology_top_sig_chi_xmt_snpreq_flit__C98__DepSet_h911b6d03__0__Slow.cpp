// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_chi_xmt_snpreq_flit__C98.h"

VL_ATTR_COLD void Vsig_topology_top_sig_chi_xmt_snpreq_flit__C98___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_flit_0__0(Vsig_topology_top_sig_chi_xmt_snpreq_flit__C98* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq_flit__C98___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_flit_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__enter_ff__DOT__ic_TX_SNPFLITV_nxt 
        = vlSelfRef.__PVT__snp_tx_snpflitv;
    vlSelfRef.__PVT__ic_TX_SNPFLITPEND = vlSelfRef.__PVT__enter_ff__DOT__ic_TX_SNPFLITV_nxt;
}

VL_ATTR_COLD void Vsig_topology_top_sig_chi_xmt_snpreq_flit__C98___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_flit_0__1(Vsig_topology_top_sig_chi_xmt_snpreq_flit__C98* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq_flit__C98___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_flit_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_CONST_W_1X(152,vlSelfRef.__PVT__enter_ff__DOT__ic_TX_SNPFLIT_nxt,0x00000000);
    if (vlSelfRef.__PVT__snp_tx_snpflitv) {
        VL_ASSIGN_W(152,vlSelfRef.__PVT__enter_ff__DOT__ic_TX_SNPFLIT_nxt, vlSelfRef.__PVT__snp_tx_snpflit);
    }
}

VL_ATTR_COLD void Vsig_topology_top_sig_chi_xmt_snpreq_flit__C98___ctor_var_reset(Vsig_topology_top_sig_chi_xmt_snpreq_flit__C98* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq_flit__C98___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__cc_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10522366009035690765ull);
    vlSelf->__PVT__rstb_cc_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8322896653826704470ull);
    vlSelf->__PVT__snp_tx_snpflitv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12926558551752950189ull);
    VL_SCOPED_RAND_RESET_W(152, vlSelf->__PVT__snp_tx_snpflit, __VscopeHash, 11838152568892857507ull);
    vlSelf->__PVT__snpreq_crdt_avail = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2623854896764814424ull);
    vlSelf->__PVT__ic_TX_SNPFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2271438628891321049ull);
    vlSelf->__PVT__ic_TX_SNPFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6849754011617526692ull);
    VL_SCOPED_RAND_RESET_W(152, vlSelf->__PVT__ic_TX_SNPFLIT, __VscopeHash, 10785170976365685348ull);
    vlSelf->__PVT__enter_ff__DOT__ic_TX_SNPFLITV_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12726898914070135080ull);
    VL_SCOPED_RAND_RESET_W(152, vlSelf->__PVT__enter_ff__DOT__ic_TX_SNPFLIT_nxt, __VscopeHash, 140334127307939879ull);
    vlSelf->__Vdly__ic_TX_SNPFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8538792668443098989ull);
    VL_SCOPED_RAND_RESET_W(152, vlSelf->__Vdly__ic_TX_SNPFLIT, __VscopeHash, 10158018136488133869ull);
}
