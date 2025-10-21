// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_rw_reg.h"

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_191__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_191__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_191__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_191__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_191__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_191__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_192__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_192__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_192__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_192__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_192__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_192__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_193__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_193__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_193__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_193__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_193__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_193__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_194__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_194__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_194__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_194__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_194__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_194__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_195__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_195__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_195__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_195__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_195__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_195__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_196__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_196__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_196__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_196__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_196__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_196__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_197__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_197__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_197__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_197__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_197__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_197__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_198__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_198__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_198__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_198__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_198__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_198__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_199__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_199__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_199__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_199__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_199__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_199__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_200__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_200__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_200__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_200__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_200__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_200__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_201__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_201__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_201__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_201__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_201__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_201__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_202__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_202__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_202__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_202__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_202__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_202__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_203__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_203__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_203__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_203__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_203__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_203__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_204__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_204__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_204__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_204__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_204__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_204__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_205__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_205__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_205__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_205__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_205__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_205__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_206__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_206__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_206__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_206__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_206__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_206__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_207__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_207__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_207__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_207__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_207__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_207__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_208__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_208__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_208__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_208__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_208__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_208__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_209__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_209__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_209__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_209__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_209__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_209__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_210__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_210__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_210__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_210__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_210__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_210__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_211__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_211__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_211__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_211__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_211__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_211__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_212__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_212__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_212__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_212__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_212__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_212__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_213__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_213__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_213__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_213__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_213__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_213__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_214__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_214__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_214__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_214__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_214__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_214__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_215__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_215__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_215__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_215__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_215__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_215__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_216__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_216__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_216__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_216__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_216__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_216__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_217__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_217__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_217__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_217__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_217__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_217__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_218__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_218__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_218__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_218__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_218__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_218__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_219__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_219__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_219__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_219__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_219__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_219__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_220__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_220__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_220__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_220__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_220__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_220__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_221__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_221__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_221__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_221__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_221__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_221__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_222__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_222__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_222__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_222__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_222__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_222__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_223__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_223__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_223__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_223__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_223__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_223__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_224__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_224__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_224__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_224__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_224__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_224__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_225__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_225__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_225__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_225__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_225__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_225__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_226__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_226__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_226__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_226__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_226__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_226__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_227__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_227__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_227__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_227__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_227__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_227__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_228__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_228__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_228__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_228__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_228__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_228__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_229__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_229__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_229__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_229__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_229__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_229__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_230__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_230__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_230__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_230__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_230__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_230__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_231__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_231__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_231__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_231__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_231__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_231__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_232__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_232__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_232__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_232__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_232__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_232__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_233__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_233__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_233__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_233__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_233__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_233__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_234__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_234__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_234__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_234__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_234__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_234__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_235__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_235__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_235__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_235__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_235__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_235__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_236__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_236__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_236__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_236__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_236__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_236__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_237__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_237__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_237__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_237__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_237__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_237__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_238__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_238__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_238__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_238__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_238__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_238__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_239__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_239__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_239__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_239__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_239__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_239__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_240__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_240__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_240__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_240__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_240__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_240__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_241__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_241__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_241__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_241__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_241__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_241__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_242__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_242__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_242__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_242__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_242__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_242__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_243__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_243__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_243__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_243__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_243__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_243__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_244__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_244__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_244__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_244__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_244__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_244__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_245__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_245__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_245__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_245__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_245__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_245__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_246__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_246__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_246__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_246__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_246__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_246__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_247__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_247__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_247__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_247__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_247__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_247__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_248__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_248__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_248__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_248__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_248__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_248__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_249__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_249__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_249__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_249__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_249__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_249__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_250__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_250__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_250__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_250__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_250__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_250__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_251__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_251__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_251__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_251__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_251__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_251__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_252__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_252__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_252__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_252__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_252__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_252__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_253__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_253__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_253__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_253__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_253__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_253__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_254__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_254__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_254__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_254__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_254__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_254__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_255__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_255__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_255__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_255__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_255__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_255__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_256__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_256__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_256__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_256__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_256__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_pm_config_256__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_0__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_0__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_0__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_0__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_1__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_1__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_1__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_1__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_1__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_1__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_2__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_2__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_2__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_2__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_2__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_2__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_3__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_3__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_3__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_3__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_3__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_3__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_4__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_4__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_4__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_4__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_4__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_4__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_5__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_5__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_5__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_5__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_5__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_5__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_6__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_6__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_6__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_6__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_6__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_6__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_7__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_7__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_7__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_7__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_7__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_7__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_8__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_8__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_8__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_8__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_8__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_8__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_9__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_9__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_9__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_9__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_9__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_9__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_10__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_10__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_10__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_10__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_10__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_10__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_11__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_11__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_11__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_11__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_11__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_11__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_12__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_12__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_12__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_12__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_12__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_12__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_13__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_13__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_13__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_13__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_13__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_13__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_14__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_14__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_14__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_14__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_14__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_14__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_15__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_15__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_15__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_15__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_15__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_15__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_16__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_16__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_16__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_16__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_16__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_16__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_17__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_17__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_17__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_17__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_17__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_17__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_18__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_18__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_18__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_18__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_18__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_18__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_19__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_19__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_19__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_19__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_19__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_19__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_20__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_20__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_20__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_20__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_20__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_20__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_21__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_21__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_21__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_21__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_21__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_21__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_22__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_22__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_22__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_22__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_22__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_22__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_23__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_23__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_23__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_23__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_23__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_23__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_24__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_24__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_24__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_24__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_24__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_24__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_25__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_25__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_25__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_25__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_25__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_25__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_26__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_26__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_26__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_26__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_26__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_26__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_27__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_27__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_27__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_27__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_27__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_27__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_28__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_28__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_28__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_28__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_28__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_all_hn_f_config_28__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}
