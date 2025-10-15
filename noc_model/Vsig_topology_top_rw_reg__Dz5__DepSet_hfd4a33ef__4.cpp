// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_rw_reg__Dz5.h"

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_125__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_125__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_125__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_125__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_125__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_125__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_126__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_126__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_126__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_126__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_126__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_126__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_127__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_127__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_127__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_127__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_127__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_127__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_128__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_128__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_128__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_128__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_128__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_128__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_129__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_129__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_129__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_129__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_129__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_129__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_130__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_130__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_130__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_130__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_130__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_130__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_131__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_131__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_131__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_131__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_131__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_131__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_132__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_132__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_132__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_132__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_132__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_132__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_133__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_133__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_133__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_133__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_133__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_133__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_134__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_134__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_134__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_134__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_134__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_134__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_135__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_135__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_135__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_135__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_135__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_135__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_136__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_136__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_136__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_136__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_136__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_136__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_137__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_137__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_137__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_137__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_137__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_137__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_138__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_138__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_138__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_138__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_138__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_138__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_139__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_139__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_139__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_139__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_139__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_139__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_140__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_140__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_140__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_140__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_140__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_140__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_141__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_141__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_141__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_141__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_141__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_141__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_142__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_142__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_142__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_142__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_142__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_142__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_143__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_143__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_143__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_143__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_143__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_143__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_144__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_144__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_144__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_144__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_144__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_144__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_145__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_145__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_145__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_145__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_145__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_145__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_146__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_146__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_146__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_146__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_146__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_146__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_147__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_147__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_147__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_147__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_147__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_147__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_148__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_148__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_148__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_148__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_148__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_148__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_149__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_149__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_149__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_149__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_149__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_149__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_150__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_150__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_150__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_150__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_150__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_150__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_151__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_151__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_151__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_151__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_151__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_151__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_152__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_152__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_152__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_152__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_152__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_152__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_153__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_153__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_153__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_153__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_153__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_153__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_154__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_154__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_154__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_154__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_154__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_154__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_155__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_155__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_155__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_155__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_155__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_155__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_156__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_156__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_156__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_156__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_156__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_156__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_157__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_157__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_157__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_157__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_157__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_157__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_158__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_158__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_158__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_158__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_158__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_158__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_159__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_159__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_159__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_159__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_159__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_159__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_160__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_160__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_160__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_160__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_160__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_160__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_161__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_161__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_161__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_161__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_161__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_161__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_162__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_162__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_162__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_162__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_162__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_162__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_163__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_163__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_163__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_163__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_163__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_163__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_164__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_164__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_164__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_164__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_164__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_164__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_165__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_165__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_165__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_165__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_165__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_165__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_166__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_166__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_166__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_166__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_166__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_166__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_167__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_167__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_167__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_167__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_167__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_167__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_168__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_168__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_168__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_168__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_168__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_168__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_169__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_169__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_169__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_169__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_169__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_169__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_170__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_170__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_170__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_170__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_170__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_170__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_171__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_171__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_171__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_171__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_171__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_171__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_172__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_172__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_172__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_172__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_172__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_172__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_173__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_173__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_173__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_173__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_173__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_173__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_174__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_174__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_174__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_174__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_174__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_174__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_175__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_175__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_175__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_175__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_175__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_175__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_176__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_176__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_176__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_176__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_176__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_176__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_177__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_177__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_177__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_177__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_177__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_177__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_178__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_178__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_178__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_178__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_178__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_178__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_179__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_179__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_179__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_179__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_179__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_179__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_180__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_180__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_180__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_180__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_180__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_180__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_181__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_181__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_181__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_181__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_181__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_181__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_182__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_182__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_182__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_182__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_182__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_182__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_183__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_183__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_183__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_183__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_183__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_183__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_184__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_184__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_184__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_184__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_184__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_184__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_185__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_185__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_185__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_185__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_185__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_185__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_186__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_186__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_186__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_186__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_186__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_186__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_187__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_187__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_187__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_187__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_187__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_187__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_188__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_188__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_188__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_188__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_188__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_188__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_189__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_189__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_189__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_189__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_189__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_189__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_190__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_190__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_190__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_190__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_190__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_190__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_191__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_191__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_191__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_191__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_191__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_191__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_192__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_192__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_192__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_192__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_192__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_192__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_193__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_193__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_193__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_193__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_193__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_193__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_194__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_194__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_194__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_194__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_194__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_194__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_195__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_195__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_195__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_195__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_195__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_195__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_196__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_196__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_196__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_196__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_196__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_196__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_197__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_197__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_197__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_197__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_197__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_197__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_198__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_198__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_198__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_198__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_198__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_198__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_199__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_199__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_199__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_199__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_199__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_199__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_200__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_200__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_200__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_200__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_200__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_200__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_201__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_201__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_201__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_201__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_201__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_201__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_202__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_202__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_202__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_202__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_202__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_202__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_203__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_203__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_203__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_203__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_203__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_203__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_204__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_204__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_204__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_204__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_204__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_204__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_205__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_205__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_205__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_205__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_205__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_205__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_206__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_206__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_206__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_206__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_206__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_206__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_207__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_207__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_207__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_207__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_207__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_207__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_208__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_208__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_208__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_208__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_208__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_208__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_209__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_209__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_209__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_209__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_209__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_209__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_210__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_210__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_210__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_210__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_210__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_210__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_211__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_211__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_211__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_211__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_211__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_211__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_212__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_212__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_212__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_212__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_212__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_212__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_213__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_213__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_213__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_213__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_213__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_213__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_214__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_214__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_214__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_214__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_214__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_214__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_215__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_215__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_215__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_215__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_215__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_215__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_216__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_216__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_216__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_216__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_216__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_216__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_217__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_217__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_217__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_217__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_217__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_217__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_218__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_218__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_218__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_218__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_218__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_218__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_219__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_219__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_219__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_219__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_219__0(Vsig_topology_top_rw_reg__Dz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg__Dz5___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_noncm_homeaddr_limit_all_hn_f_219__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}
