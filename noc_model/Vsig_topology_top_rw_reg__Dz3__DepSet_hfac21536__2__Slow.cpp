// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_rw_reg__Dz3.h"

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_142__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_142__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_142__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_142__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_143__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_143__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_143__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_143__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_144__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_144__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_144__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_144__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_145__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_145__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_145__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_145__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_146__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_146__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_146__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_146__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_147__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_147__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_147__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_147__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_148__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_148__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_148__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_148__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_149__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_149__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_149__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_149__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_150__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_150__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_150__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_150__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_151__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_151__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_151__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_151__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_152__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_152__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_152__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_152__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_153__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_153__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_153__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_153__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_154__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_154__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_154__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_154__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_155__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_155__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_155__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_155__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_156__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_156__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_156__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_156__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_157__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_157__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_157__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_157__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_158__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_158__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_158__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_158__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_159__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_159__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_159__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_159__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_160__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_160__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_160__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_160__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_161__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_161__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_161__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_161__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_162__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_162__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_162__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_162__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_163__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_163__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_163__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_163__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_164__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_164__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_164__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_164__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_165__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_165__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_165__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_165__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_166__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_166__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_166__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_166__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_167__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_167__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_167__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_167__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_168__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_168__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_168__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_168__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_169__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_169__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_169__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_169__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_170__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_170__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_170__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_170__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_171__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_171__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_171__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_171__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_172__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_172__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_172__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_172__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_173__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_173__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_173__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_173__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_174__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_174__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_174__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_174__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_175__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_175__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_175__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_175__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_176__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_176__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_176__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_176__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_177__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_177__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_177__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_177__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_178__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_178__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_178__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_178__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_179__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_179__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_179__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_179__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_180__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_180__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_180__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_180__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_181__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_181__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_181__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_181__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_182__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_182__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_182__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_182__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_183__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_183__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_183__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_183__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_184__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_184__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_184__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_184__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_185__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_185__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_185__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_185__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_186__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_186__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_186__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_186__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_187__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_187__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_187__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_187__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_188__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_188__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_188__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_188__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_189__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_189__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_189__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_189__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_190__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_190__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_190__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_190__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_191__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_191__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_191__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_191__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_192__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_192__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_192__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_192__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_193__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_193__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_193__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_193__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_194__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_194__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_194__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_194__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_195__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_195__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_195__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_195__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_196__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_196__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_196__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_196__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_197__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_197__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_197__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_197__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_198__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_198__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_198__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_198__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_199__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_199__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_199__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_199__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_200__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_200__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_200__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_200__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_201__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_201__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_201__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_201__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_202__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_202__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_202__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_202__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_203__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_203__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_203__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_203__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_204__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_204__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_204__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_204__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_205__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_205__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_205__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_205__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_206__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_206__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_206__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_206__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_207__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_207__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_207__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_207__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_208__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_208__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_208__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_208__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_209__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_209__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_209__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_209__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_210__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_210__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_210__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_210__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_211__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_211__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_211__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_211__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_212__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_212__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_212__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_212__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_213__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_213__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_213__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_213__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_214__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_214__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_214__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_214__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_215__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_215__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_215__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_215__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_216__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_216__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_216__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_216__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_217__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_217__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_217__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_217__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_218__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_218__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_218__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_218__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_219__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_219__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_219__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_219__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_220__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_220__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_220__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_220__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_221__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_221__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_221__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_221__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_222__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_222__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_222__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_222__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_223__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_223__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_223__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_223__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_224__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_224__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_224__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_224__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_225__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_225__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_225__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_225__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_226__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_226__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_226__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_226__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_227__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_227__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_227__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_227__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_228__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_228__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_228__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_228__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_229__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_229__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_229__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_229__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_230__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_230__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_230__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_230__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_231__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_231__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_231__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_231__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_232__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_232__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_232__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_232__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_233__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_233__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_233__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_233__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_234__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_234__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_234__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_234__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_235__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_235__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_235__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_235__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_236__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_236__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_236__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_236__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_237__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_237__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_237__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_237__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_238__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_238__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_238__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_238__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_239__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_239__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_239__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_239__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_240__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_240__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_240__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_240__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_241__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_241__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_241__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_241__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_242__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_242__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_242__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_242__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_243__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_243__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_243__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_243__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_244__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_244__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_244__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_244__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_245__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_245__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_245__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_245__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_246__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_246__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_246__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_246__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_247__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_247__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_247__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_247__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_248__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_248__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_248__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_248__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_249__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_249__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_249__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_249__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_250__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_250__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_250__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_250__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_251__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_251__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_251__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_251__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_252__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_252__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_252__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_252__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_253__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_253__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_253__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_253__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_254__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_254__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_254__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_254__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_255__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_255__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_255__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_f_255__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_0__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_0__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_1__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_1__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_1__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_1__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_2__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_2__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_2__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_2__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_3__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_3__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_3__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_3__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_4__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_4__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_4__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_4__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_5__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_5__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_5__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_5__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_6__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_6__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_6__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_6__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_7__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_7__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_7__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_7__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_8__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_8__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_8__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_8__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_9__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_9__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_9__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_9__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_10__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_10__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_10__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_10__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_11__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_11__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_11__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_11__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_12__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_12__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_12__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_12__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_13__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_13__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_13__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_13__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_14__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_14__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_14__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_14__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_15__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_15__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_15__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_15__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_16__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_16__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_16__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_16__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_17__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_17__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_17__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_17__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_18__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_18__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_18__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_18__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_19__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_19__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_19__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_19__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_20__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_20__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_20__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_20__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_21__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_21__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_21__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_21__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_22__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_22__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_22__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_22__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_23__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_23__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_23__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_23__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_24__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_24__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_24__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_24__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_25__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_25__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_25__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_25__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_26__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_26__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_26__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_26__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_27__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_27__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_27__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_27__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_28__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_28__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_28__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_28__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_29__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_29__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_29__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_29__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_30__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_30__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_30__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_30__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_31__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_31__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_31__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_31__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_32__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_32__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_32__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_32__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_33__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_33__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_33__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_33__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_34__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_34__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_34__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_34__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_35__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_35__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_35__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_35__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_36__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_36__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_36__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_36__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_37__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_37__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_37__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_37__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_38__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_38__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_38__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_38__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_39__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_39__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_39__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_39__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_40__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_40__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_40__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_40__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_41__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_41__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_41__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_41__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_42__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_42__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_42__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_42__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_43__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_43__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_43__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_43__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_44__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_44__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_44__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_44__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_45__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_45__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_45__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_45__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_46__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_46__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_46__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_46__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_47__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_47__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_47__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_47__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_48__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_48__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_48__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_48__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_49__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_49__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_49__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_49__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_50__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_50__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_50__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_50__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_51__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_51__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_51__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_51__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_52__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_52__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_52__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_52__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_53__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_53__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_53__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_53__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_54__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_54__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_54__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_54__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_55__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_55__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_55__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_55__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_56__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_56__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_56__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_56__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_57__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_57__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_57__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_57__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_58__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_58__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_58__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_58__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_59__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_59__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_59__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_59__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_60__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_60__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_60__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_60__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_61__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_61__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_61__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_61__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_62__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_62__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_62__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_62__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_63__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_63__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_63__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_63__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_64__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_64__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_64__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_64__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_65__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_65__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_65__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_65__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_66__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_66__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_66__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_66__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_67__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_67__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_67__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_67__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_68__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_68__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_68__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_68__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_69__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_69__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_69__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_69__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_70__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_70__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_70__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_70__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_71__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_71__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_71__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_71__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_72__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_72__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_72__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_72__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_73__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_73__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_73__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_73__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_74__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_74__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_74__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_74__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_75__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_75__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_75__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_75__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_76__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_76__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_76__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_76__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_77__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_77__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_77__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_77__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_78__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_78__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_78__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_78__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_79__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_79__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_79__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_79__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_80__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_80__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_80__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_80__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_81__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_81__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_81__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_81__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_82__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_82__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_82__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_82__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_83__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_83__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_83__1(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_83__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_ATTR_COLD void Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_84__0(Vsig_topology_top_rw_reg__Dz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz3___stl_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_base_all_hn_i_84__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}
