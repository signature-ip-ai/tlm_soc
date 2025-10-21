// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_rw_reg__Dz4.h"

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_59__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_59__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_59__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_59__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_59__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_59__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_60__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_60__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_60__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_60__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_60__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_60__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_61__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_61__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_61__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_61__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_61__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_61__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_62__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_62__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_62__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_62__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_62__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_62__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_63__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_63__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_63__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_63__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_63__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_63__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_64__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_64__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_64__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_64__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_64__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_64__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_65__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_65__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_65__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_65__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_65__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_65__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_66__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_66__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_66__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_66__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_66__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_66__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_67__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_67__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_67__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_67__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_67__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_67__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_68__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_68__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_68__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_68__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_68__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_68__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_69__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_69__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_69__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_69__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_69__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_69__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_70__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_70__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_70__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_70__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_70__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_70__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_71__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_71__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_71__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_71__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_71__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_71__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_72__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_72__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_72__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_72__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_72__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_72__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_73__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_73__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_73__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_73__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_73__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_73__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_74__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_74__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_74__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_74__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_74__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_74__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_75__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_75__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_75__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_75__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_75__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_75__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_76__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_76__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_76__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_76__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_76__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_76__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_77__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_77__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_77__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_77__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_77__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_77__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_78__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_78__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_78__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_78__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_78__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_78__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_79__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_79__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_79__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_79__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_79__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_79__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_80__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_80__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_80__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_80__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_80__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_80__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_81__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_81__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_81__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_81__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_81__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_81__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_82__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_82__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_82__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_82__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_82__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_82__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_83__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_83__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_83__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_83__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_83__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_83__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_84__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_84__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_84__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_84__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_84__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_84__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_85__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_85__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_85__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_85__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_85__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_85__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_86__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_86__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_86__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_86__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_86__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_86__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_87__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_87__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_87__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_87__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_87__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_87__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_88__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_88__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_88__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_88__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_88__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_88__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_89__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_89__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_89__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_89__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_89__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_89__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_90__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_90__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_90__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_90__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_90__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_90__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_91__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_91__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_91__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_91__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_91__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_91__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_92__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_92__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_92__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_92__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_92__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_92__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_93__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_93__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_93__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_93__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_93__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_93__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_94__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_94__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_94__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_94__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_94__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_94__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_95__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_95__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_95__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_95__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_95__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_95__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_96__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_96__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_96__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_96__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_96__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_96__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_97__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_97__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_97__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_97__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_97__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_97__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_98__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_98__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_98__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_98__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_98__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_98__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_99__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_99__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_99__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_99__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_99__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_99__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_100__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_100__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_100__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_100__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_100__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_100__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_101__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_101__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_101__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_101__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_101__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_101__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_102__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_102__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_102__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_102__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_102__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_102__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_103__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_103__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_103__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_103__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_103__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_103__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_104__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_104__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_104__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_104__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_104__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_104__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_105__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_105__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_105__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_105__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_105__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_105__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_106__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_106__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_106__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_106__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_106__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_106__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_107__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_107__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_107__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_107__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_107__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_107__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_108__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_108__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_108__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_108__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_108__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_108__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_109__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_109__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_109__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_109__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_109__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_109__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_110__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_110__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_110__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_110__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_110__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_110__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_111__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_111__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_111__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_111__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_111__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_111__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_112__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_112__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_112__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_112__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_112__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_112__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_113__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_113__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_113__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_113__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_113__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_113__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_114__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_114__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_114__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_114__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_114__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_114__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_115__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_115__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_115__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_115__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_115__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_115__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_116__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_116__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_116__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_116__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_116__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_116__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_117__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_117__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_117__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_117__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_117__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_117__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_118__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_118__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_118__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_118__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_118__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_118__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_119__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_119__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_119__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_119__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_119__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_119__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_120__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_120__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_120__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_120__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_120__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_120__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_121__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_121__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_121__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_121__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_121__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_121__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_122__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_122__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_122__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_122__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_122__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_122__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_123__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_123__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_123__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_123__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_123__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_123__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_124__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_124__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_124__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_124__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_124__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_124__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_125__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_125__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_125__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_125__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_125__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_125__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_126__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_126__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_126__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_126__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_126__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_126__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_127__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_127__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_127__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_127__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_127__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_127__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_128__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_128__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_128__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_128__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_128__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_128__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_129__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_129__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_129__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_129__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_129__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_129__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_130__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_130__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_130__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_130__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_130__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_130__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_131__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_131__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_131__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_131__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_131__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_131__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_132__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_132__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_132__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_132__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_132__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_132__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_133__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_133__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_133__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_133__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_133__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_133__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_134__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_134__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_134__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_134__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_134__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_134__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_135__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_135__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_135__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_135__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_135__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_135__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_136__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_136__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_136__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_136__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_136__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_136__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_137__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_137__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_137__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_137__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_137__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_137__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_138__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_138__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_138__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_138__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_138__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_138__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_139__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_139__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_139__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_139__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_139__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_139__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_140__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_140__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_140__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_140__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_140__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_140__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_141__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_141__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_141__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_141__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_141__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_141__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_142__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_142__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_142__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_142__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_142__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_142__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_143__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_143__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_143__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_143__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_143__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_143__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_144__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_144__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_144__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_144__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_144__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_144__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_145__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_145__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_145__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_145__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_145__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_145__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_146__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_146__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_146__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_146__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_146__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_146__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_147__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_147__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_147__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_147__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_147__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_147__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_148__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_148__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_148__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_148__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_148__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_148__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_149__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_149__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_149__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_149__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_149__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_149__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_150__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_150__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_150__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_150__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_150__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_150__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_151__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_151__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_151__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_151__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_151__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_151__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_152__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_152__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_152__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_152__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_152__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_152__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_153__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_153__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_153__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_153__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_153__0(Vsig_topology_top_rw_reg__Dz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz4___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_i_153__0\n"); );
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
