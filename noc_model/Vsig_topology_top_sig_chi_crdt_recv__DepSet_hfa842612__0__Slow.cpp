// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_chi_crdt_recv.h"

VL_ATTR_COLD void Vsig_topology_top_sig_chi_crdt_recv___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__sig_chi_crdt_recv_0__0(Vsig_topology_top_sig_chi_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_chi_crdt_recv___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__sig_chi_crdt_recv_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_credits_nxt = vlSelfRef.__PVT__available_credits;
    if (((IData)(vlSelfRef.__PVT__rcvd_crdt) & (~ (IData)(vlSelfRef.__PVT__consumed_crdt)))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__available_credits)));
    } else if (((~ (IData)(vlSelfRef.__PVT__rcvd_crdt)) 
                & (IData)(vlSelfRef.__PVT__consumed_crdt))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(vlSelfRef.__PVT__available_credits) 
                                                     - (IData)(1U)));
    }
}

VL_ATTR_COLD void Vsig_topology_top_sig_chi_crdt_recv___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__sig_chi_crdt_recv_0__0(Vsig_topology_top_sig_chi_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_chi_crdt_recv___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0__sig_chi_crdt_recv_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_credits_nxt = vlSelfRef.__PVT__available_credits;
    if (((IData)(vlSelfRef.__PVT__rcvd_crdt) & (~ (IData)(vlSelfRef.__PVT__consumed_crdt)))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__available_credits)));
    } else if (((~ (IData)(vlSelfRef.__PVT__rcvd_crdt)) 
                & (IData)(vlSelfRef.__PVT__consumed_crdt))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(vlSelfRef.__PVT__available_credits) 
                                                     - (IData)(1U)));
    }
}

VL_ATTR_COLD void Vsig_topology_top_sig_chi_crdt_recv___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0__sig_chi_crdt_recv_0__0(Vsig_topology_top_sig_chi_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_chi_crdt_recv___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0__sig_chi_crdt_recv_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_credits_nxt = vlSelfRef.__PVT__available_credits;
    if (((IData)(vlSelfRef.__PVT__rcvd_crdt) & (~ (IData)(vlSelfRef.__PVT__consumed_crdt)))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__available_credits)));
    } else if (((~ (IData)(vlSelfRef.__PVT__rcvd_crdt)) 
                & (IData)(vlSelfRef.__PVT__consumed_crdt))) {
        vlSelfRef.__PVT__available_credits_nxt = (0xfU 
                                                  & ((IData)(vlSelfRef.__PVT__available_credits) 
                                                     - (IData)(1U)));
    }
}

VL_ATTR_COLD void Vsig_topology_top_sig_chi_crdt_recv___ctor_var_reset(Vsig_topology_top_sig_chi_crdt_recv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_chi_crdt_recv___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__cc_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10522366009035690765ull);
    vlSelf->__PVT__rstb_cc_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8322896653826704470ull);
    vlSelf->__PVT__rcvd_crdt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14046318984706169989ull);
    vlSelf->__PVT__consumed_crdt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6102239534665153977ull);
    vlSelf->__PVT__available_credits = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15808204370360910140ull);
    vlSelf->__PVT__available_credits_nxt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13412930385299068989ull);
    vlSelf->__Vdly__available_credits = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14311484031740650513ull);
}
