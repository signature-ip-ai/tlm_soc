// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_top_csr_wrapper__pi1.h"

VL_ATTR_COLD void Vsig_topology_top_sig_top_csr_wrapper__pi1___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__4(Vsig_topology_top_sig_top_csr_wrapper__pi1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_top_csr_wrapper__pi1___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr.__PVT__i_addr 
        = vlSelfRef.__PVT__i_addr;
    vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr.__PVT__i_strobe 
        = vlSelfRef.__PVT__i_strobe;
    vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr.__PVT__i_wr_data 
        = vlSelfRef.__PVT__i_wr_data;
}

VL_ATTR_COLD void Vsig_topology_top_sig_top_csr_wrapper__pi1___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__5(Vsig_topology_top_sig_top_csr_wrapper__pi1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_top_csr_wrapper__pi1___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr.__PVT__i_wr_en 
        = vlSelfRef.__PVT__i_wr_en;
    vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr.__PVT__i_rd_en 
        = vlSelfRef.__PVT__i_rd_en;
}
